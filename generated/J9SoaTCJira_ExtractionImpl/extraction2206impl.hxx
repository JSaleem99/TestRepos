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
