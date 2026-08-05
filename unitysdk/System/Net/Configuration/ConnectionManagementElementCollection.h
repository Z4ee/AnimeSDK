#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Configuration/ConfigurationElementCollection.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Configuration { class ConfigurationElement; }
namespace System::Net::Configuration { class ConnectionManagementElement; }

#define SYSTEM_NET_CONFIGURATION_CONNECTIONMANAGEMENTELEMENTCOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x1DB845F0)
#define SYSTEM_NET_CONFIGURATION_CONNECTIONMANAGEMENTELEMENTCOLLECTION_CLEAR_OFFSET UNITYSDK_OFFSET(0x1DB84630)
#define SYSTEM_NET_CONFIGURATION_CONNECTIONMANAGEMENTELEMENTCOLLECTION_CREATENEWELEMENT_OFFSET UNITYSDK_OFFSET(0x1DB84670)
#define SYSTEM_NET_CONFIGURATION_CONNECTIONMANAGEMENTELEMENTCOLLECTION_GETELEMENTKEY_OFFSET UNITYSDK_OFFSET(0x1DB846B0)
#define SYSTEM_NET_CONFIGURATION_CONNECTIONMANAGEMENTELEMENTCOLLECTION_GET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x1DB84570)
#define SYSTEM_NET_CONFIGURATION_CONNECTIONMANAGEMENTELEMENTCOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1DB844F0)
#define SYSTEM_NET_CONFIGURATION_CONNECTIONMANAGEMENTELEMENTCOLLECTION_INDEXOF_OFFSET UNITYSDK_OFFSET(0x1DB846F0)
#define SYSTEM_NET_CONFIGURATION_CONNECTIONMANAGEMENTELEMENTCOLLECTION_REMOVEAT_OFFSET UNITYSDK_OFFSET(0x1DB847B0)
#define SYSTEM_NET_CONFIGURATION_CONNECTIONMANAGEMENTELEMENTCOLLECTION_REMOVE_1_OFFSET UNITYSDK_OFFSET(0x1DB84770)
#define SYSTEM_NET_CONFIGURATION_CONNECTIONMANAGEMENTELEMENTCOLLECTION_REMOVE_OFFSET UNITYSDK_OFFSET(0x1DB84730)
#define SYSTEM_NET_CONFIGURATION_CONNECTIONMANAGEMENTELEMENTCOLLECTION_SET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x1DB845B0)
#define SYSTEM_NET_CONFIGURATION_CONNECTIONMANAGEMENTELEMENTCOLLECTION_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1DB84530)
#define SYSTEM_NET_CONFIGURATION_CONNECTIONMANAGEMENTELEMENTCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB844B0)

namespace System::Net::Configuration
{
	inline static constexpr unsigned int ConnectionManagementElementCollection_TypeDefinitionIndex = 4120;

	class ConnectionManagementElementCollection : public ::System::Configuration::ConfigurationElementCollection
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_CONNECTIONMANAGEMENTELEMENTCOLLECTION__CTOR_OFFSET))(this);
		}

		::System::Net::Configuration::ConnectionManagementElement* get_Item(::System::Int32 index)
		{
			return ((::System::Net::Configuration::ConnectionManagementElement*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_CONNECTIONMANAGEMENTELEMENTCOLLECTION_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void set_Item(::System::Int32 index, ::System::Net::Configuration::ConnectionManagementElement* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Net::Configuration::ConnectionManagementElement*))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_CONNECTIONMANAGEMENTELEMENTCOLLECTION_SET_ITEM_OFFSET))(this, index, value);
		}

		::System::Net::Configuration::ConnectionManagementElement* get_Item_1(::System::String* name)
		{
			return ((::System::Net::Configuration::ConnectionManagementElement*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_CONNECTIONMANAGEMENTELEMENTCOLLECTION_GET_ITEM_1_OFFSET))(this, name);
		}

		::System::Void set_Item_1(::System::String* name, ::System::Net::Configuration::ConnectionManagementElement* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Net::Configuration::ConnectionManagementElement*))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_CONNECTIONMANAGEMENTELEMENTCOLLECTION_SET_ITEM_1_OFFSET))(this, name, value);
		}

		::System::Void Add(::System::Net::Configuration::ConnectionManagementElement* element)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Configuration::ConnectionManagementElement*))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_CONNECTIONMANAGEMENTELEMENTCOLLECTION_ADD_OFFSET))(this, element);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_CONNECTIONMANAGEMENTELEMENTCOLLECTION_CLEAR_OFFSET))(this);
		}

		::System::Configuration::ConfigurationElement* CreateNewElement()
		{
			return ((::System::Configuration::ConfigurationElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_CONNECTIONMANAGEMENTELEMENTCOLLECTION_CREATENEWELEMENT_OFFSET))(this);
		}

		::System::Object* GetElementKey(::System::Configuration::ConfigurationElement* element)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Configuration::ConfigurationElement*))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_CONNECTIONMANAGEMENTELEMENTCOLLECTION_GETELEMENTKEY_OFFSET))(this, element);
		}

		::System::Int32 IndexOf(::System::Net::Configuration::ConnectionManagementElement* element)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Net::Configuration::ConnectionManagementElement*))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_CONNECTIONMANAGEMENTELEMENTCOLLECTION_INDEXOF_OFFSET))(this, element);
		}

		::System::Void Remove(::System::Net::Configuration::ConnectionManagementElement* element)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Configuration::ConnectionManagementElement*))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_CONNECTIONMANAGEMENTELEMENTCOLLECTION_REMOVE_OFFSET))(this, element);
		}

		::System::Void Remove_1(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_CONNECTIONMANAGEMENTELEMENTCOLLECTION_REMOVE_1_OFFSET))(this, name);
		}

		::System::Void RemoveAt(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_CONNECTIONMANAGEMENTELEMENTCOLLECTION_REMOVEAT_OFFSET))(this, index);
		}
	};
}
