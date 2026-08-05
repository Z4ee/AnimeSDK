#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/ExpressionVisitor.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }
namespace System::Linq::Expressions { class BinaryExpression; }
namespace System::Linq::Expressions { class BlockExpression; }
namespace System::Linq::Expressions { class CatchBlock; }
namespace System::Linq::Expressions { class ConditionalExpression; }
namespace System::Linq::Expressions { class ConstantExpression; }
namespace System::Linq::Expressions { class DebugInfoExpression; }
namespace System::Linq::Expressions { class DefaultExpression; }
namespace System::Linq::Expressions { class ElementInit; }
namespace System::Linq::Expressions { class Expression; }
namespace System::Linq::Expressions { class GotoExpression; }
namespace System::Linq::Expressions { class IndexExpression; }
namespace System::Linq::Expressions { class InvocationExpression; }
namespace System::Linq::Expressions { class LabelExpression; }
namespace System::Linq::Expressions { class LabelTarget; }
namespace System::Linq::Expressions { class ListInitExpression; }
namespace System::Linq::Expressions { class LoopExpression; }
namespace System::Linq::Expressions { class MemberAssignment; }
namespace System::Linq::Expressions { class MemberBinding; }
namespace System::Linq::Expressions { class MemberExpression; }
namespace System::Linq::Expressions { class MemberInitExpression; }
namespace System::Linq::Expressions { class MemberListBinding; }
namespace System::Linq::Expressions { class MemberMemberBinding; }
namespace System::Linq::Expressions { class MethodCallExpression; }
namespace System::Linq::Expressions { class NewArrayExpression; }
namespace System::Linq::Expressions { class NewExpression; }
namespace System::Linq::Expressions { class ParameterExpression; }
namespace System::Linq::Expressions { class RuntimeVariablesExpression; }
namespace System::Linq::Expressions { class SwitchCase; }
namespace System::Linq::Expressions { class SwitchExpression; }
namespace System::Linq::Expressions { class TryExpression; }
namespace System::Linq::Expressions { class TypeBinaryExpression; }
namespace System::Linq::Expressions { class UnaryExpression; }
namespace System::Linq::Expressions { template <typename T> class Expression_1; }
namespace System::Reflection { class MemberInfo; }
namespace System::Text { class StringBuilder; }

#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_CATCHBLOCKTOSTRING_OFFSET UNITYSDK_OFFSET(0x1F4F05C0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_DUMPLABEL_OFFSET UNITYSDK_OFFSET(0x1F4F4310)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_ELEMENTINITBINDINGTOSTRING_OFFSET UNITYSDK_OFFSET(0x1F4F0AB0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_EXPRESSIONTOSTRING_OFFSET UNITYSDK_OFFSET(0x1F4F04C0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_GETID_OFFSET UNITYSDK_OFFSET(0x1F4F0270)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_GETLABELID_OFFSET UNITYSDK_OFFSET(0x1F4F0260)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_GETPARAMID_OFFSET UNITYSDK_OFFSET(0x1F4F0420)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_ISBOOL_OFFSET UNITYSDK_OFFSET(0x1F4F13F0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_MEMBERBINDINGTOSTRING_OFFSET UNITYSDK_OFFSET(0x1F4F09E0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_OUTMEMBER_OFFSET UNITYSDK_OFFSET(0x1F4F2050)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_OUT_1_OFFSET UNITYSDK_OFFSET(0x1F4F0450)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_OUT_OFFSET UNITYSDK_OFFSET(0x1F4F0430)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_SWITCHCASETOSTRING_OFFSET UNITYSDK_OFFSET(0x1F4F0800)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F4F0240)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITBINARY_OFFSET UNITYSDK_OFFSET(0x1F4F0E50)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITBLOCK_OFFSET UNITYSDK_OFFSET(0x1F4F3D00)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITCATCHBLOCK_OFFSET UNITYSDK_OFFSET(0x1F4F0690)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITCONDITIONAL_OFFSET UNITYSDK_OFFSET(0x1F4F1720)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITCONSTANT_OFFSET UNITYSDK_OFFSET(0x1F4F18B0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITDEBUGINFO_OFFSET UNITYSDK_OFFSET(0x1F4F1B80)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITDEFAULT_OFFSET UNITYSDK_OFFSET(0x1F4F4130)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITELEMENTINIT_OFFSET UNITYSDK_OFFSET(0x1F4F0B80)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITEXTENSION_OFFSET UNITYSDK_OFFSET(0x1F4F4A40)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITGOTO_OFFSET UNITYSDK_OFFSET(0x1F4F43D0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITINDEX_OFFSET UNITYSDK_OFFSET(0x1F4F4730)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITINVOCATION_OFFSET UNITYSDK_OFFSET(0x1F4F2940)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITLABEL_OFFSET UNITYSDK_OFFSET(0x1F4F4240)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITLISTINIT_OFFSET UNITYSDK_OFFSET(0x1F4F1590)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITLOOP_OFFSET UNITYSDK_OFFSET(0x1F4F4550)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITMEMBERASSIGNMENT_OFFSET UNITYSDK_OFFSET(0x1F4F2530)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITMEMBERINIT_OFFSET UNITYSDK_OFFSET(0x1F4F21E0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITMEMBERLISTBINDING_OFFSET UNITYSDK_OFFSET(0x1F4F25E0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITMEMBERMEMBERBINDING_OFFSET UNITYSDK_OFFSET(0x1F4F2790)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITMEMBER_OFFSET UNITYSDK_OFFSET(0x1F4F2180)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITMETHODCALL_OFFSET UNITYSDK_OFFSET(0x1F4F2AC0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITNEWARRAY_OFFSET UNITYSDK_OFFSET(0x1F4F2E50)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITNEW_OFFSET UNITYSDK_OFFSET(0x1F4F3050)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITPARAMETER_OFFSET UNITYSDK_OFFSET(0x1F4F14B0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITRUNTIMEVARIABLES_OFFSET UNITYSDK_OFFSET(0x1F4F1F90)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITSWITCHCASE_OFFSET UNITYSDK_OFFSET(0x1F4F08D0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITSWITCH_OFFSET UNITYSDK_OFFSET(0x1F4F45B0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITTRY_OFFSET UNITYSDK_OFFSET(0x1F4F46D0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITTYPEBINARY_OFFSET UNITYSDK_OFFSET(0x1F4F3500)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITUNARY_OFFSET UNITYSDK_OFFSET(0x1F4F36C0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F4F01C0)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int ExpressionStringBuilder_TypeDefinitionIndex = 4472;

	class ExpressionStringBuilder : public ::System::Linq::Expressions::ExpressionVisitor
	{
	public:
		::System::Text::StringBuilder* _out; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Int32>* _ids; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER__CTOR_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_TOSTRING_OFFSET))(this);
		}

		::System::Int32 GetLabelId(::System::Linq::Expressions::LabelTarget* label)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::LabelTarget*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_GETLABELID_OFFSET))(this, label);
		}

		::System::Int32 GetParamId(::System::Linq::Expressions::ParameterExpression* p)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::ParameterExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_GETPARAMID_OFFSET))(this, p);
		}

		::System::Int32 GetId(::System::Object* o)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_GETID_OFFSET))(this, o);
		}

		::System::Void Out(::System::String* s)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_OUT_OFFSET))(this, s);
		}

		::System::Void Out_1(::System::Char c)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_OUT_1_OFFSET))(this, c);
		}

		static ::System::String* ExpressionToString(::System::Linq::Expressions::Expression* node)
		{
			return ((::System::String*(*)(::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_EXPRESSIONTOSTRING_OFFSET))(node);
		}

		static ::System::String* CatchBlockToString(::System::Linq::Expressions::CatchBlock* node)
		{
			return ((::System::String*(*)(::System::Linq::Expressions::CatchBlock*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_CATCHBLOCKTOSTRING_OFFSET))(node);
		}

		static ::System::String* SwitchCaseToString(::System::Linq::Expressions::SwitchCase* node)
		{
			return ((::System::String*(*)(::System::Linq::Expressions::SwitchCase*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_SWITCHCASETOSTRING_OFFSET))(node);
		}

		static ::System::String* MemberBindingToString(::System::Linq::Expressions::MemberBinding* node)
		{
			return ((::System::String*(*)(::System::Linq::Expressions::MemberBinding*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_MEMBERBINDINGTOSTRING_OFFSET))(node);
		}

		static ::System::String* ElementInitBindingToString(::System::Linq::Expressions::ElementInit* node)
		{
			return ((::System::String*(*)(::System::Linq::Expressions::ElementInit*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_ELEMENTINITBINDINGTOSTRING_OFFSET))(node);
		}

		::System::Linq::Expressions::Expression* VisitBinary(::System::Linq::Expressions::BinaryExpression* node)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::BinaryExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITBINARY_OFFSET))(this, node);
		}

		::System::Linq::Expressions::Expression* VisitParameter(::System::Linq::Expressions::ParameterExpression* node)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::ParameterExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITPARAMETER_OFFSET))(this, node);
		}

		::System::Linq::Expressions::Expression* VisitListInit(::System::Linq::Expressions::ListInitExpression* node)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::ListInitExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITLISTINIT_OFFSET))(this, node);
		}

		::System::Linq::Expressions::Expression* VisitConditional(::System::Linq::Expressions::ConditionalExpression* node)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::ConditionalExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITCONDITIONAL_OFFSET))(this, node);
		}

		::System::Linq::Expressions::Expression* VisitConstant(::System::Linq::Expressions::ConstantExpression* node)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::ConstantExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITCONSTANT_OFFSET))(this, node);
		}

		::System::Linq::Expressions::Expression* VisitDebugInfo(::System::Linq::Expressions::DebugInfoExpression* node)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::DebugInfoExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITDEBUGINFO_OFFSET))(this, node);
		}

		::System::Linq::Expressions::Expression* VisitRuntimeVariables(::System::Linq::Expressions::RuntimeVariablesExpression* node)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::RuntimeVariablesExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITRUNTIMEVARIABLES_OFFSET))(this, node);
		}

		::System::Void OutMember(::System::Linq::Expressions::Expression* instance, ::System::Reflection::MemberInfo* member)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*, ::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_OUTMEMBER_OFFSET))(this, instance, member);
		}

		::System::Linq::Expressions::Expression* VisitMember(::System::Linq::Expressions::MemberExpression* node)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::MemberExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITMEMBER_OFFSET))(this, node);
		}

		::System::Linq::Expressions::Expression* VisitMemberInit(::System::Linq::Expressions::MemberInitExpression* node)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::MemberInitExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITMEMBERINIT_OFFSET))(this, node);
		}

		::System::Linq::Expressions::MemberAssignment* VisitMemberAssignment(::System::Linq::Expressions::MemberAssignment* assignment)
		{
			return ((::System::Linq::Expressions::MemberAssignment*(*)(::PVOID, ::System::Linq::Expressions::MemberAssignment*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITMEMBERASSIGNMENT_OFFSET))(this, assignment);
		}

		::System::Linq::Expressions::MemberListBinding* VisitMemberListBinding(::System::Linq::Expressions::MemberListBinding* binding)
		{
			return ((::System::Linq::Expressions::MemberListBinding*(*)(::PVOID, ::System::Linq::Expressions::MemberListBinding*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITMEMBERLISTBINDING_OFFSET))(this, binding);
		}

		::System::Linq::Expressions::MemberMemberBinding* VisitMemberMemberBinding(::System::Linq::Expressions::MemberMemberBinding* binding)
		{
			return ((::System::Linq::Expressions::MemberMemberBinding*(*)(::PVOID, ::System::Linq::Expressions::MemberMemberBinding*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITMEMBERMEMBERBINDING_OFFSET))(this, binding);
		}

		::System::Linq::Expressions::ElementInit* VisitElementInit(::System::Linq::Expressions::ElementInit* initializer)
		{
			return ((::System::Linq::Expressions::ElementInit*(*)(::PVOID, ::System::Linq::Expressions::ElementInit*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITELEMENTINIT_OFFSET))(this, initializer);
		}

		::System::Linq::Expressions::Expression* VisitInvocation(::System::Linq::Expressions::InvocationExpression* node)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::InvocationExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITINVOCATION_OFFSET))(this, node);
		}

		::System::Linq::Expressions::Expression* VisitMethodCall(::System::Linq::Expressions::MethodCallExpression* node)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::MethodCallExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITMETHODCALL_OFFSET))(this, node);
		}

		::System::Linq::Expressions::Expression* VisitNewArray(::System::Linq::Expressions::NewArrayExpression* node)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::NewArrayExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITNEWARRAY_OFFSET))(this, node);
		}

		::System::Linq::Expressions::Expression* VisitNew(::System::Linq::Expressions::NewExpression* node)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::NewExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITNEW_OFFSET))(this, node);
		}

		::System::Linq::Expressions::Expression* VisitTypeBinary(::System::Linq::Expressions::TypeBinaryExpression* node)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::TypeBinaryExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITTYPEBINARY_OFFSET))(this, node);
		}

		::System::Linq::Expressions::Expression* VisitUnary(::System::Linq::Expressions::UnaryExpression* node)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::UnaryExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITUNARY_OFFSET))(this, node);
		}

		::System::Linq::Expressions::Expression* VisitBlock(::System::Linq::Expressions::BlockExpression* node)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::BlockExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITBLOCK_OFFSET))(this, node);
		}

		::System::Linq::Expressions::Expression* VisitDefault(::System::Linq::Expressions::DefaultExpression* node)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::DefaultExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITDEFAULT_OFFSET))(this, node);
		}

		::System::Linq::Expressions::Expression* VisitLabel(::System::Linq::Expressions::LabelExpression* node)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::LabelExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITLABEL_OFFSET))(this, node);
		}

		::System::Linq::Expressions::Expression* VisitGoto(::System::Linq::Expressions::GotoExpression* node)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::GotoExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITGOTO_OFFSET))(this, node);
		}

		::System::Linq::Expressions::Expression* VisitLoop(::System::Linq::Expressions::LoopExpression* node)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::LoopExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITLOOP_OFFSET))(this, node);
		}

		::System::Linq::Expressions::SwitchCase* VisitSwitchCase(::System::Linq::Expressions::SwitchCase* node)
		{
			return ((::System::Linq::Expressions::SwitchCase*(*)(::PVOID, ::System::Linq::Expressions::SwitchCase*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITSWITCHCASE_OFFSET))(this, node);
		}

		::System::Linq::Expressions::Expression* VisitSwitch(::System::Linq::Expressions::SwitchExpression* node)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::SwitchExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITSWITCH_OFFSET))(this, node);
		}

		::System::Linq::Expressions::CatchBlock* VisitCatchBlock(::System::Linq::Expressions::CatchBlock* node)
		{
			return ((::System::Linq::Expressions::CatchBlock*(*)(::PVOID, ::System::Linq::Expressions::CatchBlock*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITCATCHBLOCK_OFFSET))(this, node);
		}

		::System::Linq::Expressions::Expression* VisitTry(::System::Linq::Expressions::TryExpression* node)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::TryExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITTRY_OFFSET))(this, node);
		}

		::System::Linq::Expressions::Expression* VisitIndex(::System::Linq::Expressions::IndexExpression* node)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::IndexExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITINDEX_OFFSET))(this, node);
		}

		::System::Linq::Expressions::Expression* VisitExtension(::System::Linq::Expressions::Expression* node)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITEXTENSION_OFFSET))(this, node);
		}

		::System::Void DumpLabel(::System::Linq::Expressions::LabelTarget* target)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::LabelTarget*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_DUMPLABEL_OFFSET))(this, target);
		}

		static ::System::Boolean IsBool(::System::Linq::Expressions::Expression* node)
		{
			return ((::System::Boolean(*)(::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_ISBOOL_OFFSET))(node);
		}
	};
}
