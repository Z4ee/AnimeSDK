#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/MemberExpression.h"

namespace System { class Type; }
namespace System::Linq::Expressions { class Expression; }
namespace System::Reflection { class MemberInfo; }
namespace System::Reflection { class PropertyInfo; }

#define SYSTEM_LINQ_EXPRESSIONS_PROPERTYEXPRESSION_GETMEMBER_OFFSET UNITYSDK_OFFSET(0x1ADB7460)
#define SYSTEM_LINQ_EXPRESSIONS_PROPERTYEXPRESSION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1ADB7470)
#define SYSTEM_LINQ_EXPRESSIONS_PROPERTYEXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADB4B30)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int PropertyExpression_TypeDefinitionIndex = 3233;

	class PropertyExpression : public ::System::Linq::Expressions::MemberExpression
	{
	public:
		::System::Reflection::PropertyInfo* _property; // 0x18

		::System::Void _ctor(::System::Linq::Expressions::Expression* a1, ::System::Reflection::PropertyInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*, ::System::Reflection::PropertyInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_PROPERTYEXPRESSION__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Reflection::MemberInfo* GetMember()
		{
			return ((::System::Reflection::MemberInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_PROPERTYEXPRESSION_GETMEMBER_OFFSET))(this);
		}

		::System::Type* get_Type()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_PROPERTYEXPRESSION_GET_TYPE_OFFSET))(this);
		}
	};
}
