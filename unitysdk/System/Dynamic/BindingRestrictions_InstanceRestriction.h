#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Dynamic/BindingRestrictions.h"

namespace System { class Object; }
namespace System::Linq::Expressions { class Expression; }

#define SYSTEM_DYNAMIC_BINDINGRESTRICTIONS_INSTANCERESTRICTION_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E06CC70)
#define SYSTEM_DYNAMIC_BINDINGRESTRICTIONS_INSTANCERESTRICTION_GETEXPRESSION_OFFSET UNITYSDK_OFFSET(0x1E06CD20)
#define SYSTEM_DYNAMIC_BINDINGRESTRICTIONS_INSTANCERESTRICTION_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E06CCE0)
#define SYSTEM_DYNAMIC_BINDINGRESTRICTIONS_INSTANCERESTRICTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E06CC00)

namespace System::Dynamic
{
	inline static constexpr unsigned int BindingRestrictions_InstanceRestriction_TypeDefinitionIndex = 4972;

	class BindingRestrictions_InstanceRestriction : public ::System::Dynamic::BindingRestrictions
	{
	public:
		::System::Object* _instance; // 0x10
		::System::Linq::Expressions::Expression* _expression; // 0x18

		::System::Void _ctor(::System::Linq::Expressions::Expression* parameter, ::System::Object* instance)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_BINDINGRESTRICTIONS_INSTANCERESTRICTION__CTOR_OFFSET))(this, parameter, instance);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_BINDINGRESTRICTIONS_INSTANCERESTRICTION_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_BINDINGRESTRICTIONS_INSTANCERESTRICTION_GETHASHCODE_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* GetExpression()
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_BINDINGRESTRICTIONS_INSTANCERESTRICTION_GETEXPRESSION_OFFSET))(this);
		}
	};
}
