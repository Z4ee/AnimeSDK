#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Configuration/ConfigurationSaveMode.h"
#include "unitysdk/System/Configuration/ConfigurationSection.h"

namespace System { class String; }
namespace System::Configuration { class ConfigurationElement; }
namespace System::Configuration { class ConfigurationPropertyCollection; }
namespace System::Xml { class XmlReader; }

#define SYSTEM_CONFIGURATION_IGNORESECTION_DESERIALIZESECTION_OFFSET UNITYSDK_OFFSET(0x1847B560)
#define SYSTEM_CONFIGURATION_IGNORESECTION_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x1847B520)
#define SYSTEM_CONFIGURATION_IGNORESECTION_ISMODIFIED_OFFSET UNITYSDK_OFFSET(0x1847B5A0)
#define SYSTEM_CONFIGURATION_IGNORESECTION_RESETMODIFIED_OFFSET UNITYSDK_OFFSET(0x1847B620)
#define SYSTEM_CONFIGURATION_IGNORESECTION_RESET_OFFSET UNITYSDK_OFFSET(0x1847B5E0)
#define SYSTEM_CONFIGURATION_IGNORESECTION_SERIALIZESECTION_OFFSET UNITYSDK_OFFSET(0x1847B660)
#define SYSTEM_CONFIGURATION_IGNORESECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1847B4E0)

namespace System::Configuration
{
	inline static constexpr unsigned int IgnoreSection_TypeDefinitionIndex = 2330;

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

		::System::Void DeserializeSection(::System::Xml::XmlReader* xmlReader)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlReader*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_IGNORESECTION_DESERIALIZESECTION_OFFSET))(this, xmlReader);
		}

		::System::Boolean IsModified()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_IGNORESECTION_ISMODIFIED_OFFSET))(this);
		}

		::System::Void Reset(::System::Configuration::ConfigurationElement* parentSection)
		{
			return ((::System::Void(*)(::PVOID, ::System::Configuration::ConfigurationElement*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_IGNORESECTION_RESET_OFFSET))(this, parentSection);
		}

		::System::Void ResetModified()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_IGNORESECTION_RESETMODIFIED_OFFSET))(this);
		}

		::System::String* SerializeSection(::System::Configuration::ConfigurationElement* parentSection, ::System::String* name, ::System::Configuration::ConfigurationSaveMode saveMode)
		{
			return ((::System::String*(*)(::PVOID, ::System::Configuration::ConfigurationElement*, ::System::String*, ::System::Configuration::ConfigurationSaveMode))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_IGNORESECTION_SERIALIZESECTION_OFFSET))(this, parentSection, name, saveMode);
		}
	};
}
