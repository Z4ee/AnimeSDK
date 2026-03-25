#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/BinaryExpression.h"
#include "unitysdk/System/Linq/Expressions/ExpressionType.h"

namespace System { class Type; }
namespace System::Linq::Expressions { class Expression; }

#define SYSTEM_LINQ_EXPRESSIONS_SIMPLEBINARYEXPRESSION_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x18505A00)
#define SYSTEM_LINQ_EXPRESSIONS_SIMPLEBINARYEXPRESSION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x18505A10)
#define SYSTEM_LINQ_EXPRESSIONS_SIMPLEBINARYEXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x185029D0)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int SimpleBinaryExpression_TypeDefinitionIndex = 3173;

	class SimpleBinaryExpression : public ::System::Linq::Expressions::BinaryExpression
	{
	public:
		::System::Type* _Type_k__BackingField; // 0x20
		::System::Linq::Expressions::ExpressionType _NodeType_k__BackingField; // 0x28

		::System::Void _ctor(::System::Linq::Expressions::ExpressionType nodeType, ::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right, ::System::Type* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::ExpressionType, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_SIMPLEBINARYEXPRESSION__CTOR_OFFSET))(this, nodeType, left, right, type);
		}

		::System::Linq::Expressions::ExpressionType get_NodeType()
		{
			return ((::System::Linq::Expressions::ExpressionType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_SIMPLEBINARYEXPRESSION_GET_NODETYPE_OFFSET))(this);
		}

		::System::Type* get_Type()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_SIMPLEBINARYEXPRESSION_GET_TYPE_OFFSET))(this);
		}
	};
}
