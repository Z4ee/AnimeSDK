#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Configuration/ConfigurationElementCollection.h"

#define SYSTEM_NET_CONFIGURATION_CONNECTIONMANAGEMENTELEMENTCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0F2600)

namespace System::Net::Configuration
{
	inline static constexpr unsigned int ConnectionManagementElementCollection_TypeDefinitionIndex = 3064;

	class ConnectionManagementElementCollection : public ::System::Configuration::ConfigurationElementCollection
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_CONNECTIONMANAGEMENTELEMENTCOLLECTION__CTOR_OFFSET))(this);
		}
	};
}
