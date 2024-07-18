/* 
 @<COPYRIGHT>@
 ==================================================
 Copyright 2012
 Siemens Product Lifecycle Management Software Inc.
 All Rights Reserved.
 ==================================================
 @<COPYRIGHT>@
*/

#ifndef TEAMCENTER_SERVICES_TCOBJECTSYNC_2022_06_TCOBJECTSYNC_IMPL_HXX 
#define TEAMCENTER_SERVICES_TCOBJECTSYNC_2022_06_TCOBJECTSYNC_IMPL_HXX


#include <tcobjectsync2206.hxx>

#include <TcObjectSync_exports.h>

namespace J9
{
    namespace Soa
    {
        namespace TcObjectSync
        {
            namespace _2022_06
            {
                class TcObjectSyncImpl;
            }
        }
    }
}


class SOATCOBJECTSYNC_API J9::Soa::TcObjectSync::_2022_06::TcObjectSyncImpl : public J9::Soa::TcObjectSync::_2022_06::TcObjectSync

{
public:

    virtual TcObjectSyncImpl::OUTPUT tcObjectSyncOperation ( const INPUTMAP& inputMap );


};

#include <TcObjectSync_undef.h>
#endif
