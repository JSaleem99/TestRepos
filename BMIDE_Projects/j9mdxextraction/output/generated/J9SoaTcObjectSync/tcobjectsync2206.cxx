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

#include <string>
#include <map>

#include <tcobjectsync2206.hxx>


#include <teamcenter/soa/internal/server/SdmParser.hxx>
#include <teamcenter/soa/internal/server/SdmStream.hxx>

using namespace J9::Soa::TcObjectSync::_2022_06;

const std::string TcObjectSync::XSD_NAMESPACE ="http://j9.com/Schemas/TcObjectSync/2022-06/TcObjectSync";




void TcObjectSync::OUTPUT::serialize( Teamcenter::Soa::Internal::Server::SdmStream* _sdmStream, const std::string& elementName )
{


    _sdmStream->writeOpenElement2( J9::Soa::TcObjectSync::_2022_06::TcObjectSync::XSD_NAMESPACE, elementName );
    _sdmStream->writeStructMember( "outputValue", outputValue );
    _sdmStream->writeOpenElementClose(  J9::Soa::TcObjectSync::_2022_06::TcObjectSync::XSD_NAMESPACE, true );

}




TcObjectSync::TcObjectSync()
{
}

TcObjectSync::~TcObjectSync()
{
}

