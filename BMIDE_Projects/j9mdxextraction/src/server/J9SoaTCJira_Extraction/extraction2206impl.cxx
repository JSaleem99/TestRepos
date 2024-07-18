/* 
 @<COPYRIGHT>@
 ==================================================
 Copyright 2012
 Siemens Product Lifecycle Management Software Inc.
 All Rights Reserved.
 ==================================================
 @<COPYRIGHT>@
*/

#include <unidefs.h>
#if defined(SUN)
#include <unistd.h>
#endif

#include <extraction2206impl.hxx>

using namespace J9::Soa::TCJira_Extraction::_2022_06;
using namespace Teamcenter::Soa::Server;

ExtractionImpl::Output ExtractionImpl::extractionOperation ( const Input operationInput )
{
	 TC_write_syslog("\n MAVEN ::Entering query execution point \n");
		    int iNoOfQueryAttr = 1;
		    int iRows, iColumns = 0;
		    char* cpOutRevID = NULL;


		    const char* ccpQueryName = "MavenExtraction";
		    const char* ccpObjectClass = "ItemRevision";
		    const char* ccpExpID1 = "MavenExp1";
		   // const char* ccpExpID2 = "MavenExp2";
		    const char* ccpExpID3 = "MavenExp3";
		    const char* ccpExpID4 = "MavenExp4";
		    string objectId = operationInput.objectId;
		    string objectType = operationInput.objectType;
		    const char* ccpObjectID = objectId.c_str();
		    const char* ccpObjType = objectType.c_str();

		    const char* select_attr_list[] = { "puid" };

		    char* cpOutObjType = NULL;
		    char* cpOutObjDesc = NULL;
		    char* cpOutObjName = NULL;
		    char* cpLastModDate = NULL;
		    char* cpFormatedLastModDate = NULL;
		    //char* cpOutOwningUser = NULL;
		    char* cpOutLastModUser = NULL;
		    char* cpOutObjID = NULL;
		    char* cpPersonEmail = NULL;
		    char* cpMaturity = NULL;
		    char* cpPriority = NULL;
		    //char* cpDateFormat= "yyyy-mm-ddThh:mm:ss";
		    char* cpDateFormat = "%Y-%m-%dT%H:%M:%S";
		    date_t dOutLastModDate;

		    void*** Report = NULL;

		    date_t formatedData;


		    tag_t tOwningUser = NULLTAG;
		    tag_t tPerson = NULLTAG;
		    tag_t tLastModUser = NULLTAG;

		    vector<map<string, string>> vObjectInfo;
		    vObjectInfo.clear();
		    string sNrPath;
		    vector<map<string, string>>  vNRInfo;
		    vNRInfo.clear();
		    map<string, string> mNRTypeInfo;
		    mNRTypeInfo.clear();

		   // string sDownPath = "C:\\Users\\Rajaram Sellamuthu\\Documents\\TCJira\\";
		    string sDownPath = operationInput.extractionPath;
		    string sExtractedFile;

		    //Item ID and REV ID based search
		    if ((tc_strlen(ccpObjectID) && tc_strlen(ccpObjType) != 0))
		    {
		        TC_write_syslog("\n MAVEN ::executing object ID, REV ID based search\n");

		        /*
		        * SELECT DISTINCT
		        T1.puid
		        FROM PITEMREVISION T1
		        JOIN PITEM T3 on T3.puid = T1.ritems_tagu
		        JOIN PWORKSPACEOBJECT T5 ON T5.puid = T1.puid

		        WHERE  T1.pitem_revision_id = '';
		        AND T3.pitem_id = '';
		        */

		        //Create enquiry

		        MAVEN_ERROR_REPORT(POM_enquiry_create(ccpQueryName));
		        MAVEN_ERROR_REPORT(POM_enquiry_set_distinct(ccpQueryName, true));

		        //Add attributes to the created query
		        MAVEN_ERROR_REPORT(POM_enquiry_add_select_attrs(ccpQueryName, ccpObjectClass, iNoOfQueryAttr, select_attr_list));

		        MAVEN_ERROR_REPORT(POM_enquiry_set_join_expr(ccpQueryName, ccpExpID1, ccpObjectClass, ITEMTAG, POM_enquiry_equal, ITEMCLASS, PUID));
		        //MAVEN_ERROR_REPORT(POM_enquiry_set_join_expr(ccpQueryName, ccpExpID2, WORKSPACEOBJECTCLASS, PUID, POM_enquiry_equal, ccpObjectClass, PUID));

		        MAVEN_ERROR_REPORT(POM_enquiry_set_string_expr(ccpQueryName, ccpExpID3, ccpObjectClass, OBJECTTYPE, POM_enquiry_equal, ccpObjType));
		        MAVEN_ERROR_REPORT(POM_enquiry_set_string_expr(ccpQueryName, ccpExpID4, ITEMCLASS, ITEMID, POM_enquiry_equal, ccpObjectID));

		        POM_enquiry_set_expr(ccpQueryName, "ccpExpID5", ccpExpID1, POM_enquiry_and, ccpExpID3);
		        POM_enquiry_set_expr(ccpQueryName, "ccpExpID6", ccpExpID4, POM_enquiry_and, "ccpExpID5");
		        //POM_enquiry_set_expr(ccpQueryName, "ccpExpID7", ccpExpID4, POM_enquiry_and, "ccpExpID6");

		         //Set Expression ID created for the query
		        MAVEN_ERROR_REPORT(POM_enquiry_set_where_expr(ccpQueryName, "ccpExpID6"));

		        TC_write_syslog("\nMAVEN :: Executing custom enquiry \n");
		        //Execute the query
		        MAVEN_ERROR_REPORT(POM_enquiry_execute(ccpQueryName, &iRows, &iColumns, &Report));

		        TC_write_syslog("\n MAVEN ::Number of search result %d \n", iRows);
		        if (iRows == 0)
		        {
		            TC_write_syslog("\n MAVEN ::No Objects found for the given Input\n");
		            //return 0;
		        }
		        MAVEN_ERROR_REPORT(POM_enquiry_delete(ccpQueryName));
		        try
		        {
		            if (iRows != 0)
		            {
		                for (int row = 0; row < iRows; row++)
		                {

		                    int iCol = 0;
		                    TC_write_syslog("\n Query search result %d \n", row + 1);

		                    tag_t tObjtag = *((tag_t*)(Report[row][iCol]));

		                    if (tObjtag != NULLTAG)
		                    {

		                        logical lIsLatestRevSeq;
		                        ITEM_rev_sequence_is_latest(tObjtag, &lIsLatestRevSeq);

		                        if (lIsLatestRevSeq != 0)
		                        {
		                        	 TC_write_syslog ("\n  Revision sequence : %d \n", lIsLatestRevSeq);

		                            MAVEN_ERROR_REPORT(WSOM_ask_object_type2(tObjtag, &cpOutObjType));
		                            MAVEN_ERROR_REPORT(WSOM_ask_description2(tObjtag, &cpOutObjDesc));
		                            MAVEN_ERROR_REPORT(AOM_ask_value_string(tObjtag, ITEMREVISIONID, &cpOutRevID));
		                            //MAVEN_ERROR_REPORT(AOM_ask_value_string(tObjtag,OBJECTNAME, &cpOutObjName));

		                            MAVEN_ERROR_REPORT(AOM_ask_modified_date(tObjtag, &dOutLastModDate));
		                            MAVEN_ERROR_REPORT(ITK_date_to_string(dOutLastModDate, &cpLastModDate));
		                            MAVEN_ERROR_REPORT(DATE_convert_format_date_to_date_t(cpLastModDate,NULL,&formatedData));
		                            MAVEN_ERROR_REPORT(DATE_date_to_string(formatedData,cpDateFormat,&cpFormatedLastModDate));

		                            MAVEN_ERROR_REPORT(WSOM_ask_name2(tObjtag, &cpOutObjID));
		                            MAVEN_ERROR_REPORT(AOM_ask_owner(tObjtag, &tOwningUser));
		                            if(tOwningUser !=NULLTAG)
		                            {
										MAVEN_ERROR_REPORT(SA_ask_user_person(tOwningUser,&tPerson));
										MAVEN_ERROR_REPORT(SA_ask_person_email_address(tPerson,&cpPersonEmail));
										//MAVEN_ERROR_REPORT(SA_ask_user_person_name2(tOwningUser, &cpOutOwningUser));
		                            }
		                            MAVEN_ERROR_REPORT(AOM_ask_last_modifier(tObjtag, &tLastModUser));
		                            MAVEN_ERROR_REPORT(SA_ask_user_person_name2(tLastModUser, &cpOutLastModUser));

		                            MAVEN_ERROR_REPORT(AOM_ask_value_string(tObjtag, "CMMaturity", &cpMaturity));
		                            MAVEN_ERROR_REPORT(AOM_ask_value_string(tObjtag, "CMTechReviewPriority", &cpPriority));
		                            TC_write_syslog("\n MAVEN ::Objec type is : %s \n", cpOutObjType);
		                            //printf("\n Objec Name is : %s \n", cpOutObjName);
		                            TC_write_syslog("\n MAVEN ::Objec ID is : %s \n", cpOutObjID);
		                            TC_write_syslog("\n MAVEN ::Objec Desc is : %s \n", cpOutObjDesc);
		                            TC_write_syslog("\n MAVEN ::Objec Rev ID is : %s \n", cpOutRevID);
		                            TC_write_syslog("\n MAVEN ::Objec Last modified date  is : %s \n", cpFormatedLastModDate);
		                            TC_write_syslog("\n MAVEN ::Objec Last modified user  is : %s \n", cpOutLastModUser);
		                            TC_write_syslog("\n MAVEN ::Objec Owning user is : %s \n", cpPersonEmail);
		                            TC_write_syslog("\n MAVEN ::Objec Maturity is : %s \n", cpMaturity);
		                            TC_write_syslog("\n MAVEN ::Objec Technical Review Priority  is : %s \n", cpPriority);


		                            map<string, string>  ObjectAttr;
		                            ObjectAttr.clear();



		                            ObjectAttr.insert(pair<string, string>("object_name", cpOutObjID));
		                            ObjectAttr.insert(pair<string, string>("item_id", ccpObjectID));
		                            ObjectAttr.insert(pair<string, string>("object_type", cpOutObjType));
		                            //ObjectAttr.insert(pair<string, string>("Object Name", cpOutObjName));
		                            ObjectAttr.insert(pair<string, string>("item_revision_id", cpOutRevID));
		                            ObjectAttr.insert(pair<string, string>("object_desc", cpOutObjDesc));
		                            ObjectAttr.insert(pair<string, string>("owning_user", cpPersonEmail));
		                            ObjectAttr.insert(pair<string, string>("last_mod_date", cpFormatedLastModDate));
		                            ObjectAttr.insert(pair<string, string>("last_mod_user", cpOutLastModUser));
		                            ObjectAttr.insert(pair<string, string>("CMMaturity", cpMaturity));
		                            ObjectAttr.insert(pair<string, string>("CMTechReviewPriority", cpPriority));
		                            printf("\n Object name %s \n", cpOutObjID);

		                            if (lIsLatestRevSeq != 0)
		                            {
		                                vObjectInfo.push_back(ObjectAttr);
		                            }

		                            ObjectAttr.clear();

		                            SAFE_SM_FREE(cpOutObjType);
		                            SAFE_SM_FREE(cpOutObjDesc);
		                            SAFE_SM_FREE(cpLastModDate);
		                            SAFE_SM_FREE(cpFormatedLastModDate);
		                            SAFE_SM_FREE(cpOutObjName);
		                            SAFE_SM_FREE(cpPersonEmail);
		                            SAFE_SM_FREE(cpOutLastModUser);

		                        }
		                        else
		                        {
		                            TC_write_syslog("\n MAVEN ::Is not the latest Revision Sequence \n");
		                        }
		                    }
		                    else
		                    {
		                        TC_write_syslog("\n MAVEN ::Returned tag is NULL \n");

		                    }


		                }
		                TC_write_syslog("\n MAVEN :: size of vector : %d \n", vObjectInfo.size());


		                sExtractedFile = write2JSON(vObjectInfo, cpOutObjID, cpOutRevID, sDownPath);
		                TC_write_syslog("MAVEN :: 286 extracted file path is:%s", sExtractedFile.c_str());

		                SAFE_SM_FREE(cpOutRevID);


		            }
		        }
		        catch (exception& e)
		        {

		            TC_write_syslog("\n MAVEN ::MavenDX::ERROR : %s \n", e.what());

		        }
		        SAFE_SM_FREE(Report);

		    }



		    else
		    {
		        TC_write_syslog("\n MAVEN :: WARNING : INVALID INPUTS \n");
		    }
		    TC_write_syslog("\n MAVEN :: INFO : ExtractData output : %s \n", sExtractedFile.c_str());

		    Output jsonOut;
		    jsonOut.jsonPath=sExtractedFile;
		    return jsonOut ;
		}


		string write2JSON(vector<map<string, string>> ObjVec, const char* cpObjId, const char* cpObjRevID, string sJsonPath)
		{


		    time_t t;
		    time(&t);


		    struct tm* tm_info;
		    tm_info = localtime(&t);

		    char cpTimestamp[20]; // Assuming a maximum length of 20 characters for the timestamp

		    strftime(cpTimestamp, sizeof(cpTimestamp), "%d_%m_%Y_%H_%M_%S", tm_info);

		    string sExtractedFilePath = sJsonPath;
		    string sExtractedFileName = sExtractedFilePath;
		    sExtractedFileName = sExtractedFileName.append("\\");
		    sExtractedFileName = sExtractedFileName.append("\\");
		    sExtractedFileName = sExtractedFileName.append(cpObjId);
		    sExtractedFileName = sExtractedFileName.append("_");
		    sExtractedFileName = sExtractedFileName.append(cpObjRevID);
		    sExtractedFileName = sExtractedFileName.append("_");
		    sExtractedFileName = sExtractedFileName.append(cpTimestamp);
		    sExtractedFileName = sExtractedFileName.append(".json");



		    ArrayClass* AC = new ArrayClass();
		    ArrayClass* ACtoPrint = new ArrayClass();

		    AC->VectorOfMapsToAryCls(ObjVec);



		    ACtoPrint->setObjectTrue();

		    ACtoPrint->pushMapValue("Object", AC);

		    // Convert to JSON string instead of writing to a file
		    std::ostringstream oss;
		    oss << "{\n\t\"Object\": [\n\t\t{\n";

		    for (const auto& map : ObjVec) {
		        for (auto it = map.begin(); it != map.end(); ++it) {
		            oss << "\t\t\t\"" << it->first << "\": \"" << it->second << "\"";
		            if (std::next(it) != map.end()) {
		                oss << ",";
		            }
		            oss << "\n";
		        }
		    }

		    oss << "\t\t}\n\t]\n}";
		    std::string jsonString = oss.str();

		    // Print the JSON string
		   // std::cout << "JSON String: " << jsonString << std::endl;
		    TC_write_syslog("\n JSON String:  %s \n", jsonString.c_str());

		   // TC_write_syslog("\n MAVEN ::  extracted file path is: %s \n", sExtractedFileName.c_str());
		   // FileReader* FR = new FileReader(sExtractedFileName.c_str(), 'W');
		   // WriteToJson(ACtoPrint, FR, 0);

		    return jsonString.c_str();
	}


		static int Maven_Error_Report(char* pcFile, int iLine, char* pcFunction, int iReturnCode)
		{
			if (iReturnCode != ITK_ok)

			{

				char* pcErrorMsgString;

				TC_write_syslog("\n\n\tReturn Code=%d", iReturnCode);

				EMH_ask_error_text(iReturnCode, &pcErrorMsgString);

				TC_write_syslog("\n\n\tError_Msg_String=%s", pcErrorMsgString);

				TC_write_syslog("\n ERROR: %d ERROR MSG: %s.\n", iReturnCode, pcErrorMsgString);

				TC_write_syslog("\n FUNCTION: %s\nFILE: %s LINE: %d\n", pcFunction, pcFile, iLine);

				//printf("\n\n\tError_Msg_String=%s", pcErrorMsgString);

				//printf("\n ERROR: %d \n ERROR MSG: %s.\n", iReturnCode, pcErrorMsgString);

				//printf("\n FUNCTION: %s\nFILE: %s LINE: %d\n", pcFunction, pcFile, iLine);


				if (pcErrorMsgString)
				{
					MEM_free(pcErrorMsgString);
				}
				return 0;

			}

			return 1;

		}


