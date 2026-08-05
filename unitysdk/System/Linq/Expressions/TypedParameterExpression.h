#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/ParameterExpression.h"

namespace System { class String; }
namespace System { class Type; }

#define SYSTEM_LINQ_EXPRESSIONS_TYPEDPARAMETEREXPRESSION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1DC47FA0)
#define SYSTEM_LINQ_EXPRESSIONS_TYPEDPARAMETEREXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1DC47F30)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int TypedParameterExpression_TypeDefinitionIndex = 4532;

	class TypedParameterExpression : public ::System::Linq::Expressions::ParameterExpression
	{
	public:
		::System::Type* _Type_k__BackingField; // 0x18

		::System::Void _ctor(::System::Type* type, ::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_TYPEDPARAMETEREXPRESSION__CTOR_OFFSET))(this, type, name);
		}

		::System::Type* get_Type()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_TYPEDPARAMETEREXPRESSION_GET_TYPE_OFFSET))(this);
		}
	};
}
