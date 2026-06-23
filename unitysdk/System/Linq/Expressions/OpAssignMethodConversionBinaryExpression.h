#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/ExpressionType.h"
#include "unitysdk/System/Linq/Expressions/MethodBinaryExpression.h"

namespace System { class Type; }
namespace System::Linq::Expressions { class Expression; }
namespace System::Linq::Expressions { class LambdaExpression; }
namespace System::Reflection { class MethodInfo; }

#define SYSTEM_LINQ_EXPRESSIONS_OPASSIGNMETHODCONVERSIONBINARYEXPRESSION_GETCONVERSION_OFFSET UNITYSDK_OFFSET(0x1E0806D0)
#define SYSTEM_LINQ_EXPRESSIONS_OPASSIGNMETHODCONVERSIONBINARYEXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E080640)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int OpAssignMethodConversionBinaryExpression_TypeDefinitionIndex = 4397;

	class OpAssignMethodConversionBinaryExpression : public ::System::Linq::Expressions::MethodBinaryExpression
	{
	public:
		::System::Linq::Expressions::LambdaExpression* _conversion; // 0x38

		::System::Void _ctor(::System::Linq::Expressions::ExpressionType nodeType, ::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right, ::System::Type* type, ::System::Reflection::MethodInfo* method, ::System::Linq::Expressions::LambdaExpression* conversion)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::ExpressionType, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Type*, ::System::Reflection::MethodInfo*, ::System::Linq::Expressions::LambdaExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_OPASSIGNMETHODCONVERSIONBINARYEXPRESSION__CTOR_OFFSET))(this, nodeType, left, right, type, method, conversion);
		}

		::System::Linq::Expressions::LambdaExpression* GetConversion()
		{
			return ((::System::Linq::Expressions::LambdaExpression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_OPASSIGNMETHODCONVERSIONBINARYEXPRESSION_GETCONVERSION_OFFSET))(this);
		}
	};
}
