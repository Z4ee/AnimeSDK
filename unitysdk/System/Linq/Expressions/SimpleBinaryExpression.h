#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/BinaryExpression.h"
#include "unitysdk/System/Linq/Expressions/ExpressionType.h"

namespace System { class Type; }
namespace System::Linq::Expressions { class Expression; }

#define SYSTEM_LINQ_EXPRESSIONS_SIMPLEBINARYEXPRESSION_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1C1CB7B0)
#define SYSTEM_LINQ_EXPRESSIONS_SIMPLEBINARYEXPRESSION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1C1CB7C0)
#define SYSTEM_LINQ_EXPRESSIONS_SIMPLEBINARYEXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1C7B20)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int SimpleBinaryExpression_TypeDefinitionIndex = 3180;

	class SimpleBinaryExpression : public ::System::Linq::Expressions::BinaryExpression
	{
	public:
		::System::Type* _Type_k__BackingField; // 0x20
		::System::Linq::Expressions::ExpressionType _NodeType_k__BackingField; // 0x28

		::System::Void _ctor(::System::Linq::Expressions::ExpressionType a1, ::System::Linq::Expressions::Expression* a2, ::System::Linq::Expressions::Expression* a3, ::System::Type* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::ExpressionType, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_SIMPLEBINARYEXPRESSION__CTOR_OFFSET))(this, a1, a2, a3, a4);
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
