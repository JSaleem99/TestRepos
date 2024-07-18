/* 
 @<COPYRIGHT>@
 ==================================================
 Copyright 2012
 Siemens Product Lifecycle Management Software Inc.
 All Rights Reserved.
 ==================================================
 @<COPYRIGHT>@
*/

#ifndef TEAMCENTER_SERVICES_TCJIRA_OBJECTSYNC_2022_06_TCOBJECTSYNC_IMPL_HXX 
#define TEAMCENTER_SERVICES_TCJIRA_OBJECTSYNC_2022_06_TCOBJECTSYNC_IMPL_HXX


#include <tcobjectsync2206.hxx>

#include <TCJira_ObjectSync_exports.h>

namespace J9
{
    namespace Soa
    {
        namespace TCJira_ObjectSync
        {
            namespace _2022_06
            {
                class TcObjectSyncImpl;
            }
        }
    }
}


class SOATCJIRA_OBJECTSYNC_API J9::Soa::TCJira_ObjectSync::_2022_06::TcObjectSyncImpl : public J9::Soa::TCJira_ObjectSync::_2022_06::TcObjectSync

{
public:

    virtual TcObjectSyncImpl::OUTPUT tcObjectSyncOperation ( const INPUTMAP& mapInput );


};

#include <TCJira_ObjectSync_undef.h>
#endif
