#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Expression.h"
#include "unitysdk/System/Linq/Expressions/ExpressionType.h"

namespace System { class Type; }
namespace System::Linq::Expressions { class ExpressionVisitor; }
namespace System::Reflection { class MethodInfo; }

#define SYSTEM_LINQ_EXPRESSIONS_UNARYEXPRESSION_ACCEPT_OFFSET UNITYSDK_OFFSET(0x1E118F40)
#define SYSTEM_LINQ_EXPRESSIONS_UNARYEXPRESSION_FUNCTIONALOP_OFFSET UNITYSDK_OFFSET(0x1E11A7E0)
#define SYSTEM_LINQ_EXPRESSIONS_UNARYEXPRESSION_GET_CANREDUCE_OFFSET UNITYSDK_OFFSET(0x1E118F70)
#define SYSTEM_LINQ_EXPRESSIONS_UNARYEXPRESSION_GET_ISLIFTEDTONULL_OFFSET UNITYSDK_OFFSET(0x1E118EC0)
#define SYSTEM_LINQ_EXPRESSIONS_UNARYEXPRESSION_GET_ISLIFTED_OFFSET UNITYSDK_OFFSET(0x1E118C20)
#define SYSTEM_LINQ_EXPRESSIONS_UNARYEXPRESSION_GET_ISPREFIX_OFFSET UNITYSDK_OFFSET(0x1E11A7D0)
#define SYSTEM_LINQ_EXPRESSIONS_UNARYEXPRESSION_GET_METHOD_OFFSET UNITYSDK_OFFSET(0x1E118C10)
#define SYSTEM_LINQ_EXPRESSIONS_UNARYEXPRESSION_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1E118BF0)
#define SYSTEM_LINQ_EXPRESSIONS_UNARYEXPRESSION_GET_OPERAND_OFFSET UNITYSDK_OFFSET(0x1E118C00)
#define SYSTEM_LINQ_EXPRESSIONS_UNARYEXPRESSION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1E118BE0)
#define SYSTEM_LINQ_EXPRESSIONS_UNARYEXPRESSION_REDUCEINDEX_OFFSET UNITYSDK_OFFSET(0x1E118FF0)
#define SYSTEM_LINQ_EXPRESSIONS_UNARYEXPRESSION_REDUCEMEMBER_OFFSET UNITYSDK_OFFSET(0x1E119B40)
#define SYSTEM_LINQ_EXPRESSIONS_UNARYEXPRESSION_REDUCEVARIABLE_OFFSET UNITYSDK_OFFSET(0x1E11A3B0)
#define SYSTEM_LINQ_EXPRESSIONS_UNARYEXPRESSION_REDUCE_OFFSET UNITYSDK_OFFSET(0x1E118F80)
#define SYSTEM_LINQ_EXPRESSIONS_UNARYEXPRESSION_UPDATE_OFFSET UNITYSDK_OFFSET(0x1E11A8D0)
#define SYSTEM_LINQ_EXPRESSIONS_UNARYEXPRESSION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E11A950)
#define SYSTEM_LINQ_EXPRESSIONS_UNARYEXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E118B60)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int UnaryExpression_TypeDefinitionIndex = 4547;

	class UnaryExpression : public ::System::Linq::Expressions::Expression
	{
	public:
		::System::Linq::Expressions::Expression* _Operand_k__BackingField; // 0x10
		::System::Reflection::MethodInfo* _Method_k__BackingField; // 0x18
		::System::Type* _Type_k__BackingField; // 0x20
		::System::Linq::Expressions::ExpressionType _NodeType_k__BackingField; // 0x28

		::System::Void _ctor(::System::Linq::Expressions::ExpressionType nodeType, ::System::Linq::Expressions::Expression* expression, ::System::Type* type, ::System::Reflection::MethodInfo* method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::ExpressionType, ::System::Linq::Expressions::Expression*, ::System::Type*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_UNARYEXPRESSION__CTOR_OFFSET))(this, nodeType, expression, type, method);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_UNARYEXPRESSION__CTOR_1_OFFSET))(this);
		}

		::System::Type* get_Type()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_UNARYEXPRESSION_GET_TYPE_OFFSET))(this);
		}

		::System::Linq::Expressions::ExpressionType get_NodeType()
		{
			return ((::System::Linq::Expressions::ExpressionType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_UNARYEXPRESSION_GET_NODETYPE_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* get_Operand()
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_UNARYEXPRESSION_GET_OPERAND_OFFSET))(this);
		}

		::System::Reflection::MethodInfo* get_Method()
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_UNARYEXPRESSION_GET_METHOD_OFFSET))(this);
		}

		::System::Boolean get_IsLifted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_UNARYEXPRESSION_GET_ISLIFTED_OFFSET))(this);
		}

		::System::Boolean get_IsLiftedToNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_UNARYEXPRESSION_GET_ISLIFTEDTONULL_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* Accept(::System::Linq::Expressions::ExpressionVisitor* visitor)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::ExpressionVisitor*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_UNARYEXPRESSION_ACCEPT_OFFSET))(this, visitor);
		}

		::System::Boolean get_CanReduce()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_UNARYEXPRESSION_GET_CANREDUCE_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* Reduce()
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_UNARYEXPRESSION_REDUCE_OFFSET))(this);
		}

		::System::Boolean get_IsPrefix()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_UNARYEXPRESSION_GET_ISPREFIX_OFFSET))(this);
		}

		::System::Linq::Expressions::UnaryExpression* FunctionalOp(::System::Linq::Expressions::Expression* operand)
		{
			return ((::System::Linq::Expressions::UnaryExpression*(*)(::PVOID, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_UNARYEXPRESSION_FUNCTIONALOP_OFFSET))(this, operand);
		}

		::System::Linq::Expressions::Expression* ReduceVariable()
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_UNARYEXPRESSION_REDUCEVARIABLE_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* ReduceMember()
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_UNARYEXPRESSION_REDUCEMEMBER_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* ReduceIndex()
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_UNARYEXPRESSION_REDUCEINDEX_OFFSET))(this);
		}

		::System::Linq::Expressions::UnaryExpression* Update(::System::Linq::Expressions::Expression* operand)
		{
			return ((::System::Linq::Expressions::UnaryExpression*(*)(::PVOID, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_UNARYEXPRESSION_UPDATE_OFFSET))(this, operand);
		}
	};
}
