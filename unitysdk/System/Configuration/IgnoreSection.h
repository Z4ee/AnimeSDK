#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Configuration/ConfigurationSaveMode.h"
#include "unitysdk/System/Configuration/ConfigurationSection.h"

namespace System { class String; }
namespace System::Configuration { class ConfigurationElement; }
namespace System::Configuration { class ConfigurationPropertyCollection; }
namespace System::Xml { class XmlReader; }

#define SYSTEM_CONFIGURATION_IGNORESECTION_DESERIALIZESECTION_OFFSET UNITYSDK_OFFSET(0x1D306010)
#define SYSTEM_CONFIGURATION_IGNORESECTION_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x1D305FD0)
#define SYSTEM_CONFIGURATION_IGNORESECTION_ISMODIFIED_OFFSET UNITYSDK_OFFSET(0x1D306050)
#define SYSTEM_CONFIGURATION_IGNORESECTION_RESETMODIFIED_OFFSET UNITYSDK_OFFSET(0x1D3060D0)
#define SYSTEM_CONFIGURATION_IGNORESECTION_RESET_OFFSET UNITYSDK_OFFSET(0x1D306090)
#define SYSTEM_CONFIGURATION_IGNORESECTION_SERIALIZESECTION_OFFSET UNITYSDK_OFFSET(0x1D306110)
#define SYSTEM_CONFIGURATION_IGNORESECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D305F90)

namespace System::Configuration
{
	inline static constexpr unsigned int IgnoreSection_TypeDefinitionIndex = 2335;

	class IgnoreSection : public ::System::Configuration::ConfigurationSection
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_IGNORESECTION__CTOR_OFFSET))(this);
		}

		::System::Configuration::ConfigurationPropertyCollection* get_Properties()
		{
			return ((::System::Configuration::ConfigurationPropertyCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_IGNORESECTION_GET_PROPERTIES_OFFSET))(this);
		}

		::System::Void DeserializeSection(::System::Xml::XmlReader* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlReader*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_IGNORESECTION_DESERIALIZESECTION_OFFSET))(this, a1);
		}

		::System::Boolean IsModified()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_IGNORESECTION_ISMODIFIED_OFFSET))(this);
		}

		::System::Void Reset(::System::Configuration::ConfigurationElement* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Configuration::ConfigurationElement*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_IGNORESECTION_RESET_OFFSET))(this, a1);
		}

		::System::Void ResetModified()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_IGNORESECTION_RESETMODIFIED_OFFSET))(this);
		}

		::System::String* SerializeSection(::System::Configuration::ConfigurationElement* a1, ::System::String* a2, ::System::Configuration::ConfigurationSaveMode a3)
		{
			return ((::System::String*(*)(::PVOID, ::System::Configuration::ConfigurationElement*, ::System::String*, ::System::Configuration::ConfigurationSaveMode))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_IGNORESECTION_SERIALIZESECTION_OFFSET))(this, a1, a2, a3);
		}
	};
}
