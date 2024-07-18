/* 
 @<COPYRIGHT>@
 ==================================================
 Copyright 2015
 Siemens Product Lifecycle Management Software Inc.
 All Rights Reserved.
 ==================================================
 @<COPYRIGHT>@

 ==================================================

   Auto-generated source from service interface.
                 DO NOT EDIT

 ==================================================
*/

//#ifndef TEAMCENTER_SERVICES_TCJira_Extraction__2022_06_Extraction_HXX 
//#define TEAMCENTER_SERVICES_TCJira_Extraction__2022_06_Extraction_HXX

#include <unidefs.h>

#include <string>
#include <iostream>
#include <sstream>



#include <teamcenter/soa/server/ServiceData.hxx>
#include <teamcenter/soa/server/ServiceException.hxx>
#include <teamcenter/soa/server/PartialErrors.hxx>
#include <teamcenter/soa/server/Preferences.hxx>
#include <teamcenter/soa/server/ServicePolicy.hxx> 
#include <teamcenter/soa/internal/server/IiopSkeleton.hxx>
#include <teamcenter/soa/common/exceptions/ExceptionMapper.hxx>
#include <teamcenter/schemas/soa/_2006_03/exceptions/ServiceException.hxx>

#include <extraction2206impl.hxx>


#include <TCJira_Extraction_exports.h>  
namespace J9
{
    namespace Services
    {
    
        namespace TCJira_Extraction
        {
             namespace _2022_06
             {


class SOATCJIRA_EXTRACTION_API ExtractionIiopSkeleton : public Teamcenter::Soa::Internal::Server::IiopSkeleton
{

public:

     ExtractionIiopSkeleton();
    ~ExtractionIiopSkeleton();
    
    virtual void initialize();
   


private:

    static J9::Soa::TCJira_Extraction::_2022_06::ExtractionImpl* _service;
	static Teamcenter::Soa::Server::ServicePolicy*  	 _servicePolicy;


    static void extractionOperation( const std::string& xmlIn,  Teamcenter::Soa::Internal::Gateway::GatewayResponse& gatewayResponse );
    


};    // End Class



}}}}    // End Namespace
#include <TCJira_Extraction_undef.h>
//#endif   

