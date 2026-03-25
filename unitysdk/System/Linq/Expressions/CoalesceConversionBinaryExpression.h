#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/BinaryExpression.h"
#include "unitysdk/System/Linq/Expressions/ExpressionType.h"

namespace System { class Type; }
namespace System::Linq::Expressions { class Expression; }
namespace System::Linq::Expressions { class LambdaExpression; }

#define SYSTEM_LINQ_EXPRESSIONS_COALESCECONVERSIONBINARYEXPRESSION_GETCONVERSION_OFFSET UNITYSDK_OFFSET(0x18491410)
#define SYSTEM_LINQ_EXPRESSIONS_COALESCECONVERSIONBINARYEXPRESSION_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x18491420)
#define SYSTEM_LINQ_EXPRESSIONS_COALESCECONVERSIONBINARYEXPRESSION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x18491430)
#define SYSTEM_LINQ_EXPRESSIONS_COALESCECONVERSIONBINARYEXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x184913A0)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int CoalesceConversionBinaryExpression_TypeDefinitionIndex = 3171;

	class CoalesceConversionBinaryExpression : public ::System::Linq::Expressions::BinaryExpression
	{
	public:
		::System::Linq::Expressions::LambdaExpression* _conversion; // 0x20

		::System::Void _ctor(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right, ::System::Linq::Expressions::LambdaExpression* conversion)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::LambdaExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_COALESCECONVERSIONBINARYEXPRESSION__CTOR_OFFSET))(this, left, right, conversion);
		}

		::System::Linq::Expressions::LambdaExpression* GetConversion()
		{
			return ((::System::Linq::Expressions::LambdaExpression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_COALESCECONVERSIONBINARYEXPRESSION_GETCONVERSION_OFFSET))(this);
		}

		::System::Linq::Expressions::ExpressionType get_NodeType()
		{
			return ((::System::Linq::Expressions::ExpressionType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_COALESCECONVERSIONBINARYEXPRESSION_GET_NODETYPE_OFFSET))(this);
		}

		::System::Type* get_Type()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_COALESCECONVERSIONBINARYEXPRESSION_GET_TYPE_OFFSET))(this);
		}
	};
}
