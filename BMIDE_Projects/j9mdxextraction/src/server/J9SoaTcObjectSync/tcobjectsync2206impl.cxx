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

#include <tcobjectsync2206impl.hxx>

using namespace J9::Soa::TcObjectSync::_2022_06;
using namespace Teamcenter::Soa::Server;

// Global error string
std::string globalErrorString;
bool isItemExist(std::string itemID, tag_t* existedItemTag);
void updateProperty(std::map<std::string, std::string>& inputMap,tag_t existedItemTag);
void createNewObject(std::map<std::string, std::string>& inputMap);

TcObjectSyncImpl::OUTPUT TcObjectSyncImpl::tcObjectSyncOperation ( const INPUTMAP& inputMap )
{
	TC_write_syslog(
					"\n Inside TestInputOuputServiceImpl::testMAPOperation  \n");

			globalErrorString.clear();  // Clear the global error string

			tag_t existedItemTag = NULLTAG;
			std::map < std::string, std::string > mapInput;

			mapInput = inputMap;

			std::string itemId = mapInput["item_id"];

			bool isExist = isItemExist(itemId, &existedItemTag);

			if (isExist) {
				updateProperty(mapInput, existedItemTag);
			} else {
				createNewObject (mapInput);
			}

			OUTPUT outvalue;
			//outvalue.outputValue = globalErrorString; // Return the collected error messages
			outvalue.outputValue = "testing custom soa"; // Return the collected error messages

			return outvalue;
}


/******************************************************************************/
/* Function Definitions */
/******************************************************************************/
/*
*  Function Name:   isItemExist
*
*  Program ID:      testinputouputservice2212impl.cxx
*
*  Description:     This function check object is exist or not.
*
*
*  Parameters:      string itemID 			<I> - Enter Item ID
*                   tag_t* existedItemTag	<O> - Return found object tag
*
*  Return Value:    bool value ( true or false )
*
*
*  Special Logic Notes:  None
*/
/*****************************************************************************/

bool isItemExist(std::string itemID, tag_t* existedItemTag)

{
	TC_write_syslog("\n Inside isItemExist \n");
	const char* cppAttrNames[2] = { "item_id", "object_type" };
	const char* cppAttrVals[2] = { };
	cppAttrVals[0] = MEM_string_copy(itemID.c_str());
	cppAttrVals[1] = MEM_string_copy("ProblemReport");
	int iNumItem = 0;
	tag_t* tpItemTag = NULL;

	CHECK_FAIL(
			ITEM_find_items_by_key_attributes(2, cppAttrNames, cppAttrVals,
					&iNumItem, &tpItemTag));

	if (iNumItem > 0) {
		*existedItemTag = tpItemTag[0];
		return true;
	} else {
		return false;
	}
}

/******************************************************************************/
/* Function Definitions */
/******************************************************************************/
/*
*  Function Name:   updateProperty
*
*  Program ID:      testinputouputservice2212impl.cxx
*
*  Description:     This function update the properties of item and revision.
*
*
*  Parameters:      map inputMap 			<I> - Enter map with property name and value
*                   tag_t existedItemTag	<I> - Item tag for which properties are updating
*
*  Return Value:
*
*
*  Special Logic Notes:  None
*/
/*****************************************************************************/

void updateProperty(std::map<std::string, std::string>& inputMap, tag_t existedItemTag) {
	TC_write_syslog("\n Inside updateProperty \n");

	tag_t tClassID = NULLTAG;
	tag_t tItemClassID = NULLTAG;
	tag_t tCMMaturityAttrID = NULLTAG;
	tag_t tCMTechReviewPriorityAttrID = NULLTAG;
	tag_t tobject_descAttrID = NULLTAG;
	tag_t tobject_nameAttrID = NULLTAG;

	logical IsItemLoaded = false;
	char* cpItemType = nullptr;
	logical IsRevLoaded = false;

	char* cpRevType = nullptr;
	std::string cpCMMaturityValue = inputMap["CMMaturity"];
	std::string cpCMTechReviewPriorityValue = inputMap["CMTechReviewPriority"];
	std::string cpobject_descValue = inputMap["object_desc"];
	std::string cpobject_nameValue = inputMap["object_name"];

	// Updating Item Properties

	CHECK_FAIL(POM_class_of_instance(existedItemTag, &tItemClassID));

	CHECK_FAIL(POM_name_of_class(tItemClassID, &cpItemType));

	CHECK_FAIL(
			POM_attr_id_of_attr("object_desc", cpItemType,
					&tobject_descAttrID));
	CHECK_FAIL(
			POM_attr_id_of_attr("object_name", cpItemType,
					&tobject_nameAttrID));

	CHECK_FAIL(POM_is_loaded(existedItemTag, &IsItemLoaded));

	if (IsItemLoaded) {
		CHECK_FAIL(POM_unload_instances(1, &existedItemTag));
	}
	CHECK_FAIL(
			POM_load_instances(1, &existedItemTag, tItemClassID, POM_modify_lock));

	CHECK_FAIL(
			POM_set_attr_string(1, &existedItemTag, tobject_descAttrID,
					cpobject_descValue.c_str()));
	CHECK_FAIL(
			POM_set_attr_string(1, &existedItemTag, tobject_nameAttrID,
					cpobject_nameValue.c_str()));

	CHECK_FAIL(POM_save_instances(1, &existedItemTag, POM_no_lock));

	// Updating Revision properties
	tag_t tRevTag = NULLTAG;
	CHECK_FAIL(ITEM_ask_latest_rev(existedItemTag, &tRevTag));

	TC_write_syslog("\n %s , %s , %s ,%s  \n", cpCMMaturityValue.c_str(),
			cpCMTechReviewPriorityValue.c_str(), cpobject_descValue.c_str(),
			cpobject_nameValue.c_str());
	CHECK_FAIL(POM_class_of_instance(tRevTag, &tClassID));

	CHECK_FAIL(POM_name_of_class(tClassID, &cpRevType));

	CHECK_FAIL(
			POM_attr_id_of_attr("CMMaturity", cpRevType, &tCMMaturityAttrID));
	CHECK_FAIL(
			POM_attr_id_of_attr("CMTechReviewPriority", cpRevType,
					&tCMTechReviewPriorityAttrID));
	CHECK_FAIL(
			POM_attr_id_of_attr("object_desc", cpRevType, &tobject_descAttrID));
	CHECK_FAIL(
			POM_attr_id_of_attr("object_name", cpRevType, &tobject_nameAttrID));

	CHECK_FAIL(POM_is_loaded(tRevTag, &IsRevLoaded));

	if (IsRevLoaded) {
		CHECK_FAIL(POM_unload_instances(1, &tRevTag));
	}
	CHECK_FAIL(POM_load_instances(1, &tRevTag, tClassID, POM_modify_lock));

	CHECK_FAIL(
			POM_set_attr_string(1, &tRevTag, tCMMaturityAttrID,
					cpCMMaturityValue.c_str()));
	CHECK_FAIL(
			POM_set_attr_string(1, &tRevTag, tCMTechReviewPriorityAttrID,
					cpCMTechReviewPriorityValue.c_str()));
	CHECK_FAIL(
			POM_set_attr_string(1, &tRevTag, tobject_descAttrID,
					cpobject_descValue.c_str()));
	CHECK_FAIL(
			POM_set_attr_string(1, &tRevTag, tobject_nameAttrID,
					cpobject_nameValue.c_str()));

	CHECK_FAIL(POM_save_instances(1, &tRevTag, POM_no_lock));

}

/******************************************************************************/
/* Function Definitions */
/******************************************************************************/
/*
*  Function Name:   createNewObject
*
*  Program ID:      testinputouputservice2212impl.cxx
*
*  Description:     This function create the new object by reading map.
*
*
*  Parameters:      map inputMap 	<I> - Enter map with property name and value
*
*  Return Value:
*
*
*  Special Logic Notes:  None
*/
/*****************************************************************************/

void createNewObject(std::map<std::string, std::string>& inputMap) {
	//tag_t tItemRevTag         = NULLTAG;
	tag_t tItemTag = NULLTAG;
	tag_t tItemTypeTag = NULLTAG;
	tag_t tItemCreateInputTag = NULLTAG;

	std::string item_idValue = inputMap["item_id"];
	std::string object_descValue = inputMap["object_desc"];
	std::string object_nameValue = inputMap["object_name"];

	CHECK_FAIL(TCTYPE_find_type( "ProblemReport", nullptr, &tItemTypeTag ))
	;
	CHECK_FAIL(TCTYPE_construct_create_input (tItemTypeTag, &tItemCreateInputTag ))
	;

	if (tItemCreateInputTag != NULLTAG) {
		CHECK_FAIL(AOM_set_value_string(tItemCreateInputTag, "item_id", item_idValue.c_str()))
		;
		CHECK_FAIL( AOM_set_value_string(tItemCreateInputTag, "object_name", object_nameValue.c_str()))
		;
		CHECK_FAIL( AOM_set_value_string(tItemCreateInputTag, "object_desc", object_descValue.c_str()))
		;
		// AOM_set_value_tag ( tItemCreateInputTag, "revision", tRevCreateInputTag ) ;

		CHECK_FAIL(TCTYPE_create_object ( tItemCreateInputTag, &tItemTag ))
		;

		if (tItemTag != NULLTAG) {
			CHECK_FAIL(AOM_save_without_extensions ( tItemTag ))
			;

		}
	}

	// ITEM_ask_latest_rev ( tItemTag, &tItemRevTag ) ;

	updateProperty(inputMap, tItemTag);

}



