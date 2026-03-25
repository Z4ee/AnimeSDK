#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }
namespace System::Linq::Expressions { class BinaryExpression; }
namespace System::Linq::Expressions { class BlockExpression; }
namespace System::Linq::Expressions { class CatchBlock; }
namespace System::Linq::Expressions { class ConditionalExpression; }
namespace System::Linq::Expressions { class ConstantExpression; }
namespace System::Linq::Expressions { class DefaultExpression; }
namespace System::Linq::Expressions { class Expression; }
namespace System::Linq::Expressions { class GotoExpression; }
namespace System::Linq::Expressions { class IArgumentProvider; }
namespace System::Linq::Expressions { class IParameterProvider; }
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

#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VALIDATEBINARY_OFFSET UNITYSDK_OFFSET(0x184B5880)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VALIDATECHILDTYPE_OFFSET UNITYSDK_OFFSET(0x184B6600)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VALIDATEUNARY_OFFSET UNITYSDK_OFFSET(0x184B6500)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITARGUMENTS_OFFSET UNITYSDK_OFFSET(0x184B57A0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITBINARY_OFFSET UNITYSDK_OFFSET(0x184B57C0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITBLOCK_OFFSET UNITYSDK_OFFSET(0x184B5A10)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITCATCHBLOCK_OFFSET UNITYSDK_OFFSET(0x184B61A0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITCONDITIONAL_OFFSET UNITYSDK_OFFSET(0x184B5AD0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITCONSTANT_OFFSET UNITYSDK_OFFSET(0x184B5BE0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITDEFAULT_OFFSET UNITYSDK_OFFSET(0x184B5BF0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITEXTENSION_OFFSET UNITYSDK_OFFSET(0x184B5C00)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITGOTO_OFFSET UNITYSDK_OFFSET(0x184B5C30)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITINDEX_OFFSET UNITYSDK_OFFSET(0x184B5F40)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITINVOCATION_OFFSET UNITYSDK_OFFSET(0x184B5D80)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITLABELTARGET_OFFSET UNITYSDK_OFFSET(0x184B5DF0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITLABEL_OFFSET UNITYSDK_OFFSET(0x184B5E00)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITMEMBER_OFFSET UNITYSDK_OFFSET(0x184B5EB0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITMETHODCALL_OFFSET UNITYSDK_OFFSET(0x184B6090)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITNEWARRAY_OFFSET UNITYSDK_OFFSET(0x184B6120)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITNEW_OFFSET UNITYSDK_OFFSET(0x184B6150)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITPARAMETERS_OFFSET UNITYSDK_OFFSET(0x184B57B0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITPARAMETER_OFFSET UNITYSDK_OFFSET(0x184B6190)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITTRY_OFFSET UNITYSDK_OFFSET(0x184B62B0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITUNARY_OFFSET UNITYSDK_OFFSET(0x184B6460)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISIT_1_OFFSET UNITYSDK_OFFSET(0x184B5310)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISIT_OFFSET UNITYSDK_OFFSET(0x184B2D40)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR__CTOR_OFFSET UNITYSDK_OFFSET(0x184B2B00)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int ExpressionVisitor_TypeDefinitionIndex = 3204;

	class ExpressionVisitor : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR__CTOR_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* Visit(::System::Linq::Expressions::Expression* node)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISIT_OFFSET))(this, node);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* Visit_1(::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* nodes)
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*(*)(::PVOID, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISIT_1_OFFSET))(this, nodes);
		}

		::Il2CppArray<::System::Linq::Expressions::Expression*>* VisitArguments(::System::Linq::Expressions::IArgumentProvider* nodes)
		{
			return ((::Il2CppArray<::System::Linq::Expressions::Expression*>*(*)(::PVOID, ::System::Linq::Expressions::IArgumentProvider*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITARGUMENTS_OFFSET))(this, nodes);
		}

		::Il2CppArray<::System::Linq::Expressions::ParameterExpression*>* VisitParameters(::System::Linq::Expressions::IParameterProvider* nodes, ::System::String* callerName)
		{
			return ((::Il2CppArray<::System::Linq::Expressions::ParameterExpression*>*(*)(::PVOID, ::System::Linq::Expressions::IParameterProvider*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITPARAMETERS_OFFSET))(this, nodes, callerName);
		}

		::System::Linq::Expressions::Expression* VisitBinary(::System::Linq::Expressions::BinaryExpression* node)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::BinaryExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITBINARY_OFFSET))(this, node);
		}

		::System::Linq::Expressions::Expression* VisitBlock(::System::Linq::Expressions::BlockExpression* node)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::BlockExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITBLOCK_OFFSET))(this, node);
		}

		::System::Linq::Expressions::Expression* VisitConditional(::System::Linq::Expressions::ConditionalExpression* node)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::ConditionalExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITCONDITIONAL_OFFSET))(this, node);
		}

		::System::Linq::Expressions::Expression* VisitConstant(::System::Linq::Expressions::ConstantExpression* node)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::ConstantExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITCONSTANT_OFFSET))(this, node);
		}

		::System::Linq::Expressions::Expression* VisitDefault(::System::Linq::Expressions::DefaultExpression* node)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::DefaultExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITDEFAULT_OFFSET))(this, node);
		}

		::System::Linq::Expressions::Expression* VisitExtension(::System::Linq::Expressions::Expression* node)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITEXTENSION_OFFSET))(this, node);
		}

		::System::Linq::Expressions::Expression* VisitGoto(::System::Linq::Expressions::GotoExpression* node)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::GotoExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITGOTO_OFFSET))(this, node);
		}

		::System::Linq::Expressions::Expression* VisitInvocation(::System::Linq::Expressions::InvocationExpression* node)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::InvocationExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITINVOCATION_OFFSET))(this, node);
		}

		::System::Linq::Expressions::LabelTarget* VisitLabelTarget(::System::Linq::Expressions::LabelTarget* node)
		{
			return ((::System::Linq::Expressions::LabelTarget*(*)(::PVOID, ::System::Linq::Expressions::LabelTarget*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITLABELTARGET_OFFSET))(this, node);
		}

		::System::Linq::Expressions::Expression* VisitLabel(::System::Linq::Expressions::LabelExpression* node)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::LabelExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITLABEL_OFFSET))(this, node);
		}

		::System::Linq::Expressions::Expression* VisitMember(::System::Linq::Expressions::MemberExpression* node)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::MemberExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITMEMBER_OFFSET))(this, node);
		}

		::System::Linq::Expressions::Expression* VisitIndex(::System::Linq::Expressions::IndexExpression* node)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::IndexExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITINDEX_OFFSET))(this, node);
		}

		::System::Linq::Expressions::Expression* VisitMethodCall(::System::Linq::Expressions::MethodCallExpression* node)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::MethodCallExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITMETHODCALL_OFFSET))(this, node);
		}

		::System::Linq::Expressions::Expression* VisitNewArray(::System::Linq::Expressions::NewArrayExpression* node)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::NewArrayExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITNEWARRAY_OFFSET))(this, node);
		}

		::System::Linq::Expressions::Expression* VisitNew(::System::Linq::Expressions::NewExpression* node)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::NewExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITNEW_OFFSET))(this, node);
		}

		::System::Linq::Expressions::Expression* VisitParameter(::System::Linq::Expressions::ParameterExpression* node)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::ParameterExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITPARAMETER_OFFSET))(this, node);
		}

		::System::Linq::Expressions::CatchBlock* VisitCatchBlock(::System::Linq::Expressions::CatchBlock* node)
		{
			return ((::System::Linq::Expressions::CatchBlock*(*)(::PVOID, ::System::Linq::Expressions::CatchBlock*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITCATCHBLOCK_OFFSET))(this, node);
		}

		::System::Linq::Expressions::Expression* VisitTry(::System::Linq::Expressions::TryExpression* node)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::TryExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITTRY_OFFSET))(this, node);
		}

		::System::Linq::Expressions::Expression* VisitUnary(::System::Linq::Expressions::UnaryExpression* node)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::UnaryExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITUNARY_OFFSET))(this, node);
		}

		static ::System::Linq::Expressions::UnaryExpression* ValidateUnary(::System::Linq::Expressions::UnaryExpression* before, ::System::Linq::Expressions::UnaryExpression* after)
		{
			return ((::System::Linq::Expressions::UnaryExpression*(*)(::System::Linq::Expressions::UnaryExpression*, ::System::Linq::Expressions::UnaryExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VALIDATEUNARY_OFFSET))(before, after);
		}

		static ::System::Linq::Expressions::BinaryExpression* ValidateBinary(::System::Linq::Expressions::BinaryExpression* before, ::System::Linq::Expressions::BinaryExpression* after)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::BinaryExpression*, ::System::Linq::Expressions::BinaryExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VALIDATEBINARY_OFFSET))(before, after);
		}

		static ::System::Void ValidateChildType(::System::Type* before, ::System::Type* after, ::System::String* methodName)
		{
			return ((::System::Void(*)(::System::Type*, ::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VALIDATECHILDTYPE_OFFSET))(before, after, methodName);
		}
	};
}
