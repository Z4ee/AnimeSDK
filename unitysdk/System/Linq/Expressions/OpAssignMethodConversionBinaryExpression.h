#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/ExpressionType.h"
#include "unitysdk/System/Linq/Expressions/MethodBinaryExpression.h"

namespace System { class Type; }
namespace System::Linq::Expressions { class Expression; }
namespace System::Linq::Expressions { class LambdaExpression; }
namespace System::Reflection { class MethodInfo; }

#define SYSTEM_LINQ_EXPRESSIONS_OPASSIGNMETHODCONVERSIONBINARYEXPRESSION_GETCONVERSION_OFFSET UNITYSDK_OFFSET(0x1DF4D9B0)
#define SYSTEM_LINQ_EXPRESSIONS_OPASSIGNMETHODCONVERSIONBINARYEXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF4D920)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int OpAssignMethodConversionBinaryExpression_TypeDefinitionIndex = 3187;

	class OpAssignMethodConversionBinaryExpression : public ::System::Linq::Expressions::MethodBinaryExpression
	{
	public:
		::System::Linq::Expressions::LambdaExpression* _conversion; // 0x38

		::System::Void _ctor(::System::Linq::Expressions::ExpressionType a1, ::System::Linq::Expressions::Expression* a2, ::System::Linq::Expressions::Expression* a3, ::System::Type* a4, ::System::Reflection::MethodInfo* a5, ::System::Linq::Expressions::LambdaExpression* a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::ExpressionType, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Type*, ::System::Reflection::MethodInfo*, ::System::Linq::Expressions::LambdaExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_OPASSIGNMETHODCONVERSIONBINARYEXPRESSION__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Linq::Expressions::LambdaExpression* GetConversion()
		{
			return ((::System::Linq::Expressions::LambdaExpression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_OPASSIGNMETHODCONVERSIONBINARYEXPRESSION_GETCONVERSION_OFFSET))(this);
		}
	};
}
