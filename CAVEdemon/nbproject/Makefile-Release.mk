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
CND_CONF=Release
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/core.o \
	${OBJECTDIR}/device.o \
	${OBJECTDIR}/deviceBuilder.o \
	${OBJECTDIR}/eventBuilder.o \
	${OBJECTDIR}/eventMessage.o \
	${OBJECTDIR}/eventMessageNotice.o \
	${OBJECTDIR}/main.o \
	${OBJECTDIR}/mockInModule.o \
	${OBJECTDIR}/mockOutModule.o \
	${OBJECTDIR}/module.o \
	${OBJECTDIR}/moduleBuilder.o \
	${OBJECTDIR}/simpleModule.o \
	${OBJECTDIR}/standardInputModule.o \
	${OBJECTDIR}/tinyxml/event.o \
	${OBJECTDIR}/tinyxml/tinystr.o \
	${OBJECTDIR}/tinyxml/tinyxml.o \
	${OBJECTDIR}/tinyxml/tinyxmlerror.o \
	${OBJECTDIR}/tinyxml/tinyxmlparser.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

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
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/cavedemon ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/core.o: core.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/core.o core.cpp

${OBJECTDIR}/device.o: device.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/device.o device.cpp

${OBJECTDIR}/deviceBuilder.o: deviceBuilder.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/deviceBuilder.o deviceBuilder.cpp

${OBJECTDIR}/eventBuilder.o: eventBuilder.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/eventBuilder.o eventBuilder.cpp

${OBJECTDIR}/eventMessage.o: eventMessage.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/eventMessage.o eventMessage.cpp

${OBJECTDIR}/eventMessageNotice.o: eventMessageNotice.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/eventMessageNotice.o eventMessageNotice.cpp

${OBJECTDIR}/main.o: main.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main.o main.cpp

${OBJECTDIR}/mockInModule.o: mockInModule.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/mockInModule.o mockInModule.cpp

${OBJECTDIR}/mockOutModule.o: mockOutModule.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/mockOutModule.o mockOutModule.cpp

${OBJECTDIR}/module.o: module.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/module.o module.cpp

${OBJECTDIR}/moduleBuilder.o: moduleBuilder.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/moduleBuilder.o moduleBuilder.cpp

${OBJECTDIR}/simpleModule.o: simpleModule.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/simpleModule.o simpleModule.cpp

${OBJECTDIR}/standardInputModule.o: standardInputModule.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/standardInputModule.o standardInputModule.cpp

${OBJECTDIR}/tinyxml/event.o: tinyxml/event.cpp 
	${MKDIR} -p ${OBJECTDIR}/tinyxml
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/tinyxml/event.o tinyxml/event.cpp

${OBJECTDIR}/tinyxml/tinystr.o: tinyxml/tinystr.cpp 
	${MKDIR} -p ${OBJECTDIR}/tinyxml
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/tinyxml/tinystr.o tinyxml/tinystr.cpp

${OBJECTDIR}/tinyxml/tinyxml.o: tinyxml/tinyxml.cpp 
	${MKDIR} -p ${OBJECTDIR}/tinyxml
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/tinyxml/tinyxml.o tinyxml/tinyxml.cpp

${OBJECTDIR}/tinyxml/tinyxmlerror.o: tinyxml/tinyxmlerror.cpp 
	${MKDIR} -p ${OBJECTDIR}/tinyxml
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/tinyxml/tinyxmlerror.o tinyxml/tinyxmlerror.cpp

${OBJECTDIR}/tinyxml/tinyxmlparser.o: tinyxml/tinyxmlparser.cpp 
	${MKDIR} -p ${OBJECTDIR}/tinyxml
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/tinyxml/tinyxmlparser.o tinyxml/tinyxmlparser.cpp

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
