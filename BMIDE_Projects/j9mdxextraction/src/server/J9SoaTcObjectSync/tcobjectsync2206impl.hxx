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


#include <map>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <tccore/item.h>
#include <base_utils/Mem.h>
#include <pom/pom/pom.h>
#include <tccore/tctype.h>
#include <tccore/aom.h>
#include <tccore/aom_prop.h>
#include <iostream>
#include <sstream>
#include <string>
#include <cstdarg>


// Function declarations
#define CHECK_FAIL(X) \
    do { \
        int status = (X); \
        if (status != ITK_ok) { \
            int n_errors = 0; \
            const int* severities = NULL, *statuses = NULL; \
            const char** messages; \
            EMH_ask_errors(&n_errors, &severities, &statuses, &messages); \
            if (n_errors > 0) { \
                char msg[1000]; \
                sprintf(msg, "error %s at line %d in %s\n", messages[n_errors - 1], __LINE__, __FILE__); \
                globalErrorString += msg; \
                printf("\n%s\n", messages[n_errors - 1]); \
                TC_write_syslog(msg); \
                EMH_clear_errors(); \
            } \
            char statusMsg[100]; \
            sprintf(statusMsg, "error %d at line %d in %s\n", status, __LINE__, __FILE__); \
            globalErrorString += statusMsg; \
            printf("%s", statusMsg); \
            TC_write_syslog(statusMsg); \
            char callMsg[100]; \
            sprintf(callMsg, "%s\n", #X); \
            globalErrorString += callMsg; \
            printf("%s", callMsg); \
            TC_write_syslog(callMsg); \
        } \
    } while (0)

