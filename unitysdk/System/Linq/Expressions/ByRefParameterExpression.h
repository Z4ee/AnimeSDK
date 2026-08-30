#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/TypedParameterExpression.h"

namespace System { class String; }
namespace System { class Type; }

#define SYSTEM_LINQ_EXPRESSIONS_BYREFPARAMETEREXPRESSION_GETISBYREF_OFFSET UNITYSDK_OFFSET(0x1E6DA5E0)
#define SYSTEM_LINQ_EXPRESSIONS_BYREFPARAMETEREXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E6DA570)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int ByRefParameterExpression_TypeDefinitionIndex = 3268;

	class ByRefParameterExpression : public ::System::Linq::Expressions::TypedParameterExpression
	{
	public:
		::System::Void _ctor(::System::Type* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BYREFPARAMETEREXPRESSION__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean GetIsByRef()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BYREFPARAMETEREXPRESSION_GETISBYREF_OFFSET))(this);
		}
	};
}
