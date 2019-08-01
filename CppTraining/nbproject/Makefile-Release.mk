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
	${OBJECTDIR}/C02_Variables/E10_Strings.o \
	${OBJECTDIR}/C02_Variables/E11_StringMethods.o \
	${OBJECTDIR}/C02_Variables/E12_ReferanceVsValue.o \
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
	${OBJECTDIR}/C07_Functions/E13_RecursiveFunctions.o \
	${OBJECTDIR}/C07_Functions/E14_FunctionOverloading.o \
	${OBJECTDIR}/C07_Functions/E15_StaticVariables.o \
	${OBJECTDIR}/C08_Structures/E01_BasicStructure.o \
	${OBJECTDIR}/C08_Structures/E02_StructurePointer.o \
	${OBJECTDIR}/C08_Structures/E03_NestedStructure.o \
	${OBJECTDIR}/C08_Structures/E04_StructureSize.o \
	${OBJECTDIR}/C08_Structures/E05_Unions.o \
	${OBJECTDIR}/C09_Objects/E01_ClassDefinition.o \
	${OBJECTDIR}/C09_Objects/E02_AccessModifiers.o \
	${OBJECTDIR}/C09_Objects/E03_ObjectsInMemory.o \
	${OBJECTDIR}/C09_Objects/E04_ScopeResolutionOperator.o \
	${OBJECTDIR}/C09_Objects/E05_ObjectsConstructors.o \
	${OBJECTDIR}/C09_Objects/E06_DefaultContructors.o \
	${OBJECTDIR}/C09_Objects/E07_ConstructorOverloading.o \
	${OBJECTDIR}/C09_Objects/E08_CopyConstructor.o \
	${OBJECTDIR}/C09_Objects/E09_ObjectsDistructors.o \
	${OBJECTDIR}/C09_Objects/E10_StaticClassFields.o \
	${OBJECTDIR}/C09_Objects/E11_StaticClassMethods.o \
	${OBJECTDIR}/C09_Objects/E12_FriendFunction.o \
	${OBJECTDIR}/C09_Objects/E13_FriendClass.o \
	${OBJECTDIR}/C09_Objects/E14_Inheritance.o \
	${OBJECTDIR}/C09_Objects/E15_InheritanceAccess.o \
	${OBJECTDIR}/C09_Objects/E16_ChangingInheritanceAccess.o \
	${OBJECTDIR}/C09_Objects/E17_MultipleInheritance.o \
	${OBJECTDIR}/C09_Objects/E18_BaseConstructor.o \
	${OBJECTDIR}/C09_Objects/E19_InheritanceHiding.o \
	${OBJECTDIR}/C09_Objects/E20_IngeritanceOverriding.o \
	${OBJECTDIR}/C09_Objects/E21_Polymorphism.o \
	${OBJECTDIR}/C09_Objects/E22_PureVirtualFunctions.o \
	${OBJECTDIR}/C09_Objects/E23_AbstractClasses.o \
	${OBJECTDIR}/C09_Objects/E24_DiamondProblem.o \
	${OBJECTDIR}/C09_Objects/E25_VirtualInheritance.o \
	${OBJECTDIR}/C09_Objects/E26_NestedClassesBuilder.o \
	${OBJECTDIR}/C09_Objects/E27_LocalFunctionsClasses.o \
	${OBJECTDIR}/C09_Objects/E28_OperatorOverloading.o \
	${OBJECTDIR}/C09_Objects/E29_ArraySubcriptionOperatorOverrinding.o \
	${OBJECTDIR}/C09_Objects/E30_PointerOperatorOverriding.o \
	${OBJECTDIR}/C09_Objects/E31_FunctionCallOperatorOverriding.o \
	${OBJECTDIR}/C09_Objects/E32_NewAndDeleteOperatorOverriding.o \
	${OBJECTDIR}/C10_Exceptions/E01_Exceptions.o \
	${OBJECTDIR}/C10_Exceptions/E02_CatchExceptions.o \
	${OBJECTDIR}/C10_Exceptions/E03_StringErrors.o \
	${OBJECTDIR}/C10_Exceptions/E04_IntegerErrors.o \
	${OBJECTDIR}/C10_Exceptions/E05_StdExceptions.o \
	${OBJECTDIR}/C10_Exceptions/E06_MultipleCatchs.o \
	${OBJECTDIR}/C10_Exceptions/E07_MethodThrowsException.o \
	${OBJECTDIR}/C10_Exceptions/E08_ReThrowErrors.o \
	${OBJECTDIR}/C10_Exceptions/E09_CustomExceptions.o \
	${OBJECTDIR}/C11_Preprocessors/E01_IncludePreProcesor.o \
	${OBJECTDIR}/C11_Preprocessors/E01_IncludePreProcesorExternal.o \
	${OBJECTDIR}/C11_Preprocessors/E02_DefinePreProcesor.o \
	${OBJECTDIR}/C11_Preprocessors/E03_ConditionalCompilation.o \
	${OBJECTDIR}/C11_Preprocessors/E04_PredefinedMacros.o \
	${OBJECTDIR}/C12_Generics/E01_GenericFunctions.o \
	${OBJECTDIR}/C12_Generics/E02_GenericOverridingFunctions.o \
	${OBJECTDIR}/C12_Generics/E03_GenericClass.o \
	${OBJECTDIR}/C12_Generics/E04_DefaultGenericTypes.o \
	${OBJECTDIR}/C13_Namespaces/E01_Namespaces.o \
	${OBJECTDIR}/C13_Namespaces/E02_External.o \
	${OBJECTDIR}/C13_Namespaces/E02_ExternalNamespaces.o \
	${OBJECTDIR}/C13_Namespaces/E03_NestedNamespaces.o \
	${OBJECTDIR}/C13_Namespaces/E04_AnonymousNamespace.o \
	${OBJECTDIR}/C13_Namespaces/E05_InlineNamespaces.o \
	${OBJECTDIR}/C13_Namespaces/E06_Classes.o \
	${OBJECTDIR}/C13_Namespaces/E06_ExternalClasses.o \
	${OBJECTDIR}/C14_IOStreams/E01_IOConsoleStreams.o \
	${OBJECTDIR}/C14_IOStreams/E02_StreamOperatorsOverriding.o \
	${OBJECTDIR}/C14_IOStreams/E03_FormatFlags.o \
	${OBJECTDIR}/C14_IOStreams/E04_Manipulators.o \
	${OBJECTDIR}/C14_IOStreams/E05_ExtendedManipulators.o \
	${OBJECTDIR}/C14_IOStreams/E06_CustomManipulators.o \
	${OBJECTDIR}/C14_IOStreams/E07_FileIOStream.o \
	${OBJECTDIR}/C14_IOStreams/E08_FileMoveIOStream.o \
	${OBJECTDIR}/C14_IOStreams/E09_BinaryFileIOStream.o \
	${OBJECTDIR}/C14_IOStreams/E10_SerializationFileIOStream.o \
	${OBJECTDIR}/C14_IOStreams/E11_StringStream.o


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

${OBJECTDIR}/C02_Variables/E10_Strings.o: C02_Variables/E10_Strings.cpp
	${MKDIR} -p ${OBJECTDIR}/C02_Variables
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C02_Variables/E10_Strings.o C02_Variables/E10_Strings.cpp

${OBJECTDIR}/C02_Variables/E11_StringMethods.o: C02_Variables/E11_StringMethods.cpp
	${MKDIR} -p ${OBJECTDIR}/C02_Variables
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C02_Variables/E11_StringMethods.o C02_Variables/E11_StringMethods.cpp

${OBJECTDIR}/C02_Variables/E12_ReferanceVsValue.o: C02_Variables/E12_ReferanceVsValue.cpp
	${MKDIR} -p ${OBJECTDIR}/C02_Variables
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C02_Variables/E12_ReferanceVsValue.o C02_Variables/E12_ReferanceVsValue.cpp

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

${OBJECTDIR}/C07_Functions/E13_RecursiveFunctions.o: C07_Functions/E13_RecursiveFunctions.cpp
	${MKDIR} -p ${OBJECTDIR}/C07_Functions
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C07_Functions/E13_RecursiveFunctions.o C07_Functions/E13_RecursiveFunctions.cpp

${OBJECTDIR}/C07_Functions/E14_FunctionOverloading.o: C07_Functions/E14_FunctionOverloading.cpp
	${MKDIR} -p ${OBJECTDIR}/C07_Functions
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C07_Functions/E14_FunctionOverloading.o C07_Functions/E14_FunctionOverloading.cpp

${OBJECTDIR}/C07_Functions/E15_StaticVariables.o: C07_Functions/E15_StaticVariables.cpp
	${MKDIR} -p ${OBJECTDIR}/C07_Functions
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C07_Functions/E15_StaticVariables.o C07_Functions/E15_StaticVariables.cpp

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

${OBJECTDIR}/C09_Objects/E01_ClassDefinition.o: C09_Objects/E01_ClassDefinition.cpp
	${MKDIR} -p ${OBJECTDIR}/C09_Objects
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C09_Objects/E01_ClassDefinition.o C09_Objects/E01_ClassDefinition.cpp

${OBJECTDIR}/C09_Objects/E02_AccessModifiers.o: C09_Objects/E02_AccessModifiers.cpp
	${MKDIR} -p ${OBJECTDIR}/C09_Objects
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C09_Objects/E02_AccessModifiers.o C09_Objects/E02_AccessModifiers.cpp

${OBJECTDIR}/C09_Objects/E03_ObjectsInMemory.o: C09_Objects/E03_ObjectsInMemory.cpp
	${MKDIR} -p ${OBJECTDIR}/C09_Objects
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C09_Objects/E03_ObjectsInMemory.o C09_Objects/E03_ObjectsInMemory.cpp

${OBJECTDIR}/C09_Objects/E04_ScopeResolutionOperator.o: C09_Objects/E04_ScopeResolutionOperator.cpp
	${MKDIR} -p ${OBJECTDIR}/C09_Objects
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C09_Objects/E04_ScopeResolutionOperator.o C09_Objects/E04_ScopeResolutionOperator.cpp

${OBJECTDIR}/C09_Objects/E05_ObjectsConstructors.o: C09_Objects/E05_ObjectsConstructors.cpp
	${MKDIR} -p ${OBJECTDIR}/C09_Objects
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C09_Objects/E05_ObjectsConstructors.o C09_Objects/E05_ObjectsConstructors.cpp

${OBJECTDIR}/C09_Objects/E06_DefaultContructors.o: C09_Objects/E06_DefaultContructors.cpp
	${MKDIR} -p ${OBJECTDIR}/C09_Objects
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C09_Objects/E06_DefaultContructors.o C09_Objects/E06_DefaultContructors.cpp

${OBJECTDIR}/C09_Objects/E07_ConstructorOverloading.o: C09_Objects/E07_ConstructorOverloading.cpp
	${MKDIR} -p ${OBJECTDIR}/C09_Objects
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C09_Objects/E07_ConstructorOverloading.o C09_Objects/E07_ConstructorOverloading.cpp

${OBJECTDIR}/C09_Objects/E08_CopyConstructor.o: C09_Objects/E08_CopyConstructor.cpp
	${MKDIR} -p ${OBJECTDIR}/C09_Objects
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C09_Objects/E08_CopyConstructor.o C09_Objects/E08_CopyConstructor.cpp

${OBJECTDIR}/C09_Objects/E09_ObjectsDistructors.o: C09_Objects/E09_ObjectsDistructors.cpp
	${MKDIR} -p ${OBJECTDIR}/C09_Objects
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C09_Objects/E09_ObjectsDistructors.o C09_Objects/E09_ObjectsDistructors.cpp

${OBJECTDIR}/C09_Objects/E10_StaticClassFields.o: C09_Objects/E10_StaticClassFields.cpp
	${MKDIR} -p ${OBJECTDIR}/C09_Objects
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C09_Objects/E10_StaticClassFields.o C09_Objects/E10_StaticClassFields.cpp

${OBJECTDIR}/C09_Objects/E11_StaticClassMethods.o: C09_Objects/E11_StaticClassMethods.cpp
	${MKDIR} -p ${OBJECTDIR}/C09_Objects
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C09_Objects/E11_StaticClassMethods.o C09_Objects/E11_StaticClassMethods.cpp

${OBJECTDIR}/C09_Objects/E12_FriendFunction.o: C09_Objects/E12_FriendFunction.cpp
	${MKDIR} -p ${OBJECTDIR}/C09_Objects
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C09_Objects/E12_FriendFunction.o C09_Objects/E12_FriendFunction.cpp

${OBJECTDIR}/C09_Objects/E13_FriendClass.o: C09_Objects/E13_FriendClass.cpp
	${MKDIR} -p ${OBJECTDIR}/C09_Objects
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C09_Objects/E13_FriendClass.o C09_Objects/E13_FriendClass.cpp

${OBJECTDIR}/C09_Objects/E14_Inheritance.o: C09_Objects/E14_Inheritance.cpp
	${MKDIR} -p ${OBJECTDIR}/C09_Objects
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C09_Objects/E14_Inheritance.o C09_Objects/E14_Inheritance.cpp

${OBJECTDIR}/C09_Objects/E15_InheritanceAccess.o: C09_Objects/E15_InheritanceAccess.cpp
	${MKDIR} -p ${OBJECTDIR}/C09_Objects
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C09_Objects/E15_InheritanceAccess.o C09_Objects/E15_InheritanceAccess.cpp

${OBJECTDIR}/C09_Objects/E16_ChangingInheritanceAccess.o: C09_Objects/E16_ChangingInheritanceAccess.cpp
	${MKDIR} -p ${OBJECTDIR}/C09_Objects
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C09_Objects/E16_ChangingInheritanceAccess.o C09_Objects/E16_ChangingInheritanceAccess.cpp

${OBJECTDIR}/C09_Objects/E17_MultipleInheritance.o: C09_Objects/E17_MultipleInheritance.cpp
	${MKDIR} -p ${OBJECTDIR}/C09_Objects
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C09_Objects/E17_MultipleInheritance.o C09_Objects/E17_MultipleInheritance.cpp

${OBJECTDIR}/C09_Objects/E18_BaseConstructor.o: C09_Objects/E18_BaseConstructor.cpp
	${MKDIR} -p ${OBJECTDIR}/C09_Objects
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C09_Objects/E18_BaseConstructor.o C09_Objects/E18_BaseConstructor.cpp

${OBJECTDIR}/C09_Objects/E19_InheritanceHiding.o: C09_Objects/E19_InheritanceHiding.cpp
	${MKDIR} -p ${OBJECTDIR}/C09_Objects
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C09_Objects/E19_InheritanceHiding.o C09_Objects/E19_InheritanceHiding.cpp

${OBJECTDIR}/C09_Objects/E20_IngeritanceOverriding.o: C09_Objects/E20_IngeritanceOverriding.cpp
	${MKDIR} -p ${OBJECTDIR}/C09_Objects
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C09_Objects/E20_IngeritanceOverriding.o C09_Objects/E20_IngeritanceOverriding.cpp

${OBJECTDIR}/C09_Objects/E21_Polymorphism.o: C09_Objects/E21_Polymorphism.cpp
	${MKDIR} -p ${OBJECTDIR}/C09_Objects
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C09_Objects/E21_Polymorphism.o C09_Objects/E21_Polymorphism.cpp

${OBJECTDIR}/C09_Objects/E22_PureVirtualFunctions.o: C09_Objects/E22_PureVirtualFunctions.cpp
	${MKDIR} -p ${OBJECTDIR}/C09_Objects
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C09_Objects/E22_PureVirtualFunctions.o C09_Objects/E22_PureVirtualFunctions.cpp

${OBJECTDIR}/C09_Objects/E23_AbstractClasses.o: C09_Objects/E23_AbstractClasses.cpp
	${MKDIR} -p ${OBJECTDIR}/C09_Objects
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C09_Objects/E23_AbstractClasses.o C09_Objects/E23_AbstractClasses.cpp

${OBJECTDIR}/C09_Objects/E24_DiamondProblem.o: C09_Objects/E24_DiamondProblem.cpp
	${MKDIR} -p ${OBJECTDIR}/C09_Objects
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C09_Objects/E24_DiamondProblem.o C09_Objects/E24_DiamondProblem.cpp

${OBJECTDIR}/C09_Objects/E25_VirtualInheritance.o: C09_Objects/E25_VirtualInheritance.cpp
	${MKDIR} -p ${OBJECTDIR}/C09_Objects
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C09_Objects/E25_VirtualInheritance.o C09_Objects/E25_VirtualInheritance.cpp

${OBJECTDIR}/C09_Objects/E26_NestedClassesBuilder.o: C09_Objects/E26_NestedClassesBuilder.cpp
	${MKDIR} -p ${OBJECTDIR}/C09_Objects
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C09_Objects/E26_NestedClassesBuilder.o C09_Objects/E26_NestedClassesBuilder.cpp

${OBJECTDIR}/C09_Objects/E27_LocalFunctionsClasses.o: C09_Objects/E27_LocalFunctionsClasses.cpp
	${MKDIR} -p ${OBJECTDIR}/C09_Objects
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C09_Objects/E27_LocalFunctionsClasses.o C09_Objects/E27_LocalFunctionsClasses.cpp

${OBJECTDIR}/C09_Objects/E28_OperatorOverloading.o: C09_Objects/E28_OperatorOverloading.cpp
	${MKDIR} -p ${OBJECTDIR}/C09_Objects
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C09_Objects/E28_OperatorOverloading.o C09_Objects/E28_OperatorOverloading.cpp

${OBJECTDIR}/C09_Objects/E29_ArraySubcriptionOperatorOverrinding.o: C09_Objects/E29_ArraySubcriptionOperatorOverrinding.cpp
	${MKDIR} -p ${OBJECTDIR}/C09_Objects
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C09_Objects/E29_ArraySubcriptionOperatorOverrinding.o C09_Objects/E29_ArraySubcriptionOperatorOverrinding.cpp

${OBJECTDIR}/C09_Objects/E30_PointerOperatorOverriding.o: C09_Objects/E30_PointerOperatorOverriding.cpp
	${MKDIR} -p ${OBJECTDIR}/C09_Objects
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C09_Objects/E30_PointerOperatorOverriding.o C09_Objects/E30_PointerOperatorOverriding.cpp

${OBJECTDIR}/C09_Objects/E31_FunctionCallOperatorOverriding.o: C09_Objects/E31_FunctionCallOperatorOverriding.cpp
	${MKDIR} -p ${OBJECTDIR}/C09_Objects
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C09_Objects/E31_FunctionCallOperatorOverriding.o C09_Objects/E31_FunctionCallOperatorOverriding.cpp

${OBJECTDIR}/C09_Objects/E32_NewAndDeleteOperatorOverriding.o: C09_Objects/E32_NewAndDeleteOperatorOverriding.cpp
	${MKDIR} -p ${OBJECTDIR}/C09_Objects
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C09_Objects/E32_NewAndDeleteOperatorOverriding.o C09_Objects/E32_NewAndDeleteOperatorOverriding.cpp

${OBJECTDIR}/C10_Exceptions/E01_Exceptions.o: C10_Exceptions/E01_Exceptions.cpp
	${MKDIR} -p ${OBJECTDIR}/C10_Exceptions
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C10_Exceptions/E01_Exceptions.o C10_Exceptions/E01_Exceptions.cpp

${OBJECTDIR}/C10_Exceptions/E02_CatchExceptions.o: C10_Exceptions/E02_CatchExceptions.cpp
	${MKDIR} -p ${OBJECTDIR}/C10_Exceptions
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C10_Exceptions/E02_CatchExceptions.o C10_Exceptions/E02_CatchExceptions.cpp

${OBJECTDIR}/C10_Exceptions/E03_StringErrors.o: C10_Exceptions/E03_StringErrors.cpp
	${MKDIR} -p ${OBJECTDIR}/C10_Exceptions
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C10_Exceptions/E03_StringErrors.o C10_Exceptions/E03_StringErrors.cpp

${OBJECTDIR}/C10_Exceptions/E04_IntegerErrors.o: C10_Exceptions/E04_IntegerErrors.cpp
	${MKDIR} -p ${OBJECTDIR}/C10_Exceptions
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C10_Exceptions/E04_IntegerErrors.o C10_Exceptions/E04_IntegerErrors.cpp

${OBJECTDIR}/C10_Exceptions/E05_StdExceptions.o: C10_Exceptions/E05_StdExceptions.cpp
	${MKDIR} -p ${OBJECTDIR}/C10_Exceptions
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C10_Exceptions/E05_StdExceptions.o C10_Exceptions/E05_StdExceptions.cpp

${OBJECTDIR}/C10_Exceptions/E06_MultipleCatchs.o: C10_Exceptions/E06_MultipleCatchs.cpp
	${MKDIR} -p ${OBJECTDIR}/C10_Exceptions
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C10_Exceptions/E06_MultipleCatchs.o C10_Exceptions/E06_MultipleCatchs.cpp

${OBJECTDIR}/C10_Exceptions/E07_MethodThrowsException.o: C10_Exceptions/E07_MethodThrowsException.cpp
	${MKDIR} -p ${OBJECTDIR}/C10_Exceptions
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C10_Exceptions/E07_MethodThrowsException.o C10_Exceptions/E07_MethodThrowsException.cpp

${OBJECTDIR}/C10_Exceptions/E08_ReThrowErrors.o: C10_Exceptions/E08_ReThrowErrors.cpp
	${MKDIR} -p ${OBJECTDIR}/C10_Exceptions
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C10_Exceptions/E08_ReThrowErrors.o C10_Exceptions/E08_ReThrowErrors.cpp

${OBJECTDIR}/C10_Exceptions/E09_CustomExceptions.o: C10_Exceptions/E09_CustomExceptions.cpp
	${MKDIR} -p ${OBJECTDIR}/C10_Exceptions
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C10_Exceptions/E09_CustomExceptions.o C10_Exceptions/E09_CustomExceptions.cpp

${OBJECTDIR}/C11_Preprocessors/E01_IncludePreProcesor.o: C11_Preprocessors/E01_IncludePreProcesor.cpp
	${MKDIR} -p ${OBJECTDIR}/C11_Preprocessors
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C11_Preprocessors/E01_IncludePreProcesor.o C11_Preprocessors/E01_IncludePreProcesor.cpp

${OBJECTDIR}/C11_Preprocessors/E01_IncludePreProcesorExternal.o: C11_Preprocessors/E01_IncludePreProcesorExternal.cpp
	${MKDIR} -p ${OBJECTDIR}/C11_Preprocessors
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C11_Preprocessors/E01_IncludePreProcesorExternal.o C11_Preprocessors/E01_IncludePreProcesorExternal.cpp

${OBJECTDIR}/C11_Preprocessors/E02_DefinePreProcesor.o: C11_Preprocessors/E02_DefinePreProcesor.cpp
	${MKDIR} -p ${OBJECTDIR}/C11_Preprocessors
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C11_Preprocessors/E02_DefinePreProcesor.o C11_Preprocessors/E02_DefinePreProcesor.cpp

${OBJECTDIR}/C11_Preprocessors/E03_ConditionalCompilation.o: C11_Preprocessors/E03_ConditionalCompilation.cpp
	${MKDIR} -p ${OBJECTDIR}/C11_Preprocessors
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C11_Preprocessors/E03_ConditionalCompilation.o C11_Preprocessors/E03_ConditionalCompilation.cpp

${OBJECTDIR}/C11_Preprocessors/E04_PredefinedMacros.o: C11_Preprocessors/E04_PredefinedMacros.cpp
	${MKDIR} -p ${OBJECTDIR}/C11_Preprocessors
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C11_Preprocessors/E04_PredefinedMacros.o C11_Preprocessors/E04_PredefinedMacros.cpp

${OBJECTDIR}/C12_Generics/E01_GenericFunctions.o: C12_Generics/E01_GenericFunctions.cpp
	${MKDIR} -p ${OBJECTDIR}/C12_Generics
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C12_Generics/E01_GenericFunctions.o C12_Generics/E01_GenericFunctions.cpp

${OBJECTDIR}/C12_Generics/E02_GenericOverridingFunctions.o: C12_Generics/E02_GenericOverridingFunctions.cpp
	${MKDIR} -p ${OBJECTDIR}/C12_Generics
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C12_Generics/E02_GenericOverridingFunctions.o C12_Generics/E02_GenericOverridingFunctions.cpp

${OBJECTDIR}/C12_Generics/E03_GenericClass.o: C12_Generics/E03_GenericClass.cpp
	${MKDIR} -p ${OBJECTDIR}/C12_Generics
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C12_Generics/E03_GenericClass.o C12_Generics/E03_GenericClass.cpp

${OBJECTDIR}/C12_Generics/E04_DefaultGenericTypes.o: C12_Generics/E04_DefaultGenericTypes.cpp
	${MKDIR} -p ${OBJECTDIR}/C12_Generics
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C12_Generics/E04_DefaultGenericTypes.o C12_Generics/E04_DefaultGenericTypes.cpp

${OBJECTDIR}/C13_Namespaces/E01_Namespaces.o: C13_Namespaces/E01_Namespaces.cpp
	${MKDIR} -p ${OBJECTDIR}/C13_Namespaces
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C13_Namespaces/E01_Namespaces.o C13_Namespaces/E01_Namespaces.cpp

${OBJECTDIR}/C13_Namespaces/E02_External.o: C13_Namespaces/E02_External.cpp
	${MKDIR} -p ${OBJECTDIR}/C13_Namespaces
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C13_Namespaces/E02_External.o C13_Namespaces/E02_External.cpp

${OBJECTDIR}/C13_Namespaces/E02_ExternalNamespaces.o: C13_Namespaces/E02_ExternalNamespaces.cpp
	${MKDIR} -p ${OBJECTDIR}/C13_Namespaces
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C13_Namespaces/E02_ExternalNamespaces.o C13_Namespaces/E02_ExternalNamespaces.cpp

${OBJECTDIR}/C13_Namespaces/E03_NestedNamespaces.o: C13_Namespaces/E03_NestedNamespaces.cpp
	${MKDIR} -p ${OBJECTDIR}/C13_Namespaces
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C13_Namespaces/E03_NestedNamespaces.o C13_Namespaces/E03_NestedNamespaces.cpp

${OBJECTDIR}/C13_Namespaces/E04_AnonymousNamespace.o: C13_Namespaces/E04_AnonymousNamespace.cpp
	${MKDIR} -p ${OBJECTDIR}/C13_Namespaces
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C13_Namespaces/E04_AnonymousNamespace.o C13_Namespaces/E04_AnonymousNamespace.cpp

${OBJECTDIR}/C13_Namespaces/E05_InlineNamespaces.o: C13_Namespaces/E05_InlineNamespaces.cpp
	${MKDIR} -p ${OBJECTDIR}/C13_Namespaces
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C13_Namespaces/E05_InlineNamespaces.o C13_Namespaces/E05_InlineNamespaces.cpp

${OBJECTDIR}/C13_Namespaces/E06_Classes.o: C13_Namespaces/E06_Classes.cpp
	${MKDIR} -p ${OBJECTDIR}/C13_Namespaces
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C13_Namespaces/E06_Classes.o C13_Namespaces/E06_Classes.cpp

${OBJECTDIR}/C13_Namespaces/E06_ExternalClasses.o: C13_Namespaces/E06_ExternalClasses.cpp
	${MKDIR} -p ${OBJECTDIR}/C13_Namespaces
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C13_Namespaces/E06_ExternalClasses.o C13_Namespaces/E06_ExternalClasses.cpp

${OBJECTDIR}/C14_IOStreams/E01_IOConsoleStreams.o: C14_IOStreams/E01_IOConsoleStreams.cpp
	${MKDIR} -p ${OBJECTDIR}/C14_IOStreams
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C14_IOStreams/E01_IOConsoleStreams.o C14_IOStreams/E01_IOConsoleStreams.cpp

${OBJECTDIR}/C14_IOStreams/E02_StreamOperatorsOverriding.o: C14_IOStreams/E02_StreamOperatorsOverriding.cpp
	${MKDIR} -p ${OBJECTDIR}/C14_IOStreams
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C14_IOStreams/E02_StreamOperatorsOverriding.o C14_IOStreams/E02_StreamOperatorsOverriding.cpp

${OBJECTDIR}/C14_IOStreams/E03_FormatFlags.o: C14_IOStreams/E03_FormatFlags.cpp
	${MKDIR} -p ${OBJECTDIR}/C14_IOStreams
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C14_IOStreams/E03_FormatFlags.o C14_IOStreams/E03_FormatFlags.cpp

${OBJECTDIR}/C14_IOStreams/E04_Manipulators.o: C14_IOStreams/E04_Manipulators.cpp
	${MKDIR} -p ${OBJECTDIR}/C14_IOStreams
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C14_IOStreams/E04_Manipulators.o C14_IOStreams/E04_Manipulators.cpp

${OBJECTDIR}/C14_IOStreams/E05_ExtendedManipulators.o: C14_IOStreams/E05_ExtendedManipulators.cpp
	${MKDIR} -p ${OBJECTDIR}/C14_IOStreams
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C14_IOStreams/E05_ExtendedManipulators.o C14_IOStreams/E05_ExtendedManipulators.cpp

${OBJECTDIR}/C14_IOStreams/E06_CustomManipulators.o: C14_IOStreams/E06_CustomManipulators.cpp
	${MKDIR} -p ${OBJECTDIR}/C14_IOStreams
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C14_IOStreams/E06_CustomManipulators.o C14_IOStreams/E06_CustomManipulators.cpp

${OBJECTDIR}/C14_IOStreams/E07_FileIOStream.o: C14_IOStreams/E07_FileIOStream.cpp
	${MKDIR} -p ${OBJECTDIR}/C14_IOStreams
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C14_IOStreams/E07_FileIOStream.o C14_IOStreams/E07_FileIOStream.cpp

${OBJECTDIR}/C14_IOStreams/E08_FileMoveIOStream.o: C14_IOStreams/E08_FileMoveIOStream.cpp
	${MKDIR} -p ${OBJECTDIR}/C14_IOStreams
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C14_IOStreams/E08_FileMoveIOStream.o C14_IOStreams/E08_FileMoveIOStream.cpp

${OBJECTDIR}/C14_IOStreams/E09_BinaryFileIOStream.o: C14_IOStreams/E09_BinaryFileIOStream.cpp
	${MKDIR} -p ${OBJECTDIR}/C14_IOStreams
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C14_IOStreams/E09_BinaryFileIOStream.o C14_IOStreams/E09_BinaryFileIOStream.cpp

${OBJECTDIR}/C14_IOStreams/E10_SerializationFileIOStream.o: C14_IOStreams/E10_SerializationFileIOStream.cpp
	${MKDIR} -p ${OBJECTDIR}/C14_IOStreams
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C14_IOStreams/E10_SerializationFileIOStream.o C14_IOStreams/E10_SerializationFileIOStream.cpp

${OBJECTDIR}/C14_IOStreams/E11_StringStream.o: C14_IOStreams/E11_StringStream.cpp
	${MKDIR} -p ${OBJECTDIR}/C14_IOStreams
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/C14_IOStreams/E11_StringStream.o C14_IOStreams/E11_StringStream.cpp

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
