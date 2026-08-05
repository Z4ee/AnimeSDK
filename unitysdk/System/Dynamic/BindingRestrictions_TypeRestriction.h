#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Dynamic/BindingRestrictions.h"

namespace System { class Object; }
namespace System { class Type; }
namespace System::Linq::Expressions { class Expression; }

#define SYSTEM_DYNAMIC_BINDINGRESTRICTIONS_TYPERESTRICTION_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E588BD0)
#define SYSTEM_DYNAMIC_BINDINGRESTRICTIONS_TYPERESTRICTION_GETEXPRESSION_OFFSET UNITYSDK_OFFSET(0x1E588CB0)
#define SYSTEM_DYNAMIC_BINDINGRESTRICTIONS_TYPERESTRICTION_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E588C60)
#define SYSTEM_DYNAMIC_BINDINGRESTRICTIONS_TYPERESTRICTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E588B60)

namespace System::Dynamic
{
	inline static constexpr unsigned int BindingRestrictions_TypeRestriction_TypeDefinitionIndex = 4971;

	class BindingRestrictions_TypeRestriction : public ::System::Dynamic::BindingRestrictions
	{
	public:
		::System::Type* _type; // 0x10
		::System::Linq::Expressions::Expression* _expression; // 0x18

		::System::Void _ctor(::System::Linq::Expressions::Expression* parameter, ::System::Type* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_BINDINGRESTRICTIONS_TYPERESTRICTION__CTOR_OFFSET))(this, parameter, type);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_BINDINGRESTRICTIONS_TYPERESTRICTION_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_BINDINGRESTRICTIONS_TYPERESTRICTION_GETHASHCODE_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* GetExpression()
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_BINDINGRESTRICTIONS_TYPERESTRICTION_GETEXPRESSION_OFFSET))(this);
		}
	};
}
