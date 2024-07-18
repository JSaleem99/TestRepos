
package com.j9.schemas.tcjira_extraction._2022_06.extraction;

import javax.xml.bind.annotation.XmlAccessType;
import javax.xml.bind.annotation.XmlAccessorType;
import javax.xml.bind.annotation.XmlAttribute;
import javax.xml.bind.annotation.XmlType;


/**
 * <p>Java class for Input complex type.
 * 
 * <p>The following schema fragment specifies the expected content contained within this class.
 * 
 * <pre>
 * &lt;complexType name="Input">
 *   &lt;complexContent>
 *     &lt;restriction base="{http://www.w3.org/2001/XMLSchema}anyType">
 *       &lt;sequence>
 *       &lt;/sequence>
 *       &lt;attribute name="objectId" use="required" type="{http://www.w3.org/2001/XMLSchema}string" />
 *       &lt;attribute name="objectType" use="required" type="{http://www.w3.org/2001/XMLSchema}string" />
 *       &lt;attribute name="extractionPath" use="required" type="{http://www.w3.org/2001/XMLSchema}string" />
 *     &lt;/restriction>
 *   &lt;/complexContent>
 * &lt;/complexType>
 * </pre>
 * 
 * 
 */
@XmlAccessorType(XmlAccessType.FIELD)
@XmlType(name = "Input")
public class Input {

    @XmlAttribute(name = "objectId", required = true)
    protected String objectId;
    @XmlAttribute(name = "objectType", required = true)
    protected String objectType;
    @XmlAttribute(name = "extractionPath", required = true)
    protected String extractionPath;

    /**
     * Gets the value of the objectId property.
     * 
     * @return
     *     possible object is
     *     {@link String }
     *     
     */
    public String getObjectId() {
        return objectId;
    }

    /**
     * Sets the value of the objectId property.
     * 
     * @param value
     *     allowed object is
     *     {@link String }
     *     
     */
    public void setObjectId(String value) {
        this.objectId = value;
    }

    /**
     * Gets the value of the objectType property.
     * 
     * @return
     *     possible object is
     *     {@link String }
     *     
     */
    public String getObjectType() {
        return objectType;
    }

    /**
     * Sets the value of the objectType property.
     * 
     * @param value
     *     allowed object is
     *     {@link String }
     *     
     */
    public void setObjectType(String value) {
        this.objectType = value;
    }

    /**
     * Gets the value of the extractionPath property.
     * 
     * @return
     *     possible object is
     *     {@link String }
     *     
     */
    public String getExtractionPath() {
        return extractionPath;
    }

    /**
     * Sets the value of the extractionPath property.
     * 
     * @param value
     *     allowed object is
     *     {@link String }
     *     
     */
    public void setExtractionPath(String value) {
        this.extractionPath = value;
    }

}
