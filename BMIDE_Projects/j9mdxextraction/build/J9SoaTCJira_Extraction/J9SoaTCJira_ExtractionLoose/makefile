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
J9SOATCJIRA_EXTRACTIONLOOSE_CLS       = $(PROJECT_CLS)$(PS)J9SoaTCJira_ExtractionLoose
J9SOATCJIRA_EXTRACTIONLOOSE_ANTARGS   = -Dsoa.client.home=$(SOA_CLIENT_KIT) -Dtoolbox.home=$(TOOLBOX_HOME) \
                                 -Dgen.src.home=$(PROJECT_DRV)       -Dclasses.home=$(J9SOATCJIRA_EXTRACTIONLOOSE_CLS) \
                                 -Djars.home=$(PROJECT_JAR)          -Djavac.debug=$(JAVAC_DEBUG)
J9SOATCJIRA_EXTRACTIONLOOSE_JAVA_SRC  = $(PROJECT_DRV)$(PS)J9SoaTCJira_Extraction$(PS)J9SoaTCJira_ExtractionMap.properties
J9SOATCJIRA_EXTRACTIONLOOSE_JAVA_TARG = $(PROJECT_JAR)$(PS)J9SoaTCJira_ExtractionLoose_14000.2.0.jar


J9SoaTCJira_ExtractionLoose_all:   J9SoaTCJira_ExtractionLoose-build_all$(JAVA_LOOSE_ENABLED)
J9SoaTCJira_ExtractionLoose_clean: J9SoaTCJira_ExtractionLoose-build_clean$(JAVA_LOOSE_ENABLED)

# ==================================================
# Build targets for Java Loose Client Bindings
# ==================================================
J9SoaTCJira_ExtractionLoose-build_allNoOp:
J9SoaTCJira_ExtractionLoose-build_all: $(J9SOATCJIRA_EXTRACTIONLOOSE_JAVA_TARG)


$(J9SOATCJIRA_EXTRACTIONLOOSE_JAVA_SRC) :

$(J9SOATCJIRA_EXTRACTIONLOOSE_JAVA_TARG) :  $(J9SOATCJIRA_EXTRACTIONLOOSE_JAVA_SRC)  
	@echo ________________________________________________________________________________
	@echo Building Java Client J9SoaTCJira_ExtractionLoose
	@$(ANT) -file build/J9SoaTCJira_Extraction/J9SoaTCJira_ExtractionLoose/J9SoaTCJira_ExtractionLoose-build.xml $(J9SOATCJIRA_EXTRACTIONLOOSE_ANTARGS) all
	$(COPY_FILE) $(J9SOATCJIRA_EXTRACTIONLOOSE_JAVA_TARG) $(PROJECT_SOA_CLIENT)$(PS)java$(PS)libs
	@echo ________________________________________________________________________________


J9SoaTCJira_ExtractionLoose-build_cleanNoOp :	
J9SoaTCJira_ExtractionLoose-build_clean:
	@echo ________________________________________________________________________________
	@echo Cleaning Java Client J9SoaTCJira_ExtractionLoose
	@$(ANT) -file  build/J9SoaTCJira_Extraction/J9SoaTCJira_ExtractionLoose/J9SoaTCJira_ExtractionLoose-build.xml $(J9SOATCJIRA_EXTRACTIONLOOSE_ANTARGS) clean
	-$(DELETE_FILE)  $(PROJECT_SOA_CLIENT)$(PS)java$(PS)libs$(PS)J9SoaTCJira_ExtractionLoose_14000.2.0.jar
	@echo ________________________________________________________________________________

