#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Expression.h"
#include "unitysdk/System/Linq/Expressions/ExpressionType.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }
namespace System::Linq::Expressions { class ExpressionVisitor; }
namespace System::Linq::Expressions { class LambdaExpression; }

#define SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION_ACCEPT_OFFSET UNITYSDK_OFFSET(0x1BDD0830)
#define SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION_GETARGUMENT_OFFSET UNITYSDK_OFFSET(0x1BDD0790)
#define SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION_GETORMAKEARGUMENTS_OFFSET UNITYSDK_OFFSET(0x1BDD0740)
#define SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION_GET_ARGUMENTCOUNT_OFFSET UNITYSDK_OFFSET(0x1BDD07E0)
#define SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION_GET_ARGUMENTS_OFFSET UNITYSDK_OFFSET(0x1BDD0690)
#define SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION_GET_EXPRESSION_OFFSET UNITYSDK_OFFSET(0x1BDD0680)
#define SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION_GET_LAMBDAOPERAND_OFFSET UNITYSDK_OFFSET(0x1BDD08B0)
#define SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1BDD0670)
#define SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1BDD0660)
#define SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION_REWRITE_OFFSET UNITYSDK_OFFSET(0x1BDD0860)
#define SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION_UPDATE_OFFSET UNITYSDK_OFFSET(0x1BDD06A0)
#define SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BDD09B0)
#define SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDD05F0)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int InvocationExpression_TypeDefinitionIndex = 4482;

	class InvocationExpression : public ::System::Linq::Expressions::Expression
	{
	public:
		::System::Type* _Type_k__BackingField; // 0x10
		::System::Linq::Expressions::Expression* _Expression_k__BackingField; // 0x18

		::System::Void _ctor(::System::Linq::Expressions::Expression* expression, ::System::Type* returnType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION__CTOR_OFFSET))(this, expression, returnType);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION__CTOR_1_OFFSET))(this);
		}

		::System::Type* get_Type()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION_GET_TYPE_OFFSET))(this);
		}

		::System::Linq::Expressions::ExpressionType get_NodeType()
		{
			return ((::System::Linq::Expressions::ExpressionType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION_GET_NODETYPE_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* get_Expression()
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION_GET_EXPRESSION_OFFSET))(this);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* get_Arguments()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION_GET_ARGUMENTS_OFFSET))(this);
		}

		::System::Linq::Expressions::InvocationExpression* Update(::System::Linq::Expressions::Expression* expression, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>* arguments)
		{
			return ((::System::Linq::Expressions::InvocationExpression*(*)(::PVOID, ::System::Linq::Expressions::Expression*, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION_UPDATE_OFFSET))(this, expression, arguments);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* GetOrMakeArguments()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION_GETORMAKEARGUMENTS_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* GetArgument(::System::Int32 index)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION_GETARGUMENT_OFFSET))(this, index);
		}

		::System::Int32 get_ArgumentCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION_GET_ARGUMENTCOUNT_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* Accept(::System::Linq::Expressions::ExpressionVisitor* visitor)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::ExpressionVisitor*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION_ACCEPT_OFFSET))(this, visitor);
		}

		::System::Linq::Expressions::InvocationExpression* Rewrite(::System::Linq::Expressions::Expression* lambda, ::Il2CppArray<::System::Linq::Expressions::Expression*>* arguments)
		{
			return ((::System::Linq::Expressions::InvocationExpression*(*)(::PVOID, ::System::Linq::Expressions::Expression*, ::Il2CppArray<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION_REWRITE_OFFSET))(this, lambda, arguments);
		}

		::System::Linq::Expressions::LambdaExpression* get_LambdaOperand()
		{
			return ((::System::Linq::Expressions::LambdaExpression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION_GET_LAMBDAOPERAND_OFFSET))(this);
		}
	};
}
