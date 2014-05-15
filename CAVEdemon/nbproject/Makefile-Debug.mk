#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=GNU-Linux-x86
CND_DLIB_EXT=so
CND_CONF=Debug
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/core.o \
	${OBJECTDIR}/defaultDevice.o \
	${OBJECTDIR}/device.o \
	${OBJECTDIR}/deviceBuilder.o \
	${OBJECTDIR}/eventBuilder.o \
	${OBJECTDIR}/eventHandler/Event.o \
	${OBJECTDIR}/eventHandler/EventDevice.o \
	${OBJECTDIR}/eventHandler/err_codes.o \
	${OBJECTDIR}/eventMessage.o \
	${OBJECTDIR}/eventMessageDataUpdate.o \
	${OBJECTDIR}/eventMessageFeedback.o \
	${OBJECTDIR}/eventMessageNewDevice.o \
	${OBJECTDIR}/eventMessageNotice.o \
	${OBJECTDIR}/ic.o \
	${OBJECTDIR}/icAbsAxis.o \
	${OBJECTDIR}/icButton.o \
	${OBJECTDIR}/icRelAxis.o \
	${OBJECTDIR}/main.o \
	${OBJECTDIR}/mockInModule.o \
	${OBJECTDIR}/mockOutModule.o \
	${OBJECTDIR}/module.o \
	${OBJECTDIR}/moduleBuilder.o \
	${OBJECTDIR}/shm/shm_common.o \
	${OBJECTDIR}/shm/trackd_common.o \
	${OBJECTDIR}/simpleModule.o \
	${OBJECTDIR}/standardInputModule.o \
	${OBJECTDIR}/tinyxml/event.o \
	${OBJECTDIR}/tinyxml/tinystr.o \
	${OBJECTDIR}/tinyxml/tinyxml.o \
	${OBJECTDIR}/tinyxml/tinyxmlerror.o \
	${OBJECTDIR}/tinyxml/tinyxmlparser.o \
	${OBJECTDIR}/trackdModule.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=-pthread
CXXFLAGS=-pthread

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/cavedemon

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/cavedemon: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/cavedemon ${OBJECTFILES} ${LDLIBSOPTIONS} -pthread

${OBJECTDIR}/core.o: core.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/core.o core.cpp

${OBJECTDIR}/defaultDevice.o: defaultDevice.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/defaultDevice.o defaultDevice.cpp

${OBJECTDIR}/device.o: device.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/device.o device.cpp

${OBJECTDIR}/deviceBuilder.o: deviceBuilder.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/deviceBuilder.o deviceBuilder.cpp

${OBJECTDIR}/eventBuilder.o: eventBuilder.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/eventBuilder.o eventBuilder.cpp

${OBJECTDIR}/eventHandler/Event.o: eventHandler/Event.cpp 
	${MKDIR} -p ${OBJECTDIR}/eventHandler
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/eventHandler/Event.o eventHandler/Event.cpp

${OBJECTDIR}/eventHandler/EventDevice.o: eventHandler/EventDevice.cpp 
	${MKDIR} -p ${OBJECTDIR}/eventHandler
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/eventHandler/EventDevice.o eventHandler/EventDevice.cpp

${OBJECTDIR}/eventHandler/err_codes.o: eventHandler/err_codes.cpp 
	${MKDIR} -p ${OBJECTDIR}/eventHandler
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/eventHandler/err_codes.o eventHandler/err_codes.cpp

${OBJECTDIR}/eventMessage.o: eventMessage.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/eventMessage.o eventMessage.cpp

${OBJECTDIR}/eventMessageDataUpdate.o: eventMessageDataUpdate.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/eventMessageDataUpdate.o eventMessageDataUpdate.cpp

${OBJECTDIR}/eventMessageFeedback.o: eventMessageFeedback.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/eventMessageFeedback.o eventMessageFeedback.cpp

${OBJECTDIR}/eventMessageNewDevice.o: eventMessageNewDevice.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/eventMessageNewDevice.o eventMessageNewDevice.cpp

${OBJECTDIR}/eventMessageNotice.o: eventMessageNotice.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/eventMessageNotice.o eventMessageNotice.cpp

${OBJECTDIR}/ic.o: ic.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ic.o ic.cpp

${OBJECTDIR}/icAbsAxis.o: icAbsAxis.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/icAbsAxis.o icAbsAxis.cpp

${OBJECTDIR}/icButton.o: icButton.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/icButton.o icButton.cpp

${OBJECTDIR}/icRelAxis.o: icRelAxis.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/icRelAxis.o icRelAxis.cpp

${OBJECTDIR}/main.o: main.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main.o main.cpp

${OBJECTDIR}/mockInModule.o: mockInModule.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/mockInModule.o mockInModule.cpp

${OBJECTDIR}/mockOutModule.o: mockOutModule.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/mockOutModule.o mockOutModule.cpp

${OBJECTDIR}/module.o: module.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/module.o module.cpp

${OBJECTDIR}/moduleBuilder.o: moduleBuilder.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/moduleBuilder.o moduleBuilder.cpp

${OBJECTDIR}/shm/shm_common.o: shm/shm_common.cpp 
	${MKDIR} -p ${OBJECTDIR}/shm
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/shm/shm_common.o shm/shm_common.cpp

${OBJECTDIR}/shm/trackd_common.o: shm/trackd_common.cpp 
	${MKDIR} -p ${OBJECTDIR}/shm
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/shm/trackd_common.o shm/trackd_common.cpp

${OBJECTDIR}/simpleModule.o: simpleModule.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/simpleModule.o simpleModule.cpp

${OBJECTDIR}/standardInputModule.o: standardInputModule.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/standardInputModule.o standardInputModule.cpp

${OBJECTDIR}/tinyxml/event.o: tinyxml/event.cpp 
	${MKDIR} -p ${OBJECTDIR}/tinyxml
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/tinyxml/event.o tinyxml/event.cpp

${OBJECTDIR}/tinyxml/tinystr.o: tinyxml/tinystr.cpp 
	${MKDIR} -p ${OBJECTDIR}/tinyxml
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/tinyxml/tinystr.o tinyxml/tinystr.cpp

${OBJECTDIR}/tinyxml/tinyxml.o: tinyxml/tinyxml.cpp 
	${MKDIR} -p ${OBJECTDIR}/tinyxml
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/tinyxml/tinyxml.o tinyxml/tinyxml.cpp

${OBJECTDIR}/tinyxml/tinyxmlerror.o: tinyxml/tinyxmlerror.cpp 
	${MKDIR} -p ${OBJECTDIR}/tinyxml
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/tinyxml/tinyxmlerror.o tinyxml/tinyxmlerror.cpp

${OBJECTDIR}/tinyxml/tinyxmlparser.o: tinyxml/tinyxmlparser.cpp 
	${MKDIR} -p ${OBJECTDIR}/tinyxml
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/tinyxml/tinyxmlparser.o tinyxml/tinyxmlparser.cpp

${OBJECTDIR}/trackdModule.o: trackdModule.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/trackdModule.o trackdModule.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/cavedemon

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
