#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Configuration/ConfigurationSectionGroup.h"

namespace System::Configuration { class Configuration; }
namespace System::Net::Configuration { class AuthenticationModulesSection; }
namespace System::Net::Configuration { class ConnectionManagementSection; }
namespace System::Net::Configuration { class DefaultProxySection; }
namespace System::Net::Configuration { class MailSettingsSectionGroup; }
namespace System::Net::Configuration { class RequestCachingSection; }
namespace System::Net::Configuration { class SettingsSection; }
namespace System::Net::Configuration { class WebRequestModulesSection; }

#define SYSTEM_NET_CONFIGURATION_NETSECTIONGROUP_GETSECTIONGROUP_OFFSET UNITYSDK_OFFSET(0x1C016160)
#define SYSTEM_NET_CONFIGURATION_NETSECTIONGROUP_GET_AUTHENTICATIONMODULES_OFFSET UNITYSDK_OFFSET(0x1C015FA0)
#define SYSTEM_NET_CONFIGURATION_NETSECTIONGROUP_GET_CONNECTIONMANAGEMENT_OFFSET UNITYSDK_OFFSET(0x1C015FE0)
#define SYSTEM_NET_CONFIGURATION_NETSECTIONGROUP_GET_DEFAULTPROXY_OFFSET UNITYSDK_OFFSET(0x1C016020)
#define SYSTEM_NET_CONFIGURATION_NETSECTIONGROUP_GET_MAILSETTINGS_OFFSET UNITYSDK_OFFSET(0x1C016060)
#define SYSTEM_NET_CONFIGURATION_NETSECTIONGROUP_GET_REQUESTCACHING_OFFSET UNITYSDK_OFFSET(0x1C0160A0)
#define SYSTEM_NET_CONFIGURATION_NETSECTIONGROUP_GET_SETTINGS_OFFSET UNITYSDK_OFFSET(0x1C0160E0)
#define SYSTEM_NET_CONFIGURATION_NETSECTIONGROUP_GET_WEBREQUESTMODULES_OFFSET UNITYSDK_OFFSET(0x1C016120)
#define SYSTEM_NET_CONFIGURATION_NETSECTIONGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1C015F60)

namespace System::Net::Configuration
{
	inline static constexpr unsigned int NetSectionGroup_TypeDefinitionIndex = 4138;

	class NetSectionGroup : public ::System::Configuration::ConfigurationSectionGroup
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_NETSECTIONGROUP__CTOR_OFFSET))(this);
		}

		::System::Net::Configuration::AuthenticationModulesSection* get_AuthenticationModules()
		{
			return ((::System::Net::Configuration::AuthenticationModulesSection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_NETSECTIONGROUP_GET_AUTHENTICATIONMODULES_OFFSET))(this);
		}

		::System::Net::Configuration::ConnectionManagementSection* get_ConnectionManagement()
		{
			return ((::System::Net::Configuration::ConnectionManagementSection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_NETSECTIONGROUP_GET_CONNECTIONMANAGEMENT_OFFSET))(this);
		}

		::System::Net::Configuration::DefaultProxySection* get_DefaultProxy()
		{
			return ((::System::Net::Configuration::DefaultProxySection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_NETSECTIONGROUP_GET_DEFAULTPROXY_OFFSET))(this);
		}

		::System::Net::Configuration::MailSettingsSectionGroup* get_MailSettings()
		{
			return ((::System::Net::Configuration::MailSettingsSectionGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_NETSECTIONGROUP_GET_MAILSETTINGS_OFFSET))(this);
		}

		::System::Net::Configuration::RequestCachingSection* get_RequestCaching()
		{
			return ((::System::Net::Configuration::RequestCachingSection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_NETSECTIONGROUP_GET_REQUESTCACHING_OFFSET))(this);
		}

		::System::Net::Configuration::SettingsSection* get_Settings()
		{
			return ((::System::Net::Configuration::SettingsSection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_NETSECTIONGROUP_GET_SETTINGS_OFFSET))(this);
		}

		::System::Net::Configuration::WebRequestModulesSection* get_WebRequestModules()
		{
			return ((::System::Net::Configuration::WebRequestModulesSection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_NETSECTIONGROUP_GET_WEBREQUESTMODULES_OFFSET))(this);
		}

		static ::System::Net::Configuration::NetSectionGroup* GetSectionGroup(::System::Configuration::Configuration* config)
		{
			return ((::System::Net::Configuration::NetSectionGroup*(*)(::System::Configuration::Configuration*))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_NETSECTIONGROUP_GETSECTIONGROUP_OFFSET))(config);
		}
	};
}
