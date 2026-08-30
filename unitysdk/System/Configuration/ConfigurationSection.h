#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Configuration/ConfigurationElement.h"
#include "unitysdk/System/Configuration/ConfigurationSaveMode.h"

namespace System { class String; }
namespace System::Xml { class XmlReader; }

#define SYSTEM_CONFIGURATION_CONFIGURATIONSECTION_DESERIALIZESECTION_OFFSET UNITYSDK_OFFSET(0x1E6C0090)
#define SYSTEM_CONFIGURATION_CONFIGURATIONSECTION_ISMODIFIED_OFFSET UNITYSDK_OFFSET(0x1E6C00D0)
#define SYSTEM_CONFIGURATION_CONFIGURATIONSECTION_RESETMODIFIED_OFFSET UNITYSDK_OFFSET(0x1E6C0110)
#define SYSTEM_CONFIGURATION_CONFIGURATIONSECTION_SERIALIZESECTION_OFFSET UNITYSDK_OFFSET(0x1E6C0150)

namespace System::Configuration
{
	inline static constexpr unsigned int ConfigurationSection_TypeDefinitionIndex = 2335;

	class ConfigurationSection : public ::System::Configuration::ConfigurationElement
	{
	public:
		::System::Void DeserializeSection(::System::Xml::XmlReader* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlReader*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGURATIONSECTION_DESERIALIZESECTION_OFFSET))(this, a1);
		}

		::System::Boolean IsModified()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGURATIONSECTION_ISMODIFIED_OFFSET))(this);
		}

		::System::Void ResetModified()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGURATIONSECTION_RESETMODIFIED_OFFSET))(this);
		}

		::System::String* SerializeSection(::System::Configuration::ConfigurationElement* a1, ::System::String* a2, ::System::Configuration::ConfigurationSaveMode a3)
		{
			return ((::System::String*(*)(::PVOID, ::System::Configuration::ConfigurationElement*, ::System::String*, ::System::Configuration::ConfigurationSaveMode))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGURATIONSECTION_SERIALIZESECTION_OFFSET))(this, a1, a2, a3);
		}
	};
}
