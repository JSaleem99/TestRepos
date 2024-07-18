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

//#ifndef TEAMCENTER_SERVICES_TcObjectSync__2022_06_TcObjectSync_HXX 
//#define TEAMCENTER_SERVICES_TcObjectSync__2022_06_TcObjectSync_HXX

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


#include <TcObjectSync_exports.h>  
namespace J9
{
    namespace Services
    {
    
        namespace TcObjectSync
        {
             namespace _2022_06
             {


class SOATCOBJECTSYNC_API TcObjectSyncIiopSkeleton : public Teamcenter::Soa::Internal::Server::IiopSkeleton
{

public:

     TcObjectSyncIiopSkeleton();
    ~TcObjectSyncIiopSkeleton();
    
    virtual void initialize();
   


private:

    static J9::Soa::TcObjectSync::_2022_06::TcObjectSyncImpl* _service;
	static Teamcenter::Soa::Server::ServicePolicy*  	 _servicePolicy;


    static void tcObjectSyncOperation( const std::string& xmlIn,  Teamcenter::Soa::Internal::Gateway::GatewayResponse& gatewayResponse );
    


};    // End Class



}}}}    // End Namespace
#include <TcObjectSync_undef.h>
//#endif   

