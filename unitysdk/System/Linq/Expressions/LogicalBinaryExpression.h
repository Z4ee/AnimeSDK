#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/BinaryExpression.h"
#include "unitysdk/System/Linq/Expressions/ExpressionType.h"

namespace System { class Type; }
namespace System::Linq::Expressions { class Expression; }

#define SYSTEM_LINQ_EXPRESSIONS_LOGICALBINARYEXPRESSION_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1E309F30)
#define SYSTEM_LINQ_EXPRESSIONS_LOGICALBINARYEXPRESSION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1E309F00)
#define SYSTEM_LINQ_EXPRESSIONS_LOGICALBINARYEXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E309E90)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int LogicalBinaryExpression_TypeDefinitionIndex = 4393;

	class LogicalBinaryExpression : public ::System::Linq::Expressions::BinaryExpression
	{
	public:
		::System::Linq::Expressions::ExpressionType _NodeType_k__BackingField; // 0x20

		::System::Void _ctor(::System::Linq::Expressions::ExpressionType nodeType, ::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::ExpressionType, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LOGICALBINARYEXPRESSION__CTOR_OFFSET))(this, nodeType, left, right);
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
