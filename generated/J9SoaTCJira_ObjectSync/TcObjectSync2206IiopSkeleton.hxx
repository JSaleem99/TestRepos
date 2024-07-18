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

//#ifndef TEAMCENTER_SERVICES_TCJira_ObjectSync__2022_06_TcObjectSync_HXX 
//#define TEAMCENTER_SERVICES_TCJira_ObjectSync__2022_06_TcObjectSync_HXX

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

#include <tcobjectsync2206impl.hxx>


#include <TCJira_ObjectSync_exports.h>  
namespace J9
{
    namespace Services
    {
    
        namespace TCJira_ObjectSync
        {
             namespace _2022_06
             {


class SOATCJIRA_OBJECTSYNC_API TcObjectSyncIiopSkeleton : public Teamcenter::Soa::Internal::Server::IiopSkeleton
{

public:

     TcObjectSyncIiopSkeleton();
    ~TcObjectSyncIiopSkeleton();
    
    virtual void initialize();
   


private:

    static J9::Soa::TCJira_ObjectSync::_2022_06::TcObjectSyncImpl* _service;
	static Teamcenter::Soa::Server::ServicePolicy*  	 _servicePolicy;


    static void tcObjectSyncOperation( const std::string& xmlIn,  Teamcenter::Soa::Internal::Gateway::GatewayResponse& gatewayResponse );
    


};    // End Class



}}}}    // End Namespace
#include <TCJira_ObjectSync_undef.h>
//#endif   

