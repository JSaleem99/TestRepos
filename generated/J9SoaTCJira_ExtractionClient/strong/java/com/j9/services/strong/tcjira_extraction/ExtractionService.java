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

import com.teamcenter.soa.SoaConstants;
import com.teamcenter.soa.client.Connection;

/**
 * Data Extraction in json
 * <br>
 * <br>
 * <br>
 * <b>Library Reference:</b>
 * <ul>
 * <li type="disc">J9SoaTCJira_ExtractionStrong.jar
 * </li>
 * </ul>
 */

public abstract class ExtractionService
  implements     com.j9.services.strong.tcjira_extraction._2022_06.Extraction
{
    /**
     * 
     * @param connection 
     * @return A instance of the service stub for the given Connection
     */
    public static ExtractionService getService( Connection connection )
    {
        if(connection.getBinding().equalsIgnoreCase( SoaConstants.REST ))
        {
            return new ExtractionRestBindingStub( connection );
        }

        throw new IllegalArgumentException("The "+connection.getBinding()+" binding is not supported.");
    }


}
