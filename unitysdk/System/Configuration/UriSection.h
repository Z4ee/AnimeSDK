#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Configuration/ConfigurationSection.h"

namespace System::Configuration { class ConfigurationPropertyCollection; }
namespace System::Configuration { class IdnElement; }
namespace System::Configuration { class IriParsingElement; }
namespace System::Configuration { class SchemeSettingElementCollection; }

#define SYSTEM_CONFIGURATION_URISECTION_GET_IDN_OFFSET UNITYSDK_OFFSET(0x19BB0420)
#define SYSTEM_CONFIGURATION_URISECTION_GET_IRIPARSING_OFFSET UNITYSDK_OFFSET(0x19BB0460)
#define SYSTEM_CONFIGURATION_URISECTION_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x19BB04A0)
#define SYSTEM_CONFIGURATION_URISECTION_GET_SCHEMESETTINGS_OFFSET UNITYSDK_OFFSET(0x19BB04E0)
#define SYSTEM_CONFIGURATION_URISECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x19BB03E0)

namespace System::Configuration
{
	inline static constexpr unsigned int UriSection_TypeDefinitionIndex = 4234;

	class UriSection : public ::System::Configuration::ConfigurationSection
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_URISECTION__CTOR_OFFSET))(this);
		}

		::System::Configuration::IdnElement* get_Idn()
		{
			return ((::System::Configuration::IdnElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_URISECTION_GET_IDN_OFFSET))(this);
		}

		::System::Configuration::IriParsingElement* get_IriParsing()
		{
			return ((::System::Configuration::IriParsingElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_URISECTION_GET_IRIPARSING_OFFSET))(this);
		}

		::System::Configuration::ConfigurationPropertyCollection* get_Properties()
		{
			return ((::System::Configuration::ConfigurationPropertyCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_URISECTION_GET_PROPERTIES_OFFSET))(this);
		}

		::System::Configuration::SchemeSettingElementCollection* get_SchemeSettings()
		{
			return ((::System::Configuration::SchemeSettingElementCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_URISECTION_GET_SCHEMESETTINGS_OFFSET))(this);
		}
	};
}
