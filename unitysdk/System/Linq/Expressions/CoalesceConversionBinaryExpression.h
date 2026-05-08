#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/BinaryExpression.h"
#include "unitysdk/System/Linq/Expressions/ExpressionType.h"

namespace System { class Type; }
namespace System::Linq::Expressions { class Expression; }
namespace System::Linq::Expressions { class LambdaExpression; }

#define SYSTEM_LINQ_EXPRESSIONS_COALESCECONVERSIONBINARYEXPRESSION_GETCONVERSION_OFFSET UNITYSDK_OFFSET(0x1BF376A0)
#define SYSTEM_LINQ_EXPRESSIONS_COALESCECONVERSIONBINARYEXPRESSION_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1BF376B0)
#define SYSTEM_LINQ_EXPRESSIONS_COALESCECONVERSIONBINARYEXPRESSION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1BF376C0)
#define SYSTEM_LINQ_EXPRESSIONS_COALESCECONVERSIONBINARYEXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF37630)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int CoalesceConversionBinaryExpression_TypeDefinitionIndex = 4397;

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
