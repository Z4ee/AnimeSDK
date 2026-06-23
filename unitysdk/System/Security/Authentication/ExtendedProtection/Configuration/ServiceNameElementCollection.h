#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Configuration/ConfigurationElementCollection.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Configuration { class ConfigurationElement; }
namespace System::Security::Authentication::ExtendedProtection::Configuration { class ServiceNameElement; }

#define SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_CONFIGURATION_SERVICENAMEELEMENTCOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x1B41FE50)
#define SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_CONFIGURATION_SERVICENAMEELEMENTCOLLECTION_CLEAR_OFFSET UNITYSDK_OFFSET(0x1B41FE90)
#define SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_CONFIGURATION_SERVICENAMEELEMENTCOLLECTION_CREATENEWELEMENT_OFFSET UNITYSDK_OFFSET(0x1B41FED0)
#define SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_CONFIGURATION_SERVICENAMEELEMENTCOLLECTION_GETELEMENTKEY_OFFSET UNITYSDK_OFFSET(0x1B41FF10)
#define SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_CONFIGURATION_SERVICENAMEELEMENTCOLLECTION_GET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x1B41FDD0)
#define SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_CONFIGURATION_SERVICENAMEELEMENTCOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1B41FD50)
#define SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_CONFIGURATION_SERVICENAMEELEMENTCOLLECTION_INDEXOF_OFFSET UNITYSDK_OFFSET(0x1B41FF50)
#define SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_CONFIGURATION_SERVICENAMEELEMENTCOLLECTION_REMOVEAT_OFFSET UNITYSDK_OFFSET(0x1B420010)
#define SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_CONFIGURATION_SERVICENAMEELEMENTCOLLECTION_REMOVE_1_OFFSET UNITYSDK_OFFSET(0x1B41FFD0)
#define SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_CONFIGURATION_SERVICENAMEELEMENTCOLLECTION_REMOVE_OFFSET UNITYSDK_OFFSET(0x1B41FF90)
#define SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_CONFIGURATION_SERVICENAMEELEMENTCOLLECTION_SET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x1B41FE10)
#define SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_CONFIGURATION_SERVICENAMEELEMENTCOLLECTION_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1B41FD90)
#define SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_CONFIGURATION_SERVICENAMEELEMENTCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B41FD10)

namespace System::Security::Authentication::ExtendedProtection::Configuration
{
	inline static constexpr unsigned int ServiceNameElementCollection_TypeDefinitionIndex = 4087;

	class ServiceNameElementCollection : public ::System::Configuration::ConfigurationElementCollection
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_CONFIGURATION_SERVICENAMEELEMENTCOLLECTION__CTOR_OFFSET))(this);
		}

		::System::Security::Authentication::ExtendedProtection::Configuration::ServiceNameElement* get_Item(::System::Int32 index)
		{
			return ((::System::Security::Authentication::ExtendedProtection::Configuration::ServiceNameElement*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_CONFIGURATION_SERVICENAMEELEMENTCOLLECTION_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void set_Item(::System::Int32 index, ::System::Security::Authentication::ExtendedProtection::Configuration::ServiceNameElement* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Security::Authentication::ExtendedProtection::Configuration::ServiceNameElement*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_CONFIGURATION_SERVICENAMEELEMENTCOLLECTION_SET_ITEM_OFFSET))(this, index, value);
		}

		::System::Security::Authentication::ExtendedProtection::Configuration::ServiceNameElement* get_Item_1(::System::String* name)
		{
			return ((::System::Security::Authentication::ExtendedProtection::Configuration::ServiceNameElement*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_CONFIGURATION_SERVICENAMEELEMENTCOLLECTION_GET_ITEM_1_OFFSET))(this, name);
		}

		::System::Void set_Item_1(::System::String* name, ::System::Security::Authentication::ExtendedProtection::Configuration::ServiceNameElement* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Security::Authentication::ExtendedProtection::Configuration::ServiceNameElement*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_CONFIGURATION_SERVICENAMEELEMENTCOLLECTION_SET_ITEM_1_OFFSET))(this, name, value);
		}

		::System::Void Add(::System::Security::Authentication::ExtendedProtection::Configuration::ServiceNameElement* element)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Authentication::ExtendedProtection::Configuration::ServiceNameElement*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_CONFIGURATION_SERVICENAMEELEMENTCOLLECTION_ADD_OFFSET))(this, element);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_CONFIGURATION_SERVICENAMEELEMENTCOLLECTION_CLEAR_OFFSET))(this);
		}

		::System::Configuration::ConfigurationElement* CreateNewElement()
		{
			return ((::System::Configuration::ConfigurationElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_CONFIGURATION_SERVICENAMEELEMENTCOLLECTION_CREATENEWELEMENT_OFFSET))(this);
		}

		::System::Object* GetElementKey(::System::Configuration::ConfigurationElement* element)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Configuration::ConfigurationElement*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_CONFIGURATION_SERVICENAMEELEMENTCOLLECTION_GETELEMENTKEY_OFFSET))(this, element);
		}

		::System::Int32 IndexOf(::System::Security::Authentication::ExtendedProtection::Configuration::ServiceNameElement* element)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Security::Authentication::ExtendedProtection::Configuration::ServiceNameElement*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_CONFIGURATION_SERVICENAMEELEMENTCOLLECTION_INDEXOF_OFFSET))(this, element);
		}

		::System::Void Remove(::System::Security::Authentication::ExtendedProtection::Configuration::ServiceNameElement* element)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Authentication::ExtendedProtection::Configuration::ServiceNameElement*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_CONFIGURATION_SERVICENAMEELEMENTCOLLECTION_REMOVE_OFFSET))(this, element);
		}

		::System::Void Remove_1(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_CONFIGURATION_SERVICENAMEELEMENTCOLLECTION_REMOVE_1_OFFSET))(this, name);
		}

		::System::Void RemoveAt(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_CONFIGURATION_SERVICENAMEELEMENTCOLLECTION_REMOVEAT_OFFSET))(this, index);
		}
	};
}
