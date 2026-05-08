#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Configuration/ConfigurationElement.h"
#include "unitysdk/System/Configuration/ConfigurationSaveMode.h"

namespace System { class String; }
namespace System::Configuration { class ConfigurationPropertyCollection; }
namespace System::Xml { class XmlNode; }
namespace System::Xml { class XmlReader; }
namespace System::Xml { class XmlWriter; }

#define SYSTEM_CONFIGURATION_SETTINGVALUEELEMENT_DESERIALIZEELEMENT_OFFSET UNITYSDK_OFFSET(0x19AE5590)
#define SYSTEM_CONFIGURATION_SETTINGVALUEELEMENT_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x19AE54D0)
#define SYSTEM_CONFIGURATION_SETTINGVALUEELEMENT_GET_VALUEXML_OFFSET UNITYSDK_OFFSET(0x19AE5510)
#define SYSTEM_CONFIGURATION_SETTINGVALUEELEMENT_ISMODIFIED_OFFSET UNITYSDK_OFFSET(0x19AE55D0)
#define SYSTEM_CONFIGURATION_SETTINGVALUEELEMENT_RESETMODIFIED_OFFSET UNITYSDK_OFFSET(0x19AE5650)
#define SYSTEM_CONFIGURATION_SETTINGVALUEELEMENT_RESET_OFFSET UNITYSDK_OFFSET(0x19AE5610)
#define SYSTEM_CONFIGURATION_SETTINGVALUEELEMENT_SERIALIZETOXMLELEMENT_OFFSET UNITYSDK_OFFSET(0x19AE5690)
#define SYSTEM_CONFIGURATION_SETTINGVALUEELEMENT_SET_VALUEXML_OFFSET UNITYSDK_OFFSET(0x19AE5550)
#define SYSTEM_CONFIGURATION_SETTINGVALUEELEMENT_UNMERGE_OFFSET UNITYSDK_OFFSET(0x19AE56D0)
#define SYSTEM_CONFIGURATION_SETTINGVALUEELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x19AE5490)

namespace System::Configuration
{
	inline static constexpr unsigned int SettingValueElement_TypeDefinitionIndex = 4204;

	class SettingValueElement : public ::System::Configuration::ConfigurationElement
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGVALUEELEMENT__CTOR_OFFSET))(this);
		}

		::System::Configuration::ConfigurationPropertyCollection* get_Properties()
		{
			return ((::System::Configuration::ConfigurationPropertyCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGVALUEELEMENT_GET_PROPERTIES_OFFSET))(this);
		}

		::System::Xml::XmlNode* get_ValueXml()
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGVALUEELEMENT_GET_VALUEXML_OFFSET))(this);
		}

		::System::Void set_ValueXml(::System::Xml::XmlNode* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlNode*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGVALUEELEMENT_SET_VALUEXML_OFFSET))(this, value);
		}

		::System::Void DeserializeElement(::System::Xml::XmlReader* reader, ::System::Boolean serializeCollectionKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlReader*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGVALUEELEMENT_DESERIALIZEELEMENT_OFFSET))(this, reader, serializeCollectionKey);
		}

		::System::Boolean IsModified()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGVALUEELEMENT_ISMODIFIED_OFFSET))(this);
		}

		::System::Void Reset(::System::Configuration::ConfigurationElement* parentElement)
		{
			return ((::System::Void(*)(::PVOID, ::System::Configuration::ConfigurationElement*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGVALUEELEMENT_RESET_OFFSET))(this, parentElement);
		}

		::System::Void ResetModified()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGVALUEELEMENT_RESETMODIFIED_OFFSET))(this);
		}

		::System::Boolean SerializeToXmlElement(::System::Xml::XmlWriter* writer, ::System::String* elementName)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::XmlWriter*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGVALUEELEMENT_SERIALIZETOXMLELEMENT_OFFSET))(this, writer, elementName);
		}

		::System::Void Unmerge(::System::Configuration::ConfigurationElement* sourceElement, ::System::Configuration::ConfigurationElement* parentElement, ::System::Configuration::ConfigurationSaveMode saveMode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Configuration::ConfigurationElement*, ::System::Configuration::ConfigurationElement*, ::System::Configuration::ConfigurationSaveMode))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGVALUEELEMENT_UNMERGE_OFFSET))(this, sourceElement, parentElement, saveMode);
		}
	};
}
