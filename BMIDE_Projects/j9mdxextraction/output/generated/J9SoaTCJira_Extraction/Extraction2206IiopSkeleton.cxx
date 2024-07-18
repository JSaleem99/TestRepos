/* 
 @<COPYRIGHT>@
 ==================================================
 Copyright 2014
 Siemens Product Lifecycle Management Software Inc.
 All Rights Reserved.
 ==================================================
 @<COPYRIGHT>@

 ==================================================

   Auto-generated source from service interface.
                 DO NOT EDIT

 ==================================================
*/


#include <unidefs.h>

#include<Extraction2206IiopSkeleton.hxx>



#include <teamcenter/soa/internal/server/SdmParser.hxx>
#include <teamcenter/soa/internal/server/SdmStream.hxx>
#include <teamcenter/soa/internal/server/ScopedMemoryChangeLogger.hxx>

using namespace std;
using namespace Teamcenter::Soa::Server;
using namespace Teamcenter::Soa::Internal::Server;
using namespace Teamcenter::Soa::Common::Exceptions;


namespace J9
{
    namespace Services
    {
    
        namespace TCJira_Extraction
        {
             namespace _2022_06
             {




    ExtractionIiopSkeleton::ExtractionIiopSkeleton():
        IiopSkeleton()
    {
        m_serviceName = "Extraction";
    
       _svcMap[ "extractionOperation" ]   = extractionOperation;


		_service = new J9::Soa::TCJira_Extraction::_2022_06::ExtractionImpl();

    }
    
    ExtractionIiopSkeleton::~ExtractionIiopSkeleton()
    {
    	// If the implementing class did not implement the ServicePolicy
    	// then delete it, since it was allocated here in the skeleton
	 	Teamcenter::Soa::Server::ServicePolicy* sp = dynamic_cast<Teamcenter::Soa::Server::ServicePolicy *>(_service);
    	if(sp == NULL)
    	{
    		delete _servicePolicy;
    	}
        delete _service;
        _service = NULL;
    }



     void ExtractionIiopSkeleton::initialize()
    {
   	// If the impl class has not implemented the ServicePolicy interface
    	// Create an instance of the default ServicePolicy
	 	_servicePolicy = dynamic_cast<Teamcenter::Soa::Server::ServicePolicy *>(_service);
    	if(_servicePolicy == NULL)
    	{
    		_servicePolicy = new Teamcenter::Soa::Server::ServicePolicy;
    	}
    }




    static J9::Soa::TCJira_Extraction::_2022_06::ExtractionImpl* _service;
	static Teamcenter::Soa::Server::ServicePolicy*  	 _servicePolicy;


    void ExtractionIiopSkeleton::extractionOperation( const std::string& xmlOrJsonDoc, Teamcenter::Soa::Internal::Gateway::GatewayResponse& gatewayResponse )
    {
        ScopedJournal _journalSkeleton( "J9::Soa::TCJira_Extraction::_2022_06::Extraction::ExtractionIiopSkeleton::extractionOperation" );

        std::string _contentType;
        J9::Soa::TCJira_Extraction::_2022_06::Extraction::Input  operationInput;
        J9::Soa::TCJira_Extraction::_2022_06::Extraction::Output _out;

        //  ========== Parse the input XML or JSON document to the local input arguments ==========
        {
            ScopedJournal _journalParse( "J9::Soa::TCJira_Extraction::_2022_06::ExtractionIiopSkeleton::extractionOperation - Parse input document" );
            Teamcenter::Soa::Internal::Server::SdmParser _sdmParser( xmlOrJsonDoc );
            _contentType = _sdmParser.getDocumentType();
            _sdmParser.parseStructMember( "operationInput", operationInput );
        }        


        //  ===================== Call the service operation implementation  ======================
        {
            ScopedJournal journalExecute( "J9::Soa::TCJira_Extraction::_2022_06::ExtractionImpl::extractionOperation" );
            ScopedMemoryChangeLogger memoryLogger( "J9::Soa::TCJira_Extraction::_2022_06::ExtractionImpl::extractionOperation" );
            _out = _service->extractionOperation( operationInput );
        }

        //  ================== Serialize the response to a XML or JSON document  ==================
        {
            ScopedJournal _journalSerialize(  "J9::Soa::TCJira_Extraction::_2022_06::ExtractionIiopSkeleton::extractionOperation - Serialize output document" );
            Teamcenter::Soa::Internal::Server::SdmStream _sdmStream(  _contentType, gatewayResponse.getBodyOutputStream() );
            _out.serialize( &_sdmStream );          
        }
    }




J9::Soa::TCJira_Extraction::_2022_06::ExtractionImpl* ExtractionIiopSkeleton::_service = NULL;
Teamcenter::Soa::Server::ServicePolicy*  	  ExtractionIiopSkeleton::_servicePolicy = NULL;

#ifdef __cplusplus
extern "C" {
#endif
#ifdef WNT
__declspec(dllexport)
#else
extern
#endif
void TCJira_Extraction_2022_06_Extraction_ConstructT2LService( Teamcenter::Soa::Internal::Gateway::T2LService **service )
{
    *service = new ExtractionIiopSkeleton();
}
#ifdef __cplusplus
}
#endif

}}}}    // End Namespace

