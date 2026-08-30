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

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_ASSIGNLOCALBOXED_OFFSET UNITYSDK_OFFSET(0x1AFE4510)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_BUILDRUNTIMELABELS_OFFSET UNITYSDK_OFFSET(0x1AFE1E00)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITADD_OFFSET UNITYSDK_OFFSET(0x1AFE58A0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITAND_OFFSET UNITYSDK_OFFSET(0x1AFE5D20)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITARRAYLENGTH_OFFSET UNITYSDK_OFFSET(0x1AFE7C40)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITASSIGNLOCALBOXED_OFFSET UNITYSDK_OFFSET(0x1AFE43F0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITASSIGNLOCALTOCLOSURE_OFFSET UNITYSDK_OFFSET(0x1AFE4A90)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITASSIGNLOCAL_OFFSET UNITYSDK_OFFSET(0x1AFE3D50)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITBRANCHFALSE_OFFSET UNITYSDK_OFFSET(0x1AFE9290)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITBRANCHTRUE_OFFSET UNITYSDK_OFFSET(0x1AFE9240)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITBRANCH_1_OFFSET UNITYSDK_OFFSET(0x1AFE9130)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITBRANCH_2_OFFSET UNITYSDK_OFFSET(0x1AFE9190)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITBRANCH_OFFSET UNITYSDK_OFFSET(0x1AFE8F80)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITBYREFCALL_OFFSET UNITYSDK_OFFSET(0x1AFE8960)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITBYREFNEW_OFFSET UNITYSDK_OFFSET(0x1AFE7900)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITCALL_1_OFFSET UNITYSDK_OFFSET(0x1AFE88A0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITCALL_OFFSET UNITYSDK_OFFSET(0x1AFE87C0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITCASTREFERENCETOENUM_OFFSET UNITYSDK_OFFSET(0x1AFE7560)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITCASTTOENUM_OFFSET UNITYSDK_OFFSET(0x1AFE7470)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITCAST_OFFSET UNITYSDK_OFFSET(0x1AFE73C0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITCOALESCINGBRANCH_OFFSET UNITYSDK_OFFSET(0x1AFE91F0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITCONVERTTOUNDERLYING_OFFSET UNITYSDK_OFFSET(0x1AFE72D0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITCREATEDELEGATE_OFFSET UNITYSDK_OFFSET(0x1AFE7A20)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITDECREMENT_OFFSET UNITYSDK_OFFSET(0x1AFE7F80)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITDEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x1AFE7700)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITDIV_OFFSET UNITYSDK_OFFSET(0x1AFE5B10)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITDUP_OFFSET UNITYSDK_OFFSET(0x1AFE2B90)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITENTEREXCEPTIONFILTER_OFFSET UNITYSDK_OFFSET(0x1AFE9F90)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITENTEREXCEPTIONHANDLERNONVOID_OFFSET UNITYSDK_OFFSET(0x1AFEA1F0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITENTEREXCEPTIONHANDLERVOID_OFFSET UNITYSDK_OFFSET(0x1AFEA320)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITENTERFAULT_OFFSET UNITYSDK_OFFSET(0x1AFE9D30)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITENTERFINALLY_OFFSET UNITYSDK_OFFSET(0x1AFE9AD0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITENTERTRYCATCH_OFFSET UNITYSDK_OFFSET(0x1AFE98C0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITENTERTRYFAULT_OFFSET UNITYSDK_OFFSET(0x1AFE99B0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITENTERTRYFINALLY_OFFSET UNITYSDK_OFFSET(0x1AFE97A0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITEQUAL_OFFSET UNITYSDK_OFFSET(0x1AFE61D0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITEXCLUSIVEOR_OFFSET UNITYSDK_OFFSET(0x1AFE5C70)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITGETARRAYITEM_OFFSET UNITYSDK_OFFSET(0x1AFE5370)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITGOTO_OFFSET UNITYSDK_OFFSET(0x1AFE8E30)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITGREATERTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x1AFE7010)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITGREATERTHAN_OFFSET UNITYSDK_OFFSET(0x1AFE6F50)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITINCREMENT_OFFSET UNITYSDK_OFFSET(0x1AFE7ED0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITINITIALIZELOCAL_OFFSET UNITYSDK_OFFSET(0x1AFE4E00)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITINITIALIZEPARAMETER_OFFSET UNITYSDK_OFFSET(0x1AFE5100)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITLEAVEEXCEPTIONFILTER_OFFSET UNITYSDK_OFFSET(0x1AFEA0C0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITLEAVEEXCEPTIONHANDLER_OFFSET UNITYSDK_OFFSET(0x1AFEA450)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITLEAVEFAULT_OFFSET UNITYSDK_OFFSET(0x1AFE9E60)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITLEAVEFINALLY_OFFSET UNITYSDK_OFFSET(0x1AFE9C00)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITLEFTSHIFT_OFFSET UNITYSDK_OFFSET(0x1AFE5E80)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITLESSTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x1AFE6950)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITLESSTHAN_OFFSET UNITYSDK_OFFSET(0x1AFE6350)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITLOADFIELD_OFFSET UNITYSDK_OFFSET(0x1AFE8210)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITLOADLOCALBOXED_OFFSET UNITYSDK_OFFSET(0x1AFE3330)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITLOADLOCALFROMCLOSUREBOXED_OFFSET UNITYSDK_OFFSET(0x1AFE39F0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITLOADLOCALFROMCLOSURE_OFFSET UNITYSDK_OFFSET(0x1AFE3690)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITLOADLOCAL_OFFSET UNITYSDK_OFFSET(0x1AFE2FD0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITLOAD_1_OFFSET UNITYSDK_OFFSET(0x1AFE2890)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITLOAD_2_OFFSET UNITYSDK_OFFSET(0x1AFE2020)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITLOAD_OFFSET UNITYSDK_OFFSET(0x1AFE2010)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITMODULO_OFFSET UNITYSDK_OFFSET(0x1AFE5BC0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITMUL_OFFSET UNITYSDK_OFFSET(0x1AFE5A40)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITNEGATECHECKED_OFFSET UNITYSDK_OFFSET(0x1AFE7E20)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITNEGATE_OFFSET UNITYSDK_OFFSET(0x1AFE7D70)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITNEWARRAYBOUNDS_OFFSET UNITYSDK_OFFSET(0x1AFE56C0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITNEWARRAYINIT_OFFSET UNITYSDK_OFFSET(0x1AFE57B0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITNEWARRAY_OFFSET UNITYSDK_OFFSET(0x1AFE55D0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITNEWRUNTIMEVARIABLES_OFFSET UNITYSDK_OFFSET(0x1AFE5290)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITNEW_OFFSET UNITYSDK_OFFSET(0x1AFE77F0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITNOTEQUAL_OFFSET UNITYSDK_OFFSET(0x1AFE6290)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITNOT_OFFSET UNITYSDK_OFFSET(0x1AFE7650)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITNULLABLECALL_OFFSET UNITYSDK_OFFSET(0x1AFE8B30)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITNUMERICCONVERTCHECKED_OFFSET UNITYSDK_OFFSET(0x1AFE70D0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITNUMERICCONVERTUNCHECKED_OFFSET UNITYSDK_OFFSET(0x1AFE71D0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITOR_OFFSET UNITYSDK_OFFSET(0x1AFE5DD0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITPOP_OFFSET UNITYSDK_OFFSET(0x1AFE2CC0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITRETHROWVOID_OFFSET UNITYSDK_OFFSET(0x1AFE9670)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITRETHROW_OFFSET UNITYSDK_OFFSET(0x1AFE9540)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITRIGHTSHIFT_OFFSET UNITYSDK_OFFSET(0x1AFE6120)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITSETARRAYITEM_OFFSET UNITYSDK_OFFSET(0x1AFE54A0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITSTOREFIELD_OFFSET UNITYSDK_OFFSET(0x1AFE85D0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITSTORELOCALBOXED_OFFSET UNITYSDK_OFFSET(0x1AFE4740)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITSTORELOCALTOCLOSURE_OFFSET UNITYSDK_OFFSET(0x1AFE4DE0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITSTORELOCAL_OFFSET UNITYSDK_OFFSET(0x1AFE40A0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITSTRINGSWITCH_OFFSET UNITYSDK_OFFSET(0x1AFEA690)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITSUB_OFFSET UNITYSDK_OFFSET(0x1AFE5970)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITTHROWVOID_OFFSET UNITYSDK_OFFSET(0x1AFE9410)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITTHROW_OFFSET UNITYSDK_OFFSET(0x1AFE92E0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITTYPEAS_OFFSET UNITYSDK_OFFSET(0x1AFE8120)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITTYPEEQUALS_OFFSET UNITYSDK_OFFSET(0x1AFE7B10)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITTYPEIS_OFFSET UNITYSDK_OFFSET(0x1AFE8030)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMIT_OFFSET UNITYSDK_OFFSET(0x1AFE1750)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_ENSURELABELINDEX_OFFSET UNITYSDK_OFFSET(0x1AFE8D80)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_FIXUPBRANCH_OFFSET UNITYSDK_OFFSET(0x1AFCFD10)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_GETINSTRUCTION_OFFSET UNITYSDK_OFFSET(0x1AFE1D00)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_GETLOADFIELD_OFFSET UNITYSDK_OFFSET(0x1AFE82C0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1AFDC0D0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_GET_CURRENTCONTINUATIONSDEPTH_OFFSET UNITYSDK_OFFSET(0x1AFE1CF0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_GET_CURRENTSTACKDEPTH_OFFSET UNITYSDK_OFFSET(0x1AFE1CE0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_INITIMMUTABLEREFBOX_OFFSET UNITYSDK_OFFSET(0x1AFE15A0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_INITREFERENCE_OFFSET UNITYSDK_OFFSET(0x1AFE50C0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_LOADLOCALBOXED_OFFSET UNITYSDK_OFFSET(0x1AFE3450)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_MAKELABEL_OFFSET UNITYSDK_OFFSET(0x1AFE8C90)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_MARKLABEL_OFFSET UNITYSDK_OFFSET(0x1AFE8E00)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_MARKRUNTIMELABEL_OFFSET UNITYSDK_OFFSET(0x1AFE8DB0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_PARAMETERBOX_OFFSET UNITYSDK_OFFSET(0x1AFE1310)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_PARAMETER_OFFSET UNITYSDK_OFFSET(0x1AFE5250)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_STORELOCALBOXED_OFFSET UNITYSDK_OFFSET(0x1AFE4860)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_SWITCHTOBOXED_OFFSET UNITYSDK_OFFSET(0x1AFE2DF0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_TOARRAY_OFFSET UNITYSDK_OFFSET(0x1AFE1D50)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_UNEMIT_OFFSET UNITYSDK_OFFSET(0x1AFE1A30)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_UPDATESTACKDEPTH_OFFSET UNITYSDK_OFFSET(0x1AFE1800)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AFEA7E0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFEA790)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int InstructionList_TypeDefinitionIndex = 3435;

	class InstructionList : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Linq::Expressions::Interpreter::Instruction*>** StaticGet_s_loadObjectCached()
		{
			return (::Il2CppArray<::System::Linq::Expressions::Interpreter::Instruction*>**)Il2CppClass::FromTypeDefinitionIndex(InstructionList_TypeDefinitionIndex)->GetStaticField(0x32B40);
		}
		static ::Il2CppArray<::System::Linq::Expressions::Interpreter::Instruction*>** StaticGet_s_loadLocalFromClosureBoxed()
		{
			return (::Il2CppArray<::System::Linq::Expressions::Interpreter::Instruction*>**)Il2CppClass::FromTypeDefinitionIndex(InstructionList_TypeDefinitionIndex)->GetStaticField(0x32B48);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_null()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(InstructionList_TypeDefinitionIndex)->GetStaticField(0x32B50);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Reflection::FieldInfo*, ::System::Linq::Expressions::Interpreter::Instruction*>** StaticGet_s_loadFields()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Reflection::FieldInfo*, ::System::Linq::Expressions::Interpreter::Instruction*>**)Il2CppClass::FromTypeDefinitionIndex(InstructionList_TypeDefinitionIndex)->GetStaticField(0x32B58);
		}
		static ::Il2CppArray<::System::Linq::Expressions::Interpreter::Instruction*>** StaticGet_s_storeLocalBoxed()
		{
			return (::Il2CppArray<::System::Linq::Expressions::Interpreter::Instruction*>**)Il2CppClass::FromTypeDefinitionIndex(InstructionList_TypeDefinitionIndex)->GetStaticField(0x32B60);
		}
		static ::Il2CppArray<::System::Linq::Expressions::Interpreter::Instruction*>** StaticGet_s_loadLocalFromClosure()
		{
			return (::Il2CppArray<::System::Linq::Expressions::Interpreter::Instruction*>**)Il2CppClass::FromTypeDefinitionIndex(InstructionList_TypeDefinitionIndex)->GetStaticField(0x32B68);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_true()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(InstructionList_TypeDefinitionIndex)->GetStaticField(0x32B70);
		}
		static ::Il2CppArray<::System::Linq::Expressions::Interpreter::Instruction*>** StaticGet_s_assignLocalToClosure()
		{
			return (::Il2CppArray<::System::Linq::Expressions::Interpreter::Instruction*>**)Il2CppClass::FromTypeDefinitionIndex(InstructionList_TypeDefinitionIndex)->GetStaticField(0x32B78);
		}
		static ::Il2CppArray<::System::Linq::Expressions::Interpreter::Instruction*>** StaticGet_s_assignLocal()
		{
			return (::Il2CppArray<::System::Linq::Expressions::Interpreter::Instruction*>**)Il2CppClass::FromTypeDefinitionIndex(InstructionList_TypeDefinitionIndex)->GetStaticField(0x32B80);
		}
		static ::Il2CppArray<::System::Linq::Expressions::Interpreter::Instruction*>** StaticGet_s_loadLocal()
		{
			return (::Il2CppArray<::System::Linq::Expressions::Interpreter::Instruction*>**)Il2CppClass::FromTypeDefinitionIndex(InstructionList_TypeDefinitionIndex)->GetStaticField(0x32B88);
		}
		static ::Il2CppArray<::System::Linq::Expressions::Interpreter::Instruction*>** StaticGet_s_storeLocal()
		{
			return (::Il2CppArray<::System::Linq::Expressions::Interpreter::Instruction*>**)Il2CppClass::FromTypeDefinitionIndex(InstructionList_TypeDefinitionIndex)->GetStaticField(0x32B90);
		}
		static ::Il2CppArray<::System::Linq::Expressions::Interpreter::Instruction*>** StaticGet_s_Ints()
		{
			return (::Il2CppArray<::System::Linq::Expressions::Interpreter::Instruction*>**)Il2CppClass::FromTypeDefinitionIndex(InstructionList_TypeDefinitionIndex)->GetStaticField(0x32B98);
		}
		static ::Il2CppArray<::System::Linq::Expressions::Interpreter::RuntimeLabel>** StaticGet_s_emptyRuntimeLabels()
		{
			return (::Il2CppArray<::System::Linq::Expressions::Interpreter::RuntimeLabel>**)Il2CppClass::FromTypeDefinitionIndex(InstructionList_TypeDefinitionIndex)->GetStaticField(0x32BA0);
		}
		static ::Il2CppArray<::System::Linq::Expressions::Interpreter::Instruction*>** StaticGet_s_loadLocalBoxed()
		{
			return (::Il2CppArray<::System::Linq::Expressions::Interpreter::Instruction*>**)Il2CppClass::FromTypeDefinitionIndex(InstructionList_TypeDefinitionIndex)->GetStaticField(0x32BA8);
		}
		static ::Il2CppArray<::System::Linq::Expressions::Interpreter::Instruction*>** StaticGet_s_assignLocalBoxed()
		{
			return (::Il2CppArray<::System::Linq::Expressions::Interpreter::Instruction*>**)Il2CppClass::FromTypeDefinitionIndex(InstructionList_TypeDefinitionIndex)->GetStaticField(0x32BB0);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_false()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(InstructionList_TypeDefinitionIndex)->GetStaticField(0x32BB8);
		}
		::System::Collections::Generic::List_1<::System::Linq::Expressions::Interpreter::Instruction*>* _instructions; // 0x10
		::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Object*>>* _debugCookies; // 0x18
		::System::Collections::Generic::List_1<::System::Linq::Expressions::Interpreter::BranchLabel*>* _labels; // 0x20
		::System::Collections::Generic::List_1<::System::Object*>* _objects; // 0x28
		::System::Int32 _runtimeLabelCount; // 0x30
		::System::Int32 _maxStackDepth; // 0x34
		::System::Int32 _currentContinuationsDepth; // 0x38
		::System::Int32 _maxContinuationDepth; // 0x3C
		::System::Int32 _currentStackDepth; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST__CCTOR_OFFSET))();
		}

		::System::Void Emit(::System::Linq::Expressions::Interpreter::Instruction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Interpreter::Instruction*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMIT_OFFSET))(this, a1);
		}

		::System::Void UpdateStackDepth(::System::Linq::Expressions::Interpreter::Instruction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Interpreter::Instruction*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_UPDATESTACKDEPTH_OFFSET))(this, a1);
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

		::System::Linq::Expressions::Interpreter::Instruction* GetInstruction(::System::Int32 a1)
		{
			return ((::System::Linq::Expressions::Interpreter::Instruction*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_GETINSTRUCTION_OFFSET))(this, a1);
		}

		::System::Linq::Expressions::Interpreter::InstructionArray ToArray()
		{
			return ((::System::Linq::Expressions::Interpreter::InstructionArray(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_TOARRAY_OFFSET))(this);
		}

		::System::Void EmitLoad(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITLOAD_OFFSET))(this, a1);
		}

		::System::Void EmitLoad_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITLOAD_1_OFFSET))(this, a1);
		}

		::System::Void EmitLoad_2(::System::Object* a1, ::System::Type* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITLOAD_2_OFFSET))(this, a1, a2);
		}

		::System::Void EmitDup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITDUP_OFFSET))(this);
		}

		::System::Void EmitPop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITPOP_OFFSET))(this);
		}

		::System::Void SwitchToBoxed(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_SWITCHTOBOXED_OFFSET))(this, a1, a2);
		}

		::System::Void EmitLoadLocal(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITLOADLOCAL_OFFSET))(this, a1);
		}

		::System::Void EmitLoadLocalBoxed(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITLOADLOCALBOXED_OFFSET))(this, a1);
		}

		static ::System::Linq::Expressions::Interpreter::Instruction* LoadLocalBoxed(::System::Int32 a1)
		{
			return ((::System::Linq::Expressions::Interpreter::Instruction*(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_LOADLOCALBOXED_OFFSET))(a1);
		}

		::System::Void EmitLoadLocalFromClosure(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITLOADLOCALFROMCLOSURE_OFFSET))(this, a1);
		}

		::System::Void EmitLoadLocalFromClosureBoxed(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITLOADLOCALFROMCLOSUREBOXED_OFFSET))(this, a1);
		}

		::System::Void EmitAssignLocal(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITASSIGNLOCAL_OFFSET))(this, a1);
		}

		::System::Void EmitStoreLocal(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITSTORELOCAL_OFFSET))(this, a1);
		}

		::System::Void EmitAssignLocalBoxed(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITASSIGNLOCALBOXED_OFFSET))(this, a1);
		}

		static ::System::Linq::Expressions::Interpreter::Instruction* AssignLocalBoxed(::System::Int32 a1)
		{
			return ((::System::Linq::Expressions::Interpreter::Instruction*(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_ASSIGNLOCALBOXED_OFFSET))(a1);
		}

		::System::Void EmitStoreLocalBoxed(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITSTORELOCALBOXED_OFFSET))(this, a1);
		}

		static ::System::Linq::Expressions::Interpreter::Instruction* StoreLocalBoxed(::System::Int32 a1)
		{
			return ((::System::Linq::Expressions::Interpreter::Instruction*(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_STORELOCALBOXED_OFFSET))(a1);
		}

		::System::Void EmitAssignLocalToClosure(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITASSIGNLOCALTOCLOSURE_OFFSET))(this, a1);
		}

		::System::Void EmitStoreLocalToClosure(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITSTORELOCALTOCLOSURE_OFFSET))(this, a1);
		}

		::System::Void EmitInitializeLocal(::System::Int32 a1, ::System::Type* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITINITIALIZELOCAL_OFFSET))(this, a1, a2);
		}

		::System::Void EmitInitializeParameter(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITINITIALIZEPARAMETER_OFFSET))(this, a1);
		}

		static ::System::Linq::Expressions::Interpreter::Instruction* Parameter(::System::Int32 a1)
		{
			return ((::System::Linq::Expressions::Interpreter::Instruction*(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_PARAMETER_OFFSET))(a1);
		}

		static ::System::Linq::Expressions::Interpreter::Instruction* ParameterBox(::System::Int32 a1)
		{
			return ((::System::Linq::Expressions::Interpreter::Instruction*(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_PARAMETERBOX_OFFSET))(a1);
		}

		static ::System::Linq::Expressions::Interpreter::Instruction* InitReference(::System::Int32 a1)
		{
			return ((::System::Linq::Expressions::Interpreter::Instruction*(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_INITREFERENCE_OFFSET))(a1);
		}

		static ::System::Linq::Expressions::Interpreter::Instruction* InitImmutableRefBox(::System::Int32 a1)
		{
			return ((::System::Linq::Expressions::Interpreter::Instruction*(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_INITIMMUTABLEREFBOX_OFFSET))(a1);
		}

		::System::Void EmitNewRuntimeVariables(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITNEWRUNTIMEVARIABLES_OFFSET))(this, a1);
		}

		::System::Void EmitGetArrayItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITGETARRAYITEM_OFFSET))(this);
		}

		::System::Void EmitSetArrayItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITSETARRAYITEM_OFFSET))(this);
		}

		::System::Void EmitNewArray(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITNEWARRAY_OFFSET))(this, a1);
		}

		::System::Void EmitNewArrayBounds(::System::Type* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITNEWARRAYBOUNDS_OFFSET))(this, a1, a2);
		}

		::System::Void EmitNewArrayInit(::System::Type* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITNEWARRAYINIT_OFFSET))(this, a1, a2);
		}

		::System::Void EmitAdd(::System::Type* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITADD_OFFSET))(this, a1, a2);
		}

		::System::Void EmitSub(::System::Type* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITSUB_OFFSET))(this, a1, a2);
		}

		::System::Void EmitMul(::System::Type* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITMUL_OFFSET))(this, a1, a2);
		}

		::System::Void EmitDiv(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITDIV_OFFSET))(this, a1);
		}

		::System::Void EmitModulo(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITMODULO_OFFSET))(this, a1);
		}

		::System::Void EmitExclusiveOr(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITEXCLUSIVEOR_OFFSET))(this, a1);
		}

		::System::Void EmitAnd(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITAND_OFFSET))(this, a1);
		}

		::System::Void EmitOr(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITOR_OFFSET))(this, a1);
		}

		::System::Void EmitLeftShift(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITLEFTSHIFT_OFFSET))(this, a1);
		}

		::System::Void EmitRightShift(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITRIGHTSHIFT_OFFSET))(this, a1);
		}

		::System::Void EmitEqual(::System::Type* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITEQUAL_OFFSET))(this, a1, a2);
		}

		::System::Void EmitNotEqual(::System::Type* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITNOTEQUAL_OFFSET))(this, a1, a2);
		}

		::System::Void EmitLessThan(::System::Type* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITLESSTHAN_OFFSET))(this, a1, a2);
		}

		::System::Void EmitLessThanOrEqual(::System::Type* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITLESSTHANOREQUAL_OFFSET))(this, a1, a2);
		}

		::System::Void EmitGreaterThan(::System::Type* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITGREATERTHAN_OFFSET))(this, a1, a2);
		}

		::System::Void EmitGreaterThanOrEqual(::System::Type* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITGREATERTHANOREQUAL_OFFSET))(this, a1, a2);
		}

		::System::Void EmitNumericConvertChecked(::System::TypeCode a1, ::System::TypeCode a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::TypeCode, ::System::TypeCode, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITNUMERICCONVERTCHECKED_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EmitNumericConvertUnchecked(::System::TypeCode a1, ::System::TypeCode a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::TypeCode, ::System::TypeCode, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITNUMERICCONVERTUNCHECKED_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EmitConvertToUnderlying(::System::TypeCode a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::TypeCode, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITCONVERTTOUNDERLYING_OFFSET))(this, a1, a2);
		}

		::System::Void EmitCast(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITCAST_OFFSET))(this, a1);
		}

		::System::Void EmitCastToEnum(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITCASTTOENUM_OFFSET))(this, a1);
		}

		::System::Void EmitCastReferenceToEnum(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITCASTREFERENCETOENUM_OFFSET))(this, a1);
		}

		::System::Void EmitNot(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITNOT_OFFSET))(this, a1);
		}

		::System::Void EmitDefaultValue(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITDEFAULTVALUE_OFFSET))(this, a1);
		}

		::System::Void EmitNew(::System::Reflection::ConstructorInfo* a1, ::Il2CppArray<::System::Reflection::ParameterInfo*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::ConstructorInfo*, ::Il2CppArray<::System::Reflection::ParameterInfo*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITNEW_OFFSET))(this, a1, a2);
		}

		::System::Void EmitByRefNew(::System::Reflection::ConstructorInfo* a1, ::Il2CppArray<::System::Reflection::ParameterInfo*>* a2, ::Il2CppArray<::System::Linq::Expressions::Interpreter::ByRefUpdater*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::ConstructorInfo*, ::Il2CppArray<::System::Reflection::ParameterInfo*>*, ::Il2CppArray<::System::Linq::Expressions::Interpreter::ByRefUpdater*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITBYREFNEW_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EmitCreateDelegate(::System::Linq::Expressions::Interpreter::LightDelegateCreator* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Interpreter::LightDelegateCreator*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITCREATEDELEGATE_OFFSET))(this, a1);
		}

		::System::Void EmitTypeEquals()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITTYPEEQUALS_OFFSET))(this);
		}

		::System::Void EmitArrayLength()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITARRAYLENGTH_OFFSET))(this);
		}

		::System::Void EmitNegate(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITNEGATE_OFFSET))(this, a1);
		}

		::System::Void EmitNegateChecked(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITNEGATECHECKED_OFFSET))(this, a1);
		}

		::System::Void EmitIncrement(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITINCREMENT_OFFSET))(this, a1);
		}

		::System::Void EmitDecrement(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITDECREMENT_OFFSET))(this, a1);
		}

		::System::Void EmitTypeIs(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITTYPEIS_OFFSET))(this, a1);
		}

		::System::Void EmitTypeAs(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITTYPEAS_OFFSET))(this, a1);
		}

		::System::Void EmitLoadField(::System::Reflection::FieldInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::FieldInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITLOADFIELD_OFFSET))(this, a1);
		}

		::System::Linq::Expressions::Interpreter::Instruction* GetLoadField(::System::Reflection::FieldInfo* a1)
		{
			return ((::System::Linq::Expressions::Interpreter::Instruction*(*)(::PVOID, ::System::Reflection::FieldInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_GETLOADFIELD_OFFSET))(this, a1);
		}

		::System::Void EmitStoreField(::System::Reflection::FieldInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::FieldInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITSTOREFIELD_OFFSET))(this, a1);
		}

		::System::Void EmitCall(::System::Reflection::MethodInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITCALL_OFFSET))(this, a1);
		}

		::System::Void EmitCall_1(::System::Reflection::MethodInfo* a1, ::Il2CppArray<::System::Reflection::ParameterInfo*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::MethodInfo*, ::Il2CppArray<::System::Reflection::ParameterInfo*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITCALL_1_OFFSET))(this, a1, a2);
		}

		::System::Void EmitByRefCall(::System::Reflection::MethodInfo* a1, ::Il2CppArray<::System::Reflection::ParameterInfo*>* a2, ::Il2CppArray<::System::Linq::Expressions::Interpreter::ByRefUpdater*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::MethodInfo*, ::Il2CppArray<::System::Reflection::ParameterInfo*>*, ::Il2CppArray<::System::Linq::Expressions::Interpreter::ByRefUpdater*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITBYREFCALL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EmitNullableCall(::System::Reflection::MethodInfo* a1, ::Il2CppArray<::System::Reflection::ParameterInfo*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::MethodInfo*, ::Il2CppArray<::System::Reflection::ParameterInfo*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITNULLABLECALL_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::System::Linq::Expressions::Interpreter::RuntimeLabel>* BuildRuntimeLabels()
		{
			return ((::Il2CppArray<::System::Linq::Expressions::Interpreter::RuntimeLabel>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_BUILDRUNTIMELABELS_OFFSET))(this);
		}

		::System::Linq::Expressions::Interpreter::BranchLabel* MakeLabel()
		{
			return ((::System::Linq::Expressions::Interpreter::BranchLabel*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_MAKELABEL_OFFSET))(this);
		}

		::System::Void FixupBranch(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_FIXUPBRANCH_OFFSET))(this, a1, a2);
		}

		::System::Int32 EnsureLabelIndex(::System::Linq::Expressions::Interpreter::BranchLabel* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::Interpreter::BranchLabel*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_ENSURELABELINDEX_OFFSET))(this, a1);
		}

		::System::Int32 MarkRuntimeLabel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_MARKRUNTIMELABEL_OFFSET))(this);
		}

		::System::Void MarkLabel(::System::Linq::Expressions::Interpreter::BranchLabel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Interpreter::BranchLabel*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_MARKLABEL_OFFSET))(this, a1);
		}

		::System::Void EmitGoto(::System::Linq::Expressions::Interpreter::BranchLabel* a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Interpreter::BranchLabel*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITGOTO_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EmitBranch(::System::Linq::Expressions::Interpreter::OffsetInstruction* a1, ::System::Linq::Expressions::Interpreter::BranchLabel* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Interpreter::OffsetInstruction*, ::System::Linq::Expressions::Interpreter::BranchLabel*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITBRANCH_OFFSET))(this, a1, a2);
		}

		::System::Void EmitBranch_1(::System::Linq::Expressions::Interpreter::BranchLabel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Interpreter::BranchLabel*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITBRANCH_1_OFFSET))(this, a1);
		}

		::System::Void EmitBranch_2(::System::Linq::Expressions::Interpreter::BranchLabel* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Interpreter::BranchLabel*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITBRANCH_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EmitCoalescingBranch(::System::Linq::Expressions::Interpreter::BranchLabel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Interpreter::BranchLabel*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITCOALESCINGBRANCH_OFFSET))(this, a1);
		}

		::System::Void EmitBranchTrue(::System::Linq::Expressions::Interpreter::BranchLabel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Interpreter::BranchLabel*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITBRANCHTRUE_OFFSET))(this, a1);
		}

		::System::Void EmitBranchFalse(::System::Linq::Expressions::Interpreter::BranchLabel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Interpreter::BranchLabel*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITBRANCHFALSE_OFFSET))(this, a1);
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

		::System::Void EmitEnterTryFinally(::System::Linq::Expressions::Interpreter::BranchLabel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Interpreter::BranchLabel*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITENTERTRYFINALLY_OFFSET))(this, a1);
		}

		::System::Void EmitEnterTryCatch()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITENTERTRYCATCH_OFFSET))(this);
		}

		::System::Linq::Expressions::Interpreter::EnterTryFaultInstruction* EmitEnterTryFault(::System::Linq::Expressions::Interpreter::BranchLabel* a1)
		{
			return ((::System::Linq::Expressions::Interpreter::EnterTryFaultInstruction*(*)(::PVOID, ::System::Linq::Expressions::Interpreter::BranchLabel*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITENTERTRYFAULT_OFFSET))(this, a1);
		}

		::System::Void EmitEnterFinally(::System::Linq::Expressions::Interpreter::BranchLabel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Interpreter::BranchLabel*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITENTERFINALLY_OFFSET))(this, a1);
		}

		::System::Void EmitLeaveFinally()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITLEAVEFINALLY_OFFSET))(this);
		}

		::System::Void EmitEnterFault(::System::Linq::Expressions::Interpreter::BranchLabel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Interpreter::BranchLabel*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITENTERFAULT_OFFSET))(this, a1);
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

		::System::Void EmitLeaveExceptionHandler(::System::Boolean a1, ::System::Linq::Expressions::Interpreter::BranchLabel* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Linq::Expressions::Interpreter::BranchLabel*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITLEAVEEXCEPTIONHANDLER_OFFSET))(this, a1, a2);
		}

		::System::Void EmitStringSwitch(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* a1, ::System::Runtime::CompilerServices::StrongBox_1<::System::Int32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*, ::System::Runtime::CompilerServices::StrongBox_1<::System::Int32>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITSTRINGSWITCH_OFFSET))(this, a1, a2);
		}
	};
}
