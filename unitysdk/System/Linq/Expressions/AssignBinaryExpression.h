#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/BinaryExpression.h"
#include "unitysdk/System/Linq/Expressions/ExpressionType.h"

namespace System { class Type; }
namespace System::Linq::Expressions { class Expression; }

#define SYSTEM_LINQ_EXPRESSIONS_ASSIGNBINARYEXPRESSION_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1AD3C2C0)
#define SYSTEM_LINQ_EXPRESSIONS_ASSIGNBINARYEXPRESSION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1AD3C280)
#define SYSTEM_LINQ_EXPRESSIONS_ASSIGNBINARYEXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD3C1A0)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int AssignBinaryExpression_TypeDefinitionIndex = 3173;

	class AssignBinaryExpression : public ::System::Linq::Expressions::BinaryExpression
	{
	public:
		::System::Void _ctor(::System::Linq::Expressions::Expression* a1, ::System::Linq::Expressions::Expression* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ASSIGNBINARYEXPRESSION__CTOR_OFFSET))(this, a1, a2);
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
