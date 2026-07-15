#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/BinaryExpression.h"
#include "unitysdk/System/Linq/Expressions/ExpressionType.h"

namespace System { class Type; }
namespace System::Linq::Expressions { class Expression; }

#define SYSTEM_LINQ_EXPRESSIONS_LOGICALBINARYEXPRESSION_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1C1C75A0)
#define SYSTEM_LINQ_EXPRESSIONS_LOGICALBINARYEXPRESSION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1C1C7570)
#define SYSTEM_LINQ_EXPRESSIONS_LOGICALBINARYEXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1C7500)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int LogicalBinaryExpression_TypeDefinitionIndex = 3176;

	class LogicalBinaryExpression : public ::System::Linq::Expressions::BinaryExpression
	{
	public:
		::System::Linq::Expressions::ExpressionType _NodeType_k__BackingField; // 0x20

		::System::Void _ctor(::System::Linq::Expressions::ExpressionType a1, ::System::Linq::Expressions::Expression* a2, ::System::Linq::Expressions::Expression* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::ExpressionType, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LOGICALBINARYEXPRESSION__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Type* get_Type()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LOGICALBINARYEXPRESSION_GET_TYPE_OFFSET))(this);
		}

		::System::Linq::Expressions::ExpressionType get_NodeType()
		{
			return ((::System::Linq::Expressions::ExpressionType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LOGICALBINARYEXPRESSION_GET_NODETYPE_OFFSET))(this);
		}
	};
}
