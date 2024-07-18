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
J9SOATCOBJECTSYNCAUTOGEN_ANTARGS   = -Dtoolbox.home=$(TOOLBOX_HOME)  \
                                 -Dtemplate.home=$(TEMPLATE_HOME)           -Dgen.src.home=$(PROJECT_DRV) \
                                 -Dproject.soa.client=$(PROJECT_SOA_CLIENT) -Dproject.tc=$(PROJECT_TC) \
                                 -Dplatform=$(PLAT) -Dteamcenter.home=$(TC_ROOT) \
                                 -Dgenerated.stubs="$(GENERATED_STUBS)"

J9SOATCOBJECTSYNCAUTOGEN_AUTO_SRC  = $(PROJECT_HOME)$(PS)extensions$(PS)*.xml
J9SOATCOBJECTSYNCAUTOGEN_AUTO_TARG = $(PROJECT_DRV)$(PS)J9SoaTcObjectSync$(PS)J9SoaTcObjectSyncMap.properties


# ==================================================
# Build targets for Auto-Generation of Service library
# ==================================================
J9SoaTcObjectSyncAutoGen_all:    $(J9SOATCOBJECTSYNCAUTOGEN_AUTO_TARG) 

$(J9SOATCOBJECTSYNCAUTOGEN_AUTO_TARG) : $(J9SOATCOBJECTSYNCAUTOGEN_AUTO_SRC)
	@echo ________________________________________________________________________________
	@echo Auto Generation of Source for Service Library J9SoaTcObjectSync
	@$(SET_ENV) CLASSPATH=$(TOOLBOX_HOME)/xerces_j/xercesImpl.jar$(PD)$(TOOLBOX_HOME)/xerces_j/xml-apis.jar
	@$(ANT) -file build/J9SoaTcObjectSync/J9SoaTcObjectSyncAutoGen/J9SoaTcObjectSyncAutoGen-build.xml $(J9SOATCOBJECTSYNCAUTOGEN_ANTARGS) all
	@echo ________________________________________________________________________________


	
J9SoaTcObjectSyncAutoGen_clean: 
	@echo ________________________________________________________________________________
	@echo Cleaning Auto Generated Source of Service Library J9SoaTcObjectSync
	@$(ANT) -file build/J9SoaTcObjectSync/J9SoaTcObjectSyncAutoGen/J9SoaTcObjectSyncAutoGen-build.xml $(J9SOATCOBJECTSYNCAUTOGEN_ANTARGS) clean  
	@echo ________________________________________________________________________________
