#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Configuration/ConfigurationElement.h"

namespace System { class String; }
namespace System::Configuration { class ConfigurationPropertyCollection; }

#define SYSTEM_NET_CONFIGURATION_AUTHENTICATIONMODULEELEMENT_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x1A7E3AA0)
#define SYSTEM_NET_CONFIGURATION_AUTHENTICATIONMODULEELEMENT_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1A7E3AE0)
#define SYSTEM_NET_CONFIGURATION_AUTHENTICATIONMODULEELEMENT_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x1A7E3B20)
#define SYSTEM_NET_CONFIGURATION_AUTHENTICATIONMODULEELEMENT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A7E3A60)
#define SYSTEM_NET_CONFIGURATION_AUTHENTICATIONMODULEELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7E3A20)

namespace System::Net::Configuration
{
	inline static constexpr unsigned int AuthenticationModuleElement_TypeDefinitionIndex = 4115;

	class AuthenticationModuleElement : public ::System::Configuration::ConfigurationElement
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_AUTHENTICATIONMODULEELEMENT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* typeName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_AUTHENTICATIONMODULEELEMENT__CTOR_1_OFFSET))(this, typeName);
		}

		::System::Configuration::ConfigurationPropertyCollection* get_Properties()
		{
			return ((::System::Configuration::ConfigurationPropertyCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_AUTHENTICATIONMODULEELEMENT_GET_PROPERTIES_OFFSET))(this);
		}

		::System::String* get_Type()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_AUTHENTICATIONMODULEELEMENT_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_AUTHENTICATIONMODULEELEMENT_SET_TYPE_OFFSET))(this, value);
		}
	};
}
