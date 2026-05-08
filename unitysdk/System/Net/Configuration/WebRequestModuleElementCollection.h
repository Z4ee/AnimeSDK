#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Configuration/ConfigurationElementCollection.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Configuration { class ConfigurationElement; }
namespace System::Net::Configuration { class WebRequestModuleElement; }

#define SYSTEM_NET_CONFIGURATION_WEBREQUESTMODULEELEMENTCOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x1B1EA1C0)
#define SYSTEM_NET_CONFIGURATION_WEBREQUESTMODULEELEMENTCOLLECTION_CLEAR_OFFSET UNITYSDK_OFFSET(0x1B1EA200)
#define SYSTEM_NET_CONFIGURATION_WEBREQUESTMODULEELEMENTCOLLECTION_CREATENEWELEMENT_OFFSET UNITYSDK_OFFSET(0x1B1EA240)
#define SYSTEM_NET_CONFIGURATION_WEBREQUESTMODULEELEMENTCOLLECTION_GETELEMENTKEY_OFFSET UNITYSDK_OFFSET(0x1B1EA280)
#define SYSTEM_NET_CONFIGURATION_WEBREQUESTMODULEELEMENTCOLLECTION_GET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x1B1EA140)
#define SYSTEM_NET_CONFIGURATION_WEBREQUESTMODULEELEMENTCOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1B1EA0C0)
#define SYSTEM_NET_CONFIGURATION_WEBREQUESTMODULEELEMENTCOLLECTION_INDEXOF_OFFSET UNITYSDK_OFFSET(0x1B1EA2C0)
#define SYSTEM_NET_CONFIGURATION_WEBREQUESTMODULEELEMENTCOLLECTION_REMOVEAT_OFFSET UNITYSDK_OFFSET(0x1B1EA380)
#define SYSTEM_NET_CONFIGURATION_WEBREQUESTMODULEELEMENTCOLLECTION_REMOVE_1_OFFSET UNITYSDK_OFFSET(0x1B1EA340)
#define SYSTEM_NET_CONFIGURATION_WEBREQUESTMODULEELEMENTCOLLECTION_REMOVE_OFFSET UNITYSDK_OFFSET(0x1B1EA300)
#define SYSTEM_NET_CONFIGURATION_WEBREQUESTMODULEELEMENTCOLLECTION_SET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x1B1EA180)
#define SYSTEM_NET_CONFIGURATION_WEBREQUESTMODULEELEMENTCOLLECTION_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1B1EA100)
#define SYSTEM_NET_CONFIGURATION_WEBREQUESTMODULEELEMENTCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1EA080)

namespace System::Net::Configuration
{
	inline static constexpr unsigned int WebRequestModuleElementCollection_TypeDefinitionIndex = 4148;

	class WebRequestModuleElementCollection : public ::System::Configuration::ConfigurationElementCollection
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_WEBREQUESTMODULEELEMENTCOLLECTION__CTOR_OFFSET))(this);
		}

		::System::Net::Configuration::WebRequestModuleElement* get_Item(::System::Int32 index)
		{
			return ((::System::Net::Configuration::WebRequestModuleElement*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_WEBREQUESTMODULEELEMENTCOLLECTION_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void set_Item(::System::Int32 index, ::System::Net::Configuration::WebRequestModuleElement* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Net::Configuration::WebRequestModuleElement*))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_WEBREQUESTMODULEELEMENTCOLLECTION_SET_ITEM_OFFSET))(this, index, value);
		}

		::System::Net::Configuration::WebRequestModuleElement* get_Item_1(::System::String* name)
		{
			return ((::System::Net::Configuration::WebRequestModuleElement*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_WEBREQUESTMODULEELEMENTCOLLECTION_GET_ITEM_1_OFFSET))(this, name);
		}

		::System::Void set_Item_1(::System::String* name, ::System::Net::Configuration::WebRequestModuleElement* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Net::Configuration::WebRequestModuleElement*))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_WEBREQUESTMODULEELEMENTCOLLECTION_SET_ITEM_1_OFFSET))(this, name, value);
		}

		::System::Void Add(::System::Net::Configuration::WebRequestModuleElement* element)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Configuration::WebRequestModuleElement*))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_WEBREQUESTMODULEELEMENTCOLLECTION_ADD_OFFSET))(this, element);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_WEBREQUESTMODULEELEMENTCOLLECTION_CLEAR_OFFSET))(this);
		}

		::System::Configuration::ConfigurationElement* CreateNewElement()
		{
			return ((::System::Configuration::ConfigurationElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_WEBREQUESTMODULEELEMENTCOLLECTION_CREATENEWELEMENT_OFFSET))(this);
		}

		::System::Object* GetElementKey(::System::Configuration::ConfigurationElement* element)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Configuration::ConfigurationElement*))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_WEBREQUESTMODULEELEMENTCOLLECTION_GETELEMENTKEY_OFFSET))(this, element);
		}

		::System::Int32 IndexOf(::System::Net::Configuration::WebRequestModuleElement* element)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Net::Configuration::WebRequestModuleElement*))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_WEBREQUESTMODULEELEMENTCOLLECTION_INDEXOF_OFFSET))(this, element);
		}

		::System::Void Remove(::System::Net::Configuration::WebRequestModuleElement* element)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Configuration::WebRequestModuleElement*))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_WEBREQUESTMODULEELEMENTCOLLECTION_REMOVE_OFFSET))(this, element);
		}

		::System::Void Remove_1(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_WEBREQUESTMODULEELEMENTCOLLECTION_REMOVE_1_OFFSET))(this, name);
		}

		::System::Void RemoveAt(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_WEBREQUESTMODULEELEMENTCOLLECTION_REMOVEAT_OFFSET))(this, index);
		}
	};
}
