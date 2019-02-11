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
	${OBJECTDIR}/C01_Console/E01_HelloWorld.o \
	${OBJECTDIR}/C01_Console/E02_HelloWorld_concat.o \
	${OBJECTDIR}/C01_Console/E03_HelloWorld_endl.o \
	${OBJECTDIR}/C01_Console/E04_HelloWorld_multiple.o \
	${OBJECTDIR}/C01_Console/E05_Welcome_cin.o \
	${OBJECTDIR}/C02_Variables/E01_VariableDefinition.o \
	${OBJECTDIR}/C02_Variables/E02_VariableTypes.o \
	${OBJECTDIR}/C02_Variables/E03_VariableOverload.o \
	${OBJECTDIR}/C02_Variables/E04_NoInitializedVariables.o \
	${OBJECTDIR}/C02_Variables/E05_GlobalVariables.o \
	${OBJECTDIR}/C02_Variables/E06_Pointers.o \
	${OBJECTDIR}/C02_Variables/E07_Constants.o \
	${OBJECTDIR}/C02_Variables/E08_SizeOf.o \
	${OBJECTDIR}/C02_Variables/E09_HeapMemoryManage.o \
	${OBJECTDIR}/C03_Operators/E01_Arithmetics.o \
	${OBJECTDIR}/C03_Operators/E02_IncDec.o \
	${OBJECTDIR}/C03_Operators/E03_ShortHand.o \
	${OBJECTDIR}/C03_Operators/E04_Relational.o \
	${OBJECTDIR}/C03_Operators/E05_Logical.o \
	${OBJECTDIR}/C04_ControBlocks/E01_IfBlock.o \
	${OBJECTDIR}/C04_ControBlocks/E02_IfElseBlocks.o \
	${OBJECTDIR}/C04_ControBlocks/E03_NestedIfBlocks.o \
	${OBJECTDIR}/C04_ControBlocks/E04_ElseIf.o \
	${OBJECTDIR}/C04_ControBlocks/E05_OperadorTernario.o \
	${OBJECTDIR}/C04_ControBlocks/E06_NestedOperadorTernario.o \
	${OBJECTDIR}/C04_ControBlocks/E07_SwitchBlock.o \
	${OBJECTDIR}/C04_ControBlocks/E08_SwitchBlockMultiple.o \
	${OBJECTDIR}/C04_ControBlocks/E09_SwitchBlockRange.o \
	${OBJECTDIR}/C05_LoopBlocks/E01_WhileBlock.o \
	${OBJECTDIR}/C05_LoopBlocks/E02_InfiniteLoop.o \
	${OBJECTDIR}/C05_LoopBlocks/E03_InfiniteLoop.o \
	${OBJECTDIR}/C05_LoopBlocks/E04_DoWhileLoop.o \
	${OBJECTDIR}/C05_LoopBlocks/E05_ForLoop.o \
	${OBJECTDIR}/C05_LoopBlocks/E06_NestedLoops.o \
	${OBJECTDIR}/C05_LoopBlocks/E07_SearchingInLoops.o \
	${OBJECTDIR}/C05_LoopBlocks/E08_FilterLoops.o \
	${OBJECTDIR}/C06_Arrays/E01_ArrayDefinition.o \
	${OBJECTDIR}/C06_Arrays/E02_ArrayFill.o \
	${OBJECTDIR}/C06_Arrays/E03_MultiDimensionalArray.o \
	${OBJECTDIR}/C06_Arrays/E04_ArrayAddress.o \
	${OBJECTDIR}/C06_Arrays/E05_ConstantsArray.o \
	${OBJECTDIR}/C07_Functions/E01_BasicFunction.o \
	${OBJECTDIR}/C07_Functions/E02_FunctionArguments.o \
	${OBJECTDIR}/C07_Functions/E03_FunctionReturnValue.o \
	${OBJECTDIR}/C07_Functions/E04_FunctionVoidReturn.o \
	${OBJECTDIR}/C07_Functions/E05_FunctionPrototype.o \
	${OBJECTDIR}/C07_Functions/E06_DefaultParameters.o \
	${OBJECTDIR}/C07_Functions/E07_InlineFunction.o \
	${OBJECTDIR}/C07_Functions/E08_VariableScope.o \
	${OBJECTDIR}/C07_Functions/E09_MultipleReturn.o \
	${OBJECTDIR}/C07_Functions/E10_PassParametersByReference.o \
	${OBJECTDIR}/C07_Functions/E11_PassArrayProtected.o \
	${OBJECTDIR}/C07_Functions/E12_RangePointers.o \
	${OBJECTDIR}/C08_Structures/E01_BasicStructure.o \
	${OBJECTDIR}/C08_Structures/E02_StructurePointer.o \
	${OBJECTDIR}/C08_Structures/E03_NestedStructure.o \
	${OBJECTDIR}/C08_Structures/E04_StructureSize.o \
	${OBJECTDIR}/C08_Structures/E05_Unions.o


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
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/cpptraining

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/cpptraining: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/cpptraining ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/C01_Console/E01_HelloWorld.o: C01_Console/E01_HelloWorld.cpp
	${MKDIR} -p ${OBJECTDIR}/C01_Console
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C01_Console/E01_HelloWorld.o C01_Console/E01_HelloWorld.cpp

${OBJECTDIR}/C01_Console/E02_HelloWorld_concat.o: C01_Console/E02_HelloWorld_concat.cpp
	${MKDIR} -p ${OBJECTDIR}/C01_Console
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C01_Console/E02_HelloWorld_concat.o C01_Console/E02_HelloWorld_concat.cpp

${OBJECTDIR}/C01_Console/E03_HelloWorld_endl.o: C01_Console/E03_HelloWorld_endl.cpp
	${MKDIR} -p ${OBJECTDIR}/C01_Console
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C01_Console/E03_HelloWorld_endl.o C01_Console/E03_HelloWorld_endl.cpp

${OBJECTDIR}/C01_Console/E04_HelloWorld_multiple.o: C01_Console/E04_HelloWorld_multiple.cpp
	${MKDIR} -p ${OBJECTDIR}/C01_Console
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C01_Console/E04_HelloWorld_multiple.o C01_Console/E04_HelloWorld_multiple.cpp

${OBJECTDIR}/C01_Console/E05_Welcome_cin.o: C01_Console/E05_Welcome_cin.cpp
	${MKDIR} -p ${OBJECTDIR}/C01_Console
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C01_Console/E05_Welcome_cin.o C01_Console/E05_Welcome_cin.cpp

${OBJECTDIR}/C02_Variables/E01_VariableDefinition.o: C02_Variables/E01_VariableDefinition.cpp
	${MKDIR} -p ${OBJECTDIR}/C02_Variables
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C02_Variables/E01_VariableDefinition.o C02_Variables/E01_VariableDefinition.cpp

${OBJECTDIR}/C02_Variables/E02_VariableTypes.o: C02_Variables/E02_VariableTypes.cpp
	${MKDIR} -p ${OBJECTDIR}/C02_Variables
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C02_Variables/E02_VariableTypes.o C02_Variables/E02_VariableTypes.cpp

${OBJECTDIR}/C02_Variables/E03_VariableOverload.o: C02_Variables/E03_VariableOverload.cpp
	${MKDIR} -p ${OBJECTDIR}/C02_Variables
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C02_Variables/E03_VariableOverload.o C02_Variables/E03_VariableOverload.cpp

${OBJECTDIR}/C02_Variables/E04_NoInitializedVariables.o: C02_Variables/E04_NoInitializedVariables.cpp
	${MKDIR} -p ${OBJECTDIR}/C02_Variables
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C02_Variables/E04_NoInitializedVariables.o C02_Variables/E04_NoInitializedVariables.cpp

${OBJECTDIR}/C02_Variables/E05_GlobalVariables.o: C02_Variables/E05_GlobalVariables.cpp
	${MKDIR} -p ${OBJECTDIR}/C02_Variables
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C02_Variables/E05_GlobalVariables.o C02_Variables/E05_GlobalVariables.cpp

${OBJECTDIR}/C02_Variables/E06_Pointers.o: C02_Variables/E06_Pointers.cpp
	${MKDIR} -p ${OBJECTDIR}/C02_Variables
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C02_Variables/E06_Pointers.o C02_Variables/E06_Pointers.cpp

${OBJECTDIR}/C02_Variables/E07_Constants.o: C02_Variables/E07_Constants.cpp
	${MKDIR} -p ${OBJECTDIR}/C02_Variables
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C02_Variables/E07_Constants.o C02_Variables/E07_Constants.cpp

${OBJECTDIR}/C02_Variables/E08_SizeOf.o: C02_Variables/E08_SizeOf.cpp
	${MKDIR} -p ${OBJECTDIR}/C02_Variables
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C02_Variables/E08_SizeOf.o C02_Variables/E08_SizeOf.cpp

${OBJECTDIR}/C02_Variables/E09_HeapMemoryManage.o: C02_Variables/E09_HeapMemoryManage.cpp
	${MKDIR} -p ${OBJECTDIR}/C02_Variables
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C02_Variables/E09_HeapMemoryManage.o C02_Variables/E09_HeapMemoryManage.cpp

${OBJECTDIR}/C03_Operators/E01_Arithmetics.o: C03_Operators/E01_Arithmetics.cpp
	${MKDIR} -p ${OBJECTDIR}/C03_Operators
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C03_Operators/E01_Arithmetics.o C03_Operators/E01_Arithmetics.cpp

${OBJECTDIR}/C03_Operators/E02_IncDec.o: C03_Operators/E02_IncDec.cpp
	${MKDIR} -p ${OBJECTDIR}/C03_Operators
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C03_Operators/E02_IncDec.o C03_Operators/E02_IncDec.cpp

${OBJECTDIR}/C03_Operators/E03_ShortHand.o: C03_Operators/E03_ShortHand.cpp
	${MKDIR} -p ${OBJECTDIR}/C03_Operators
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C03_Operators/E03_ShortHand.o C03_Operators/E03_ShortHand.cpp

${OBJECTDIR}/C03_Operators/E04_Relational.o: C03_Operators/E04_Relational.cpp
	${MKDIR} -p ${OBJECTDIR}/C03_Operators
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C03_Operators/E04_Relational.o C03_Operators/E04_Relational.cpp

${OBJECTDIR}/C03_Operators/E05_Logical.o: C03_Operators/E05_Logical.cpp
	${MKDIR} -p ${OBJECTDIR}/C03_Operators
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C03_Operators/E05_Logical.o C03_Operators/E05_Logical.cpp

${OBJECTDIR}/C04_ControBlocks/E01_IfBlock.o: C04_ControBlocks/E01_IfBlock.cpp
	${MKDIR} -p ${OBJECTDIR}/C04_ControBlocks
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C04_ControBlocks/E01_IfBlock.o C04_ControBlocks/E01_IfBlock.cpp

${OBJECTDIR}/C04_ControBlocks/E02_IfElseBlocks.o: C04_ControBlocks/E02_IfElseBlocks.cpp
	${MKDIR} -p ${OBJECTDIR}/C04_ControBlocks
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C04_ControBlocks/E02_IfElseBlocks.o C04_ControBlocks/E02_IfElseBlocks.cpp

${OBJECTDIR}/C04_ControBlocks/E03_NestedIfBlocks.o: C04_ControBlocks/E03_NestedIfBlocks.cpp
	${MKDIR} -p ${OBJECTDIR}/C04_ControBlocks
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C04_ControBlocks/E03_NestedIfBlocks.o C04_ControBlocks/E03_NestedIfBlocks.cpp

${OBJECTDIR}/C04_ControBlocks/E04_ElseIf.o: C04_ControBlocks/E04_ElseIf.cpp
	${MKDIR} -p ${OBJECTDIR}/C04_ControBlocks
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C04_ControBlocks/E04_ElseIf.o C04_ControBlocks/E04_ElseIf.cpp

${OBJECTDIR}/C04_ControBlocks/E05_OperadorTernario.o: C04_ControBlocks/E05_OperadorTernario.cpp
	${MKDIR} -p ${OBJECTDIR}/C04_ControBlocks
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C04_ControBlocks/E05_OperadorTernario.o C04_ControBlocks/E05_OperadorTernario.cpp

${OBJECTDIR}/C04_ControBlocks/E06_NestedOperadorTernario.o: C04_ControBlocks/E06_NestedOperadorTernario.cpp
	${MKDIR} -p ${OBJECTDIR}/C04_ControBlocks
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C04_ControBlocks/E06_NestedOperadorTernario.o C04_ControBlocks/E06_NestedOperadorTernario.cpp

${OBJECTDIR}/C04_ControBlocks/E07_SwitchBlock.o: C04_ControBlocks/E07_SwitchBlock.cpp
	${MKDIR} -p ${OBJECTDIR}/C04_ControBlocks
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C04_ControBlocks/E07_SwitchBlock.o C04_ControBlocks/E07_SwitchBlock.cpp

${OBJECTDIR}/C04_ControBlocks/E08_SwitchBlockMultiple.o: C04_ControBlocks/E08_SwitchBlockMultiple.cpp
	${MKDIR} -p ${OBJECTDIR}/C04_ControBlocks
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C04_ControBlocks/E08_SwitchBlockMultiple.o C04_ControBlocks/E08_SwitchBlockMultiple.cpp

${OBJECTDIR}/C04_ControBlocks/E09_SwitchBlockRange.o: C04_ControBlocks/E09_SwitchBlockRange.cpp
	${MKDIR} -p ${OBJECTDIR}/C04_ControBlocks
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C04_ControBlocks/E09_SwitchBlockRange.o C04_ControBlocks/E09_SwitchBlockRange.cpp

${OBJECTDIR}/C05_LoopBlocks/E01_WhileBlock.o: C05_LoopBlocks/E01_WhileBlock.cpp
	${MKDIR} -p ${OBJECTDIR}/C05_LoopBlocks
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C05_LoopBlocks/E01_WhileBlock.o C05_LoopBlocks/E01_WhileBlock.cpp

${OBJECTDIR}/C05_LoopBlocks/E02_InfiniteLoop.o: C05_LoopBlocks/E02_InfiniteLoop.cpp
	${MKDIR} -p ${OBJECTDIR}/C05_LoopBlocks
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C05_LoopBlocks/E02_InfiniteLoop.o C05_LoopBlocks/E02_InfiniteLoop.cpp

${OBJECTDIR}/C05_LoopBlocks/E03_InfiniteLoop.o: C05_LoopBlocks/E03_InfiniteLoop.cpp
	${MKDIR} -p ${OBJECTDIR}/C05_LoopBlocks
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C05_LoopBlocks/E03_InfiniteLoop.o C05_LoopBlocks/E03_InfiniteLoop.cpp

${OBJECTDIR}/C05_LoopBlocks/E04_DoWhileLoop.o: C05_LoopBlocks/E04_DoWhileLoop.cpp
	${MKDIR} -p ${OBJECTDIR}/C05_LoopBlocks
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C05_LoopBlocks/E04_DoWhileLoop.o C05_LoopBlocks/E04_DoWhileLoop.cpp

${OBJECTDIR}/C05_LoopBlocks/E05_ForLoop.o: C05_LoopBlocks/E05_ForLoop.cpp
	${MKDIR} -p ${OBJECTDIR}/C05_LoopBlocks
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C05_LoopBlocks/E05_ForLoop.o C05_LoopBlocks/E05_ForLoop.cpp

${OBJECTDIR}/C05_LoopBlocks/E06_NestedLoops.o: C05_LoopBlocks/E06_NestedLoops.cpp
	${MKDIR} -p ${OBJECTDIR}/C05_LoopBlocks
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C05_LoopBlocks/E06_NestedLoops.o C05_LoopBlocks/E06_NestedLoops.cpp

${OBJECTDIR}/C05_LoopBlocks/E07_SearchingInLoops.o: C05_LoopBlocks/E07_SearchingInLoops.cpp
	${MKDIR} -p ${OBJECTDIR}/C05_LoopBlocks
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C05_LoopBlocks/E07_SearchingInLoops.o C05_LoopBlocks/E07_SearchingInLoops.cpp

${OBJECTDIR}/C05_LoopBlocks/E08_FilterLoops.o: C05_LoopBlocks/E08_FilterLoops.cpp
	${MKDIR} -p ${OBJECTDIR}/C05_LoopBlocks
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C05_LoopBlocks/E08_FilterLoops.o C05_LoopBlocks/E08_FilterLoops.cpp

${OBJECTDIR}/C06_Arrays/E01_ArrayDefinition.o: C06_Arrays/E01_ArrayDefinition.cpp
	${MKDIR} -p ${OBJECTDIR}/C06_Arrays
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C06_Arrays/E01_ArrayDefinition.o C06_Arrays/E01_ArrayDefinition.cpp

${OBJECTDIR}/C06_Arrays/E02_ArrayFill.o: C06_Arrays/E02_ArrayFill.cpp
	${MKDIR} -p ${OBJECTDIR}/C06_Arrays
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C06_Arrays/E02_ArrayFill.o C06_Arrays/E02_ArrayFill.cpp

${OBJECTDIR}/C06_Arrays/E03_MultiDimensionalArray.o: C06_Arrays/E03_MultiDimensionalArray.cpp
	${MKDIR} -p ${OBJECTDIR}/C06_Arrays
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C06_Arrays/E03_MultiDimensionalArray.o C06_Arrays/E03_MultiDimensionalArray.cpp

${OBJECTDIR}/C06_Arrays/E04_ArrayAddress.o: C06_Arrays/E04_ArrayAddress.cpp
	${MKDIR} -p ${OBJECTDIR}/C06_Arrays
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C06_Arrays/E04_ArrayAddress.o C06_Arrays/E04_ArrayAddress.cpp

${OBJECTDIR}/C06_Arrays/E05_ConstantsArray.o: C06_Arrays/E05_ConstantsArray.cpp
	${MKDIR} -p ${OBJECTDIR}/C06_Arrays
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C06_Arrays/E05_ConstantsArray.o C06_Arrays/E05_ConstantsArray.cpp

${OBJECTDIR}/C07_Functions/E01_BasicFunction.o: C07_Functions/E01_BasicFunction.cpp
	${MKDIR} -p ${OBJECTDIR}/C07_Functions
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C07_Functions/E01_BasicFunction.o C07_Functions/E01_BasicFunction.cpp

${OBJECTDIR}/C07_Functions/E02_FunctionArguments.o: C07_Functions/E02_FunctionArguments.cpp
	${MKDIR} -p ${OBJECTDIR}/C07_Functions
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C07_Functions/E02_FunctionArguments.o C07_Functions/E02_FunctionArguments.cpp

${OBJECTDIR}/C07_Functions/E03_FunctionReturnValue.o: C07_Functions/E03_FunctionReturnValue.cpp
	${MKDIR} -p ${OBJECTDIR}/C07_Functions
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C07_Functions/E03_FunctionReturnValue.o C07_Functions/E03_FunctionReturnValue.cpp

${OBJECTDIR}/C07_Functions/E04_FunctionVoidReturn.o: C07_Functions/E04_FunctionVoidReturn.cpp
	${MKDIR} -p ${OBJECTDIR}/C07_Functions
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C07_Functions/E04_FunctionVoidReturn.o C07_Functions/E04_FunctionVoidReturn.cpp

${OBJECTDIR}/C07_Functions/E05_FunctionPrototype.o: C07_Functions/E05_FunctionPrototype.cpp
	${MKDIR} -p ${OBJECTDIR}/C07_Functions
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C07_Functions/E05_FunctionPrototype.o C07_Functions/E05_FunctionPrototype.cpp

${OBJECTDIR}/C07_Functions/E06_DefaultParameters.o: C07_Functions/E06_DefaultParameters.cpp
	${MKDIR} -p ${OBJECTDIR}/C07_Functions
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C07_Functions/E06_DefaultParameters.o C07_Functions/E06_DefaultParameters.cpp

${OBJECTDIR}/C07_Functions/E07_InlineFunction.o: C07_Functions/E07_InlineFunction.cpp
	${MKDIR} -p ${OBJECTDIR}/C07_Functions
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C07_Functions/E07_InlineFunction.o C07_Functions/E07_InlineFunction.cpp

${OBJECTDIR}/C07_Functions/E08_VariableScope.o: C07_Functions/E08_VariableScope.cpp
	${MKDIR} -p ${OBJECTDIR}/C07_Functions
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C07_Functions/E08_VariableScope.o C07_Functions/E08_VariableScope.cpp

${OBJECTDIR}/C07_Functions/E09_MultipleReturn.o: C07_Functions/E09_MultipleReturn.cpp
	${MKDIR} -p ${OBJECTDIR}/C07_Functions
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C07_Functions/E09_MultipleReturn.o C07_Functions/E09_MultipleReturn.cpp

${OBJECTDIR}/C07_Functions/E10_PassParametersByReference.o: C07_Functions/E10_PassParametersByReference.cpp
	${MKDIR} -p ${OBJECTDIR}/C07_Functions
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C07_Functions/E10_PassParametersByReference.o C07_Functions/E10_PassParametersByReference.cpp

${OBJECTDIR}/C07_Functions/E11_PassArrayProtected.o: C07_Functions/E11_PassArrayProtected.cpp
	${MKDIR} -p ${OBJECTDIR}/C07_Functions
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C07_Functions/E11_PassArrayProtected.o C07_Functions/E11_PassArrayProtected.cpp

${OBJECTDIR}/C07_Functions/E12_RangePointers.o: C07_Functions/E12_RangePointers.cpp
	${MKDIR} -p ${OBJECTDIR}/C07_Functions
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C07_Functions/E12_RangePointers.o C07_Functions/E12_RangePointers.cpp

${OBJECTDIR}/C08_Structures/E01_BasicStructure.o: C08_Structures/E01_BasicStructure.cpp
	${MKDIR} -p ${OBJECTDIR}/C08_Structures
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C08_Structures/E01_BasicStructure.o C08_Structures/E01_BasicStructure.cpp

${OBJECTDIR}/C08_Structures/E02_StructurePointer.o: C08_Structures/E02_StructurePointer.cpp
	${MKDIR} -p ${OBJECTDIR}/C08_Structures
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C08_Structures/E02_StructurePointer.o C08_Structures/E02_StructurePointer.cpp

${OBJECTDIR}/C08_Structures/E03_NestedStructure.o: C08_Structures/E03_NestedStructure.cpp
	${MKDIR} -p ${OBJECTDIR}/C08_Structures
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C08_Structures/E03_NestedStructure.o C08_Structures/E03_NestedStructure.cpp

${OBJECTDIR}/C08_Structures/E04_StructureSize.o: C08_Structures/E04_StructureSize.cpp
	${MKDIR} -p ${OBJECTDIR}/C08_Structures
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C08_Structures/E04_StructureSize.o C08_Structures/E04_StructureSize.cpp

${OBJECTDIR}/C08_Structures/E05_Unions.o: C08_Structures/E05_Unions.cpp
	${MKDIR} -p ${OBJECTDIR}/C08_Structures
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C08_Structures/E05_Unions.o C08_Structures/E05_Unions.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
