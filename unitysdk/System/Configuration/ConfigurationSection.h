#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Configuration/ConfigurationElement.h"
#include "unitysdk/System/Configuration/ConfigurationSaveMode.h"

namespace System { class String; }
namespace System::Xml { class XmlReader; }

#define SYSTEM_CONFIGURATION_CONFIGURATIONSECTION_DESERIALIZESECTION_OFFSET UNITYSDK_OFFSET(0x1847B3E0)
#define SYSTEM_CONFIGURATION_CONFIGURATIONSECTION_ISMODIFIED_OFFSET UNITYSDK_OFFSET(0x1847B420)
#define SYSTEM_CONFIGURATION_CONFIGURATIONSECTION_RESETMODIFIED_OFFSET UNITYSDK_OFFSET(0x1847B460)
#define SYSTEM_CONFIGURATION_CONFIGURATIONSECTION_SERIALIZESECTION_OFFSET UNITYSDK_OFFSET(0x1847B4A0)

namespace System::Configuration
{
	inline static constexpr unsigned int ConfigurationSection_TypeDefinitionIndex = 2323;

	class ConfigurationSection : public ::System::Configuration::ConfigurationElement
	{
	public:
		::System::Void DeserializeSection(::System::Xml::XmlReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlReader*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGURATIONSECTION_DESERIALIZESECTION_OFFSET))(this, reader);
		}

		::System::Boolean IsModified()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGURATIONSECTION_ISMODIFIED_OFFSET))(this);
		}

		::System::Void ResetModified()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGURATIONSECTION_RESETMODIFIED_OFFSET))(this);
		}

		::System::String* SerializeSection(::System::Configuration::ConfigurationElement* parentElement, ::System::String* name, ::System::Configuration::ConfigurationSaveMode saveMode)
		{
			return ((::System::String*(*)(::PVOID, ::System::Configuration::ConfigurationElement*, ::System::String*, ::System::Configuration::ConfigurationSaveMode))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGURATIONSECTION_SERIALIZESECTION_OFFSET))(this, parentElement, name, saveMode);
		}
	};
}
