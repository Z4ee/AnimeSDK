#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Configuration/ConfigurationElementCollection.h"
#include "unitysdk/System/Configuration/ConfigurationElementCollectionType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Configuration { class ConfigurationElement; }
namespace System::Configuration { class SchemeSettingElement; }

#define SYSTEM_CONFIGURATION_SCHEMESETTINGELEMENTCOLLECTION_CREATENEWELEMENT_OFFSET UNITYSDK_OFFSET(0x1E7E18C0)
#define SYSTEM_CONFIGURATION_SCHEMESETTINGELEMENTCOLLECTION_GETELEMENTKEY_OFFSET UNITYSDK_OFFSET(0x1E7E1900)
#define SYSTEM_CONFIGURATION_SCHEMESETTINGELEMENTCOLLECTION_GET_COLLECTIONTYPE_OFFSET UNITYSDK_OFFSET(0x1E7E1800)
#define SYSTEM_CONFIGURATION_SCHEMESETTINGELEMENTCOLLECTION_GET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x1E7E1880)
#define SYSTEM_CONFIGURATION_SCHEMESETTINGELEMENTCOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1E7E1840)
#define SYSTEM_CONFIGURATION_SCHEMESETTINGELEMENTCOLLECTION_INDEXOF_OFFSET UNITYSDK_OFFSET(0x1E7E1940)
#define SYSTEM_CONFIGURATION_SCHEMESETTINGELEMENTCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7E17C0)

namespace System::Configuration
{
	inline static constexpr unsigned int SchemeSettingElementCollection_TypeDefinitionIndex = 4219;

	class SchemeSettingElementCollection : public ::System::Configuration::ConfigurationElementCollection
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SCHEMESETTINGELEMENTCOLLECTION__CTOR_OFFSET))(this);
		}

		::System::Configuration::ConfigurationElementCollectionType get_CollectionType()
		{
			return ((::System::Configuration::ConfigurationElementCollectionType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SCHEMESETTINGELEMENTCOLLECTION_GET_COLLECTIONTYPE_OFFSET))(this);
		}

		::System::Configuration::SchemeSettingElement* get_Item(::System::Int32 index)
		{
			return ((::System::Configuration::SchemeSettingElement*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SCHEMESETTINGELEMENTCOLLECTION_GET_ITEM_OFFSET))(this, index);
		}

		::System::Configuration::SchemeSettingElement* get_Item_1(::System::String* name)
		{
			return ((::System::Configuration::SchemeSettingElement*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SCHEMESETTINGELEMENTCOLLECTION_GET_ITEM_1_OFFSET))(this, name);
		}

		::System::Configuration::ConfigurationElement* CreateNewElement()
		{
			return ((::System::Configuration::ConfigurationElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SCHEMESETTINGELEMENTCOLLECTION_CREATENEWELEMENT_OFFSET))(this);
		}

		::System::Object* GetElementKey(::System::Configuration::ConfigurationElement* element)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Configuration::ConfigurationElement*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SCHEMESETTINGELEMENTCOLLECTION_GETELEMENTKEY_OFFSET))(this, element);
		}

		::System::Int32 IndexOf(::System::Configuration::SchemeSettingElement* element)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Configuration::SchemeSettingElement*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SCHEMESETTINGELEMENTCOLLECTION_INDEXOF_OFFSET))(this, element);
		}
	};
}
