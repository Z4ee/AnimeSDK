#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Expression.h"
#include "unitysdk/System/Linq/Expressions/ExpressionType.h"

namespace System { class Object; }
namespace System { class Type; }
namespace System::Linq::Expressions { class ExpressionVisitor; }

#define SYSTEM_LINQ_EXPRESSIONS_CONSTANTEXPRESSION_ACCEPT_OFFSET UNITYSDK_OFFSET(0x1DAE2010)
#define SYSTEM_LINQ_EXPRESSIONS_CONSTANTEXPRESSION_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1DAE1FF0)
#define SYSTEM_LINQ_EXPRESSIONS_CONSTANTEXPRESSION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1DAE1FA0)
#define SYSTEM_LINQ_EXPRESSIONS_CONSTANTEXPRESSION_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1DAE2000)
#define SYSTEM_LINQ_EXPRESSIONS_CONSTANTEXPRESSION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DAE2040)
#define SYSTEM_LINQ_EXPRESSIONS_CONSTANTEXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1DAE1F40)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int ConstantExpression_TypeDefinitionIndex = 4449;

	class ConstantExpression : public ::System::Linq::Expressions::Expression
	{
	public:
		::System::Object* _Value_k__BackingField; // 0x10

		::System::Void _ctor(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CONSTANTEXPRESSION__CTOR_OFFSET))(this, value);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CONSTANTEXPRESSION__CTOR_1_OFFSET))(this);
		}

		::System::Type* get_Type()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CONSTANTEXPRESSION_GET_TYPE_OFFSET))(this);
		}

		::System::Linq::Expressions::ExpressionType get_NodeType()
		{
			return ((::System::Linq::Expressions::ExpressionType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CONSTANTEXPRESSION_GET_NODETYPE_OFFSET))(this);
		}

		::System::Object* get_Value()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CONSTANTEXPRESSION_GET_VALUE_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* Accept(::System::Linq::Expressions::ExpressionVisitor* visitor)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::ExpressionVisitor*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CONSTANTEXPRESSION_ACCEPT_OFFSET))(this, visitor);
		}
	};
}
