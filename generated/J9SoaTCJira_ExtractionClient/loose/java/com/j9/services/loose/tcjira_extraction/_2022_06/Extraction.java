/* 
 @<COPYRIGHT>@
 ==================================================
 Copyright 2012
 Siemens Product Lifecycle Management Software Inc.
 All Rights Reserved.
 ==================================================
 @<COPYRIGHT>@

 ==================================================

   Auto-generated source from service interface.
                 DO NOT EDIT

 ==================================================
*/


package com.j9.services.loose.tcjira_extraction._2022_06;


/**
 *
 */
@com.teamcenter.soa.internal.client.parse.XMLNamespace("http://j9.com/Schemas/TCJira_Extraction/2022-06/Extraction")
public interface Extraction
{

    public class Input
    {
        /**
         * Object ID
         */
        public String objectId = "";
        /**
         * Object type
         */
        public String objectType = "";
        /**
         * Extraction Path
         */
        public String extractionPath = "";
    }


    public class Output
    {
        /**
         * output Json Path
         */
        public String jsonPath = "";
    }



    

    /**
     * .
     *
     * <br><br><b>Version:</b> Teamcenter 14.1<br>
     *
     * @param operationInput
     *        operation input
     *
     * @return
     *
     */
    @com.teamcenter.soa.internal.client.parse.InputParam(names = { "operationInput" })
    public com.j9.services.loose.tcjira_extraction._2022_06.Extraction.Output extractionOperation ( com.j9.services.loose.tcjira_extraction._2022_06.Extraction.Input operationInput );



}
