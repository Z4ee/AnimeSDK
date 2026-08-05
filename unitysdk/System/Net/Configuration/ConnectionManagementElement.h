#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Configuration/ConfigurationElement.h"

namespace System { class String; }
namespace System::Configuration { class ConfigurationPropertyCollection; }

#define SYSTEM_NET_CONFIGURATION_CONNECTIONMANAGEMENTELEMENT_GET_ADDRESS_OFFSET UNITYSDK_OFFSET(0x1C87F030)
#define SYSTEM_NET_CONFIGURATION_CONNECTIONMANAGEMENTELEMENT_GET_MAXCONNECTION_OFFSET UNITYSDK_OFFSET(0x1C87F0B0)
#define SYSTEM_NET_CONFIGURATION_CONNECTIONMANAGEMENTELEMENT_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x1C87F130)
#define SYSTEM_NET_CONFIGURATION_CONNECTIONMANAGEMENTELEMENT_SET_ADDRESS_OFFSET UNITYSDK_OFFSET(0x1C87F070)
#define SYSTEM_NET_CONFIGURATION_CONNECTIONMANAGEMENTELEMENT_SET_MAXCONNECTION_OFFSET UNITYSDK_OFFSET(0x1C87F0F0)
#define SYSTEM_NET_CONFIGURATION_CONNECTIONMANAGEMENTELEMENT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C87EFF0)
#define SYSTEM_NET_CONFIGURATION_CONNECTIONMANAGEMENTELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C87EFB0)

namespace System::Net::Configuration
{
	inline static constexpr unsigned int ConnectionManagementElement_TypeDefinitionIndex = 4119;

	class ConnectionManagementElement : public ::System::Configuration::ConfigurationElement
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_CONNECTIONMANAGEMENTELEMENT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* address, ::System::Int32 maxConnection)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_CONNECTIONMANAGEMENTELEMENT__CTOR_1_OFFSET))(this, address, maxConnection);
		}

		::System::String* get_Address()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_CONNECTIONMANAGEMENTELEMENT_GET_ADDRESS_OFFSET))(this);
		}

		::System::Void set_Address(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_CONNECTIONMANAGEMENTELEMENT_SET_ADDRESS_OFFSET))(this, value);
		}

		::System::Int32 get_MaxConnection()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_CONNECTIONMANAGEMENTELEMENT_GET_MAXCONNECTION_OFFSET))(this);
		}

		::System::Void set_MaxConnection(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_CONNECTIONMANAGEMENTELEMENT_SET_MAXCONNECTION_OFFSET))(this, value);
		}

		::System::Configuration::ConfigurationPropertyCollection* get_Properties()
		{
			return ((::System::Configuration::ConfigurationPropertyCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_CONNECTIONMANAGEMENTELEMENT_GET_PROPERTIES_OFFSET))(this);
		}
	};
}
