#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Configuration/ConfigurationElement.h"

namespace System { class String; }
namespace System::Configuration { class ConfigurationPropertyCollection; }

#define SYSTEM_NET_CONFIGURATION_MODULEELEMENT_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x1C493630)
#define SYSTEM_NET_CONFIGURATION_MODULEELEMENT_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1C493670)
#define SYSTEM_NET_CONFIGURATION_MODULEELEMENT_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x1C4936B0)
#define SYSTEM_NET_CONFIGURATION_MODULEELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4935F0)

namespace System::Net::Configuration
{
	inline static constexpr unsigned int ModuleElement_TypeDefinitionIndex = 4123;

	class ModuleElement : public ::System::Configuration::ConfigurationElement
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_MODULEELEMENT__CTOR_OFFSET))(this);
		}

		::System::Configuration::ConfigurationPropertyCollection* get_Properties()
		{
			return ((::System::Configuration::ConfigurationPropertyCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_MODULEELEMENT_GET_PROPERTIES_OFFSET))(this);
		}

		::System::String* get_Type()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_MODULEELEMENT_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_MODULEELEMENT_SET_TYPE_OFFSET))(this, value);
		}
	};
}
