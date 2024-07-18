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
J9SOATCOBJECTSYNCSTRONG_CLS      = $(PROJECT_CLS)$(PS)J9SoaTcObjectSyncStrong
J9SOATCOBJECTSYNCSTRONG_ANTARGS  = -Dsoa.client.home=$(SOA_CLIENT_KIT) -Dtoolbox.home=$(TOOLBOX_HOME) \
                                -Dgen.src.home=$(PROJECT_DRV)       -Dclasses.home=$(J9SOATCOBJECTSYNCSTRONG_CLS) \
                                -Djars.home=$(PROJECT_JAR)          -Djavac.debug=$(JAVAC_DEBUG)
J9SOATCOBJECTSYNCSTRONG_NETARGS  = /property:Configuration=$(NET_CONFIG),CHSARP_HOME=$(CHSARP_HOME),PROJECT_DRV=$(PROJECT_DRV),PROJECT_NET=$(PROJECT_NET),PROJECT_IOD=$(PROJECT_IOD),SOA_CLIENT_KIT=$(SOA_CLIENT_KIT)
J9SOATCOBJECTSYNCSTRONG_JAVA_SRC = $(PROJECT_DRV)$(PS)J9SoaTcObjectSync$(PS)J9SoaTcObjectSyncMap.properties
J9SOATCOBJECTSYNCSTRONG_JAVA_TARG= $(PROJECT_JAR)$(PS)J9SoaTcObjectSyncStrong_14000.2.0.jar
J9SOATCOBJECTSYNCSTRONG_NET_SRC  = $(PROJECT_DRV)$(PS)J9SoaTcObjectSyncClient$(PS)strong$(PS)net$(PS)*.cs
J9SOATCOBJECTSYNCSTRONG_NET_TARG = $(PROJECT_NET)$(PS)J9SoaTcObjectSyncStrong.dll

# ==================================================
# Build targets for C++ Strong Client Bindings
# ==================================================



J9SoaTcObjectSyncStrong_all:    J9SoaTcObjectSyncStrong-build_all$(JAVA_STRONG_ENABLED)  
J9SoaTcObjectSyncStrong_clean:  J9SoaTcObjectSyncStrong-build_clean$(JAVA_STRONG_ENABLED)


# ==================================================
# Build targets for Java Strong Client Bindings
# ==================================================
J9SoaTcObjectSyncStrong-build_allNoOp:
J9SoaTcObjectSyncStrong-build_all:  $(J9SOATCOBJECTSYNCSTRONG_JAVA_TARG)

$(J9SOATCOBJECTSYNCSTRONG_JAVA_SRC) :

$(J9SOATCOBJECTSYNCSTRONG_JAVA_TARG) :  $(J9SOATCOBJECTSYNCSTRONG_JAVA_SRC)  
	@echo ________________________________________________________________________________
	@echo Building Java Client J9SoaTcObjectSyncStrong
	@$(ANT) -file build/J9SoaTcObjectSync/J9SoaTcObjectSyncStrong/J9SoaTcObjectSyncStrong-build.xml $(J9SOATCOBJECTSYNCSTRONG_ANTARGS) all
	$(COPY_FILE) $(J9SOATCOBJECTSYNCSTRONG_JAVA_TARG) $(PROJECT_SOA_CLIENT)$(PS)java$(PS)libs
	@echo ________________________________________________________________________________

	
J9SoaTcObjectSyncStrong-build_cleanNoOp:
J9SoaTcObjectSyncStrong-build_clean:
	@echo ________________________________________________________________________________
	@echo Cleaning Java Client J9SoaTcObjectSyncStrong
	@$(ANT) -file  build/J9SoaTcObjectSync/J9SoaTcObjectSyncStrong/J9SoaTcObjectSyncStrong-build.xml $(J9SOATCOBJECTSYNCSTRONG_ANTARGS) clean
	-$(DELETE_FILE)  $(PROJECT_SOA_CLIENT)$(PS)java$(PS)libs$(PS)J9SoaTcObjectSyncStrong_14000.2.0.jar
	@echo ________________________________________________________________________________





# ==================================================
# Build targets for .NET Strong Client Bindings
# ==================================================
J9SoaTcObjectSyncStrong-cs_allNoOp:
J9SoaTcObjectSyncStrong-cs_all: $(J9SOATCOBJECTSYNCSTRONG_NET_TARG)

$(J9SOATCOBJECTSYNCSTRONG_NET_SRC) : 

$(J9SOATCOBJECTSYNCSTRONG_NET_TARG) : $(J9SOATCOBJECTSYNCSTRONG_NET_SRC)   
	@echo ________________________________________________________________________________
	@echo Building .NET Client J9SoaTcObjectSyncStrong
	@$(CSHARP_COMPILER) build/J9SoaTcObjectSync/J9SoaTcObjectSyncStrong/J9SoaTcObjectSyncStrong.csproj $(J9SOATCOBJECTSYNCSTRONG_NETARGS) /target:Build
	$(COPY_FILE)  $(J9SOATCOBJECTSYNCSTRONG_NET_TARG) $(PROJECT_SOA_CLIENT)$(PS)net$(PS)libs
	@echo ________________________________________________________________________________

	
J9SoaTcObjectSyncStrong-cs_cleanNoOp: 
J9SoaTcObjectSyncStrong-cs_clean: 
	@echo ________________________________________________________________________________
	@echo Cleaning .NET Client J9SoaTcObjectSyncStrong
	@$(CSHARP_COMPILER) build/J9SoaTcObjectSync/J9SoaTcObjectSyncStrong/J9SoaTcObjectSyncStrong.csproj $(J9SOATCOBJECTSYNCSTRONG_NETARGS) /target:Clean
	-$(DELETE_FILE)  $(PROJECT_SOA_CLIENT)$(PS)net$(PS)libs$(PS)J9SoaTcObjectSyncStrong.dll
	@echo ________________________________________________________________________________


