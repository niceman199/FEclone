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
CND_PLATFORM=GNU-Linux
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
	${OBJECTDIR}/Enums/newClass.o \
	${OBJECTDIR}/Instantiable/Entity/Entity.o \
	${OBJECTDIR}/Instantiable/Entity/Structure/Structure.o \
	${OBJECTDIR}/Instantiable/Entity/Unit/Character/Character.o \
	${OBJECTDIR}/Instantiable/Entity/Unit/Character/PlayableCharacter/PlayableCharacter.o \
	${OBJECTDIR}/Instantiable/Entity/Unit/Monster/Monster.o \
	${OBJECTDIR}/Instantiable/Entity/Unit/Unit.o \
	${OBJECTDIR}/Instantiable/Instantiable.o \
	${OBJECTDIR}/Instantiable/Map/Map.o \
	${OBJECTDIR}/Instantiable/Map/Tile.o \
	${OBJECTDIR}/Type/Matrix.o \
	${OBJECTDIR}/Type/StatSheet.o \
	${OBJECTDIR}/welcome.o


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
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/niceemblem

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/niceemblem: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/niceemblem ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/Enums/newClass.o: Enums/newClass.cpp 
	${MKDIR} -p ${OBJECTDIR}/Enums
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Enums/newClass.o Enums/newClass.cpp

${OBJECTDIR}/Instantiable/Entity/Entity.o: Instantiable/Entity/Entity.cpp 
	${MKDIR} -p ${OBJECTDIR}/Instantiable/Entity
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Instantiable/Entity/Entity.o Instantiable/Entity/Entity.cpp

${OBJECTDIR}/Instantiable/Entity/Structure/Structure.o: Instantiable/Entity/Structure/Structure.cpp 
	${MKDIR} -p ${OBJECTDIR}/Instantiable/Entity/Structure
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Instantiable/Entity/Structure/Structure.o Instantiable/Entity/Structure/Structure.cpp

${OBJECTDIR}/Instantiable/Entity/Unit/Character/Character.o: Instantiable/Entity/Unit/Character/Character.cpp 
	${MKDIR} -p ${OBJECTDIR}/Instantiable/Entity/Unit/Character
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Instantiable/Entity/Unit/Character/Character.o Instantiable/Entity/Unit/Character/Character.cpp

${OBJECTDIR}/Instantiable/Entity/Unit/Character/PlayableCharacter/PlayableCharacter.o: Instantiable/Entity/Unit/Character/PlayableCharacter/PlayableCharacter.cpp 
	${MKDIR} -p ${OBJECTDIR}/Instantiable/Entity/Unit/Character/PlayableCharacter
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Instantiable/Entity/Unit/Character/PlayableCharacter/PlayableCharacter.o Instantiable/Entity/Unit/Character/PlayableCharacter/PlayableCharacter.cpp

${OBJECTDIR}/Instantiable/Entity/Unit/Monster/Monster.o: Instantiable/Entity/Unit/Monster/Monster.cpp 
	${MKDIR} -p ${OBJECTDIR}/Instantiable/Entity/Unit/Monster
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Instantiable/Entity/Unit/Monster/Monster.o Instantiable/Entity/Unit/Monster/Monster.cpp

${OBJECTDIR}/Instantiable/Entity/Unit/Unit.o: Instantiable/Entity/Unit/Unit.cpp 
	${MKDIR} -p ${OBJECTDIR}/Instantiable/Entity/Unit
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Instantiable/Entity/Unit/Unit.o Instantiable/Entity/Unit/Unit.cpp

${OBJECTDIR}/Instantiable/Instantiable.o: Instantiable/Instantiable.cpp 
	${MKDIR} -p ${OBJECTDIR}/Instantiable
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Instantiable/Instantiable.o Instantiable/Instantiable.cpp

${OBJECTDIR}/Instantiable/Map/Map.o: Instantiable/Map/Map.cpp 
	${MKDIR} -p ${OBJECTDIR}/Instantiable/Map
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Instantiable/Map/Map.o Instantiable/Map/Map.cpp

${OBJECTDIR}/Instantiable/Map/Tile.o: Instantiable/Map/Tile.cpp 
	${MKDIR} -p ${OBJECTDIR}/Instantiable/Map
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Instantiable/Map/Tile.o Instantiable/Map/Tile.cpp

${OBJECTDIR}/Type/Matrix.o: Type/Matrix.cpp 
	${MKDIR} -p ${OBJECTDIR}/Type
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Type/Matrix.o Type/Matrix.cpp

${OBJECTDIR}/Type/StatSheet.o: Type/StatSheet.cpp 
	${MKDIR} -p ${OBJECTDIR}/Type
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Type/StatSheet.o Type/StatSheet.cpp

${OBJECTDIR}/welcome.o: welcome.cc 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/welcome.o welcome.cc

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/niceemblem

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
