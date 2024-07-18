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


package com.j9.services.loose.tcobjectsync._2022_06;


/**
 *
 */
@com.teamcenter.soa.internal.client.parse.XMLNamespace("http://j9.com/Schemas/TcObjectSync/2022-06/TcObjectSync")
public interface TcObjectSync
{

    public class OUTPUT
    {
        /**
         * output value
         */
        public String outputValue = "";
    }



    

    /**
     * .
     *
     * <br><br><b>Version:</b> Teamcenter 14.1<br>
     *
     * @param inputMap
     *        input map value
     *
     * @return
     *
     */
    @com.teamcenter.soa.internal.client.parse.InputParam(names = { "inputMap" })
    public com.j9.services.loose.tcobjectsync._2022_06.TcObjectSync.OUTPUT tcObjectSyncOperation ( java.util.Map<String, String> inputMap );



}
