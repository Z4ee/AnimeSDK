#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Expression.h"
#include "unitysdk/System/Linq/Expressions/ExpressionType.h"

namespace System { class Type; }
namespace System::Linq::Expressions { class ExpressionVisitor; }
namespace System::Linq::Expressions { class ParameterExpression; }

#define SYSTEM_LINQ_EXPRESSIONS_TYPEBINARYEXPRESSION_ACCEPT_OFFSET UNITYSDK_OFFSET(0x1F7C5D20)
#define SYSTEM_LINQ_EXPRESSIONS_TYPEBINARYEXPRESSION_BYVALPARAMETERTYPEEQUAL_OFFSET UNITYSDK_OFFSET(0x1F7C57B0)
#define SYSTEM_LINQ_EXPRESSIONS_TYPEBINARYEXPRESSION_GET_EXPRESSION_OFFSET UNITYSDK_OFFSET(0x1F7C4F30)
#define SYSTEM_LINQ_EXPRESSIONS_TYPEBINARYEXPRESSION_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1F7C4F20)
#define SYSTEM_LINQ_EXPRESSIONS_TYPEBINARYEXPRESSION_GET_TYPEOPERAND_OFFSET UNITYSDK_OFFSET(0x1F7C4F40)
#define SYSTEM_LINQ_EXPRESSIONS_TYPEBINARYEXPRESSION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1F7C4EF0)
#define SYSTEM_LINQ_EXPRESSIONS_TYPEBINARYEXPRESSION_REDUCECONSTANTTYPEEQUAL_OFFSET UNITYSDK_OFFSET(0x1F7C5660)
#define SYSTEM_LINQ_EXPRESSIONS_TYPEBINARYEXPRESSION_REDUCETYPEEQUAL_OFFSET UNITYSDK_OFFSET(0x1F7C4F50)
#define SYSTEM_LINQ_EXPRESSIONS_TYPEBINARYEXPRESSION_UPDATE_OFFSET UNITYSDK_OFFSET(0x1F7C5D50)
#define SYSTEM_LINQ_EXPRESSIONS_TYPEBINARYEXPRESSION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F7C5DE0)
#define SYSTEM_LINQ_EXPRESSIONS_TYPEBINARYEXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1F7C4E80)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int TypeBinaryExpression_TypeDefinitionIndex = 4546;

	class TypeBinaryExpression : public ::System::Linq::Expressions::Expression
	{
	public:
		::System::Type* _TypeOperand_k__BackingField; // 0x10
		::System::Linq::Expressions::Expression* _Expression_k__BackingField; // 0x18
		::System::Linq::Expressions::ExpressionType _NodeType_k__BackingField; // 0x20

		::System::Void _ctor(::System::Linq::Expressions::Expression* expression, ::System::Type* typeOperand, ::System::Linq::Expressions::ExpressionType nodeType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*, ::System::Type*, ::System::Linq::Expressions::ExpressionType))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_TYPEBINARYEXPRESSION__CTOR_OFFSET))(this, expression, typeOperand, nodeType);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_TYPEBINARYEXPRESSION__CTOR_1_OFFSET))(this);
		}

		::System::Type* get_Type()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_TYPEBINARYEXPRESSION_GET_TYPE_OFFSET))(this);
		}

		::System::Linq::Expressions::ExpressionType get_NodeType()
		{
			return ((::System::Linq::Expressions::ExpressionType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_TYPEBINARYEXPRESSION_GET_NODETYPE_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* get_Expression()
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_TYPEBINARYEXPRESSION_GET_EXPRESSION_OFFSET))(this);
		}

		::System::Type* get_TypeOperand()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_TYPEBINARYEXPRESSION_GET_TYPEOPERAND_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* ReduceTypeEqual()
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_TYPEBINARYEXPRESSION_REDUCETYPEEQUAL_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* ByValParameterTypeEqual(::System::Linq::Expressions::ParameterExpression* value)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::ParameterExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_TYPEBINARYEXPRESSION_BYVALPARAMETERTYPEEQUAL_OFFSET))(this, value);
		}

		::System::Linq::Expressions::Expression* ReduceConstantTypeEqual()
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_TYPEBINARYEXPRESSION_REDUCECONSTANTTYPEEQUAL_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* Accept(::System::Linq::Expressions::ExpressionVisitor* visitor)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::ExpressionVisitor*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_TYPEBINARYEXPRESSION_ACCEPT_OFFSET))(this, visitor);
		}

		::System::Linq::Expressions::TypeBinaryExpression* Update(::System::Linq::Expressions::Expression* expression)
		{
			return ((::System::Linq::Expressions::TypeBinaryExpression*(*)(::PVOID, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_TYPEBINARYEXPRESSION_UPDATE_OFFSET))(this, expression);
		}
	};
}
