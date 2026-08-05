#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Configuration/ConfigurationElement.h"

namespace System { class String; }
namespace System::Configuration { class ConfigurationPropertyCollection; }

#define SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_CONFIGURATION_SERVICENAMEELEMENT_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1D89C1B0)
#define SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_CONFIGURATION_SERVICENAMEELEMENT_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x1D89C230)
#define SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_CONFIGURATION_SERVICENAMEELEMENT_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1D89C1F0)
#define SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_CONFIGURATION_SERVICENAMEELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D89C170)

namespace System::Security::Authentication::ExtendedProtection::Configuration
{
	inline static constexpr unsigned int ServiceNameElement_TypeDefinitionIndex = 4088;

	class ServiceNameElement : public ::System::Configuration::ConfigurationElement
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_CONFIGURATION_SERVICENAMEELEMENT__CTOR_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_CONFIGURATION_SERVICENAMEELEMENT_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_CONFIGURATION_SERVICENAMEELEMENT_SET_NAME_OFFSET))(this, value);
		}

		::System::Configuration::ConfigurationPropertyCollection* get_Properties()
		{
			return ((::System::Configuration::ConfigurationPropertyCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_CONFIGURATION_SERVICENAMEELEMENT_GET_PROPERTIES_OFFSET))(this);
		}
	};
}
