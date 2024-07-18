
package com.j9.schemas.tcjira_extraction._2022_06.extraction;

import javax.xml.bind.annotation.XmlAccessType;
import javax.xml.bind.annotation.XmlAccessorType;
import javax.xml.bind.annotation.XmlElement;
import javax.xml.bind.annotation.XmlRootElement;
import javax.xml.bind.annotation.XmlType;


/**
 * <p>Java class for anonymous complex type.
 * 
 * <p>The following schema fragment specifies the expected content contained within this class.
 * 
 * <pre>
 * &lt;complexType>
 *   &lt;complexContent>
 *     &lt;restriction base="{http://www.w3.org/2001/XMLSchema}anyType">
 *       &lt;sequence>
 *         &lt;element name="operationInput" type="{http://j9.com/Schemas/TCJira_Extraction/2022-06/Extraction}Input"/>
 *       &lt;/sequence>
 *     &lt;/restriction>
 *   &lt;/complexContent>
 * &lt;/complexType>
 * </pre>
 * 
 * 
 */
@XmlAccessorType(XmlAccessType.FIELD)
@XmlType(name = "", propOrder = {
    "operationInput"
})
@XmlRootElement(name = "ExtractionOperationInput")
public class ExtractionOperationInput {

    @XmlElement(required = true)
    protected Input operationInput;

    /**
     * Gets the value of the operationInput property.
     * 
     * @return
     *     possible object is
     *     {@link Input }
     *     
     */
    public Input getOperationInput() {
        return operationInput;
    }

    /**
     * Sets the value of the operationInput property.
     * 
     * @param value
     *     allowed object is
     *     {@link Input }
     *     
     */
    public void setOperationInput(Input value) {
        this.operationInput = value;
    }

}
