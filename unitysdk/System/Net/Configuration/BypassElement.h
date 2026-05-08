#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Configuration/ConfigurationElement.h"

namespace System { class String; }
namespace System::Configuration { class ConfigurationPropertyCollection; }

#define SYSTEM_NET_CONFIGURATION_BYPASSELEMENT_GET_ADDRESS_OFFSET UNITYSDK_OFFSET(0x1AFE13F0)
#define SYSTEM_NET_CONFIGURATION_BYPASSELEMENT_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x1AFE1470)
#define SYSTEM_NET_CONFIGURATION_BYPASSELEMENT_SET_ADDRESS_OFFSET UNITYSDK_OFFSET(0x1AFE1430)
#define SYSTEM_NET_CONFIGURATION_BYPASSELEMENT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AFE13B0)
#define SYSTEM_NET_CONFIGURATION_BYPASSELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFE1370)

namespace System::Net::Configuration
{
	inline static constexpr unsigned int BypassElement_TypeDefinitionIndex = 4118;

	class BypassElement : public ::System::Configuration::ConfigurationElement
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_BYPASSELEMENT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* address)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_BYPASSELEMENT__CTOR_1_OFFSET))(this, address);
		}

		::System::String* get_Address()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_BYPASSELEMENT_GET_ADDRESS_OFFSET))(this);
		}

		::System::Void set_Address(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_BYPASSELEMENT_SET_ADDRESS_OFFSET))(this, value);
		}

		::System::Configuration::ConfigurationPropertyCollection* get_Properties()
		{
			return ((::System::Configuration::ConfigurationPropertyCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_BYPASSELEMENT_GET_PROPERTIES_OFFSET))(this);
		}
	};
}
