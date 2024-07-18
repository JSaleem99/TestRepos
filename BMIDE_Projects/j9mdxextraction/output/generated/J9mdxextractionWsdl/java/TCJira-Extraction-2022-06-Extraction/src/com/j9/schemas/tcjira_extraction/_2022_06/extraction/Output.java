
package com.j9.schemas.tcjira_extraction._2022_06.extraction;

import javax.xml.bind.annotation.XmlAccessType;
import javax.xml.bind.annotation.XmlAccessorType;
import javax.xml.bind.annotation.XmlAttribute;
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
 *       &lt;/sequence>
 *       &lt;attribute name="jsonPath" use="required" type="{http://www.w3.org/2001/XMLSchema}string" />
 *     &lt;/restriction>
 *   &lt;/complexContent>
 * &lt;/complexType>
 * </pre>
 * 
 * 
 */
@XmlAccessorType(XmlAccessType.FIELD)
@XmlType(name = "")
@XmlRootElement(name = "Output")
public class Output {

    @XmlAttribute(name = "jsonPath", required = true)
    protected String jsonPath;

    /**
     * Gets the value of the jsonPath property.
     * 
     * @return
     *     possible object is
     *     {@link String }
     *     
     */
    public String getJsonPath() {
        return jsonPath;
    }

    /**
     * Sets the value of the jsonPath property.
     * 
     * @param value
     *     allowed object is
     *     {@link String }
     *     
     */
    public void setJsonPath(String value) {
        this.jsonPath = value;
    }

}
