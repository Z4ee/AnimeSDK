#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Sockets/IPProtectionLevel.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_NET_CONFIGURATION_SETTINGSSECTIONINTERNAL_GET_IPV6ENABLED_OFFSET UNITYSDK_OFFSET(0x1AF58EF0)
#define SYSTEM_NET_CONFIGURATION_SETTINGSSECTIONINTERNAL_GET_SECTION_OFFSET UNITYSDK_OFFSET(0x1AF58EC0)
#define SYSTEM_NET_CONFIGURATION_SETTINGSSECTIONINTERNAL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AF58F10)
#define SYSTEM_NET_CONFIGURATION_SETTINGSSECTIONINTERNAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF58F00)

namespace System::Net::Configuration
{
	inline static constexpr unsigned int SettingsSectionInternal_TypeDefinitionIndex = 2968;

	class SettingsSectionInternal : public ::System::Object
	{
	public:
		static ::System::Net::Configuration::SettingsSectionInternal** StaticGet_instance()
		{
			return (::System::Net::Configuration::SettingsSectionInternal**)Il2CppClass::FromTypeDefinitionIndex(SettingsSectionInternal_TypeDefinitionIndex)->GetStaticField(0x23E40);
		}
		::System::Boolean HttpListenerUnescapeRequestUrl; // 0x10
		::System::Net::Sockets::IPProtectionLevel IPProtectionLevel; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SETTINGSSECTIONINTERNAL__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SETTINGSSECTIONINTERNAL__CCTOR_OFFSET))();
		}

		static ::System::Net::Configuration::SettingsSectionInternal* get_Section()
		{
			return ((::System::Net::Configuration::SettingsSectionInternal*(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SETTINGSSECTIONINTERNAL_GET_SECTION_OFFSET))();
		}

		::System::Boolean get_Ipv6Enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SETTINGSSECTIONINTERNAL_GET_IPV6ENABLED_OFFSET))(this);
		}
	};
}
