/* 
 @<COPYRIGHT>@
 ==================================================
 Copyright 2012
 Siemens Product Lifecycle Management Software Inc.
 All Rights Reserved.
 ==================================================
 @<COPYRIGHT>@
*/

#ifndef TEAMCENTER_SERVICES_TCJIRA_EXTRACTION_2022_06_EXTRACTION_IMPL_HXX 
#define TEAMCENTER_SERVICES_TCJIRA_EXTRACTION_2022_06_EXTRACTION_IMPL_HXX


#include <extraction2206.hxx>

#include <TCJira_Extraction_exports.h>

namespace J9
{
    namespace Soa
    {
        namespace TCJira_Extraction
        {
            namespace _2022_06
            {
                class ExtractionImpl;
            }
        }
    }
}


class SOATCJIRA_EXTRACTION_API J9::Soa::TCJira_Extraction::_2022_06::ExtractionImpl : public J9::Soa::TCJira_Extraction::_2022_06::Extraction

{
public:

    virtual ExtractionImpl::Output extractionOperation ( const Input operationInput );


};

#include <TCJira_Extraction_undef.h>
#endif

#include <pom/pom/pom.h>
#include <pom/enq/enq.h>
#include <base_utils/Mem.h>
#include <base_utils/DateTime.hxx>
#include <vector>
#include <map>
#include <string>
#include <string.h>
#include <stdio.h>
#include <filesystem>
#include <stdlib.h>
//#include <sys/types.h>
//#include <sys/stat.h>

#include <fclasses/tc_types.h>
#include <fclasses/tc_stat.h>
#include <fclasses/tc_time.h>
//#include <time.h>

#include <tc/tc_startup.h>
#include <tcinit/tcinit.h>
#include <tc/tc_util.h>
#include <tc/emh.h>
#include <epm/epm.h>
#include <epm/epm_toolkit_tc_utils.h>
#include <tccore/tctype.h>
#include <tccore/workspaceobject.h>
#include <tccore/aom.h>
#include <tccore/grm.h>
#include <tccore/item.h>
#include <tccore/aom_prop.h>
#include <ae/ae.h>
#include <sa/sa.h>
#include <ps/ps.h>
#include <parseJson.h>
#include <fclasses/tc_date.h>
#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <sstream>

//using namespace std;

#define ITEMREVISIONID "item_revision_id"
#define ITEMID "item_id"
#define OBJECTNAME "object_name"
#define OBJECTTYPE "object_type"
#define DSREVISIONNUMBER "revision_number"
#define DSREVISIONLIMIT "revision_limit"
#define DSTYPE "dataset-type"
#define OBJECTID "item_id"
#define OBJECTDESC "object_desc"
#define ITEMTAG "items_tag"
#define ITEMCLASS "Item"
#define ITEMREVCLASS "ItemRevision"
#define PUID "puid"
#define WORKSPACEOBJECTCLASS "WorkspaceObject"
#define DATASETCLASS "Dataset"
#define DATASETTYPECLASS "DatasetType"
#define MEOPTCLASS "MEOP"
#define IMANSPEC "IMAN_specification"
#define IMANRENDERING "IMAN_Rendering"
#define DATERELEASED "date_released"
#define EXTRACTIONPATH "EXTRACT_PATH"

string ExtractData(const char*, const char*);


string write2JSON(vector<map<string, string>> ObjVec, const char* cpObjId, const char* cpObjRevID, string sJsonPath);

#define MAVEN_ERROR_REPORT(X) (Maven_Error_Report((char*)__FILE__,__LINE__,(char*) #X,(X)))
static int Maven_Error_Report(char* pcFile, int iLine, char* pcFunction, int iReturnCode);
