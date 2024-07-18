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
# Define macros for Strong Client Binding libraries
# ==================================================
J9SOATCJIRA_EXTRACTIONSTRONG_CLS      = $(PROJECT_CLS)$(PS)J9SoaTCJira_ExtractionStrong
J9SOATCJIRA_EXTRACTIONSTRONG_ANTARGS  = -Dsoa.client.home=$(SOA_CLIENT_KIT) -Dtoolbox.home=$(TOOLBOX_HOME) \
                                -Dgen.src.home=$(PROJECT_DRV)       -Dclasses.home=$(J9SOATCJIRA_EXTRACTIONSTRONG_CLS) \
                                -Djars.home=$(PROJECT_JAR)          -Djavac.debug=$(JAVAC_DEBUG)
J9SOATCJIRA_EXTRACTIONSTRONG_NETARGS  = /property:Configuration=$(NET_CONFIG),CHSARP_HOME=$(CHSARP_HOME),PROJECT_DRV=$(PROJECT_DRV),PROJECT_NET=$(PROJECT_NET),PROJECT_IOD=$(PROJECT_IOD),SOA_CLIENT_KIT=$(SOA_CLIENT_KIT)
J9SOATCJIRA_EXTRACTIONSTRONG_JAVA_SRC = $(PROJECT_DRV)$(PS)J9SoaTCJira_Extraction$(PS)J9SoaTCJira_ExtractionMap.properties
J9SOATCJIRA_EXTRACTIONSTRONG_JAVA_TARG= $(PROJECT_JAR)$(PS)J9SoaTCJira_ExtractionStrong_14000.2.0.jar
J9SOATCJIRA_EXTRACTIONSTRONG_NET_SRC  = $(PROJECT_DRV)$(PS)J9SoaTCJira_ExtractionClient$(PS)strong$(PS)net$(PS)*.cs
J9SOATCJIRA_EXTRACTIONSTRONG_NET_TARG = $(PROJECT_NET)$(PS)J9SoaTCJira_ExtractionStrong.dll

# ==================================================
# Build targets for C++ Strong Client Bindings
# ==================================================



J9SoaTCJira_ExtractionStrong_all:    J9SoaTCJira_ExtractionStrong-build_all$(JAVA_STRONG_ENABLED)  
J9SoaTCJira_ExtractionStrong_clean:  J9SoaTCJira_ExtractionStrong-build_clean$(JAVA_STRONG_ENABLED)


# ==================================================
# Build targets for Java Strong Client Bindings
# ==================================================
J9SoaTCJira_ExtractionStrong-build_allNoOp:
J9SoaTCJira_ExtractionStrong-build_all:  $(J9SOATCJIRA_EXTRACTIONSTRONG_JAVA_TARG)

$(J9SOATCJIRA_EXTRACTIONSTRONG_JAVA_SRC) :

$(J9SOATCJIRA_EXTRACTIONSTRONG_JAVA_TARG) :  $(J9SOATCJIRA_EXTRACTIONSTRONG_JAVA_SRC)  
	@echo ________________________________________________________________________________
	@echo Building Java Client J9SoaTCJira_ExtractionStrong
	@$(ANT) -file build/J9SoaTCJira_Extraction/J9SoaTCJira_ExtractionStrong/J9SoaTCJira_ExtractionStrong-build.xml $(J9SOATCJIRA_EXTRACTIONSTRONG_ANTARGS) all
	$(COPY_FILE) $(J9SOATCJIRA_EXTRACTIONSTRONG_JAVA_TARG) $(PROJECT_SOA_CLIENT)$(PS)java$(PS)libs
	@echo ________________________________________________________________________________

	
J9SoaTCJira_ExtractionStrong-build_cleanNoOp:
J9SoaTCJira_ExtractionStrong-build_clean:
	@echo ________________________________________________________________________________
	@echo Cleaning Java Client J9SoaTCJira_ExtractionStrong
	@$(ANT) -file  build/J9SoaTCJira_Extraction/J9SoaTCJira_ExtractionStrong/J9SoaTCJira_ExtractionStrong-build.xml $(J9SOATCJIRA_EXTRACTIONSTRONG_ANTARGS) clean
	-$(DELETE_FILE)  $(PROJECT_SOA_CLIENT)$(PS)java$(PS)libs$(PS)J9SoaTCJira_ExtractionStrong_14000.2.0.jar
	@echo ________________________________________________________________________________





# ==================================================
# Build targets for .NET Strong Client Bindings
# ==================================================
J9SoaTCJira_ExtractionStrong-cs_allNoOp:
J9SoaTCJira_ExtractionStrong-cs_all: $(J9SOATCJIRA_EXTRACTIONSTRONG_NET_TARG)

$(J9SOATCJIRA_EXTRACTIONSTRONG_NET_SRC) : 

$(J9SOATCJIRA_EXTRACTIONSTRONG_NET_TARG) : $(J9SOATCJIRA_EXTRACTIONSTRONG_NET_SRC)   
	@echo ________________________________________________________________________________
	@echo Building .NET Client J9SoaTCJira_ExtractionStrong
	@$(CSHARP_COMPILER) build/J9SoaTCJira_Extraction/J9SoaTCJira_ExtractionStrong/J9SoaTCJira_ExtractionStrong.csproj $(J9SOATCJIRA_EXTRACTIONSTRONG_NETARGS) /target:Build
	$(COPY_FILE)  $(J9SOATCJIRA_EXTRACTIONSTRONG_NET_TARG) $(PROJECT_SOA_CLIENT)$(PS)net$(PS)libs
	@echo ________________________________________________________________________________

	
J9SoaTCJira_ExtractionStrong-cs_cleanNoOp: 
J9SoaTCJira_ExtractionStrong-cs_clean: 
	@echo ________________________________________________________________________________
	@echo Cleaning .NET Client J9SoaTCJira_ExtractionStrong
	@$(CSHARP_COMPILER) build/J9SoaTCJira_Extraction/J9SoaTCJira_ExtractionStrong/J9SoaTCJira_ExtractionStrong.csproj $(J9SOATCJIRA_EXTRACTIONSTRONG_NETARGS) /target:Clean
	-$(DELETE_FILE)  $(PROJECT_SOA_CLIENT)$(PS)net$(PS)libs$(PS)J9SoaTCJira_ExtractionStrong.dll
	@echo ________________________________________________________________________________


