#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/ParameterExpression.h"

namespace System { class String; }
namespace System { class Type; }

#define SYSTEM_LINQ_EXPRESSIONS_TYPEDPARAMETEREXPRESSION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1DF518D0)
#define SYSTEM_LINQ_EXPRESSIONS_TYPEDPARAMETEREXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF4DE80)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int TypedParameterExpression_TypeDefinitionIndex = 3269;

	class TypedParameterExpression : public ::System::Linq::Expressions::ParameterExpression
	{
	public:
		::System::Type* _Type_k__BackingField; // 0x18

		::System::Void _ctor(::System::Type* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_TYPEDPARAMETEREXPRESSION__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Type* get_Type()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_TYPEDPARAMETEREXPRESSION_GET_TYPE_OFFSET))(this);
		}
	};
}
