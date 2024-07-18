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

#include <extraction2206.hxx>


#include <teamcenter/soa/internal/server/SdmParser.hxx>
#include <teamcenter/soa/internal/server/SdmStream.hxx>

using namespace J9::Soa::TCJira_Extraction::_2022_06;

const std::string Extraction::XSD_NAMESPACE ="http://j9.com/Schemas/TCJira_Extraction/2022-06/Extraction";




void Extraction::Input::parse( Teamcenter::Soa::Internal::Server::SdmParser* _sdmParser )
{
    _sdmParser->parseStructMember( "objectId", objectId );
    _sdmParser->parseStructMember( "objectType", objectType );
    _sdmParser->parseStructMember( "extractionPath", extractionPath );
}

void Extraction::Output::serialize( Teamcenter::Soa::Internal::Server::SdmStream* _sdmStream, const std::string& elementName )
{


    _sdmStream->writeOpenElement2( J9::Soa::TCJira_Extraction::_2022_06::Extraction::XSD_NAMESPACE, elementName );
    _sdmStream->writeStructMember( "jsonPath", jsonPath );
    _sdmStream->writeOpenElementClose(  J9::Soa::TCJira_Extraction::_2022_06::Extraction::XSD_NAMESPACE, true );

}




Extraction::Extraction()
{
}

Extraction::~Extraction()
{
}

