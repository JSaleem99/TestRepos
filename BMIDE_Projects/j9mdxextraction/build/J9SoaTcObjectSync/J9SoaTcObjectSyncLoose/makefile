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
# Define macros for Loose Client Binding libraries
# ==================================================
J9SOATCOBJECTSYNCLOOSE_CLS       = $(PROJECT_CLS)$(PS)J9SoaTcObjectSyncLoose
J9SOATCOBJECTSYNCLOOSE_ANTARGS   = -Dsoa.client.home=$(SOA_CLIENT_KIT) -Dtoolbox.home=$(TOOLBOX_HOME) \
                                 -Dgen.src.home=$(PROJECT_DRV)       -Dclasses.home=$(J9SOATCOBJECTSYNCLOOSE_CLS) \
                                 -Djars.home=$(PROJECT_JAR)          -Djavac.debug=$(JAVAC_DEBUG)
J9SOATCOBJECTSYNCLOOSE_JAVA_SRC  = $(PROJECT_DRV)$(PS)J9SoaTcObjectSync$(PS)J9SoaTcObjectSyncMap.properties
J9SOATCOBJECTSYNCLOOSE_JAVA_TARG = $(PROJECT_JAR)$(PS)J9SoaTcObjectSyncLoose_14000.2.0.jar


J9SoaTcObjectSyncLoose_all:   J9SoaTcObjectSyncLoose-build_all$(JAVA_LOOSE_ENABLED)
J9SoaTcObjectSyncLoose_clean: J9SoaTcObjectSyncLoose-build_clean$(JAVA_LOOSE_ENABLED)

# ==================================================
# Build targets for Java Loose Client Bindings
# ==================================================
J9SoaTcObjectSyncLoose-build_allNoOp:
J9SoaTcObjectSyncLoose-build_all: $(J9SOATCOBJECTSYNCLOOSE_JAVA_TARG)


$(J9SOATCOBJECTSYNCLOOSE_JAVA_SRC) :

$(J9SOATCOBJECTSYNCLOOSE_JAVA_TARG) :  $(J9SOATCOBJECTSYNCLOOSE_JAVA_SRC)  
	@echo ________________________________________________________________________________
	@echo Building Java Client J9SoaTcObjectSyncLoose
	@$(ANT) -file build/J9SoaTcObjectSync/J9SoaTcObjectSyncLoose/J9SoaTcObjectSyncLoose-build.xml $(J9SOATCOBJECTSYNCLOOSE_ANTARGS) all
	$(COPY_FILE) $(J9SOATCOBJECTSYNCLOOSE_JAVA_TARG) $(PROJECT_SOA_CLIENT)$(PS)java$(PS)libs
	@echo ________________________________________________________________________________


J9SoaTcObjectSyncLoose-build_cleanNoOp :	
J9SoaTcObjectSyncLoose-build_clean:
	@echo ________________________________________________________________________________
	@echo Cleaning Java Client J9SoaTcObjectSyncLoose
	@$(ANT) -file  build/J9SoaTcObjectSync/J9SoaTcObjectSyncLoose/J9SoaTcObjectSyncLoose-build.xml $(J9SOATCOBJECTSYNCLOOSE_ANTARGS) clean
	-$(DELETE_FILE)  $(PROJECT_SOA_CLIENT)$(PS)java$(PS)libs$(PS)J9SoaTcObjectSyncLoose_14000.2.0.jar
	@echo ________________________________________________________________________________

