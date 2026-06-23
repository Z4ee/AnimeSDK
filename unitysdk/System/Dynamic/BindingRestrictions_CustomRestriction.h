#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Dynamic/BindingRestrictions.h"

namespace System { class Object; }
namespace System::Linq::Expressions { class Expression; }

#define SYSTEM_DYNAMIC_BINDINGRESTRICTIONS_CUSTOMRESTRICTION_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DADC8F0)
#define SYSTEM_DYNAMIC_BINDINGRESTRICTIONS_CUSTOMRESTRICTION_GETEXPRESSION_OFFSET UNITYSDK_OFFSET(0x1DADC980)
#define SYSTEM_DYNAMIC_BINDINGRESTRICTIONS_CUSTOMRESTRICTION_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DADC950)
#define SYSTEM_DYNAMIC_BINDINGRESTRICTIONS_CUSTOMRESTRICTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1DADC890)

namespace System::Dynamic
{
	inline static constexpr unsigned int BindingRestrictions_CustomRestriction_TypeDefinitionIndex = 4970;

	class BindingRestrictions_CustomRestriction : public ::System::Dynamic::BindingRestrictions
	{
	public:
		::System::Linq::Expressions::Expression* _expression; // 0x10

		::System::Void _ctor(::System::Linq::Expressions::Expression* expression)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_BINDINGRESTRICTIONS_CUSTOMRESTRICTION__CTOR_OFFSET))(this, expression);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_BINDINGRESTRICTIONS_CUSTOMRESTRICTION_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_BINDINGRESTRICTIONS_CUSTOMRESTRICTION_GETHASHCODE_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* GetExpression()
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_BINDINGRESTRICTIONS_CUSTOMRESTRICTION_GETEXPRESSION_OFFSET))(this);
		}
	};
}
