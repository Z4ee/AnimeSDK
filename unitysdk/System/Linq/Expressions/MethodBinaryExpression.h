#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/ExpressionType.h"
#include "unitysdk/System/Linq/Expressions/SimpleBinaryExpression.h"

namespace System { class Type; }
namespace System::Linq::Expressions { class Expression; }
namespace System::Reflection { class MethodInfo; }

#define SYSTEM_LINQ_EXPRESSIONS_METHODBINARYEXPRESSION_GETMETHOD_OFFSET UNITYSDK_OFFSET(0x1DF4AF40)
#define SYSTEM_LINQ_EXPRESSIONS_METHODBINARYEXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF4AE40)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int MethodBinaryExpression_TypeDefinitionIndex = 3189;

	class MethodBinaryExpression : public ::System::Linq::Expressions::SimpleBinaryExpression
	{
	public:
		::System::Reflection::MethodInfo* _method; // 0x30

		::System::Void _ctor(::System::Linq::Expressions::ExpressionType a1, ::System::Linq::Expressions::Expression* a2, ::System::Linq::Expressions::Expression* a3, ::System::Type* a4, ::System::Reflection::MethodInfo* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::ExpressionType, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Type*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_METHODBINARYEXPRESSION__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Reflection::MethodInfo* GetMethod()
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_METHODBINARYEXPRESSION_GETMETHOD_OFFSET))(this);
		}
	};
}
