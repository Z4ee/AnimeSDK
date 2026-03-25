#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/InstructionArray.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/RuntimeLabel.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TypeCode.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Linq::Expressions::Interpreter { class BranchLabel; }
namespace System::Linq::Expressions::Interpreter { class ByRefUpdater; }
namespace System::Linq::Expressions::Interpreter { class EnterTryFaultInstruction; }
namespace System::Linq::Expressions::Interpreter { class Instruction; }
namespace System::Linq::Expressions::Interpreter { class LightDelegateCreator; }
namespace System::Linq::Expressions::Interpreter { class OffsetInstruction; }
namespace System::Reflection { class ConstructorInfo; }
namespace System::Reflection { class FieldInfo; }
namespace System::Reflection { class MethodInfo; }
namespace System::Reflection { class ParameterInfo; }
namespace System::Runtime::CompilerServices { template <typename T> class StrongBox_1; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_ASSIGNLOCALBOXED_OFFSET UNITYSDK_OFFSET(0x184CE8D0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_BUILDRUNTIMELABELS_OFFSET UNITYSDK_OFFSET(0x184CCD60)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITADD_OFFSET UNITYSDK_OFFSET(0x184CF500)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITAND_OFFSET UNITYSDK_OFFSET(0x184CF620)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITARRAYLENGTH_OFFSET UNITYSDK_OFFSET(0x184D0880)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITASSIGNLOCALBOXED_OFFSET UNITYSDK_OFFSET(0x184CE860)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITASSIGNLOCALTOCLOSURE_OFFSET UNITYSDK_OFFSET(0x184CEDE0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITASSIGNLOCAL_OFFSET UNITYSDK_OFFSET(0x184CE380)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITBRANCHFALSE_OFFSET UNITYSDK_OFFSET(0x184D1360)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITBRANCHTRUE_OFFSET UNITYSDK_OFFSET(0x184D1310)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITBRANCH_1_OFFSET UNITYSDK_OFFSET(0x184D1200)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITBRANCH_2_OFFSET UNITYSDK_OFFSET(0x184D1260)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITBRANCH_OFFSET UNITYSDK_OFFSET(0x184D1140)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITBYREFCALL_OFFSET UNITYSDK_OFFSET(0x184D0E40)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITBYREFNEW_OFFSET UNITYSDK_OFFSET(0x184D0750)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITCALL_1_OFFSET UNITYSDK_OFFSET(0x184D0E10)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITCALL_OFFSET UNITYSDK_OFFSET(0x184D0D90)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITCASTREFERENCETOENUM_OFFSET UNITYSDK_OFFSET(0x184D0620)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITCASTTOENUM_OFFSET UNITYSDK_OFFSET(0x184D05D0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITCAST_OFFSET UNITYSDK_OFFSET(0x184D05B0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITCOALESCINGBRANCH_OFFSET UNITYSDK_OFFSET(0x184D12C0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITCONVERTTOUNDERLYING_OFFSET UNITYSDK_OFFSET(0x184D0550)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITCREATEDELEGATE_OFFSET UNITYSDK_OFFSET(0x184D07C0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITDECREMENT_OFFSET UNITYSDK_OFFSET(0x184D0950)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITDEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x184D0690)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITDIV_OFFSET UNITYSDK_OFFSET(0x184CF5C0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITDUP_OFFSET UNITYSDK_OFFSET(0x184CD6F0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITENTEREXCEPTIONFILTER_OFFSET UNITYSDK_OFFSET(0x184D1890)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITENTEREXCEPTIONHANDLERNONVOID_OFFSET UNITYSDK_OFFSET(0x184D1970)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITENTEREXCEPTIONHANDLERVOID_OFFSET UNITYSDK_OFFSET(0x184D19E0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITENTERFAULT_OFFSET UNITYSDK_OFFSET(0x184D17A0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITENTERFINALLY_OFFSET UNITYSDK_OFFSET(0x184D16B0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITENTERTRYCATCH_OFFSET UNITYSDK_OFFSET(0x184D15E0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITENTERTRYFAULT_OFFSET UNITYSDK_OFFSET(0x184D1630)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITENTERTRYFINALLY_OFFSET UNITYSDK_OFFSET(0x184D1570)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITEQUAL_OFFSET UNITYSDK_OFFSET(0x184CF8B0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITEXCLUSIVEOR_OFFSET UNITYSDK_OFFSET(0x184CF600)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITGETARRAYITEM_OFFSET UNITYSDK_OFFSET(0x184CF310)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITGOTO_OFFSET UNITYSDK_OFFSET(0x184D10A0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITGREATERTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x184D0460)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITGREATERTHAN_OFFSET UNITYSDK_OFFSET(0x184D0430)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITINCREMENT_OFFSET UNITYSDK_OFFSET(0x184D0930)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITINITIALIZELOCAL_OFFSET UNITYSDK_OFFSET(0x184CF0C0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITINITIALIZEPARAMETER_OFFSET UNITYSDK_OFFSET(0x184CF1F0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITLEAVEEXCEPTIONFILTER_OFFSET UNITYSDK_OFFSET(0x184D1900)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITLEAVEEXCEPTIONHANDLER_OFFSET UNITYSDK_OFFSET(0x184D1A50)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITLEAVEFAULT_OFFSET UNITYSDK_OFFSET(0x184D1820)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITLEAVEFINALLY_OFFSET UNITYSDK_OFFSET(0x184D1730)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITLEFTSHIFT_OFFSET UNITYSDK_OFFSET(0x184CF660)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITLESSTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x184CFEA0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITLESSTHAN_OFFSET UNITYSDK_OFFSET(0x184CF910)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITLOADFIELD_OFFSET UNITYSDK_OFFSET(0x184D0A10)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITLOADLOCALBOXED_OFFSET UNITYSDK_OFFSET(0x184CDBB0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITLOADLOCALFROMCLOSUREBOXED_OFFSET UNITYSDK_OFFSET(0x184CE100)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITLOADLOCALFROMCLOSURE_OFFSET UNITYSDK_OFFSET(0x184CDE80)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITLOADLOCAL_OFFSET UNITYSDK_OFFSET(0x184CD930)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITLOAD_1_OFFSET UNITYSDK_OFFSET(0x184CD510)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITLOAD_2_OFFSET UNITYSDK_OFFSET(0x184CCF70)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITLOAD_OFFSET UNITYSDK_OFFSET(0x184CCF60)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITMODULO_OFFSET UNITYSDK_OFFSET(0x184CF5E0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITMUL_OFFSET UNITYSDK_OFFSET(0x184CF580)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITNEGATECHECKED_OFFSET UNITYSDK_OFFSET(0x184D0910)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITNEGATE_OFFSET UNITYSDK_OFFSET(0x184D08F0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITNEWARRAYBOUNDS_OFFSET UNITYSDK_OFFSET(0x184CF440)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITNEWARRAYINIT_OFFSET UNITYSDK_OFFSET(0x184CF4A0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITNEWARRAY_OFFSET UNITYSDK_OFFSET(0x184CF3F0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITNEWRUNTIMEVARIABLES_OFFSET UNITYSDK_OFFSET(0x184CF2C0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITNEW_OFFSET UNITYSDK_OFFSET(0x184D06E0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITNOTEQUAL_OFFSET UNITYSDK_OFFSET(0x184CF8E0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITNOT_OFFSET UNITYSDK_OFFSET(0x184D0670)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITNULLABLECALL_OFFSET UNITYSDK_OFFSET(0x184D0EF0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITNUMERICCONVERTCHECKED_OFFSET UNITYSDK_OFFSET(0x184D0490)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITNUMERICCONVERTUNCHECKED_OFFSET UNITYSDK_OFFSET(0x184D04F0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITOR_OFFSET UNITYSDK_OFFSET(0x184CF640)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITPOP_OFFSET UNITYSDK_OFFSET(0x184CD760)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITRETHROWVOID_OFFSET UNITYSDK_OFFSET(0x184D1500)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITRETHROW_OFFSET UNITYSDK_OFFSET(0x184D1490)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITRIGHTSHIFT_OFFSET UNITYSDK_OFFSET(0x184CF890)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITSETARRAYITEM_OFFSET UNITYSDK_OFFSET(0x184CF380)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITSTOREFIELD_OFFSET UNITYSDK_OFFSET(0x184D0D10)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITSTORELOCALBOXED_OFFSET UNITYSDK_OFFSET(0x184CEB20)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITSTORELOCALTOCLOSURE_OFFSET UNITYSDK_OFFSET(0x184CF050)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITSTORELOCAL_OFFSET UNITYSDK_OFFSET(0x184CE5F0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITSTRINGSWITCH_OFFSET UNITYSDK_OFFSET(0x184D1C00)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITSUB_OFFSET UNITYSDK_OFFSET(0x184CF540)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITTHROWVOID_OFFSET UNITYSDK_OFFSET(0x184D1420)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITTHROW_OFFSET UNITYSDK_OFFSET(0x184D13B0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITTYPEAS_OFFSET UNITYSDK_OFFSET(0x184D09C0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITTYPEEQUALS_OFFSET UNITYSDK_OFFSET(0x184D0810)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITTYPEIS_OFFSET UNITYSDK_OFFSET(0x184D0970)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMIT_OFFSET UNITYSDK_OFFSET(0x184CC8D0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_ENSURELABELINDEX_OFFSET UNITYSDK_OFFSET(0x184D0FF0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_FIXUPBRANCH_OFFSET UNITYSDK_OFFSET(0x184BBDA0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_GETINSTRUCTION_OFFSET UNITYSDK_OFFSET(0x184CCB70)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_GETLOADFIELD_OFFSET UNITYSDK_OFFSET(0x184D0A30)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x184C7810)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_GET_CURRENTCONTINUATIONSDEPTH_OFFSET UNITYSDK_OFFSET(0x184CCB60)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_GET_CURRENTSTACKDEPTH_OFFSET UNITYSDK_OFFSET(0x184CCB50)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_INITIMMUTABLEREFBOX_OFFSET UNITYSDK_OFFSET(0x184CC790)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_INITREFERENCE_OFFSET UNITYSDK_OFFSET(0x184CF1B0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_LOADLOCALBOXED_OFFSET UNITYSDK_OFFSET(0x184CDC20)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_MAKELABEL_OFFSET UNITYSDK_OFFSET(0x184D0F50)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_MARKLABEL_OFFSET UNITYSDK_OFFSET(0x184D1070)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_MARKRUNTIMELABEL_OFFSET UNITYSDK_OFFSET(0x184D1020)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_PARAMETERBOX_OFFSET UNITYSDK_OFFSET(0x184CC4C0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_PARAMETER_OFFSET UNITYSDK_OFFSET(0x184CF280)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_STORELOCALBOXED_OFFSET UNITYSDK_OFFSET(0x184CEB90)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_SWITCHTOBOXED_OFFSET UNITYSDK_OFFSET(0x184CD7D0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_TOARRAY_OFFSET UNITYSDK_OFFSET(0x184CCBD0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_UNEMIT_OFFSET UNITYSDK_OFFSET(0x184CCA40)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_UPDATESTACKDEPTH_OFFSET UNITYSDK_OFFSET(0x184CC9B0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST__CCTOR_OFFSET UNITYSDK_OFFSET(0x184D1CB0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x184D1C60)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int InstructionList_TypeDefinitionIndex = 3420;

	class InstructionList : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Linq::Expressions::Interpreter::Instruction*>** StaticGet_s_assignLocalBoxed()
		{
			return (::Il2CppArray<::System::Linq::Expressions::Interpreter::Instruction*>**)Il2CppClass::FromTypeDefinitionIndex(InstructionList_TypeDefinitionIndex)->GetStaticField(0xFA50);
		}
		static ::Il2CppArray<::System::Linq::Expressions::Interpreter::Instruction*>** StaticGet_s_loadLocalBoxed()
		{
			return (::Il2CppArray<::System::Linq::Expressions::Interpreter::Instruction*>**)Il2CppClass::FromTypeDefinitionIndex(InstructionList_TypeDefinitionIndex)->GetStaticField(0xFA58);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_null()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(InstructionList_TypeDefinitionIndex)->GetStaticField(0xFA60);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_false()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(InstructionList_TypeDefinitionIndex)->GetStaticField(0xFA68);
		}
		static ::Il2CppArray<::System::Linq::Expressions::Interpreter::Instruction*>** StaticGet_s_loadLocalFromClosureBoxed()
		{
			return (::Il2CppArray<::System::Linq::Expressions::Interpreter::Instruction*>**)Il2CppClass::FromTypeDefinitionIndex(InstructionList_TypeDefinitionIndex)->GetStaticField(0xFA70);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Reflection::FieldInfo*, ::System::Linq::Expressions::Interpreter::Instruction*>** StaticGet_s_loadFields()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Reflection::FieldInfo*, ::System::Linq::Expressions::Interpreter::Instruction*>**)Il2CppClass::FromTypeDefinitionIndex(InstructionList_TypeDefinitionIndex)->GetStaticField(0xFA78);
		}
		static ::Il2CppArray<::System::Linq::Expressions::Interpreter::Instruction*>** StaticGet_s_storeLocalBoxed()
		{
			return (::Il2CppArray<::System::Linq::Expressions::Interpreter::Instruction*>**)Il2CppClass::FromTypeDefinitionIndex(InstructionList_TypeDefinitionIndex)->GetStaticField(0xFA80);
		}
		static ::Il2CppArray<::System::Linq::Expressions::Interpreter::Instruction*>** StaticGet_s_assignLocal()
		{
			return (::Il2CppArray<::System::Linq::Expressions::Interpreter::Instruction*>**)Il2CppClass::FromTypeDefinitionIndex(InstructionList_TypeDefinitionIndex)->GetStaticField(0xFA88);
		}
		static ::Il2CppArray<::System::Linq::Expressions::Interpreter::Instruction*>** StaticGet_s_loadObjectCached()
		{
			return (::Il2CppArray<::System::Linq::Expressions::Interpreter::Instruction*>**)Il2CppClass::FromTypeDefinitionIndex(InstructionList_TypeDefinitionIndex)->GetStaticField(0xFA90);
		}
		static ::Il2CppArray<::System::Linq::Expressions::Interpreter::Instruction*>** StaticGet_s_loadLocal()
		{
			return (::Il2CppArray<::System::Linq::Expressions::Interpreter::Instruction*>**)Il2CppClass::FromTypeDefinitionIndex(InstructionList_TypeDefinitionIndex)->GetStaticField(0xFA98);
		}
		static ::Il2CppArray<::System::Linq::Expressions::Interpreter::Instruction*>** StaticGet_s_Ints()
		{
			return (::Il2CppArray<::System::Linq::Expressions::Interpreter::Instruction*>**)Il2CppClass::FromTypeDefinitionIndex(InstructionList_TypeDefinitionIndex)->GetStaticField(0xFAA0);
		}
		static ::Il2CppArray<::System::Linq::Expressions::Interpreter::RuntimeLabel>** StaticGet_s_emptyRuntimeLabels()
		{
			return (::Il2CppArray<::System::Linq::Expressions::Interpreter::RuntimeLabel>**)Il2CppClass::FromTypeDefinitionIndex(InstructionList_TypeDefinitionIndex)->GetStaticField(0xFAA8);
		}
		static ::Il2CppArray<::System::Linq::Expressions::Interpreter::Instruction*>** StaticGet_s_assignLocalToClosure()
		{
			return (::Il2CppArray<::System::Linq::Expressions::Interpreter::Instruction*>**)Il2CppClass::FromTypeDefinitionIndex(InstructionList_TypeDefinitionIndex)->GetStaticField(0xFAB0);
		}
		static ::Il2CppArray<::System::Linq::Expressions::Interpreter::Instruction*>** StaticGet_s_loadLocalFromClosure()
		{
			return (::Il2CppArray<::System::Linq::Expressions::Interpreter::Instruction*>**)Il2CppClass::FromTypeDefinitionIndex(InstructionList_TypeDefinitionIndex)->GetStaticField(0xFAB8);
		}
		static ::Il2CppArray<::System::Linq::Expressions::Interpreter::Instruction*>** StaticGet_s_storeLocal()
		{
			return (::Il2CppArray<::System::Linq::Expressions::Interpreter::Instruction*>**)Il2CppClass::FromTypeDefinitionIndex(InstructionList_TypeDefinitionIndex)->GetStaticField(0xFAC0);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_true()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(InstructionList_TypeDefinitionIndex)->GetStaticField(0xFAC8);
		}
		::System::Collections::Generic::List_1<::System::Linq::Expressions::Interpreter::Instruction*>* _instructions; // 0x10
		::System::Collections::Generic::List_1<::System::Linq::Expressions::Interpreter::BranchLabel*>* _labels; // 0x18
		::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Object*>>* _debugCookies; // 0x20
		::System::Collections::Generic::List_1<::System::Object*>* _objects; // 0x28
		::System::Int32 _maxContinuationDepth; // 0x30
		::System::Int32 _currentContinuationsDepth; // 0x34
		::System::Int32 _currentStackDepth; // 0x38
		::System::Int32 _maxStackDepth; // 0x3C
		::System::Int32 _runtimeLabelCount; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST__CCTOR_OFFSET))();
		}

		::System::Void Emit(::System::Linq::Expressions::Interpreter::Instruction* instruction)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Interpreter::Instruction*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMIT_OFFSET))(this, instruction);
		}

		::System::Void UpdateStackDepth(::System::Linq::Expressions::Interpreter::Instruction* instruction)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Interpreter::Instruction*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_UPDATESTACKDEPTH_OFFSET))(this, instruction);
		}

		::System::Void UnEmit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_UNEMIT_OFFSET))(this);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_GET_COUNT_OFFSET))(this);
		}

		::System::Int32 get_CurrentStackDepth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_GET_CURRENTSTACKDEPTH_OFFSET))(this);
		}

		::System::Int32 get_CurrentContinuationsDepth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_GET_CURRENTCONTINUATIONSDEPTH_OFFSET))(this);
		}

		::System::Linq::Expressions::Interpreter::Instruction* GetInstruction(::System::Int32 index)
		{
			return ((::System::Linq::Expressions::Interpreter::Instruction*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_GETINSTRUCTION_OFFSET))(this, index);
		}

		::System::Linq::Expressions::Interpreter::InstructionArray ToArray()
		{
			return ((::System::Linq::Expressions::Interpreter::InstructionArray(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_TOARRAY_OFFSET))(this);
		}

		::System::Void EmitLoad(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITLOAD_OFFSET))(this, value);
		}

		::System::Void EmitLoad_1(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITLOAD_1_OFFSET))(this, value);
		}

		::System::Void EmitLoad_2(::System::Object* value, ::System::Type* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITLOAD_2_OFFSET))(this, value, type);
		}

		::System::Void EmitDup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITDUP_OFFSET))(this);
		}

		::System::Void EmitPop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITPOP_OFFSET))(this);
		}

		::System::Void SwitchToBoxed(::System::Int32 index, ::System::Int32 instructionIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_SWITCHTOBOXED_OFFSET))(this, index, instructionIndex);
		}

		::System::Void EmitLoadLocal(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITLOADLOCAL_OFFSET))(this, index);
		}

		::System::Void EmitLoadLocalBoxed(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITLOADLOCALBOXED_OFFSET))(this, index);
		}

		static ::System::Linq::Expressions::Interpreter::Instruction* LoadLocalBoxed(::System::Int32 index)
		{
			return ((::System::Linq::Expressions::Interpreter::Instruction*(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_LOADLOCALBOXED_OFFSET))(index);
		}

		::System::Void EmitLoadLocalFromClosure(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITLOADLOCALFROMCLOSURE_OFFSET))(this, index);
		}

		::System::Void EmitLoadLocalFromClosureBoxed(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITLOADLOCALFROMCLOSUREBOXED_OFFSET))(this, index);
		}

		::System::Void EmitAssignLocal(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITASSIGNLOCAL_OFFSET))(this, index);
		}

		::System::Void EmitStoreLocal(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITSTORELOCAL_OFFSET))(this, index);
		}

		::System::Void EmitAssignLocalBoxed(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITASSIGNLOCALBOXED_OFFSET))(this, index);
		}

		static ::System::Linq::Expressions::Interpreter::Instruction* AssignLocalBoxed(::System::Int32 index)
		{
			return ((::System::Linq::Expressions::Interpreter::Instruction*(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_ASSIGNLOCALBOXED_OFFSET))(index);
		}

		::System::Void EmitStoreLocalBoxed(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITSTORELOCALBOXED_OFFSET))(this, index);
		}

		static ::System::Linq::Expressions::Interpreter::Instruction* StoreLocalBoxed(::System::Int32 index)
		{
			return ((::System::Linq::Expressions::Interpreter::Instruction*(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_STORELOCALBOXED_OFFSET))(index);
		}

		::System::Void EmitAssignLocalToClosure(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITASSIGNLOCALTOCLOSURE_OFFSET))(this, index);
		}

		::System::Void EmitStoreLocalToClosure(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITSTORELOCALTOCLOSURE_OFFSET))(this, index);
		}

		::System::Void EmitInitializeLocal(::System::Int32 index, ::System::Type* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITINITIALIZELOCAL_OFFSET))(this, index, type);
		}

		::System::Void EmitInitializeParameter(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITINITIALIZEPARAMETER_OFFSET))(this, index);
		}

		static ::System::Linq::Expressions::Interpreter::Instruction* Parameter(::System::Int32 index)
		{
			return ((::System::Linq::Expressions::Interpreter::Instruction*(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_PARAMETER_OFFSET))(index);
		}

		static ::System::Linq::Expressions::Interpreter::Instruction* ParameterBox(::System::Int32 index)
		{
			return ((::System::Linq::Expressions::Interpreter::Instruction*(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_PARAMETERBOX_OFFSET))(index);
		}

		static ::System::Linq::Expressions::Interpreter::Instruction* InitReference(::System::Int32 index)
		{
			return ((::System::Linq::Expressions::Interpreter::Instruction*(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_INITREFERENCE_OFFSET))(index);
		}

		static ::System::Linq::Expressions::Interpreter::Instruction* InitImmutableRefBox(::System::Int32 index)
		{
			return ((::System::Linq::Expressions::Interpreter::Instruction*(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_INITIMMUTABLEREFBOX_OFFSET))(index);
		}

		::System::Void EmitNewRuntimeVariables(::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITNEWRUNTIMEVARIABLES_OFFSET))(this, count);
		}

		::System::Void EmitGetArrayItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITGETARRAYITEM_OFFSET))(this);
		}

		::System::Void EmitSetArrayItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITSETARRAYITEM_OFFSET))(this);
		}

		::System::Void EmitNewArray(::System::Type* elementType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITNEWARRAY_OFFSET))(this, elementType);
		}

		::System::Void EmitNewArrayBounds(::System::Type* elementType, ::System::Int32 rank)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITNEWARRAYBOUNDS_OFFSET))(this, elementType, rank);
		}

		::System::Void EmitNewArrayInit(::System::Type* elementType, ::System::Int32 elementCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITNEWARRAYINIT_OFFSET))(this, elementType, elementCount);
		}

		::System::Void EmitAdd(::System::Type* type, ::System::Boolean checked)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITADD_OFFSET))(this, type, checked);
		}

		::System::Void EmitSub(::System::Type* type, ::System::Boolean checked)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITSUB_OFFSET))(this, type, checked);
		}

		::System::Void EmitMul(::System::Type* type, ::System::Boolean checked)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITMUL_OFFSET))(this, type, checked);
		}

		::System::Void EmitDiv(::System::Type* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITDIV_OFFSET))(this, type);
		}

		::System::Void EmitModulo(::System::Type* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITMODULO_OFFSET))(this, type);
		}

		::System::Void EmitExclusiveOr(::System::Type* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITEXCLUSIVEOR_OFFSET))(this, type);
		}

		::System::Void EmitAnd(::System::Type* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITAND_OFFSET))(this, type);
		}

		::System::Void EmitOr(::System::Type* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITOR_OFFSET))(this, type);
		}

		::System::Void EmitLeftShift(::System::Type* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITLEFTSHIFT_OFFSET))(this, type);
		}

		::System::Void EmitRightShift(::System::Type* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITRIGHTSHIFT_OFFSET))(this, type);
		}

		::System::Void EmitEqual(::System::Type* type, ::System::Boolean liftedToNull)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITEQUAL_OFFSET))(this, type, liftedToNull);
		}

		::System::Void EmitNotEqual(::System::Type* type, ::System::Boolean liftedToNull)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITNOTEQUAL_OFFSET))(this, type, liftedToNull);
		}

		::System::Void EmitLessThan(::System::Type* type, ::System::Boolean liftedToNull)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITLESSTHAN_OFFSET))(this, type, liftedToNull);
		}

		::System::Void EmitLessThanOrEqual(::System::Type* type, ::System::Boolean liftedToNull)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITLESSTHANOREQUAL_OFFSET))(this, type, liftedToNull);
		}

		::System::Void EmitGreaterThan(::System::Type* type, ::System::Boolean liftedToNull)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITGREATERTHAN_OFFSET))(this, type, liftedToNull);
		}

		::System::Void EmitGreaterThanOrEqual(::System::Type* type, ::System::Boolean liftedToNull)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITGREATERTHANOREQUAL_OFFSET))(this, type, liftedToNull);
		}

		::System::Void EmitNumericConvertChecked(::System::TypeCode from, ::System::TypeCode to, ::System::Boolean isLiftedToNull)
		{
			return ((::System::Void(*)(::PVOID, ::System::TypeCode, ::System::TypeCode, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITNUMERICCONVERTCHECKED_OFFSET))(this, from, to, isLiftedToNull);
		}

		::System::Void EmitNumericConvertUnchecked(::System::TypeCode from, ::System::TypeCode to, ::System::Boolean isLiftedToNull)
		{
			return ((::System::Void(*)(::PVOID, ::System::TypeCode, ::System::TypeCode, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITNUMERICCONVERTUNCHECKED_OFFSET))(this, from, to, isLiftedToNull);
		}

		::System::Void EmitConvertToUnderlying(::System::TypeCode to, ::System::Boolean isLiftedToNull)
		{
			return ((::System::Void(*)(::PVOID, ::System::TypeCode, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITCONVERTTOUNDERLYING_OFFSET))(this, to, isLiftedToNull);
		}

		::System::Void EmitCast(::System::Type* toType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITCAST_OFFSET))(this, toType);
		}

		::System::Void EmitCastToEnum(::System::Type* toType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITCASTTOENUM_OFFSET))(this, toType);
		}

		::System::Void EmitCastReferenceToEnum(::System::Type* toType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITCASTREFERENCETOENUM_OFFSET))(this, toType);
		}

		::System::Void EmitNot(::System::Type* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITNOT_OFFSET))(this, type);
		}

		::System::Void EmitDefaultValue(::System::Type* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITDEFAULTVALUE_OFFSET))(this, type);
		}

		::System::Void EmitNew(::System::Reflection::ConstructorInfo* constructorInfo, ::Il2CppArray<::System::Reflection::ParameterInfo*>* parameters)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::ConstructorInfo*, ::Il2CppArray<::System::Reflection::ParameterInfo*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITNEW_OFFSET))(this, constructorInfo, parameters);
		}

		::System::Void EmitByRefNew(::System::Reflection::ConstructorInfo* constructorInfo, ::Il2CppArray<::System::Reflection::ParameterInfo*>* parameters, ::Il2CppArray<::System::Linq::Expressions::Interpreter::ByRefUpdater*>* updaters)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::ConstructorInfo*, ::Il2CppArray<::System::Reflection::ParameterInfo*>*, ::Il2CppArray<::System::Linq::Expressions::Interpreter::ByRefUpdater*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITBYREFNEW_OFFSET))(this, constructorInfo, parameters, updaters);
		}

		::System::Void EmitCreateDelegate(::System::Linq::Expressions::Interpreter::LightDelegateCreator* creator)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Interpreter::LightDelegateCreator*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITCREATEDELEGATE_OFFSET))(this, creator);
		}

		::System::Void EmitTypeEquals()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITTYPEEQUALS_OFFSET))(this);
		}

		::System::Void EmitArrayLength()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITARRAYLENGTH_OFFSET))(this);
		}

		::System::Void EmitNegate(::System::Type* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITNEGATE_OFFSET))(this, type);
		}

		::System::Void EmitNegateChecked(::System::Type* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITNEGATECHECKED_OFFSET))(this, type);
		}

		::System::Void EmitIncrement(::System::Type* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITINCREMENT_OFFSET))(this, type);
		}

		::System::Void EmitDecrement(::System::Type* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITDECREMENT_OFFSET))(this, type);
		}

		::System::Void EmitTypeIs(::System::Type* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITTYPEIS_OFFSET))(this, type);
		}

		::System::Void EmitTypeAs(::System::Type* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITTYPEAS_OFFSET))(this, type);
		}

		::System::Void EmitLoadField(::System::Reflection::FieldInfo* field)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::FieldInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITLOADFIELD_OFFSET))(this, field);
		}

		::System::Linq::Expressions::Interpreter::Instruction* GetLoadField(::System::Reflection::FieldInfo* field)
		{
			return ((::System::Linq::Expressions::Interpreter::Instruction*(*)(::PVOID, ::System::Reflection::FieldInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_GETLOADFIELD_OFFSET))(this, field);
		}

		::System::Void EmitStoreField(::System::Reflection::FieldInfo* field)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::FieldInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITSTOREFIELD_OFFSET))(this, field);
		}

		::System::Void EmitCall(::System::Reflection::MethodInfo* method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITCALL_OFFSET))(this, method);
		}

		::System::Void EmitCall_1(::System::Reflection::MethodInfo* method, ::Il2CppArray<::System::Reflection::ParameterInfo*>* parameters)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::MethodInfo*, ::Il2CppArray<::System::Reflection::ParameterInfo*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITCALL_1_OFFSET))(this, method, parameters);
		}

		::System::Void EmitByRefCall(::System::Reflection::MethodInfo* method, ::Il2CppArray<::System::Reflection::ParameterInfo*>* parameters, ::Il2CppArray<::System::Linq::Expressions::Interpreter::ByRefUpdater*>* byrefArgs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::MethodInfo*, ::Il2CppArray<::System::Reflection::ParameterInfo*>*, ::Il2CppArray<::System::Linq::Expressions::Interpreter::ByRefUpdater*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITBYREFCALL_OFFSET))(this, method, parameters, byrefArgs);
		}

		::System::Void EmitNullableCall(::System::Reflection::MethodInfo* method, ::Il2CppArray<::System::Reflection::ParameterInfo*>* parameters)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::MethodInfo*, ::Il2CppArray<::System::Reflection::ParameterInfo*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITNULLABLECALL_OFFSET))(this, method, parameters);
		}

		::Il2CppArray<::System::Linq::Expressions::Interpreter::RuntimeLabel>* BuildRuntimeLabels()
		{
			return ((::Il2CppArray<::System::Linq::Expressions::Interpreter::RuntimeLabel>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_BUILDRUNTIMELABELS_OFFSET))(this);
		}

		::System::Linq::Expressions::Interpreter::BranchLabel* MakeLabel()
		{
			return ((::System::Linq::Expressions::Interpreter::BranchLabel*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_MAKELABEL_OFFSET))(this);
		}

		::System::Void FixupBranch(::System::Int32 branchIndex, ::System::Int32 offset)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_FIXUPBRANCH_OFFSET))(this, branchIndex, offset);
		}

		::System::Int32 EnsureLabelIndex(::System::Linq::Expressions::Interpreter::BranchLabel* label)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::BranchLabel*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_ENSURELABELINDEX_OFFSET))(this, label);
		}

		::System::Int32 MarkRuntimeLabel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_MARKRUNTIMELABEL_OFFSET))(this);
		}

		::System::Void MarkLabel(::System::Linq::Expressions::Interpreter::BranchLabel* label)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Interpreter::BranchLabel*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_MARKLABEL_OFFSET))(this, label);
		}

		::System::Void EmitGoto(::System::Linq::Expressions::Interpreter::BranchLabel* label, ::System::Boolean hasResult, ::System::Boolean hasValue, ::System::Boolean labelTargetGetsValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Interpreter::BranchLabel*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITGOTO_OFFSET))(this, label, hasResult, hasValue, labelTargetGetsValue);
		}

		::System::Void EmitBranch(::System::Linq::Expressions::Interpreter::OffsetInstruction* instruction, ::System::Linq::Expressions::Interpreter::BranchLabel* label)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Interpreter::OffsetInstruction*, ::System::Linq::Expressions::Interpreter::BranchLabel*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITBRANCH_OFFSET))(this, instruction, label);
		}

		::System::Void EmitBranch_1(::System::Linq::Expressions::Interpreter::BranchLabel* label)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Interpreter::BranchLabel*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITBRANCH_1_OFFSET))(this, label);
		}

		::System::Void EmitBranch_2(::System::Linq::Expressions::Interpreter::BranchLabel* label, ::System::Boolean hasResult, ::System::Boolean hasValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Interpreter::BranchLabel*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITBRANCH_2_OFFSET))(this, label, hasResult, hasValue);
		}

		::System::Void EmitCoalescingBranch(::System::Linq::Expressions::Interpreter::BranchLabel* leftNotNull)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Interpreter::BranchLabel*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITCOALESCINGBRANCH_OFFSET))(this, leftNotNull);
		}

		::System::Void EmitBranchTrue(::System::Linq::Expressions::Interpreter::BranchLabel* elseLabel)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Interpreter::BranchLabel*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITBRANCHTRUE_OFFSET))(this, elseLabel);
		}

		::System::Void EmitBranchFalse(::System::Linq::Expressions::Interpreter::BranchLabel* elseLabel)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Interpreter::BranchLabel*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITBRANCHFALSE_OFFSET))(this, elseLabel);
		}

		::System::Void EmitThrow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITTHROW_OFFSET))(this);
		}

		::System::Void EmitThrowVoid()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITTHROWVOID_OFFSET))(this);
		}

		::System::Void EmitRethrow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITRETHROW_OFFSET))(this);
		}

		::System::Void EmitRethrowVoid()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITRETHROWVOID_OFFSET))(this);
		}

		::System::Void EmitEnterTryFinally(::System::Linq::Expressions::Interpreter::BranchLabel* finallyStartLabel)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Interpreter::BranchLabel*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITENTERTRYFINALLY_OFFSET))(this, finallyStartLabel);
		}

		::System::Void EmitEnterTryCatch()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITENTERTRYCATCH_OFFSET))(this);
		}

		::System::Linq::Expressions::Interpreter::EnterTryFaultInstruction* EmitEnterTryFault(::System::Linq::Expressions::Interpreter::BranchLabel* tryEnd)
		{
			return ((::System::Linq::Expressions::Interpreter::EnterTryFaultInstruction*(*)(::PVOID, ::System::Linq::Expressions::Interpreter::BranchLabel*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITENTERTRYFAULT_OFFSET))(this, tryEnd);
		}

		::System::Void EmitEnterFinally(::System::Linq::Expressions::Interpreter::BranchLabel* finallyStartLabel)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Interpreter::BranchLabel*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITENTERFINALLY_OFFSET))(this, finallyStartLabel);
		}

		::System::Void EmitLeaveFinally()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITLEAVEFINALLY_OFFSET))(this);
		}

		::System::Void EmitEnterFault(::System::Linq::Expressions::Interpreter::BranchLabel* faultStartLabel)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Interpreter::BranchLabel*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITENTERFAULT_OFFSET))(this, faultStartLabel);
		}

		::System::Void EmitLeaveFault()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITLEAVEFAULT_OFFSET))(this);
		}

		::System::Void EmitEnterExceptionFilter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITENTEREXCEPTIONFILTER_OFFSET))(this);
		}

		::System::Void EmitLeaveExceptionFilter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITLEAVEEXCEPTIONFILTER_OFFSET))(this);
		}

		::System::Void EmitEnterExceptionHandlerNonVoid()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITENTEREXCEPTIONHANDLERNONVOID_OFFSET))(this);
		}

		::System::Void EmitEnterExceptionHandlerVoid()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITENTEREXCEPTIONHANDLERVOID_OFFSET))(this);
		}

		::System::Void EmitLeaveExceptionHandler(::System::Boolean hasValue, ::System::Linq::Expressions::Interpreter::BranchLabel* tryExpressionEndLabel)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Linq::Expressions::Interpreter::BranchLabel*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITLEAVEEXCEPTIONHANDLER_OFFSET))(this, hasValue, tryExpressionEndLabel);
		}

		::System::Void EmitStringSwitch(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* cases, ::System::Runtime::CompilerServices::StrongBox_1<::System::Int32>* nullCase)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*, ::System::Runtime::CompilerServices::StrongBox_1<::System::Int32>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITSTRINGSWITCH_OFFSET))(this, cases, nullCase);
		}
	};
}
