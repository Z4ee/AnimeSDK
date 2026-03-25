#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/BinaryExpression.h"
#include "unitysdk/System/Linq/Expressions/ExpressionType.h"

namespace System { class Type; }
namespace System::Linq::Expressions { class Expression; }

#define SYSTEM_LINQ_EXPRESSIONS_ASSIGNBINARYEXPRESSION_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1848A660)
#define SYSTEM_LINQ_EXPRESSIONS_ASSIGNBINARYEXPRESSION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1848A620)
#define SYSTEM_LINQ_EXPRESSIONS_ASSIGNBINARYEXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1848A540)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int AssignBinaryExpression_TypeDefinitionIndex = 3170;

	class AssignBinaryExpression : public ::System::Linq::Expressions::BinaryExpression
	{
	public:
		::System::Void _ctor(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ASSIGNBINARYEXPRESSION__CTOR_OFFSET))(this, left, right);
		}

		::System::Type* get_Type()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ASSIGNBINARYEXPRESSION_GET_TYPE_OFFSET))(this);
		}

		::System::Linq::Expressions::ExpressionType get_NodeType()
		{
			return ((::System::Linq::Expressions::ExpressionType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ASSIGNBINARYEXPRESSION_GET_NODETYPE_OFFSET))(this);
		}
	};
}
