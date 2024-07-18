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

package com.j9.services.strong.tcjira_objectsync;


import com.teamcenter.soa.client.Connection;
import com.teamcenter.soa.client.model.ModelManager;
import com.teamcenter.utest.SoaSession;

import junit.framework.TestCase;

public class TcObjectSyncTest extends TestCase
{
    private Connection        connection;
    private ModelManager      manager;
    private TcObjectSyncService   service;
    

    public TcObjectSyncTest( String name )
    {
        super( name );
    }

    protected void setUp( ) throws Exception
    {
        super.setUp( );

        connection  = SoaSession.getConnection();
        manager     = connection.getModelManager();       
        service     = TcObjectSyncService.getService(connection);

    }
        
    
    public void testTcObjectSyncOperation()
    {
        // TODO write test code, then remove fail()
        // service.tcObjectSyncOperation(  )
        fail("This test has not been implemented yet");
    }


}

