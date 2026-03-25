#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Configuration/ConfigurationSectionGroup.h"

#define SYSTEM_NET_CONFIGURATION_NETSECTIONGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x186B82B0)

namespace System::Net::Configuration
{
	inline static constexpr unsigned int NetSectionGroup_TypeDefinitionIndex = 3069;

	class NetSectionGroup : public ::System::Configuration::ConfigurationSectionGroup
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_NETSECTIONGROUP__CTOR_OFFSET))(this);
		}
	};
}
