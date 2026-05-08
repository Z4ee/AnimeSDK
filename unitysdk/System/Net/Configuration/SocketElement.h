#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Configuration/ConfigurationElement.h"
#include "unitysdk/System/Net/Sockets/IPProtectionLevel.h"

namespace System::Configuration { class ConfigurationPropertyCollection; }

#define SYSTEM_NET_CONFIGURATION_SOCKETELEMENT_GET_ALWAYSUSECOMPLETIONPORTSFORACCEPT_OFFSET UNITYSDK_OFFSET(0x1A100080)
#define SYSTEM_NET_CONFIGURATION_SOCKETELEMENT_GET_ALWAYSUSECOMPLETIONPORTSFORCONNECT_OFFSET UNITYSDK_OFFSET(0x1A100100)
#define SYSTEM_NET_CONFIGURATION_SOCKETELEMENT_GET_IPPROTECTIONLEVEL_OFFSET UNITYSDK_OFFSET(0x1A100180)
#define SYSTEM_NET_CONFIGURATION_SOCKETELEMENT_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x1A100200)
#define SYSTEM_NET_CONFIGURATION_SOCKETELEMENT_POSTDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1A100240)
#define SYSTEM_NET_CONFIGURATION_SOCKETELEMENT_SET_ALWAYSUSECOMPLETIONPORTSFORACCEPT_OFFSET UNITYSDK_OFFSET(0x1A1000C0)
#define SYSTEM_NET_CONFIGURATION_SOCKETELEMENT_SET_ALWAYSUSECOMPLETIONPORTSFORCONNECT_OFFSET UNITYSDK_OFFSET(0x1A100140)
#define SYSTEM_NET_CONFIGURATION_SOCKETELEMENT_SET_IPPROTECTIONLEVEL_OFFSET UNITYSDK_OFFSET(0x1A1001C0)
#define SYSTEM_NET_CONFIGURATION_SOCKETELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A100040)

namespace System::Net::Configuration
{
	inline static constexpr unsigned int SocketElement_TypeDefinitionIndex = 4144;

	class SocketElement : public ::System::Configuration::ConfigurationElement
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SOCKETELEMENT__CTOR_OFFSET))(this);
		}

		::System::Boolean get_AlwaysUseCompletionPortsForAccept()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SOCKETELEMENT_GET_ALWAYSUSECOMPLETIONPORTSFORACCEPT_OFFSET))(this);
		}

		::System::Void set_AlwaysUseCompletionPortsForAccept(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SOCKETELEMENT_SET_ALWAYSUSECOMPLETIONPORTSFORACCEPT_OFFSET))(this, value);
		}

		::System::Boolean get_AlwaysUseCompletionPortsForConnect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SOCKETELEMENT_GET_ALWAYSUSECOMPLETIONPORTSFORCONNECT_OFFSET))(this);
		}

		::System::Void set_AlwaysUseCompletionPortsForConnect(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SOCKETELEMENT_SET_ALWAYSUSECOMPLETIONPORTSFORCONNECT_OFFSET))(this, value);
		}

		::System::Net::Sockets::IPProtectionLevel get_IPProtectionLevel()
		{
			return ((::System::Net::Sockets::IPProtectionLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SOCKETELEMENT_GET_IPPROTECTIONLEVEL_OFFSET))(this);
		}

		::System::Void set_IPProtectionLevel(::System::Net::Sockets::IPProtectionLevel value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Sockets::IPProtectionLevel))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SOCKETELEMENT_SET_IPPROTECTIONLEVEL_OFFSET))(this, value);
		}

		::System::Configuration::ConfigurationPropertyCollection* get_Properties()
		{
			return ((::System::Configuration::ConfigurationPropertyCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SOCKETELEMENT_GET_PROPERTIES_OFFSET))(this);
		}

		::System::Void PostDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SOCKETELEMENT_POSTDESERIALIZE_OFFSET))(this);
		}
	};
}
