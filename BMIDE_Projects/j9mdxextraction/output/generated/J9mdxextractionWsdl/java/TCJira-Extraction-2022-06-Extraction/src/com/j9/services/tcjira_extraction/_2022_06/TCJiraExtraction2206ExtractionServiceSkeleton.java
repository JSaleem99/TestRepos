/**
 * TCJiraExtraction2206ExtractionServiceSkeleton.java
 *
 * This file was auto-generated from WSDL
 * by the Apache Axis2 version: 1.7.9  Built on : Nov 16, 2018 (12:05:37 GMT)
 */
package com.j9.services.tcjira_extraction._2022_06;

/**
 *  TCJiraExtraction2206ExtractionServiceSkeleton java skeleton for the axisService
 */
public class TCJiraExtraction2206ExtractionServiceSkeleton {
    /**
     * Auto generated method signature
     * <![CDATA[
       .
       ]]>
     * @param extractionOperationInput
     * @return output
     * @throws InvalidUserFaultFault
     * @throws InternalServerFaultFault
     */
    public com.j9.schemas.tcjira_extraction._2022_06.extraction.Output extractionOperation(
        com.j9.schemas.tcjira_extraction._2022_06.extraction.ExtractionOperationInput extractionOperationInput)
        throws com.teamcenter.schemas.soa._2006_03.exceptions.InvalidUserFaultFault,
           com.teamcenter.schemas.soa._2006_03.exceptions.ServiceFaultFault,
           com.teamcenter.schemas.soa._2006_03.exceptions.InternalServerFaultFault,
           com.teamcenter.schemas.soa._2006_03.exceptions.InvalidCredentialsFaultFault{
        return (com.j9.schemas.tcjira_extraction._2022_06.extraction.Output)com.teamcenter.soa.ptier.SoapInjector.sendRequestToPTier( extractionOperationInput, "TCJira-Extraction-2022-06-Extraction", "extractionOperation" );
    }
}
