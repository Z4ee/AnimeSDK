#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/ConstantExpression.h"

namespace System { class Object; }
namespace System { class Type; }

#define SYSTEM_LINQ_EXPRESSIONS_TYPEDCONSTANTEXPRESSION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1C1CE550)
#define SYSTEM_LINQ_EXPRESSIONS_TYPEDCONSTANTEXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1CE4E0)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int TypedConstantExpression_TypeDefinitionIndex = 3204;

	class TypedConstantExpression : public ::System::Linq::Expressions::ConstantExpression
	{
	public:
		::System::Type* _Type_k__BackingField; // 0x18

		::System::Void _ctor(::System::Object* a1, ::System::Type* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_TYPEDCONSTANTEXPRESSION__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Type* get_Type()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_TYPEDCONSTANTEXPRESSION_GET_TYPE_OFFSET))(this);
		}
	};
}
