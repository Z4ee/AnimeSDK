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

#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VALIDATEBINARY_OFFSET UNITYSDK_OFFSET(0x1AD67D40)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VALIDATECHILDTYPE_OFFSET UNITYSDK_OFFSET(0x1AD68C60)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VALIDATEUNARY_OFFSET UNITYSDK_OFFSET(0x1AD68B60)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITARGUMENTS_OFFSET UNITYSDK_OFFSET(0x1AD67C60)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITBINARY_OFFSET UNITYSDK_OFFSET(0x1AD67C80)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITBLOCK_OFFSET UNITYSDK_OFFSET(0x1AD67ED0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITCATCHBLOCK_OFFSET UNITYSDK_OFFSET(0x1AD68660)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITCONDITIONAL_OFFSET UNITYSDK_OFFSET(0x1AD67F90)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITCONSTANT_OFFSET UNITYSDK_OFFSET(0x1AD680A0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITDEFAULT_OFFSET UNITYSDK_OFFSET(0x1AD680B0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITEXTENSION_OFFSET UNITYSDK_OFFSET(0x1AD680C0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITGOTO_OFFSET UNITYSDK_OFFSET(0x1AD680F0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITINDEX_OFFSET UNITYSDK_OFFSET(0x1AD68400)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITINVOCATION_OFFSET UNITYSDK_OFFSET(0x1AD68240)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITLABELTARGET_OFFSET UNITYSDK_OFFSET(0x1AD682B0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITLABEL_OFFSET UNITYSDK_OFFSET(0x1AD682C0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITMEMBER_OFFSET UNITYSDK_OFFSET(0x1AD68370)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITMETHODCALL_OFFSET UNITYSDK_OFFSET(0x1AD68550)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITNEWARRAY_OFFSET UNITYSDK_OFFSET(0x1AD685E0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITNEW_OFFSET UNITYSDK_OFFSET(0x1AD68610)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1AD67C70)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITPARAMETER_OFFSET UNITYSDK_OFFSET(0x1AD68650)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITTRY_OFFSET UNITYSDK_OFFSET(0x1AD68770)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITUNARY_OFFSET UNITYSDK_OFFSET(0x1AD68AC0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISIT_1_OFFSET UNITYSDK_OFFSET(0x1AD67870)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISIT_OFFSET UNITYSDK_OFFSET(0x1AD64130)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD63E80)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int ExpressionVisitor_TypeDefinitionIndex = 3207;

	class ExpressionVisitor : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR__CTOR_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* Visit(::System::Linq::Expressions::Expression* a1)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISIT_OFFSET))(this, a1);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* Visit_1(::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* a1)
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*(*)(::PVOID, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISIT_1_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Linq::Expressions::Expression*>* VisitArguments(::System::Linq::Expressions::IArgumentProvider* a1)
		{
			return ((::Il2CppArray<::System::Linq::Expressions::Expression*>*(*)(::PVOID, ::System::Linq::Expressions::IArgumentProvider*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITARGUMENTS_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Linq::Expressions::ParameterExpression*>* VisitParameters(::System::Linq::Expressions::IParameterProvider* a1, ::System::String* a2)
		{
			return ((::Il2CppArray<::System::Linq::Expressions::ParameterExpression*>*(*)(::PVOID, ::System::Linq::Expressions::IParameterProvider*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITPARAMETERS_OFFSET))(this, a1, a2);
		}

		::System::Linq::Expressions::Expression* VisitBinary(::System::Linq::Expressions::BinaryExpression* a1)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::BinaryExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITBINARY_OFFSET))(this, a1);
		}

		::System::Linq::Expressions::Expression* VisitBlock(::System::Linq::Expressions::BlockExpression* a1)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::BlockExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITBLOCK_OFFSET))(this, a1);
		}

		::System::Linq::Expressions::Expression* VisitConditional(::System::Linq::Expressions::ConditionalExpression* a1)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::ConditionalExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITCONDITIONAL_OFFSET))(this, a1);
		}

		::System::Linq::Expressions::Expression* VisitConstant(::System::Linq::Expressions::ConstantExpression* a1)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::ConstantExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITCONSTANT_OFFSET))(this, a1);
		}

		::System::Linq::Expressions::Expression* VisitDefault(::System::Linq::Expressions::DefaultExpression* a1)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::DefaultExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITDEFAULT_OFFSET))(this, a1);
		}

		::System::Linq::Expressions::Expression* VisitExtension(::System::Linq::Expressions::Expression* a1)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITEXTENSION_OFFSET))(this, a1);
		}

		::System::Linq::Expressions::Expression* VisitGoto(::System::Linq::Expressions::GotoExpression* a1)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::GotoExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITGOTO_OFFSET))(this, a1);
		}

		::System::Linq::Expressions::Expression* VisitInvocation(::System::Linq::Expressions::InvocationExpression* a1)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::InvocationExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITINVOCATION_OFFSET))(this, a1);
		}

		::System::Linq::Expressions::LabelTarget* VisitLabelTarget(::System::Linq::Expressions::LabelTarget* a1)
		{
			return ((::System::Linq::Expressions::LabelTarget*(*)(::PVOID, ::System::Linq::Expressions::LabelTarget*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITLABELTARGET_OFFSET))(this, a1);
		}

		::System::Linq::Expressions::Expression* VisitLabel(::System::Linq::Expressions::LabelExpression* a1)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::LabelExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITLABEL_OFFSET))(this, a1);
		}

		::System::Linq::Expressions::Expression* VisitMember(::System::Linq::Expressions::MemberExpression* a1)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::MemberExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITMEMBER_OFFSET))(this, a1);
		}

		::System::Linq::Expressions::Expression* VisitIndex(::System::Linq::Expressions::IndexExpression* a1)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::IndexExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITINDEX_OFFSET))(this, a1);
		}

		::System::Linq::Expressions::Expression* VisitMethodCall(::System::Linq::Expressions::MethodCallExpression* a1)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::MethodCallExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITMETHODCALL_OFFSET))(this, a1);
		}

		::System::Linq::Expressions::Expression* VisitNewArray(::System::Linq::Expressions::NewArrayExpression* a1)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::NewArrayExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITNEWARRAY_OFFSET))(this, a1);
		}

		::System::Linq::Expressions::Expression* VisitNew(::System::Linq::Expressions::NewExpression* a1)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::NewExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITNEW_OFFSET))(this, a1);
		}

		::System::Linq::Expressions::Expression* VisitParameter(::System::Linq::Expressions::ParameterExpression* a1)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::ParameterExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITPARAMETER_OFFSET))(this, a1);
		}

		::System::Linq::Expressions::CatchBlock* VisitCatchBlock(::System::Linq::Expressions::CatchBlock* a1)
		{
			return ((::System::Linq::Expressions::CatchBlock*(*)(::PVOID, ::System::Linq::Expressions::CatchBlock*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITCATCHBLOCK_OFFSET))(this, a1);
		}

		::System::Linq::Expressions::Expression* VisitTry(::System::Linq::Expressions::TryExpression* a1)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::TryExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITTRY_OFFSET))(this, a1);
		}

		::System::Linq::Expressions::Expression* VisitUnary(::System::Linq::Expressions::UnaryExpression* a1)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::UnaryExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITUNARY_OFFSET))(this, a1);
		}

		static ::System::Linq::Expressions::UnaryExpression* ValidateUnary(::System::Linq::Expressions::UnaryExpression* a1, ::System::Linq::Expressions::UnaryExpression* a2)
		{
			return ((::System::Linq::Expressions::UnaryExpression*(*)(::System::Linq::Expressions::UnaryExpression*, ::System::Linq::Expressions::UnaryExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VALIDATEUNARY_OFFSET))(a1, a2);
		}

		static ::System::Linq::Expressions::BinaryExpression* ValidateBinary(::System::Linq::Expressions::BinaryExpression* a1, ::System::Linq::Expressions::BinaryExpression* a2)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::BinaryExpression*, ::System::Linq::Expressions::BinaryExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VALIDATEBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void ValidateChildType(::System::Type* a1, ::System::Type* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::System::Type*, ::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VALIDATECHILDTYPE_OFFSET))(a1, a2, a3);
		}
	};
}
