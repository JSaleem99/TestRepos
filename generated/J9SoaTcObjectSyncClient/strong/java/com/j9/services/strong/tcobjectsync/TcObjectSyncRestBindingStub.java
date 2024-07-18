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
 
package com.j9.services.strong.tcobjectsync;




import com.teamcenter.soa.client.Connection;
import com.teamcenter.soa.internal.client.Sender;

 /**
  * @unpublished
  */

public class TcObjectSyncRestBindingStub extends TcObjectSyncService
{
    private Sender              restSender;
    private Connection          localConnection;
    
    /**
     * Constructor
     * @param connection
     * @unpublished
     */
    public TcObjectSyncRestBindingStub( Connection connection )
    {
        this.localConnection = connection;
        this.restSender  = connection.getSender();
        com.teamcenter.soa.client.model.StrongObjectFactory.init();
    }


    // each child interface has its own factory and methods for calling



    static final String TCOBJECTSYNC_202206_PORT_NAME          = "TcObjectSync-2022-06-TcObjectSync";
	
    @Override 
    public com.j9.services.strong.tcobjectsync._2022_06.TcObjectSync.OUTPUT tcObjectSyncOperation( java.util.Map<String, String> inputMap ) 
    
    {
       try
       {
        restSender.pushRequestId();
        com.teamcenter.soa.internal.common.Monitor.markStart("com.j9.services.strong.tcobjectsync.TcObjectSyncRestBindingStub.tcObjectSyncOperation");

        Object[] sourceArgs = new Object[] { inputMap };

        Object outObj = restSender.invoke3( TCOBJECTSYNC_202206_PORT_NAME, "tcObjectSyncOperation", sourceArgs, 
                        com.j9.services.strong.tcobjectsync._2022_06.TcObjectSync.class);
		


        com.j9.services.strong.tcobjectsync._2022_06.TcObjectSync.OUTPUT localOut = (com.j9.services.strong.tcobjectsync._2022_06.TcObjectSync.OUTPUT) outObj;
        
        if(!localConnection.getOption(Connection.OPT_CACHE_MODEL_OBJECTS).equals( "true" ))
      	{
        	localConnection.getClientDataModel().removeAllObjects(); 
        }
        com.teamcenter.soa.internal.common.Monitor.markEnd  ("com.j9.services.strong.tcobjectsync.TcObjectSyncRestBindingStub.tcObjectSyncOperation");
         return localOut;
       }
       finally
       {
        restSender.popRequestId();
       }
    }


}
