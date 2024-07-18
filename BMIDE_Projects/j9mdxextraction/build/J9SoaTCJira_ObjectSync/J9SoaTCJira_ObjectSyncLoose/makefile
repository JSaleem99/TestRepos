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
J9SOATCJIRA_OBJECTSYNCLOOSE_CLS       = $(PROJECT_CLS)$(PS)J9SoaTCJira_ObjectSyncLoose
J9SOATCJIRA_OBJECTSYNCLOOSE_ANTARGS   = -Dsoa.client.home=$(SOA_CLIENT_KIT) -Dtoolbox.home=$(TOOLBOX_HOME) \
                                 -Dgen.src.home=$(PROJECT_DRV)       -Dclasses.home=$(J9SOATCJIRA_OBJECTSYNCLOOSE_CLS) \
                                 -Djars.home=$(PROJECT_JAR)          -Djavac.debug=$(JAVAC_DEBUG)
J9SOATCJIRA_OBJECTSYNCLOOSE_JAVA_SRC  = $(PROJECT_DRV)$(PS)J9SoaTCJira_ObjectSync$(PS)J9SoaTCJira_ObjectSyncMap.properties
J9SOATCJIRA_OBJECTSYNCLOOSE_JAVA_TARG = $(PROJECT_JAR)$(PS)J9SoaTCJira_ObjectSyncLoose_14000.2.0.jar


J9SoaTCJira_ObjectSyncLoose_all:   J9SoaTCJira_ObjectSyncLoose-build_all$(JAVA_LOOSE_ENABLED)
J9SoaTCJira_ObjectSyncLoose_clean: J9SoaTCJira_ObjectSyncLoose-build_clean$(JAVA_LOOSE_ENABLED)

# ==================================================
# Build targets for Java Loose Client Bindings
# ==================================================
J9SoaTCJira_ObjectSyncLoose-build_allNoOp:
J9SoaTCJira_ObjectSyncLoose-build_all: $(J9SOATCJIRA_OBJECTSYNCLOOSE_JAVA_TARG)


$(J9SOATCJIRA_OBJECTSYNCLOOSE_JAVA_SRC) :

$(J9SOATCJIRA_OBJECTSYNCLOOSE_JAVA_TARG) :  $(J9SOATCJIRA_OBJECTSYNCLOOSE_JAVA_SRC)  
	@echo ________________________________________________________________________________
	@echo Building Java Client J9SoaTCJira_ObjectSyncLoose
	@$(ANT) -file build/J9SoaTCJira_ObjectSync/J9SoaTCJira_ObjectSyncLoose/J9SoaTCJira_ObjectSyncLoose-build.xml $(J9SOATCJIRA_OBJECTSYNCLOOSE_ANTARGS) all
	$(COPY_FILE) $(J9SOATCJIRA_OBJECTSYNCLOOSE_JAVA_TARG) $(PROJECT_SOA_CLIENT)$(PS)java$(PS)libs
	@echo ________________________________________________________________________________


J9SoaTCJira_ObjectSyncLoose-build_cleanNoOp :	
J9SoaTCJira_ObjectSyncLoose-build_clean:
	@echo ________________________________________________________________________________
	@echo Cleaning Java Client J9SoaTCJira_ObjectSyncLoose
	@$(ANT) -file  build/J9SoaTCJira_ObjectSync/J9SoaTCJira_ObjectSyncLoose/J9SoaTCJira_ObjectSyncLoose-build.xml $(J9SOATCJIRA_OBJECTSYNCLOOSE_ANTARGS) clean
	-$(DELETE_FILE)  $(PROJECT_SOA_CLIENT)$(PS)java$(PS)libs$(PS)J9SoaTCJira_ObjectSyncLoose_14000.2.0.jar
	@echo ________________________________________________________________________________

