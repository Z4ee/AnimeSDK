#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Configuration/ConfigurationElement.h"
#include "unitysdk/System/GenericUriParserOptions.h"

namespace System { class String; }
namespace System::Configuration { class ConfigurationPropertyCollection; }

#define SYSTEM_CONFIGURATION_SCHEMESETTINGELEMENT_GET_GENERICURIPARSEROPTIONS_OFFSET UNITYSDK_OFFSET(0x1A7DD6D0)
#define SYSTEM_CONFIGURATION_SCHEMESETTINGELEMENT_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1A7DD710)
#define SYSTEM_CONFIGURATION_SCHEMESETTINGELEMENT_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x1A7DD750)
#define SYSTEM_CONFIGURATION_SCHEMESETTINGELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7DD690)

namespace System::Configuration
{
	inline static constexpr unsigned int SchemeSettingElement_TypeDefinitionIndex = 4219;

	class SchemeSettingElement : public ::System::Configuration::ConfigurationElement
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SCHEMESETTINGELEMENT__CTOR_OFFSET))(this);
		}

		::System::GenericUriParserOptions get_GenericUriParserOptions()
		{
			return ((::System::GenericUriParserOptions(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SCHEMESETTINGELEMENT_GET_GENERICURIPARSEROPTIONS_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SCHEMESETTINGELEMENT_GET_NAME_OFFSET))(this);
		}

		::System::Configuration::ConfigurationPropertyCollection* get_Properties()
		{
			return ((::System::Configuration::ConfigurationPropertyCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SCHEMESETTINGELEMENT_GET_PROPERTIES_OFFSET))(this);
		}
	};
}
