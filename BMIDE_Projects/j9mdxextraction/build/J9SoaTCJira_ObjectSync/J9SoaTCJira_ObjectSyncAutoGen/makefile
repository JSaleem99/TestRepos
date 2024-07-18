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
J9SOATCJIRA_OBJECTSYNCAUTOGEN_ANTARGS   = -Dtoolbox.home=$(TOOLBOX_HOME)  \
                                 -Dtemplate.home=$(TEMPLATE_HOME)           -Dgen.src.home=$(PROJECT_DRV) \
                                 -Dproject.soa.client=$(PROJECT_SOA_CLIENT) -Dproject.tc=$(PROJECT_TC) \
                                 -Dplatform=$(PLAT) -Dteamcenter.home=$(TC_ROOT) \
                                 -Dgenerated.stubs="$(GENERATED_STUBS)"

J9SOATCJIRA_OBJECTSYNCAUTOGEN_AUTO_SRC  = $(PROJECT_HOME)$(PS)extensions$(PS)*.xml
J9SOATCJIRA_OBJECTSYNCAUTOGEN_AUTO_TARG = $(PROJECT_DRV)$(PS)J9SoaTCJira_ObjectSync$(PS)J9SoaTCJira_ObjectSyncMap.properties


# ==================================================
# Build targets for Auto-Generation of Service library
# ==================================================
J9SoaTCJira_ObjectSyncAutoGen_all:    $(J9SOATCJIRA_OBJECTSYNCAUTOGEN_AUTO_TARG) 

$(J9SOATCJIRA_OBJECTSYNCAUTOGEN_AUTO_TARG) : $(J9SOATCJIRA_OBJECTSYNCAUTOGEN_AUTO_SRC)
	@echo ________________________________________________________________________________
	@echo Auto Generation of Source for Service Library J9SoaTCJira_ObjectSync
	@$(SET_ENV) CLASSPATH=$(TOOLBOX_HOME)/xerces_j/xercesImpl.jar$(PD)$(TOOLBOX_HOME)/xerces_j/xml-apis.jar
	@$(ANT) -file build/J9SoaTCJira_ObjectSync/J9SoaTCJira_ObjectSyncAutoGen/J9SoaTCJira_ObjectSyncAutoGen-build.xml $(J9SOATCJIRA_OBJECTSYNCAUTOGEN_ANTARGS) all
	@echo ________________________________________________________________________________


	
J9SoaTCJira_ObjectSyncAutoGen_clean: 
	@echo ________________________________________________________________________________
	@echo Cleaning Auto Generated Source of Service Library J9SoaTCJira_ObjectSync
	@$(ANT) -file build/J9SoaTCJira_ObjectSync/J9SoaTCJira_ObjectSyncAutoGen/J9SoaTCJira_ObjectSyncAutoGen-build.xml $(J9SOATCJIRA_OBJECTSYNCAUTOGEN_ANTARGS) clean  
	@echo ________________________________________________________________________________
