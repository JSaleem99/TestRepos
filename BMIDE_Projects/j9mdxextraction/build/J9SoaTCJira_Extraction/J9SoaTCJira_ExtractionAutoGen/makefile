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
# Define macros for the service library Auto-Generation
# ==================================================   
J9SOATCJIRA_EXTRACTIONAUTOGEN_ANTARGS   = -Dtoolbox.home=$(TOOLBOX_HOME)  \
                                 -Dtemplate.home=$(TEMPLATE_HOME)           -Dgen.src.home=$(PROJECT_DRV) \
                                 -Dproject.soa.client=$(PROJECT_SOA_CLIENT) -Dproject.tc=$(PROJECT_TC) \
                                 -Dplatform=$(PLAT) -Dteamcenter.home=$(TC_ROOT) \
                                 -Dgenerated.stubs="$(GENERATED_STUBS)"

J9SOATCJIRA_EXTRACTIONAUTOGEN_AUTO_SRC  = $(PROJECT_HOME)$(PS)extensions$(PS)*.xml
J9SOATCJIRA_EXTRACTIONAUTOGEN_AUTO_TARG = $(PROJECT_DRV)$(PS)J9SoaTCJira_Extraction$(PS)J9SoaTCJira_ExtractionMap.properties


# ==================================================
# Build targets for Auto-Generation of Service library
# ==================================================
J9SoaTCJira_ExtractionAutoGen_all:    $(J9SOATCJIRA_EXTRACTIONAUTOGEN_AUTO_TARG) 

$(J9SOATCJIRA_EXTRACTIONAUTOGEN_AUTO_TARG) : $(J9SOATCJIRA_EXTRACTIONAUTOGEN_AUTO_SRC)
	@echo ________________________________________________________________________________
	@echo Auto Generation of Source for Service Library J9SoaTCJira_Extraction
	@$(SET_ENV) CLASSPATH=$(TOOLBOX_HOME)/xerces_j/xercesImpl.jar$(PD)$(TOOLBOX_HOME)/xerces_j/xml-apis.jar
	@$(ANT) -file build/J9SoaTCJira_Extraction/J9SoaTCJira_ExtractionAutoGen/J9SoaTCJira_ExtractionAutoGen-build.xml $(J9SOATCJIRA_EXTRACTIONAUTOGEN_ANTARGS) all
	@echo ________________________________________________________________________________


	
J9SoaTCJira_ExtractionAutoGen_clean: 
	@echo ________________________________________________________________________________
	@echo Cleaning Auto Generated Source of Service Library J9SoaTCJira_Extraction
	@$(ANT) -file build/J9SoaTCJira_Extraction/J9SoaTCJira_ExtractionAutoGen/J9SoaTCJira_ExtractionAutoGen-build.xml $(J9SOATCJIRA_EXTRACTIONAUTOGEN_ANTARGS) clean  
	@echo ________________________________________________________________________________
