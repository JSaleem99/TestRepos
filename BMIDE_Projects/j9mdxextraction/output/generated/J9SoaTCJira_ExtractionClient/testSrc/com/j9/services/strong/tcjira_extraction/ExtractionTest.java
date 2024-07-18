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

package com.j9.services.strong.tcjira_extraction;


import com.teamcenter.soa.client.Connection;
import com.teamcenter.soa.client.model.ModelManager;
import com.teamcenter.utest.SoaSession;

import junit.framework.TestCase;

public class ExtractionTest extends TestCase
{
    private Connection        connection;
    private ModelManager      manager;
    private ExtractionService   service;
    

    public ExtractionTest( String name )
    {
        super( name );
    }

    protected void setUp( ) throws Exception
    {
        super.setUp( );

        connection  = SoaSession.getConnection();
        manager     = connection.getModelManager();       
        service     = ExtractionService.getService(connection);

    }
        
    
    public void testExtractionOperation()
    {
        // TODO write test code, then remove fail()
        // service.extractionOperation(  )
        fail("This test has not been implemented yet");
    }


}

