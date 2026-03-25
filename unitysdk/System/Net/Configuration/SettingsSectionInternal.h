#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Sockets/IPProtectionLevel.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_NET_CONFIGURATION_SETTINGSSECTIONINTERNAL_GET_IPV6ENABLED_OFFSET UNITYSDK_OFFSET(0x186B8520)
#define SYSTEM_NET_CONFIGURATION_SETTINGSSECTIONINTERNAL_GET_SECTION_OFFSET UNITYSDK_OFFSET(0x186B84F0)
#define SYSTEM_NET_CONFIGURATION_SETTINGSSECTIONINTERNAL__CCTOR_OFFSET UNITYSDK_OFFSET(0x186B8540)
#define SYSTEM_NET_CONFIGURATION_SETTINGSSECTIONINTERNAL__CTOR_OFFSET UNITYSDK_OFFSET(0x186B8530)

namespace System::Net::Configuration
{
	inline static constexpr unsigned int SettingsSectionInternal_TypeDefinitionIndex = 2967;

	class SettingsSectionInternal : public ::System::Object
	{
	public:
		static ::System::Net::Configuration::SettingsSectionInternal** StaticGet_instance()
		{
			return (::System::Net::Configuration::SettingsSectionInternal**)Il2CppClass::FromTypeDefinitionIndex(SettingsSectionInternal_TypeDefinitionIndex)->GetStaticField(0xC640);
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
