#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/MemberExpression.h"

namespace System { class Type; }
namespace System::Linq::Expressions { class Expression; }
namespace System::Reflection { class FieldInfo; }
namespace System::Reflection { class MemberInfo; }

#define SYSTEM_LINQ_EXPRESSIONS_FIELDEXPRESSION_GETMEMBER_OFFSET UNITYSDK_OFFSET(0x19EF15E0)
#define SYSTEM_LINQ_EXPRESSIONS_FIELDEXPRESSION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x19EF15F0)
#define SYSTEM_LINQ_EXPRESSIONS_FIELDEXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x19EF1570)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int FieldExpression_TypeDefinitionIndex = 3231;

	class FieldExpression : public ::System::Linq::Expressions::MemberExpression
	{
	public:
		::System::Reflection::FieldInfo* _field; // 0x18

		::System::Void _ctor(::System::Linq::Expressions::Expression* expression, ::System::Reflection::FieldInfo* member)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*, ::System::Reflection::FieldInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_FIELDEXPRESSION__CTOR_OFFSET))(this, expression, member);
		}

		::System::Reflection::MemberInfo* GetMember()
		{
			return ((::System::Reflection::MemberInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_FIELDEXPRESSION_GETMEMBER_OFFSET))(this);
		}

		::System::Type* get_Type()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_FIELDEXPRESSION_GET_TYPE_OFFSET))(this);
		}
	};
}
