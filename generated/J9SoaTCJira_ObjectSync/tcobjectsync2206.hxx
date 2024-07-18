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

#ifndef TEAMCENTER_SERVICES_TCJIRA_OBJECTSYNC_2022_06_TCOBJECTSYNC_HXX 
#define TEAMCENTER_SERVICES_TCJIRA_OBJECTSYNC_2022_06_TCOBJECTSYNC_HXX





#include <teamcenter/soa/server/ServiceException.hxx>
#include <metaframework/BusinessObjectRef.hxx>

#include <TCJira_ObjectSync_exports.h>

namespace Teamcenter { namespace Soa {  namespace Internal { namespace Server { class SdmStream; }}}}
namespace Teamcenter { namespace Soa {  namespace Internal { namespace Server { class SdmParser; }}}}
namespace J9 { namespace Services { namespace TCJira_ObjectSync { namespace _2022_06 { class TcObjectSyncIiopSkeleton; }}}}


namespace J9
{
    namespace Soa
    {
        namespace TCJira_ObjectSync
        {
            namespace _2022_06
            {
                class TcObjectSync;
            }
        }
    }
}


class SOATCJIRA_OBJECTSYNC_API J9::Soa::TCJira_ObjectSync::_2022_06::TcObjectSync

{
public:

    static const std::string XSD_NAMESPACE;

    struct OUTPUT;

    typedef std::map< std::string, std::string > INPUTMAP;

    struct  OUTPUT
    {
        /**
         * tcobjectsync service output value
         */
        std::string outputValue;

    private:
        friend class Teamcenter::Soa::Internal::Server::SdmStream;
        friend class J9::Services::TCJira_ObjectSync::_2022_06::TcObjectSyncIiopSkeleton;

        void serialize( Teamcenter::Soa::Internal::Server::SdmStream* _sdmStream, const std::string& elementName="OUTPUT" );
    };



    TcObjectSync();
    virtual ~TcObjectSync();
    

    /**
     * .
     *
     * @param mapInput
     *        tcobjectsync input map (string , string)
     *
     * @return
     *
     *
     * @version Teamcenter 14.1
     */
    virtual OUTPUT tcObjectSyncOperation ( const INPUTMAP& mapInput ) = 0;


};

#include <TCJira_ObjectSync_undef.h>
#endif

