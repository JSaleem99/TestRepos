# ==================================================
# Copyright 2013.
# Siemens Product Lifecycle Management Software Inc.
# All Rights Reserved.
# ==================================================
# ==================================================
#             Auto-generated source
#                 DO NOT EDIT
# ==================================================



# ==================================================
# Define macros for WSDLs
# ==================================================
J9MDXEXTRACTIONWSDL_CLS       = $(PROJECT_CLS)$(PS)J9mdxextractionWsdl
J9MDXEXTRACTIONWSDL_ANTARGS   = -Dsoa.client.home=$(SOA_CLIENT_KIT)        -Dtoolbox.home=$(TOOLBOX_HOME)   \
                                 -Dtemplate.home=$(TEMPLATE_HOME)           -Dgen.src.home=$(PROJECT_DRV)  \
                                 -Dclasses.home=$(J9MDXEXTRACTIONWSDL_CLS) -Dplatform=$(PLAT) \
                                 -Djars.home=$(PROJECT_JAR)                 -Djavac.debug=$(JAVAC_DEBUG) \
                                 -Dproject.soa.client=$(PROJECT_SOA_CLIENT) -Dproject.tc=$(PROJECT_TC) 
J9MDXEXTRACTIONWSDL_NETARGS   = /property:Configuration=$(CONFIG),CHSARP_HOME=$(CHSARP_HOME),PROJECT_DRV=$(PROJECT_DRV),PROJECT_NET=$(PROJECT_NET),PROJECT_IOD=$(PROJECT_IOD),SOA_CLIENT_KIT=$(SOA_CLIENT_KIT)
J9MDXEXTRACTIONWSDL_AUTO_SRC  = $(PROJECT_HOME)$(PS)extensions$(PS)*.xml
J9MDXEXTRACTIONWSDL_AUTO_TARG = $(PROJECT_DRV)$(PS)J9mdxextractionWsdl$(PS)touch.txt






J9mdxextractionWsdl_all:    J9mdxextractionWsdlAutoGen-build_all$(WSDLS_ENABLED)  
J9mdxextractionWsdl_clean:  J9mdxextractionWsdlAutoGen-build_clean$(WSDLS_ENABLED)

# ==================================================
# Build targets for WSDL Auto-Generation and
# Compile of Java Web Tier artifacts
# ==================================================
J9mdxextractionWsdlAutoGen-build_allNoOp:
J9mdxextractionWsdlAutoGen-build_all: $(J9MDXEXTRACTIONWSDL_AUTO_TARG)


$(J9MDXEXTRACTIONWSDL_AUTO_TARG) : $(J9MDXEXTRACTIONWSDL_AUTO_SRC)
	@echo ________________________________________________________________________________
	@echo Auto Generation of WSDLs and web-tier endpoints J9mdxextractionWsdl
	@$(ANT) -file build/J9mdxextractionWsdl/J9mdxextractionWsdlAutoGen-build.xml $(J9MDXEXTRACTIONWSDL_ANTARGS) all
	$(COPY_FILE) $(PROJECT_DRV)$(PS)J9mdxextractionWsdl$(PS)wsdls$(PS)*.wsdl $(PROJECT_SOA_CLIENT)$(PS)wsdls
	$(COPY_FILE) $(PROJECT_DRV)$(PS)J9mdxextractionWsdl$(PS)wsdls$(PS)*.xsd  $(PROJECT_SOA_CLIENT)$(PS)wsdls
	@echo ________________________________________________________________________________



J9mdxextractionWsdlAutoGen-build_cleanNoOp:	
J9mdxextractionWsdlAutoGen-build_clean:
	@echo ________________________________________________________________________________
	@echo Cleaning Auto Generated  WSDLs and web-tier endpoints J9mdxextractionWsdl
	@$(ANT) -file  build/J9mdxextractionWsdl/J9mdxextractionWsdlAutoGen-build.xml $(J9MDXEXTRACTIONWSDL_ANTARGS) clean
	@echo ________________________________________________________________________________



