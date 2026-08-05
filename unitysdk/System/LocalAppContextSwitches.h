#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_LOCALAPPCONTEXTSWITCHES__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C87EF50)

namespace System
{
	inline static constexpr unsigned int LocalAppContextSwitches_TypeDefinitionIndex = 2696;

	class LocalAppContextSwitches : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_MemberDescriptorEqualsReturnsFalseIfEquivalent()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(LocalAppContextSwitches_TypeDefinitionIndex)->GetStaticField(0x1400);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_LOCALAPPCONTEXTSWITCHES__CCTOR_OFFSET))();
		}
	};
}
