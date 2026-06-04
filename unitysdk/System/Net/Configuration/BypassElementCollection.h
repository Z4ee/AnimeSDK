#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Configuration/ConfigurationElementCollection.h"

#define SYSTEM_NET_CONFIGURATION_BYPASSELEMENTCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF587F0)

namespace System::Net::Configuration
{
	inline static constexpr unsigned int BypassElementCollection_TypeDefinitionIndex = 3062;

	class BypassElementCollection : public ::System::Configuration::ConfigurationElementCollection
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_BYPASSELEMENTCOLLECTION__CTOR_OFFSET))(this);
		}
	};
}
