#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/DebugViewWriter_Flow.h"
#include "unitysdk/System/Linq/Expressions/ExpressionVisitor.h"

namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace System::IO { class TextWriter; }
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
namespace System::Linq::Expressions { class LambdaExpression; }
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

#define SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_CHECKBREAK_OFFSET UNITYSDK_OFFSET(0x1B8D9D60)
#define SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_CONTAINSWHITESPACE_OFFSET UNITYSDK_OFFSET(0x1B8DDBC0)
#define SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_DEDENT_OFFSET UNITYSDK_OFFSET(0x1B8D9620)
#define SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_DUMPLABEL_OFFSET UNITYSDK_OFFSET(0x1B8DC7A0)
#define SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_GETCONSTANTVALUESUFFIX_OFFSET UNITYSDK_OFFSET(0x1B8DAF40)
#define SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_GETDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x1B8DA740)
#define SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_GETFLOW_OFFSET UNITYSDK_OFFSET(0x1B8D9C70)
#define SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_GETLABELTARGETID_OFFSET UNITYSDK_OFFSET(0x1B8D96E0)
#define SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_GETLABELTARGETNAME_OFFSET UNITYSDK_OFFSET(0x1B8DC960)
#define SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_GETLAMBDAID_OFFSET UNITYSDK_OFFSET(0x1B8D9640)
#define SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_GETLAMBDANAME_OFFSET UNITYSDK_OFFSET(0x1B8DDAD0)
#define SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_GETOPERATORPRECEDENCE_OFFSET UNITYSDK_OFFSET(0x1B8DB470)
#define SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_GETPARAMID_OFFSET UNITYSDK_OFFSET(0x1B8D9690)
#define SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_GET_BASE_OFFSET UNITYSDK_OFFSET(0x1B8D9590)
#define SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_GET_DELTA_OFFSET UNITYSDK_OFFSET(0x1B8D95C0)
#define SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_GET_DEPTH_OFFSET UNITYSDK_OFFSET(0x1B8D95D0)
#define SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_INDENT_OFFSET UNITYSDK_OFFSET(0x1B8D9610)
#define SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_ISSIMPLEEXPRESSION_OFFSET UNITYSDK_OFFSET(0x1B8DA8F0)
#define SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_NEEDSPARENTHESES_OFFSET UNITYSDK_OFFSET(0x1B8DA4D0)
#define SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_NEWLINE_OFFSET UNITYSDK_OFFSET(0x1B8D9630)
#define SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_OUTMEMBER_OFFSET UNITYSDK_OFFSET(0x1B8DB140)
#define SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_OUT_1_OFFSET UNITYSDK_OFFSET(0x1B8D9C50)
#define SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_OUT_2_OFFSET UNITYSDK_OFFSET(0x1B8D9C60)
#define SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_OUT_3_OFFSET UNITYSDK_OFFSET(0x1B8D9B00)
#define SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_OUT_OFFSET UNITYSDK_OFFSET(0x1B8D9AF0)
#define SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_PARENTHESIZEDVISIT_OFFSET UNITYSDK_OFFSET(0x1B8DA400)
#define SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_QUOTENAME_OFFSET UNITYSDK_OFFSET(0x1B8DDD20)
#define SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_VISITBINARY_OFFSET UNITYSDK_OFFSET(0x1B8D9E40)
#define SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_VISITBLOCK_OFFSET UNITYSDK_OFFSET(0x1B8DC3D0)
#define SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_VISITCATCHBLOCK_OFFSET UNITYSDK_OFFSET(0x1B8DD0E0)
#define SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_VISITCONDITIONAL_OFFSET UNITYSDK_OFFSET(0x1B8DA9A0)
#define SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_VISITCONSTANT_OFFSET UNITYSDK_OFFSET(0x1B8DABE0)
#define SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_VISITDEBUGINFO_OFFSET UNITYSDK_OFFSET(0x1B8DD6D0)
#define SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_VISITDECLARATIONS_OFFSET UNITYSDK_OFFSET(0x1B8D9DC0)
#define SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_VISITDEFAULT_OFFSET UNITYSDK_OFFSET(0x1B8DC5F0)
#define SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_VISITELEMENTINIT_OFFSET UNITYSDK_OFFSET(0x1B8DB930)
#define SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_VISITEXTENSION_OFFSET UNITYSDK_OFFSET(0x1B8DD570)
#define SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_VISITGOTO_OFFSET UNITYSDK_OFFSET(0x1B8DC830)
#define SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_VISITINDEX_OFFSET UNITYSDK_OFFSET(0x1B8DD3F0)
#define SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_VISITINVOCATION_OFFSET UNITYSDK_OFFSET(0x1B8DB320)
#define SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_VISITLABEL_OFFSET UNITYSDK_OFFSET(0x1B8DC680)
#define SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_VISITLISTINIT_OFFSET UNITYSDK_OFFSET(0x1B8DBA30)
#define SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_VISITLOOP_OFFSET UNITYSDK_OFFSET(0x1B8DCA10)
#define SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_VISITMEMBERASSIGNMENT_OFFSET UNITYSDK_OFFSET(0x1B8DBAF0)
#define SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_VISITMEMBERINIT_OFFSET UNITYSDK_OFFSET(0x1B8DBD70)
#define SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_VISITMEMBERLISTBINDING_OFFSET UNITYSDK_OFFSET(0x1B8DBBB0)
#define SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_VISITMEMBERMEMBERBINDING_OFFSET UNITYSDK_OFFSET(0x1B8DBC90)
#define SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_VISITMEMBER_OFFSET UNITYSDK_OFFSET(0x1B8DB2D0)
#define SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_VISITMETHODCALL_OFFSET UNITYSDK_OFFSET(0x1B8DB4B0)
#define SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_VISITNEWARRAY_OFFSET UNITYSDK_OFFSET(0x1B8DB6E0)
#define SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_VISITNEW_OFFSET UNITYSDK_OFFSET(0x1B8DB810)
#define SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_VISITPARAMETER_OFFSET UNITYSDK_OFFSET(0x1B8DA660)
#define SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_VISITRUNTIMEVARIABLES_OFFSET UNITYSDK_OFFSET(0x1B8DB0B0)
#define SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_VISITSWITCHCASE_OFFSET UNITYSDK_OFFSET(0x1B8DCC00)
#define SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_VISITSWITCH_OFFSET UNITYSDK_OFFSET(0x1B8DCF30)
#define SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_VISITTRY_OFFSET UNITYSDK_OFFSET(0x1B8DD240)
#define SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_VISITTYPEBINARY_OFFSET UNITYSDK_OFFSET(0x1B8DBE30)
#define SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_VISITUNARY_OFFSET UNITYSDK_OFFSET(0x1B8DBF90)
#define SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_WRITELAMBDA_OFFSET UNITYSDK_OFFSET(0x1B8D98E0)
#define SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_WRITELINE_OFFSET UNITYSDK_OFFSET(0x1B8D9AC0)
#define SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_WRITETO_1_OFFSET UNITYSDK_OFFSET(0x1B8D97D0)
#define SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_WRITETO_OFFSET UNITYSDK_OFFSET(0x1B8D9730)
#define SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_WRITE_OFFSET UNITYSDK_OFFSET(0x1B8D9D20)
#define SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8D9520)
#define SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER__VISITDECLARATIONS_B__38_0_OFFSET UNITYSDK_OFFSET(0x1B8DDD90)
#define SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER__VISITLISTINIT_B__58_0_OFFSET UNITYSDK_OFFSET(0x1B8DDE80)
#define SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER__VISITMEMBERINIT_B__62_0_OFFSET UNITYSDK_OFFSET(0x1B8DDEB0)
#define SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER__VISITMEMBERLISTBINDING_B__60_0_OFFSET UNITYSDK_OFFSET(0x1B8DDE90)
#define SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER__VISITMEMBERMEMBERBINDING_B__61_0_OFFSET UNITYSDK_OFFSET(0x1B8DDEA0)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int DebugViewWriter_TypeDefinitionIndex = 4455;

	class DebugViewWriter : public ::System::Linq::Expressions::ExpressionVisitor
	{
	public:
		// static const ::System::Int32 Tab = 0x4; // 0x0
		// static const ::System::Int32 MaxColumn = 0x78; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::LabelTarget*, ::System::Int32>* _labelIds; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::LambdaExpression*, ::System::Int32>* _lambdaIds; // 0x18
		::System::Collections::Generic::Queue_1<::System::Linq::Expressions::LambdaExpression*>* _lambdas; // 0x20
		::System::Collections::Generic::Stack_1<::System::Int32>* _stack; // 0x28
		::System::IO::TextWriter* _out; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*, ::System::Int32>* _paramIds; // 0x38
		::System::Linq::Expressions::DebugViewWriter_Flow _flow; // 0x40
		::System::Int32 _column; // 0x44
		::System::Int32 _delta; // 0x48

		::System::Void _ctor(::System::IO::TextWriter* file)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::TextWriter*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER__CTOR_OFFSET))(this, file);
		}

		::System::Int32 get_Base()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_GET_BASE_OFFSET))(this);
		}

		::System::Int32 get_Delta()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_GET_DELTA_OFFSET))(this);
		}

		::System::Int32 get_Depth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_GET_DEPTH_OFFSET))(this);
		}

		::System::Void Indent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_INDENT_OFFSET))(this);
		}

		::System::Void Dedent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_DEDENT_OFFSET))(this);
		}

		::System::Void NewLine()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_NEWLINE_OFFSET))(this);
		}

		::System::Int32 GetLambdaId(::System::Linq::Expressions::LambdaExpression* le)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::LambdaExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_GETLAMBDAID_OFFSET))(this, le);
		}

		::System::Int32 GetParamId(::System::Linq::Expressions::ParameterExpression* p)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::ParameterExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_GETPARAMID_OFFSET))(this, p);
		}

		::System::Int32 GetLabelTargetId(::System::Linq::Expressions::LabelTarget* target)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Linq::Expressions::LabelTarget*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_GETLABELTARGETID_OFFSET))(this, target);
		}

		static ::System::Void WriteTo(::System::Linq::Expressions::Expression* node, ::System::IO::TextWriter* writer)
		{
			return ((::System::Void(*)(::System::Linq::Expressions::Expression*, ::System::IO::TextWriter*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_WRITETO_OFFSET))(node, writer);
		}

		::System::Void WriteTo_1(::System::Linq::Expressions::Expression* node)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_WRITETO_1_OFFSET))(this, node);
		}

		::System::Void Out(::System::String* s)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_OUT_OFFSET))(this, s);
		}

		::System::Void Out_1(::System::Linq::Expressions::DebugViewWriter_Flow before, ::System::String* s)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::DebugViewWriter_Flow, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_OUT_1_OFFSET))(this, before, s);
		}

		::System::Void Out_2(::System::String* s, ::System::Linq::Expressions::DebugViewWriter_Flow after)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Linq::Expressions::DebugViewWriter_Flow))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_OUT_2_OFFSET))(this, s, after);
		}

		::System::Void Out_3(::System::Linq::Expressions::DebugViewWriter_Flow before, ::System::String* s, ::System::Linq::Expressions::DebugViewWriter_Flow after)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::DebugViewWriter_Flow, ::System::String*, ::System::Linq::Expressions::DebugViewWriter_Flow))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_OUT_3_OFFSET))(this, before, s, after);
		}

		::System::Void WriteLine()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_WRITELINE_OFFSET))(this);
		}

		::System::Void Write(::System::String* s)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_WRITE_OFFSET))(this, s);
		}

		::System::Linq::Expressions::DebugViewWriter_Flow GetFlow(::System::Linq::Expressions::DebugViewWriter_Flow flow)
		{
			return ((::System::Linq::Expressions::DebugViewWriter_Flow(*)(::PVOID, ::System::Linq::Expressions::DebugViewWriter_Flow))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_GETFLOW_OFFSET))(this, flow);
		}

		::System::Linq::Expressions::DebugViewWriter_Flow CheckBreak(::System::Linq::Expressions::DebugViewWriter_Flow flow)
		{
			return ((::System::Linq::Expressions::DebugViewWriter_Flow(*)(::PVOID, ::System::Linq::Expressions::DebugViewWriter_Flow))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_CHECKBREAK_OFFSET))(this, flow);
		}

		::System::Void VisitDeclarations(::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::ParameterExpression*>* expressions)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::ParameterExpression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_VISITDECLARATIONS_OFFSET))(this, expressions);
		}

		::System::Linq::Expressions::Expression* VisitBinary(::System::Linq::Expressions::BinaryExpression* node)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::BinaryExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_VISITBINARY_OFFSET))(this, node);
		}

		::System::Linq::Expressions::Expression* VisitParameter(::System::Linq::Expressions::ParameterExpression* node)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::ParameterExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_VISITPARAMETER_OFFSET))(this, node);
		}

		static ::System::Boolean IsSimpleExpression(::System::Linq::Expressions::Expression* node)
		{
			return ((::System::Boolean(*)(::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_ISSIMPLEEXPRESSION_OFFSET))(node);
		}

		::System::Linq::Expressions::Expression* VisitConditional(::System::Linq::Expressions::ConditionalExpression* node)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::ConditionalExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_VISITCONDITIONAL_OFFSET))(this, node);
		}

		::System::Linq::Expressions::Expression* VisitConstant(::System::Linq::Expressions::ConstantExpression* node)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::ConstantExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_VISITCONSTANT_OFFSET))(this, node);
		}

		static ::System::String* GetConstantValueSuffix(::System::Type* type)
		{
			return ((::System::String*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_GETCONSTANTVALUESUFFIX_OFFSET))(type);
		}

		::System::Linq::Expressions::Expression* VisitRuntimeVariables(::System::Linq::Expressions::RuntimeVariablesExpression* node)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::RuntimeVariablesExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_VISITRUNTIMEVARIABLES_OFFSET))(this, node);
		}

		::System::Void OutMember(::System::Linq::Expressions::Expression* node, ::System::Linq::Expressions::Expression* instance, ::System::Reflection::MemberInfo* member)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_OUTMEMBER_OFFSET))(this, node, instance, member);
		}

		::System::Linq::Expressions::Expression* VisitMember(::System::Linq::Expressions::MemberExpression* node)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::MemberExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_VISITMEMBER_OFFSET))(this, node);
		}

		::System::Linq::Expressions::Expression* VisitInvocation(::System::Linq::Expressions::InvocationExpression* node)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::InvocationExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_VISITINVOCATION_OFFSET))(this, node);
		}

		static ::System::Boolean NeedsParentheses(::System::Linq::Expressions::Expression* parent, ::System::Linq::Expressions::Expression* child)
		{
			return ((::System::Boolean(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_NEEDSPARENTHESES_OFFSET))(parent, child);
		}

		static ::System::Int32 GetOperatorPrecedence(::System::Linq::Expressions::Expression* node)
		{
			return ((::System::Int32(*)(::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_GETOPERATORPRECEDENCE_OFFSET))(node);
		}

		::System::Void ParenthesizedVisit(::System::Linq::Expressions::Expression* parent, ::System::Linq::Expressions::Expression* nodeToVisit)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_PARENTHESIZEDVISIT_OFFSET))(this, parent, nodeToVisit);
		}

		::System::Linq::Expressions::Expression* VisitMethodCall(::System::Linq::Expressions::MethodCallExpression* node)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::MethodCallExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_VISITMETHODCALL_OFFSET))(this, node);
		}

		::System::Linq::Expressions::Expression* VisitNewArray(::System::Linq::Expressions::NewArrayExpression* node)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::NewArrayExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_VISITNEWARRAY_OFFSET))(this, node);
		}

		::System::Linq::Expressions::Expression* VisitNew(::System::Linq::Expressions::NewExpression* node)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::NewExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_VISITNEW_OFFSET))(this, node);
		}

		::System::Linq::Expressions::ElementInit* VisitElementInit(::System::Linq::Expressions::ElementInit* node)
		{
			return ((::System::Linq::Expressions::ElementInit*(*)(::PVOID, ::System::Linq::Expressions::ElementInit*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_VISITELEMENTINIT_OFFSET))(this, node);
		}

		::System::Linq::Expressions::Expression* VisitListInit(::System::Linq::Expressions::ListInitExpression* node)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::ListInitExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_VISITLISTINIT_OFFSET))(this, node);
		}

		::System::Linq::Expressions::MemberAssignment* VisitMemberAssignment(::System::Linq::Expressions::MemberAssignment* assignment)
		{
			return ((::System::Linq::Expressions::MemberAssignment*(*)(::PVOID, ::System::Linq::Expressions::MemberAssignment*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_VISITMEMBERASSIGNMENT_OFFSET))(this, assignment);
		}

		::System::Linq::Expressions::MemberListBinding* VisitMemberListBinding(::System::Linq::Expressions::MemberListBinding* binding)
		{
			return ((::System::Linq::Expressions::MemberListBinding*(*)(::PVOID, ::System::Linq::Expressions::MemberListBinding*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_VISITMEMBERLISTBINDING_OFFSET))(this, binding);
		}

		::System::Linq::Expressions::MemberMemberBinding* VisitMemberMemberBinding(::System::Linq::Expressions::MemberMemberBinding* binding)
		{
			return ((::System::Linq::Expressions::MemberMemberBinding*(*)(::PVOID, ::System::Linq::Expressions::MemberMemberBinding*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_VISITMEMBERMEMBERBINDING_OFFSET))(this, binding);
		}

		::System::Linq::Expressions::Expression* VisitMemberInit(::System::Linq::Expressions::MemberInitExpression* node)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::MemberInitExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_VISITMEMBERINIT_OFFSET))(this, node);
		}

		::System::Linq::Expressions::Expression* VisitTypeBinary(::System::Linq::Expressions::TypeBinaryExpression* node)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::TypeBinaryExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_VISITTYPEBINARY_OFFSET))(this, node);
		}

		::System::Linq::Expressions::Expression* VisitUnary(::System::Linq::Expressions::UnaryExpression* node)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::UnaryExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_VISITUNARY_OFFSET))(this, node);
		}

		::System::Linq::Expressions::Expression* VisitBlock(::System::Linq::Expressions::BlockExpression* node)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::BlockExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_VISITBLOCK_OFFSET))(this, node);
		}

		::System::Linq::Expressions::Expression* VisitDefault(::System::Linq::Expressions::DefaultExpression* node)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::DefaultExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_VISITDEFAULT_OFFSET))(this, node);
		}

		::System::Linq::Expressions::Expression* VisitLabel(::System::Linq::Expressions::LabelExpression* node)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::LabelExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_VISITLABEL_OFFSET))(this, node);
		}

		::System::Linq::Expressions::Expression* VisitGoto(::System::Linq::Expressions::GotoExpression* node)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::GotoExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_VISITGOTO_OFFSET))(this, node);
		}

		::System::Linq::Expressions::Expression* VisitLoop(::System::Linq::Expressions::LoopExpression* node)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::LoopExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_VISITLOOP_OFFSET))(this, node);
		}

		::System::Linq::Expressions::SwitchCase* VisitSwitchCase(::System::Linq::Expressions::SwitchCase* node)
		{
			return ((::System::Linq::Expressions::SwitchCase*(*)(::PVOID, ::System::Linq::Expressions::SwitchCase*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_VISITSWITCHCASE_OFFSET))(this, node);
		}

		::System::Linq::Expressions::Expression* VisitSwitch(::System::Linq::Expressions::SwitchExpression* node)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::SwitchExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_VISITSWITCH_OFFSET))(this, node);
		}

		::System::Linq::Expressions::CatchBlock* VisitCatchBlock(::System::Linq::Expressions::CatchBlock* node)
		{
			return ((::System::Linq::Expressions::CatchBlock*(*)(::PVOID, ::System::Linq::Expressions::CatchBlock*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_VISITCATCHBLOCK_OFFSET))(this, node);
		}

		::System::Linq::Expressions::Expression* VisitTry(::System::Linq::Expressions::TryExpression* node)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::TryExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_VISITTRY_OFFSET))(this, node);
		}

		::System::Linq::Expressions::Expression* VisitIndex(::System::Linq::Expressions::IndexExpression* node)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::IndexExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_VISITINDEX_OFFSET))(this, node);
		}

		::System::Linq::Expressions::Expression* VisitExtension(::System::Linq::Expressions::Expression* node)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_VISITEXTENSION_OFFSET))(this, node);
		}

		::System::Linq::Expressions::Expression* VisitDebugInfo(::System::Linq::Expressions::DebugInfoExpression* node)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::DebugInfoExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_VISITDEBUGINFO_OFFSET))(this, node);
		}

		::System::Void DumpLabel(::System::Linq::Expressions::LabelTarget* target)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::LabelTarget*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_DUMPLABEL_OFFSET))(this, target);
		}

		::System::String* GetLabelTargetName(::System::Linq::Expressions::LabelTarget* target)
		{
			return ((::System::String*(*)(::PVOID, ::System::Linq::Expressions::LabelTarget*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_GETLABELTARGETNAME_OFFSET))(this, target);
		}

		::System::Void WriteLambda(::System::Linq::Expressions::LambdaExpression* lambda)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::LambdaExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_WRITELAMBDA_OFFSET))(this, lambda);
		}

		::System::String* GetLambdaName(::System::Linq::Expressions::LambdaExpression* lambda)
		{
			return ((::System::String*(*)(::PVOID, ::System::Linq::Expressions::LambdaExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_GETLAMBDANAME_OFFSET))(this, lambda);
		}

		static ::System::Boolean ContainsWhiteSpace(::System::String* name)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_CONTAINSWHITESPACE_OFFSET))(name);
		}

		static ::System::String* QuoteName(::System::String* name)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_QUOTENAME_OFFSET))(name);
		}

		static ::System::String* GetDisplayName(::System::String* name)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER_GETDISPLAYNAME_OFFSET))(name);
		}

		::System::Void _VisitDeclarations_b__38_0(::System::Linq::Expressions::ParameterExpression* variable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::ParameterExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER__VISITDECLARATIONS_B__38_0_OFFSET))(this, variable);
		}

		::System::Void _VisitListInit_b__58_0(::System::Linq::Expressions::ElementInit* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::ElementInit*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER__VISITLISTINIT_B__58_0_OFFSET))(this, e);
		}

		::System::Void _VisitMemberListBinding_b__60_0(::System::Linq::Expressions::ElementInit* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::ElementInit*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER__VISITMEMBERLISTBINDING_B__60_0_OFFSET))(this, e);
		}

		::System::Void _VisitMemberMemberBinding_b__61_0(::System::Linq::Expressions::MemberBinding* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::MemberBinding*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER__VISITMEMBERMEMBERBINDING_B__61_0_OFFSET))(this, e);
		}

		::System::Void _VisitMemberInit_b__62_0(::System::Linq::Expressions::MemberBinding* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::MemberBinding*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DEBUGVIEWWRITER__VISITMEMBERINIT_B__62_0_OFFSET))(this, e);
		}
	};
}
