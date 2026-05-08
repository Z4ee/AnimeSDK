#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Configuration/ConfigurationElementCollection.h"
#include "unitysdk/System/Configuration/ConfigurationElementCollectionType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Configuration { class ConfigurationElement; }
namespace System::Configuration { class SettingElement; }

#define SYSTEM_CONFIGURATION_SETTINGELEMENTCOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x19A4F350)
#define SYSTEM_CONFIGURATION_SETTINGELEMENTCOLLECTION_CLEAR_OFFSET UNITYSDK_OFFSET(0x19A4F390)
#define SYSTEM_CONFIGURATION_SETTINGELEMENTCOLLECTION_CREATENEWELEMENT_OFFSET UNITYSDK_OFFSET(0x19A4F3D0)
#define SYSTEM_CONFIGURATION_SETTINGELEMENTCOLLECTION_GETELEMENTKEY_OFFSET UNITYSDK_OFFSET(0x19A4F450)
#define SYSTEM_CONFIGURATION_SETTINGELEMENTCOLLECTION_GET_COLLECTIONTYPE_OFFSET UNITYSDK_OFFSET(0x19A4F2D0)
#define SYSTEM_CONFIGURATION_SETTINGELEMENTCOLLECTION_GET_ELEMENTNAME_OFFSET UNITYSDK_OFFSET(0x19A4F310)
#define SYSTEM_CONFIGURATION_SETTINGELEMENTCOLLECTION_GET_OFFSET UNITYSDK_OFFSET(0x19A4F410)
#define SYSTEM_CONFIGURATION_SETTINGELEMENTCOLLECTION_REMOVE_OFFSET UNITYSDK_OFFSET(0x19A4F490)
#define SYSTEM_CONFIGURATION_SETTINGELEMENTCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x19A4F290)

namespace System::Configuration
{
	inline static constexpr unsigned int SettingElementCollection_TypeDefinitionIndex = 4202;

	class SettingElementCollection : public ::System::Configuration::ConfigurationElementCollection
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGELEMENTCOLLECTION__CTOR_OFFSET))(this);
		}

		::System::Configuration::ConfigurationElementCollectionType get_CollectionType()
		{
			return ((::System::Configuration::ConfigurationElementCollectionType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGELEMENTCOLLECTION_GET_COLLECTIONTYPE_OFFSET))(this);
		}

		::System::String* get_ElementName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGELEMENTCOLLECTION_GET_ELEMENTNAME_OFFSET))(this);
		}

		::System::Void Add(::System::Configuration::SettingElement* element)
		{
			return ((::System::Void(*)(::PVOID, ::System::Configuration::SettingElement*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGELEMENTCOLLECTION_ADD_OFFSET))(this, element);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGELEMENTCOLLECTION_CLEAR_OFFSET))(this);
		}

		::System::Configuration::ConfigurationElement* CreateNewElement()
		{
			return ((::System::Configuration::ConfigurationElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGELEMENTCOLLECTION_CREATENEWELEMENT_OFFSET))(this);
		}

		::System::Configuration::SettingElement* Get(::System::String* elementKey)
		{
			return ((::System::Configuration::SettingElement*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGELEMENTCOLLECTION_GET_OFFSET))(this, elementKey);
		}

		::System::Object* GetElementKey(::System::Configuration::ConfigurationElement* element)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Configuration::ConfigurationElement*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGELEMENTCOLLECTION_GETELEMENTKEY_OFFSET))(this, element);
		}

		::System::Void Remove(::System::Configuration::SettingElement* element)
		{
			return ((::System::Void(*)(::PVOID, ::System::Configuration::SettingElement*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGELEMENTCOLLECTION_REMOVE_OFFSET))(this, element);
		}
	};
}
