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

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_ASSIGNLOCALBOXED_OFFSET UNITYSDK_OFFSET(0x1AD80E00)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_BUILDRUNTIMELABELS_OFFSET UNITYSDK_OFFSET(0x1AD7F320)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITADD_OFFSET UNITYSDK_OFFSET(0x1AD819D0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITAND_OFFSET UNITYSDK_OFFSET(0x1AD81AF0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITARRAYLENGTH_OFFSET UNITYSDK_OFFSET(0x1AD82D50)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITASSIGNLOCALBOXED_OFFSET UNITYSDK_OFFSET(0x1AD80D90)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITASSIGNLOCALTOCLOSURE_OFFSET UNITYSDK_OFFSET(0x1AD812D0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITASSIGNLOCAL_OFFSET UNITYSDK_OFFSET(0x1AD808F0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITBRANCHFALSE_OFFSET UNITYSDK_OFFSET(0x1AD83880)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITBRANCHTRUE_OFFSET UNITYSDK_OFFSET(0x1AD83830)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITBRANCH_1_OFFSET UNITYSDK_OFFSET(0x1AD83720)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITBRANCH_2_OFFSET UNITYSDK_OFFSET(0x1AD83780)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITBRANCH_OFFSET UNITYSDK_OFFSET(0x1AD83630)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITBYREFCALL_OFFSET UNITYSDK_OFFSET(0x1AD832E0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITBYREFNEW_OFFSET UNITYSDK_OFFSET(0x1AD82C20)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITCALL_1_OFFSET UNITYSDK_OFFSET(0x1AD832B0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITCALL_OFFSET UNITYSDK_OFFSET(0x1AD83230)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITCASTREFERENCETOENUM_OFFSET UNITYSDK_OFFSET(0x1AD82AF0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITCASTTOENUM_OFFSET UNITYSDK_OFFSET(0x1AD82AA0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITCAST_OFFSET UNITYSDK_OFFSET(0x1AD82A80)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITCOALESCINGBRANCH_OFFSET UNITYSDK_OFFSET(0x1AD837E0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITCONVERTTOUNDERLYING_OFFSET UNITYSDK_OFFSET(0x1AD82A20)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITCREATEDELEGATE_OFFSET UNITYSDK_OFFSET(0x1AD82C90)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITDECREMENT_OFFSET UNITYSDK_OFFSET(0x1AD82E20)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITDEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x1AD82B60)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITDIV_OFFSET UNITYSDK_OFFSET(0x1AD81A90)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITDUP_OFFSET UNITYSDK_OFFSET(0x1AD7FCC0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITENTEREXCEPTIONFILTER_OFFSET UNITYSDK_OFFSET(0x1AD83DB0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITENTEREXCEPTIONHANDLERNONVOID_OFFSET UNITYSDK_OFFSET(0x1AD83E90)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITENTEREXCEPTIONHANDLERVOID_OFFSET UNITYSDK_OFFSET(0x1AD83F00)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITENTERFAULT_OFFSET UNITYSDK_OFFSET(0x1AD83CC0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITENTERFINALLY_OFFSET UNITYSDK_OFFSET(0x1AD83BD0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITENTERTRYCATCH_OFFSET UNITYSDK_OFFSET(0x1AD83B00)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITENTERTRYFAULT_OFFSET UNITYSDK_OFFSET(0x1AD83B50)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITENTERTRYFINALLY_OFFSET UNITYSDK_OFFSET(0x1AD83A90)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITEQUAL_OFFSET UNITYSDK_OFFSET(0x1AD81D80)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITEXCLUSIVEOR_OFFSET UNITYSDK_OFFSET(0x1AD81AD0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITGETARRAYITEM_OFFSET UNITYSDK_OFFSET(0x1AD817E0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITGOTO_OFFSET UNITYSDK_OFFSET(0x1AD83590)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITGREATERTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x1AD82930)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITGREATERTHAN_OFFSET UNITYSDK_OFFSET(0x1AD82900)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITINCREMENT_OFFSET UNITYSDK_OFFSET(0x1AD82E00)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITINITIALIZELOCAL_OFFSET UNITYSDK_OFFSET(0x1AD81590)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITINITIALIZEPARAMETER_OFFSET UNITYSDK_OFFSET(0x1AD816C0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITLEAVEEXCEPTIONFILTER_OFFSET UNITYSDK_OFFSET(0x1AD83E20)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITLEAVEEXCEPTIONHANDLER_OFFSET UNITYSDK_OFFSET(0x1AD83F70)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITLEAVEFAULT_OFFSET UNITYSDK_OFFSET(0x1AD83D40)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITLEAVEFINALLY_OFFSET UNITYSDK_OFFSET(0x1AD83C50)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITLEFTSHIFT_OFFSET UNITYSDK_OFFSET(0x1AD81B30)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITLESSTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x1AD82370)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITLESSTHAN_OFFSET UNITYSDK_OFFSET(0x1AD81DE0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITLOADFIELD_OFFSET UNITYSDK_OFFSET(0x1AD82EE0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITLOADLOCALBOXED_OFFSET UNITYSDK_OFFSET(0x1AD80180)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITLOADLOCALFROMCLOSUREBOXED_OFFSET UNITYSDK_OFFSET(0x1AD80690)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITLOADLOCALFROMCLOSURE_OFFSET UNITYSDK_OFFSET(0x1AD80430)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITLOADLOCAL_OFFSET UNITYSDK_OFFSET(0x1AD7FF20)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITLOAD_1_OFFSET UNITYSDK_OFFSET(0x1AD7FAE0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITLOAD_2_OFFSET UNITYSDK_OFFSET(0x1AD7F540)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITLOAD_OFFSET UNITYSDK_OFFSET(0x1AD7F530)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITMODULO_OFFSET UNITYSDK_OFFSET(0x1AD81AB0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITMUL_OFFSET UNITYSDK_OFFSET(0x1AD81A50)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITNEGATECHECKED_OFFSET UNITYSDK_OFFSET(0x1AD82DE0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITNEGATE_OFFSET UNITYSDK_OFFSET(0x1AD82DC0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITNEWARRAYBOUNDS_OFFSET UNITYSDK_OFFSET(0x1AD81910)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITNEWARRAYINIT_OFFSET UNITYSDK_OFFSET(0x1AD81970)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITNEWARRAY_OFFSET UNITYSDK_OFFSET(0x1AD818C0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITNEWRUNTIMEVARIABLES_OFFSET UNITYSDK_OFFSET(0x1AD81790)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITNEW_OFFSET UNITYSDK_OFFSET(0x1AD82BB0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITNOTEQUAL_OFFSET UNITYSDK_OFFSET(0x1AD81DB0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITNOT_OFFSET UNITYSDK_OFFSET(0x1AD82B40)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITNULLABLECALL_OFFSET UNITYSDK_OFFSET(0x1AD83390)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITNUMERICCONVERTCHECKED_OFFSET UNITYSDK_OFFSET(0x1AD82960)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITNUMERICCONVERTUNCHECKED_OFFSET UNITYSDK_OFFSET(0x1AD829C0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITOR_OFFSET UNITYSDK_OFFSET(0x1AD81B10)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITPOP_OFFSET UNITYSDK_OFFSET(0x1AD7FD30)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITRETHROWVOID_OFFSET UNITYSDK_OFFSET(0x1AD83A20)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITRETHROW_OFFSET UNITYSDK_OFFSET(0x1AD839B0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITRIGHTSHIFT_OFFSET UNITYSDK_OFFSET(0x1AD81D60)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITSETARRAYITEM_OFFSET UNITYSDK_OFFSET(0x1AD81850)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITSTOREFIELD_OFFSET UNITYSDK_OFFSET(0x1AD831B0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITSTORELOCALBOXED_OFFSET UNITYSDK_OFFSET(0x1AD81030)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITSTORELOCALTOCLOSURE_OFFSET UNITYSDK_OFFSET(0x1AD81520)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITSTORELOCAL_OFFSET UNITYSDK_OFFSET(0x1AD80B40)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITSTRINGSWITCH_OFFSET UNITYSDK_OFFSET(0x1AD84100)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITSUB_OFFSET UNITYSDK_OFFSET(0x1AD81A10)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITTHROWVOID_OFFSET UNITYSDK_OFFSET(0x1AD83940)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITTHROW_OFFSET UNITYSDK_OFFSET(0x1AD838D0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITTYPEAS_OFFSET UNITYSDK_OFFSET(0x1AD82E90)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITTYPEEQUALS_OFFSET UNITYSDK_OFFSET(0x1AD82CE0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMITTYPEIS_OFFSET UNITYSDK_OFFSET(0x1AD82E40)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_EMIT_OFFSET UNITYSDK_OFFSET(0x1AD7EF20)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_ENSURELABELINDEX_OFFSET UNITYSDK_OFFSET(0x1AD834E0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_FIXUPBRANCH_OFFSET UNITYSDK_OFFSET(0x1AD6E260)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_GETINSTRUCTION_OFFSET UNITYSDK_OFFSET(0x1AD7F220)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_GETLOADFIELD_OFFSET UNITYSDK_OFFSET(0x1AD82F00)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1AD799D0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_GET_CURRENTCONTINUATIONSDEPTH_OFFSET UNITYSDK_OFFSET(0x1AD7F210)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_GET_CURRENTSTACKDEPTH_OFFSET UNITYSDK_OFFSET(0x1AD7F200)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_INITIMMUTABLEREFBOX_OFFSET UNITYSDK_OFFSET(0x1AD7EDE0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_INITREFERENCE_OFFSET UNITYSDK_OFFSET(0x1AD81680)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_LOADLOCALBOXED_OFFSET UNITYSDK_OFFSET(0x1AD801F0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_MAKELABEL_OFFSET UNITYSDK_OFFSET(0x1AD833F0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_MARKLABEL_OFFSET UNITYSDK_OFFSET(0x1AD83560)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_MARKRUNTIMELABEL_OFFSET UNITYSDK_OFFSET(0x1AD83510)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_PARAMETERBOX_OFFSET UNITYSDK_OFFSET(0x1AD7EB50)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_PARAMETER_OFFSET UNITYSDK_OFFSET(0x1AD81750)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_STORELOCALBOXED_OFFSET UNITYSDK_OFFSET(0x1AD810A0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_SWITCHTOBOXED_OFFSET UNITYSDK_OFFSET(0x1AD7FDA0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_TOARRAY_OFFSET UNITYSDK_OFFSET(0x1AD7F270)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_UNEMIT_OFFSET UNITYSDK_OFFSET(0x1AD7F0F0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST_UPDATESTACKDEPTH_OFFSET UNITYSDK_OFFSET(0x1AD7F060)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AD841B0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD84160)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int InstructionList_TypeDefinitionIndex = 3423;

	class InstructionList : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Linq::Expressions::Interpreter::Instruction*>** StaticGet_s_Ints()
		{
			return (::Il2CppArray<::System::Linq::Expressions::Interpreter::Instruction*>**)Il2CppClass::FromTypeDefinitionIndex(InstructionList_TypeDefinitionIndex)->GetStaticField(0x2AAB0);
		}
		static ::Il2CppArray<::System::Linq::Expressions::Interpreter::Instruction*>** StaticGet_s_storeLocal()
		{
			return (::Il2CppArray<::System::Linq::Expressions::Interpreter::Instruction*>**)Il2CppClass::FromTypeDefinitionIndex(InstructionList_TypeDefinitionIndex)->GetStaticField(0x2AAB8);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_true()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(InstructionList_TypeDefinitionIndex)->GetStaticField(0x2AAC0);
		}
		static ::Il2CppArray<::System::Linq::Expressions::Interpreter::Instruction*>** StaticGet_s_loadLocal()
		{
			return (::Il2CppArray<::System::Linq::Expressions::Interpreter::Instruction*>**)Il2CppClass::FromTypeDefinitionIndex(InstructionList_TypeDefinitionIndex)->GetStaticField(0x2AAC8);
		}
		static ::Il2CppArray<::System::Linq::Expressions::Interpreter::Instruction*>** StaticGet_s_assignLocal()
		{
			return (::Il2CppArray<::System::Linq::Expressions::Interpreter::Instruction*>**)Il2CppClass::FromTypeDefinitionIndex(InstructionList_TypeDefinitionIndex)->GetStaticField(0x2AAD0);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_null()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(InstructionList_TypeDefinitionIndex)->GetStaticField(0x2AAD8);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Reflection::FieldInfo*, ::System::Linq::Expressions::Interpreter::Instruction*>** StaticGet_s_loadFields()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Reflection::FieldInfo*, ::System::Linq::Expressions::Interpreter::Instruction*>**)Il2CppClass::FromTypeDefinitionIndex(InstructionList_TypeDefinitionIndex)->GetStaticField(0x2AAE0);
		}
		static ::Il2CppArray<::System::Linq::Expressions::Interpreter::RuntimeLabel>** StaticGet_s_emptyRuntimeLabels()
		{
			return (::Il2CppArray<::System::Linq::Expressions::Interpreter::RuntimeLabel>**)Il2CppClass::FromTypeDefinitionIndex(InstructionList_TypeDefinitionIndex)->GetStaticField(0x2AAE8);
		}
		static ::Il2CppArray<::System::Linq::Expressions::Interpreter::Instruction*>** StaticGet_s_assignLocalBoxed()
		{
			return (::Il2CppArray<::System::Linq::Expressions::Interpreter::Instruction*>**)Il2CppClass::FromTypeDefinitionIndex(InstructionList_TypeDefinitionIndex)->GetStaticField(0x2AAF0);
		}
		static ::Il2CppArray<::System::Linq::Expressions::Interpreter::Instruction*>** StaticGet_s_loadLocalFromClosure()
		{
			return (::Il2CppArray<::System::Linq::Expressions::Interpreter::Instruction*>**)Il2CppClass::FromTypeDefinitionIndex(InstructionList_TypeDefinitionIndex)->GetStaticField(0x2AAF8);
		}
		static ::Il2CppArray<::System::Linq::Expressions::Interpreter::Instruction*>** StaticGet_s_loadObjectCached()
		{
			return (::Il2CppArray<::System::Linq::Expressions::Interpreter::Instruction*>**)Il2CppClass::FromTypeDefinitionIndex(InstructionList_TypeDefinitionIndex)->GetStaticField(0x2AB00);
		}
		static ::Il2CppArray<::System::Linq::Expressions::Interpreter::Instruction*>** StaticGet_s_loadLocalBoxed()
		{
			return (::Il2CppArray<::System::Linq::Expressions::Interpreter::Instruction*>**)Il2CppClass::FromTypeDefinitionIndex(InstructionList_TypeDefinitionIndex)->GetStaticField(0x2AB08);
		}
		static ::Il2CppArray<::System::Linq::Expressions::Interpreter::Instruction*>** StaticGet_s_storeLocalBoxed()
		{
			return (::Il2CppArray<::System::Linq::Expressions::Interpreter::Instruction*>**)Il2CppClass::FromTypeDefinitionIndex(InstructionList_TypeDefinitionIndex)->GetStaticField(0x2AB10);
		}
		static ::Il2CppArray<::System::Linq::Expressions::Interpreter::Instruction*>** StaticGet_s_assignLocalToClosure()
		{
			return (::Il2CppArray<::System::Linq::Expressions::Interpreter::Instruction*>**)Il2CppClass::FromTypeDefinitionIndex(InstructionList_TypeDefinitionIndex)->GetStaticField(0x2AB18);
		}
		static ::Il2CppArray<::System::Linq::Expressions::Interpreter::Instruction*>** StaticGet_s_loadLocalFromClosureBoxed()
		{
			return (::Il2CppArray<::System::Linq::Expressions::Interpreter::Instruction*>**)Il2CppClass::FromTypeDefinitionIndex(InstructionList_TypeDefinitionIndex)->GetStaticField(0x2AB20);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_false()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(InstructionList_TypeDefinitionIndex)->GetStaticField(0x2AB28);
		}
		::System::Collections::Generic::List_1<::System::Object*>* _objects; // 0x10
		::System::Collections::Generic::List_1<::System::Linq::Expressions::Interpreter::Instruction*>* _instructions; // 0x18
		::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Object*>>* _debugCookies; // 0x20
		::System::Collections::Generic::List_1<::System::Linq::Expressions::Interpreter::BranchLabel*>* _labels; // 0x28
		::System::Int32 _runtimeLabelCount; // 0x30
		::System::Int32 _currentContinuationsDepth; // 0x34
		::System::Int32 _maxStackDepth; // 0x38
		::System::Int32 _currentStackDepth; // 0x3C
		::System::Int32 _maxContinuationDepth; // 0x40

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
