#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Security/EncryptionPolicy.h"
#include "unitysdk/System/Net/Sockets/IPProtectionLevel.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_NET_CONFIGURATION_SETTINGSSECTIONINTERNAL_GET_CHECKCERTIFICATENAME_OFFSET UNITYSDK_OFFSET(0x1E7E2F30)
#define SYSTEM_NET_CONFIGURATION_SETTINGSSECTIONINTERNAL_GET_CHECKCERTIFICATEREVOCATIONLIST_OFFSET UNITYSDK_OFFSET(0x1E7E2F90)
#define SYSTEM_NET_CONFIGURATION_SETTINGSSECTIONINTERNAL_GET_DNSREFRESHTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1E7E2F50)
#define SYSTEM_NET_CONFIGURATION_SETTINGSSECTIONINTERNAL_GET_ENABLEDNSROUNDROBIN_OFFSET UNITYSDK_OFFSET(0x1E7E2F70)
#define SYSTEM_NET_CONFIGURATION_SETTINGSSECTIONINTERNAL_GET_ENCRYPTIONPOLICY_OFFSET UNITYSDK_OFFSET(0x1E7E2FB0)
#define SYSTEM_NET_CONFIGURATION_SETTINGSSECTIONINTERNAL_GET_EXPECT100CONTINUE_OFFSET UNITYSDK_OFFSET(0x1E7E2F10)
#define SYSTEM_NET_CONFIGURATION_SETTINGSSECTIONINTERNAL_GET_IPV6ENABLED_OFFSET UNITYSDK_OFFSET(0x1E7E2FD0)
#define SYSTEM_NET_CONFIGURATION_SETTINGSSECTIONINTERNAL_GET_SECTION_OFFSET UNITYSDK_OFFSET(0x1E7E2E90)
#define SYSTEM_NET_CONFIGURATION_SETTINGSSECTIONINTERNAL_GET_USENAGLEALGORITHM_OFFSET UNITYSDK_OFFSET(0x1E7E2EF0)
#define SYSTEM_NET_CONFIGURATION_SETTINGSSECTIONINTERNAL_SET_CHECKCERTIFICATENAME_OFFSET UNITYSDK_OFFSET(0x1E7E2F40)
#define SYSTEM_NET_CONFIGURATION_SETTINGSSECTIONINTERNAL_SET_CHECKCERTIFICATEREVOCATIONLIST_OFFSET UNITYSDK_OFFSET(0x1E7E2FA0)
#define SYSTEM_NET_CONFIGURATION_SETTINGSSECTIONINTERNAL_SET_DNSREFRESHTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1E7E2F60)
#define SYSTEM_NET_CONFIGURATION_SETTINGSSECTIONINTERNAL_SET_ENABLEDNSROUNDROBIN_OFFSET UNITYSDK_OFFSET(0x1E7E2F80)
#define SYSTEM_NET_CONFIGURATION_SETTINGSSECTIONINTERNAL_SET_ENCRYPTIONPOLICY_OFFSET UNITYSDK_OFFSET(0x1E7E2FC0)
#define SYSTEM_NET_CONFIGURATION_SETTINGSSECTIONINTERNAL_SET_EXPECT100CONTINUE_OFFSET UNITYSDK_OFFSET(0x1E7E2F20)
#define SYSTEM_NET_CONFIGURATION_SETTINGSSECTIONINTERNAL_SET_USENAGLEALGORITHM_OFFSET UNITYSDK_OFFSET(0x1E7E2F00)
#define SYSTEM_NET_CONFIGURATION_SETTINGSSECTIONINTERNAL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7E2FF0)
#define SYSTEM_NET_CONFIGURATION_SETTINGSSECTIONINTERNAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7E2FE0)

namespace System::Net::Configuration
{
	inline static constexpr unsigned int SettingsSectionInternal_TypeDefinitionIndex = 3859;

	class SettingsSectionInternal : public ::System::Object
	{
	public:
		static ::System::Net::Configuration::SettingsSectionInternal** StaticGet_instance()
		{
			return (::System::Net::Configuration::SettingsSectionInternal**)Il2CppClass::FromTypeDefinitionIndex(SettingsSectionInternal_TypeDefinitionIndex)->GetStaticField(0x31A0);
		}
		::System::Int32 _DnsRefreshTimeout_k__BackingField; // 0x10
		::System::Net::Security::EncryptionPolicy _EncryptionPolicy_k__BackingField; // 0x14
		::System::Boolean _EnableDnsRoundRobin_k__BackingField; // 0x18
		::System::Boolean _CheckCertificateRevocationList_k__BackingField; // 0x19
		::System::Boolean _Expect100Continue_k__BackingField; // 0x1A
		::System::Boolean _UseNagleAlgorithm_k__BackingField; // 0x1B
		::System::Boolean HttpListenerUnescapeRequestUrl; // 0x1C
		::System::Boolean _CheckCertificateName_k__BackingField; // 0x1D
		::System::Net::Sockets::IPProtectionLevel IPProtectionLevel; // 0x20

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

		::System::Boolean get_UseNagleAlgorithm()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SETTINGSSECTIONINTERNAL_GET_USENAGLEALGORITHM_OFFSET))(this);
		}

		::System::Void set_UseNagleAlgorithm(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SETTINGSSECTIONINTERNAL_SET_USENAGLEALGORITHM_OFFSET))(this, value);
		}

		::System::Boolean get_Expect100Continue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SETTINGSSECTIONINTERNAL_GET_EXPECT100CONTINUE_OFFSET))(this);
		}

		::System::Void set_Expect100Continue(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SETTINGSSECTIONINTERNAL_SET_EXPECT100CONTINUE_OFFSET))(this, value);
		}

		::System::Boolean get_CheckCertificateName()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SETTINGSSECTIONINTERNAL_GET_CHECKCERTIFICATENAME_OFFSET))(this);
		}

		::System::Void set_CheckCertificateName(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SETTINGSSECTIONINTERNAL_SET_CHECKCERTIFICATENAME_OFFSET))(this, value);
		}

		::System::Int32 get_DnsRefreshTimeout()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SETTINGSSECTIONINTERNAL_GET_DNSREFRESHTIMEOUT_OFFSET))(this);
		}

		::System::Void set_DnsRefreshTimeout(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SETTINGSSECTIONINTERNAL_SET_DNSREFRESHTIMEOUT_OFFSET))(this, value);
		}

		::System::Boolean get_EnableDnsRoundRobin()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SETTINGSSECTIONINTERNAL_GET_ENABLEDNSROUNDROBIN_OFFSET))(this);
		}

		::System::Void set_EnableDnsRoundRobin(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SETTINGSSECTIONINTERNAL_SET_ENABLEDNSROUNDROBIN_OFFSET))(this, value);
		}

		::System::Boolean get_CheckCertificateRevocationList()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SETTINGSSECTIONINTERNAL_GET_CHECKCERTIFICATEREVOCATIONLIST_OFFSET))(this);
		}

		::System::Void set_CheckCertificateRevocationList(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SETTINGSSECTIONINTERNAL_SET_CHECKCERTIFICATEREVOCATIONLIST_OFFSET))(this, value);
		}

		::System::Net::Security::EncryptionPolicy get_EncryptionPolicy()
		{
			return ((::System::Net::Security::EncryptionPolicy(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SETTINGSSECTIONINTERNAL_GET_ENCRYPTIONPOLICY_OFFSET))(this);
		}

		::System::Void set_EncryptionPolicy(::System::Net::Security::EncryptionPolicy value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Security::EncryptionPolicy))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SETTINGSSECTIONINTERNAL_SET_ENCRYPTIONPOLICY_OFFSET))(this, value);
		}

		::System::Boolean get_Ipv6Enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SETTINGSSECTIONINTERNAL_GET_IPV6ENABLED_OFFSET))(this);
		}
	};
}
