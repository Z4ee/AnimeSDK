#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Configuration/ConfigurationElementCollection.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Configuration { class ConfigurationElement; }
namespace System::Net::Configuration { class BypassElement; }

#define SYSTEM_NET_CONFIGURATION_BYPASSELEMENTCOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x193B63C0)
#define SYSTEM_NET_CONFIGURATION_BYPASSELEMENTCOLLECTION_CLEAR_OFFSET UNITYSDK_OFFSET(0x193B6400)
#define SYSTEM_NET_CONFIGURATION_BYPASSELEMENTCOLLECTION_CREATENEWELEMENT_OFFSET UNITYSDK_OFFSET(0x193B6440)
#define SYSTEM_NET_CONFIGURATION_BYPASSELEMENTCOLLECTION_GETELEMENTKEY_OFFSET UNITYSDK_OFFSET(0x193B6480)
#define SYSTEM_NET_CONFIGURATION_BYPASSELEMENTCOLLECTION_GET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x193B6300)
#define SYSTEM_NET_CONFIGURATION_BYPASSELEMENTCOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x193B6280)
#define SYSTEM_NET_CONFIGURATION_BYPASSELEMENTCOLLECTION_GET_THROWONDUPLICATE_OFFSET UNITYSDK_OFFSET(0x193B6380)
#define SYSTEM_NET_CONFIGURATION_BYPASSELEMENTCOLLECTION_INDEXOF_OFFSET UNITYSDK_OFFSET(0x193B64C0)
#define SYSTEM_NET_CONFIGURATION_BYPASSELEMENTCOLLECTION_REMOVEAT_OFFSET UNITYSDK_OFFSET(0x193B6580)
#define SYSTEM_NET_CONFIGURATION_BYPASSELEMENTCOLLECTION_REMOVE_1_OFFSET UNITYSDK_OFFSET(0x193B6540)
#define SYSTEM_NET_CONFIGURATION_BYPASSELEMENTCOLLECTION_REMOVE_OFFSET UNITYSDK_OFFSET(0x193B6500)
#define SYSTEM_NET_CONFIGURATION_BYPASSELEMENTCOLLECTION_SET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x193B6340)
#define SYSTEM_NET_CONFIGURATION_BYPASSELEMENTCOLLECTION_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x193B62C0)
#define SYSTEM_NET_CONFIGURATION_BYPASSELEMENTCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x193B6240)

namespace System::Net::Configuration
{
	inline static constexpr unsigned int BypassElementCollection_TypeDefinitionIndex = 4119;

	class BypassElementCollection : public ::System::Configuration::ConfigurationElementCollection
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_BYPASSELEMENTCOLLECTION__CTOR_OFFSET))(this);
		}

		::System::Net::Configuration::BypassElement* get_Item(::System::Int32 index)
		{
			return ((::System::Net::Configuration::BypassElement*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_BYPASSELEMENTCOLLECTION_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void set_Item(::System::Int32 index, ::System::Net::Configuration::BypassElement* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Net::Configuration::BypassElement*))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_BYPASSELEMENTCOLLECTION_SET_ITEM_OFFSET))(this, index, value);
		}

		::System::Net::Configuration::BypassElement* get_Item_1(::System::String* name)
		{
			return ((::System::Net::Configuration::BypassElement*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_BYPASSELEMENTCOLLECTION_GET_ITEM_1_OFFSET))(this, name);
		}

		::System::Void set_Item_1(::System::String* name, ::System::Net::Configuration::BypassElement* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Net::Configuration::BypassElement*))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_BYPASSELEMENTCOLLECTION_SET_ITEM_1_OFFSET))(this, name, value);
		}

		::System::Boolean get_ThrowOnDuplicate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_BYPASSELEMENTCOLLECTION_GET_THROWONDUPLICATE_OFFSET))(this);
		}

		::System::Void Add(::System::Net::Configuration::BypassElement* element)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Configuration::BypassElement*))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_BYPASSELEMENTCOLLECTION_ADD_OFFSET))(this, element);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_BYPASSELEMENTCOLLECTION_CLEAR_OFFSET))(this);
		}

		::System::Configuration::ConfigurationElement* CreateNewElement()
		{
			return ((::System::Configuration::ConfigurationElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_BYPASSELEMENTCOLLECTION_CREATENEWELEMENT_OFFSET))(this);
		}

		::System::Object* GetElementKey(::System::Configuration::ConfigurationElement* element)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Configuration::ConfigurationElement*))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_BYPASSELEMENTCOLLECTION_GETELEMENTKEY_OFFSET))(this, element);
		}

		::System::Int32 IndexOf(::System::Net::Configuration::BypassElement* element)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Net::Configuration::BypassElement*))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_BYPASSELEMENTCOLLECTION_INDEXOF_OFFSET))(this, element);
		}

		::System::Void Remove(::System::Net::Configuration::BypassElement* element)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Configuration::BypassElement*))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_BYPASSELEMENTCOLLECTION_REMOVE_OFFSET))(this, element);
		}

		::System::Void Remove_1(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_BYPASSELEMENTCOLLECTION_REMOVE_1_OFFSET))(this, name);
		}

		::System::Void RemoveAt(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_BYPASSELEMENTCOLLECTION_REMOVEAT_OFFSET))(this, index);
		}
	};
}
