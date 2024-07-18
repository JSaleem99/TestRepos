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
 
package com.j9.services.loose.tcjira_extraction;




import com.teamcenter.soa.client.Connection;
import com.teamcenter.soa.internal.client.Sender;

 /**
  * @unpublished
  */

public class ExtractionRestBindingStub extends ExtractionService
{
    private Sender              restSender;
    private Connection          localConnection;
    
    /**
     * Constructor
     * @param connection
     * @unpublished
     */
    public ExtractionRestBindingStub( Connection connection )
    {
        this.localConnection = connection;
        this.restSender  = connection.getSender();
        
    }


    // each child interface has its own factory and methods for calling



    static final String EXTRACTION_202206_PORT_NAME          = "TCJira-Extraction-2022-06-Extraction";
	
    @Override 
    public com.j9.services.loose.tcjira_extraction._2022_06.Extraction.Output extractionOperation( com.j9.services.loose.tcjira_extraction._2022_06.Extraction.Input operationInput ) 
    
    {
       try
       {
        restSender.pushRequestId();
        com.teamcenter.soa.internal.common.Monitor.markStart("com.j9.services.loose.tcjira_extraction.ExtractionRestBindingStub.extractionOperation");

        Object[] sourceArgs = new Object[] { operationInput };

        Object outObj = restSender.invoke3( EXTRACTION_202206_PORT_NAME, "extractionOperation", sourceArgs, 
                        com.j9.services.loose.tcjira_extraction._2022_06.Extraction.class);
		


        com.j9.services.loose.tcjira_extraction._2022_06.Extraction.Output localOut = (com.j9.services.loose.tcjira_extraction._2022_06.Extraction.Output) outObj;
        
        if(!localConnection.getOption(Connection.OPT_CACHE_MODEL_OBJECTS).equals( "true" ))
      	{
        	localConnection.getClientDataModel().removeAllObjects(); 
        }
        com.teamcenter.soa.internal.common.Monitor.markEnd  ("com.j9.services.loose.tcjira_extraction.ExtractionRestBindingStub.extractionOperation");
         return localOut;
       }
       finally
       {
        restSender.popRequestId();
       }
    }


}
