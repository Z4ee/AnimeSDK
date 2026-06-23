#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Configuration/ConfigurationSaveMode.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Configuration { class ConfigurationPropertyCollection; }
namespace System::Xml { class XmlReader; }
namespace System::Xml { class XmlWriter; }

#define SYSTEM_CONFIGURATION_CONFIGURATIONELEMENT_DESERIALIZEELEMENT_OFFSET UNITYSDK_OFFSET(0x1E88C370)
#define SYSTEM_CONFIGURATION_CONFIGURATIONELEMENT_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x1E88C330)
#define SYSTEM_CONFIGURATION_CONFIGURATIONELEMENT_INITIALIZEDEFAULT_OFFSET UNITYSDK_OFFSET(0x1E88C3B0)
#define SYSTEM_CONFIGURATION_CONFIGURATIONELEMENT_ISMODIFIED_OFFSET UNITYSDK_OFFSET(0x1E88C3F0)
#define SYSTEM_CONFIGURATION_CONFIGURATIONELEMENT_POSTDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1E88C430)
#define SYSTEM_CONFIGURATION_CONFIGURATIONELEMENT_RESETMODIFIED_OFFSET UNITYSDK_OFFSET(0x1E88C4B0)
#define SYSTEM_CONFIGURATION_CONFIGURATIONELEMENT_RESET_OFFSET UNITYSDK_OFFSET(0x1E88C470)
#define SYSTEM_CONFIGURATION_CONFIGURATIONELEMENT_SERIALIZETOXMLELEMENT_OFFSET UNITYSDK_OFFSET(0x1E88C4F0)
#define SYSTEM_CONFIGURATION_CONFIGURATIONELEMENT_UNMERGE_OFFSET UNITYSDK_OFFSET(0x1E88C530)
#define SYSTEM_CONFIGURATION_CONFIGURATIONELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E88C2F0)

namespace System::Configuration
{
	inline static constexpr unsigned int ConfigurationElement_TypeDefinitionIndex = 2508;

	class ConfigurationElement : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGURATIONELEMENT__CTOR_OFFSET))(this);
		}

		::System::Configuration::ConfigurationPropertyCollection* get_Properties()
		{
			return ((::System::Configuration::ConfigurationPropertyCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGURATIONELEMENT_GET_PROPERTIES_OFFSET))(this);
		}

		::System::Void DeserializeElement(::System::Xml::XmlReader* reader, ::System::Boolean serializeCollectionKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlReader*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGURATIONELEMENT_DESERIALIZEELEMENT_OFFSET))(this, reader, serializeCollectionKey);
		}

		::System::Void InitializeDefault()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGURATIONELEMENT_INITIALIZEDEFAULT_OFFSET))(this);
		}

		::System::Boolean IsModified()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGURATIONELEMENT_ISMODIFIED_OFFSET))(this);
		}

		::System::Void PostDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGURATIONELEMENT_POSTDESERIALIZE_OFFSET))(this);
		}

		::System::Void Reset(::System::Configuration::ConfigurationElement* parentElement)
		{
			return ((::System::Void(*)(::PVOID, ::System::Configuration::ConfigurationElement*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGURATIONELEMENT_RESET_OFFSET))(this, parentElement);
		}

		::System::Void ResetModified()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGURATIONELEMENT_RESETMODIFIED_OFFSET))(this);
		}

		::System::Boolean SerializeToXmlElement(::System::Xml::XmlWriter* writer, ::System::String* elementName)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::XmlWriter*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGURATIONELEMENT_SERIALIZETOXMLELEMENT_OFFSET))(this, writer, elementName);
		}

		::System::Void Unmerge(::System::Configuration::ConfigurationElement* sourceElement, ::System::Configuration::ConfigurationElement* parentElement, ::System::Configuration::ConfigurationSaveMode saveMode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Configuration::ConfigurationElement*, ::System::Configuration::ConfigurationElement*, ::System::Configuration::ConfigurationSaveMode))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGURATIONELEMENT_UNMERGE_OFFSET))(this, sourceElement, parentElement, saveMode);
		}
	};
}
