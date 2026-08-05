#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Configuration/ConfigurationElementCollection.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Configuration { class ConfigurationElement; }
namespace System::Net::Configuration { class AuthenticationModuleElement; }

#define SYSTEM_NET_CONFIGURATION_AUTHENTICATIONMODULEELEMENTCOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x1D6A4AC0)
#define SYSTEM_NET_CONFIGURATION_AUTHENTICATIONMODULEELEMENTCOLLECTION_CLEAR_OFFSET UNITYSDK_OFFSET(0x1D6A4B00)
#define SYSTEM_NET_CONFIGURATION_AUTHENTICATIONMODULEELEMENTCOLLECTION_CREATENEWELEMENT_OFFSET UNITYSDK_OFFSET(0x1D6A4B40)
#define SYSTEM_NET_CONFIGURATION_AUTHENTICATIONMODULEELEMENTCOLLECTION_GETELEMENTKEY_OFFSET UNITYSDK_OFFSET(0x1D6A4B80)
#define SYSTEM_NET_CONFIGURATION_AUTHENTICATIONMODULEELEMENTCOLLECTION_GET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x1D6A4A40)
#define SYSTEM_NET_CONFIGURATION_AUTHENTICATIONMODULEELEMENTCOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1D6A49C0)
#define SYSTEM_NET_CONFIGURATION_AUTHENTICATIONMODULEELEMENTCOLLECTION_INDEXOF_OFFSET UNITYSDK_OFFSET(0x1D6A4BC0)
#define SYSTEM_NET_CONFIGURATION_AUTHENTICATIONMODULEELEMENTCOLLECTION_REMOVEAT_OFFSET UNITYSDK_OFFSET(0x1D6A4C80)
#define SYSTEM_NET_CONFIGURATION_AUTHENTICATIONMODULEELEMENTCOLLECTION_REMOVE_1_OFFSET UNITYSDK_OFFSET(0x1D6A4C40)
#define SYSTEM_NET_CONFIGURATION_AUTHENTICATIONMODULEELEMENTCOLLECTION_REMOVE_OFFSET UNITYSDK_OFFSET(0x1D6A4C00)
#define SYSTEM_NET_CONFIGURATION_AUTHENTICATIONMODULEELEMENTCOLLECTION_SET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x1D6A4A80)
#define SYSTEM_NET_CONFIGURATION_AUTHENTICATIONMODULEELEMENTCOLLECTION_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1D6A4A00)
#define SYSTEM_NET_CONFIGURATION_AUTHENTICATIONMODULEELEMENTCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6A4980)

namespace System::Net::Configuration
{
	inline static constexpr unsigned int AuthenticationModuleElementCollection_TypeDefinitionIndex = 4115;

	class AuthenticationModuleElementCollection : public ::System::Configuration::ConfigurationElementCollection
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_AUTHENTICATIONMODULEELEMENTCOLLECTION__CTOR_OFFSET))(this);
		}

		::System::Net::Configuration::AuthenticationModuleElement* get_Item(::System::Int32 index)
		{
			return ((::System::Net::Configuration::AuthenticationModuleElement*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_AUTHENTICATIONMODULEELEMENTCOLLECTION_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void set_Item(::System::Int32 index, ::System::Net::Configuration::AuthenticationModuleElement* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Net::Configuration::AuthenticationModuleElement*))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_AUTHENTICATIONMODULEELEMENTCOLLECTION_SET_ITEM_OFFSET))(this, index, value);
		}

		::System::Net::Configuration::AuthenticationModuleElement* get_Item_1(::System::String* name)
		{
			return ((::System::Net::Configuration::AuthenticationModuleElement*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_AUTHENTICATIONMODULEELEMENTCOLLECTION_GET_ITEM_1_OFFSET))(this, name);
		}

		::System::Void set_Item_1(::System::String* name, ::System::Net::Configuration::AuthenticationModuleElement* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Net::Configuration::AuthenticationModuleElement*))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_AUTHENTICATIONMODULEELEMENTCOLLECTION_SET_ITEM_1_OFFSET))(this, name, value);
		}

		::System::Void Add(::System::Net::Configuration::AuthenticationModuleElement* element)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Configuration::AuthenticationModuleElement*))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_AUTHENTICATIONMODULEELEMENTCOLLECTION_ADD_OFFSET))(this, element);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_AUTHENTICATIONMODULEELEMENTCOLLECTION_CLEAR_OFFSET))(this);
		}

		::System::Configuration::ConfigurationElement* CreateNewElement()
		{
			return ((::System::Configuration::ConfigurationElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_AUTHENTICATIONMODULEELEMENTCOLLECTION_CREATENEWELEMENT_OFFSET))(this);
		}

		::System::Object* GetElementKey(::System::Configuration::ConfigurationElement* element)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Configuration::ConfigurationElement*))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_AUTHENTICATIONMODULEELEMENTCOLLECTION_GETELEMENTKEY_OFFSET))(this, element);
		}

		::System::Int32 IndexOf(::System::Net::Configuration::AuthenticationModuleElement* element)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Net::Configuration::AuthenticationModuleElement*))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_AUTHENTICATIONMODULEELEMENTCOLLECTION_INDEXOF_OFFSET))(this, element);
		}

		::System::Void Remove(::System::Net::Configuration::AuthenticationModuleElement* element)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Configuration::AuthenticationModuleElement*))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_AUTHENTICATIONMODULEELEMENTCOLLECTION_REMOVE_OFFSET))(this, element);
		}

		::System::Void Remove_1(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_AUTHENTICATIONMODULEELEMENTCOLLECTION_REMOVE_1_OFFSET))(this, name);
		}

		::System::Void RemoveAt(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_AUTHENTICATIONMODULEELEMENTCOLLECTION_REMOVEAT_OFFSET))(this, index);
		}
	};
}
