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

#ifndef TEAMCENTER_SERVICES_TCJIRA_EXTRACTION_2022_06_EXTRACTION_HXX 
#define TEAMCENTER_SERVICES_TCJIRA_EXTRACTION_2022_06_EXTRACTION_HXX





#include <teamcenter/soa/server/ServiceException.hxx>
#include <metaframework/BusinessObjectRef.hxx>

#include <TCJira_Extraction_exports.h>

namespace Teamcenter { namespace Soa {  namespace Internal { namespace Server { class SdmStream; }}}}
namespace Teamcenter { namespace Soa {  namespace Internal { namespace Server { class SdmParser; }}}}
namespace J9 { namespace Services { namespace TCJira_Extraction { namespace _2022_06 { class ExtractionIiopSkeleton; }}}}


namespace J9
{
    namespace Soa
    {
        namespace TCJira_Extraction
        {
            namespace _2022_06
            {
                class Extraction;
            }
        }
    }
}


class SOATCJIRA_EXTRACTION_API J9::Soa::TCJira_Extraction::_2022_06::Extraction

{
public:

    static const std::string XSD_NAMESPACE;

    struct Input;
    struct Output;

    struct  Input
    {
        /**
         * Object ID
         */
        std::string objectId;
        /**
         * Object type
         */
        std::string objectType;
        /**
         * Extraction Path
         */
        std::string extractionPath;

    private:
        friend class Teamcenter::Soa::Internal::Server::SdmParser;
        friend class J9::Services::TCJira_Extraction::_2022_06::ExtractionIiopSkeleton;

        void parse    ( Teamcenter::Soa::Internal::Server::SdmParser* _sdmParser );
    };

    struct  Output
    {
        /**
         * output Json Path
         */
        std::string jsonPath;

    private:
        friend class Teamcenter::Soa::Internal::Server::SdmStream;
        friend class J9::Services::TCJira_Extraction::_2022_06::ExtractionIiopSkeleton;

        void serialize( Teamcenter::Soa::Internal::Server::SdmStream* _sdmStream, const std::string& elementName="Output" );
    };



    Extraction();
    virtual ~Extraction();
    

    /**
     * .
     *
     * @param operationInput
     *        operation input
     *
     * @return
     *
     *
     * @version Teamcenter 14.1
     */
    virtual Output extractionOperation ( const Input operationInput ) = 0;


};

#include <TCJira_Extraction_undef.h>
#endif

