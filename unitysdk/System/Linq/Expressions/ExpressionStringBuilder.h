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
namespace System::Linq::Expressions { class DefaultExpression; }
namespace System::Linq::Expressions { class Expression; }
namespace System::Linq::Expressions { class GotoExpression; }
namespace System::Linq::Expressions { class IndexExpression; }
namespace System::Linq::Expressions { class InvocationExpression; }
namespace System::Linq::Expressions { class LabelExpression; }
namespace System::Linq::Expressions { class LabelTarget; }
namespace System::Linq::Expressions { class MemberExpression; }
namespace System::Linq::Expressions { class MethodCallExpression; }
namespace System::Linq::Expressions { class NewArrayExpression; }
namespace System::Linq::Expressions { class NewExpression; }
namespace System::Linq::Expressions { class ParameterExpression; }
namespace System::Linq::Expressions { class TryExpression; }
namespace System::Linq::Expressions { class UnaryExpression; }
namespace System::Linq::Expressions { template <typename T> class Expression_1; }
namespace System::Reflection { class MemberInfo; }
namespace System::Text { class StringBuilder; }

#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_CATCHBLOCKTOSTRING_OFFSET UNITYSDK_OFFSET(0x18490FB0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_DUMPLABEL_OFFSET UNITYSDK_OFFSET(0x184B4C50)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_EXPRESSIONTOSTRING_OFFSET UNITYSDK_OFFSET(0x184A4C10)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_GETID_OFFSET UNITYSDK_OFFSET(0x184B2B40)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_GETLABELID_OFFSET UNITYSDK_OFFSET(0x184B2B30)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_GETPARAMID_OFFSET UNITYSDK_OFFSET(0x184B2CF0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_ISBOOL_OFFSET UNITYSDK_OFFSET(0x184B3370)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_OUTMEMBER_OFFSET UNITYSDK_OFFSET(0x184B38B0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_OUT_1_OFFSET UNITYSDK_OFFSET(0x184B2D20)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_OUT_OFFSET UNITYSDK_OFFSET(0x184B2D00)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x184B2B10)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITBINARY_OFFSET UNITYSDK_OFFSET(0x184B2E90)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITBLOCK_OFFSET UNITYSDK_OFFSET(0x184B47D0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITCATCHBLOCK_OFFSET UNITYSDK_OFFSET(0x184B2D70)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITCONDITIONAL_OFFSET UNITYSDK_OFFSET(0x184B35A0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITCONSTANT_OFFSET UNITYSDK_OFFSET(0x184B36E0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITDEFAULT_OFFSET UNITYSDK_OFFSET(0x184B4B10)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITEXTENSION_OFFSET UNITYSDK_OFFSET(0x184B5110)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITGOTO_OFFSET UNITYSDK_OFFSET(0x184B4DA0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITINDEX_OFFSET UNITYSDK_OFFSET(0x184B4F30)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITINVOCATION_OFFSET UNITYSDK_OFFSET(0x184B39D0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITLABEL_OFFSET UNITYSDK_OFFSET(0x184B4BC0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITMEMBER_OFFSET UNITYSDK_OFFSET(0x184B3980)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITMETHODCALL_OFFSET UNITYSDK_OFFSET(0x184B3B10)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITNEWARRAY_OFFSET UNITYSDK_OFFSET(0x184B3D60)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITNEW_OFFSET UNITYSDK_OFFSET(0x184B3EF0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITPARAMETER_OFFSET UNITYSDK_OFFSET(0x184B3430)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITTRY_OFFSET UNITYSDK_OFFSET(0x184B4ED0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITUNARY_OFFSET UNITYSDK_OFFSET(0x184B4220)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER__CTOR_OFFSET UNITYSDK_OFFSET(0x184B2A80)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int ExpressionStringBuilder_TypeDefinitionIndex = 3202;

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

		::System::Linq::Expressions::Expression* VisitBinary(::System::Linq::Expressions::BinaryExpression* node)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::BinaryExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITBINARY_OFFSET))(this, node);
		}

		::System::Linq::Expressions::Expression* VisitParameter(::System::Linq::Expressions::ParameterExpression* node)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::ParameterExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITPARAMETER_OFFSET))(this, node);
		}

		::System::Linq::Expressions::Expression* VisitConditional(::System::Linq::Expressions::ConditionalExpression* node)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::ConditionalExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITCONDITIONAL_OFFSET))(this, node);
		}

		::System::Linq::Expressions::Expression* VisitConstant(::System::Linq::Expressions::ConstantExpression* node)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::ConstantExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITCONSTANT_OFFSET))(this, node);
		}

		::System::Void OutMember(::System::Linq::Expressions::Expression* instance, ::System::Reflection::MemberInfo* member)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*, ::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_OUTMEMBER_OFFSET))(this, instance, member);
		}

		::System::Linq::Expressions::Expression* VisitMember(::System::Linq::Expressions::MemberExpression* node)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::MemberExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITMEMBER_OFFSET))(this, node);
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
