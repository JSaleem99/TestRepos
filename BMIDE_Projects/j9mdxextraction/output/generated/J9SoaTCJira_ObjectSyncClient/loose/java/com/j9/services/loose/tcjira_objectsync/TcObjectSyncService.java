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

package com.j9.services.loose.tcjira_objectsync;

import com.teamcenter.soa.SoaConstants;
import com.teamcenter.soa.client.Connection;

/**
 * object sync service
 * <br>
 * <br>
 * <br>
 * <b>Library Reference:</b>
 * <ul>
 * <li type="disc">J9SoaTCJira_ObjectSyncLoose.jar
 * </li>
 * </ul>
 */

public abstract class TcObjectSyncService
  implements     com.j9.services.loose.tcjira_objectsync._2022_06.TcObjectSync
{
    /**
     * 
     * @param connection 
     * @return A instance of the service stub for the given Connection
     */
    public static TcObjectSyncService getService( Connection connection )
    {
        if(connection.getBinding().equalsIgnoreCase( SoaConstants.REST ))
        {
            return new TcObjectSyncRestBindingStub( connection );
        }

        throw new IllegalArgumentException("The "+connection.getBinding()+" binding is not supported.");
    }


}
