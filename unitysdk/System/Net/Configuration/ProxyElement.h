#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Configuration/ConfigurationElement.h"
#include "unitysdk/System/Net/Configuration/ProxyElement_AutoDetectValues.h"
#include "unitysdk/System/Net/Configuration/ProxyElement_BypassOnLocalValues.h"
#include "unitysdk/System/Net/Configuration/ProxyElement_UseSystemDefaultValues.h"

namespace System { class Uri; }
namespace System::Configuration { class ConfigurationPropertyCollection; }

#define SYSTEM_NET_CONFIGURATION_PROXYELEMENT_GET_AUTODETECT_OFFSET UNITYSDK_OFFSET(0x1C074A00)
#define SYSTEM_NET_CONFIGURATION_PROXYELEMENT_GET_BYPASSONLOCAL_OFFSET UNITYSDK_OFFSET(0x1C074A80)
#define SYSTEM_NET_CONFIGURATION_PROXYELEMENT_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x1C074B00)
#define SYSTEM_NET_CONFIGURATION_PROXYELEMENT_GET_PROXYADDRESS_OFFSET UNITYSDK_OFFSET(0x1C074B40)
#define SYSTEM_NET_CONFIGURATION_PROXYELEMENT_GET_SCRIPTLOCATION_OFFSET UNITYSDK_OFFSET(0x1C074BC0)
#define SYSTEM_NET_CONFIGURATION_PROXYELEMENT_GET_USESYSTEMDEFAULT_OFFSET UNITYSDK_OFFSET(0x1C074C40)
#define SYSTEM_NET_CONFIGURATION_PROXYELEMENT_SET_AUTODETECT_OFFSET UNITYSDK_OFFSET(0x1C074A40)
#define SYSTEM_NET_CONFIGURATION_PROXYELEMENT_SET_BYPASSONLOCAL_OFFSET UNITYSDK_OFFSET(0x1C074AC0)
#define SYSTEM_NET_CONFIGURATION_PROXYELEMENT_SET_PROXYADDRESS_OFFSET UNITYSDK_OFFSET(0x1C074B80)
#define SYSTEM_NET_CONFIGURATION_PROXYELEMENT_SET_SCRIPTLOCATION_OFFSET UNITYSDK_OFFSET(0x1C074C00)
#define SYSTEM_NET_CONFIGURATION_PROXYELEMENT_SET_USESYSTEMDEFAULT_OFFSET UNITYSDK_OFFSET(0x1C074C80)
#define SYSTEM_NET_CONFIGURATION_PROXYELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0749C0)

namespace System::Net::Configuration
{
	inline static constexpr unsigned int ProxyElement_TypeDefinitionIndex = 4124;

	class ProxyElement : public ::System::Configuration::ConfigurationElement
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_PROXYELEMENT__CTOR_OFFSET))(this);
		}

		::System::Net::Configuration::ProxyElement_AutoDetectValues get_AutoDetect()
		{
			return ((::System::Net::Configuration::ProxyElement_AutoDetectValues(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_PROXYELEMENT_GET_AUTODETECT_OFFSET))(this);
		}

		::System::Void set_AutoDetect(::System::Net::Configuration::ProxyElement_AutoDetectValues value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Configuration::ProxyElement_AutoDetectValues))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_PROXYELEMENT_SET_AUTODETECT_OFFSET))(this, value);
		}

		::System::Net::Configuration::ProxyElement_BypassOnLocalValues get_BypassOnLocal()
		{
			return ((::System::Net::Configuration::ProxyElement_BypassOnLocalValues(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_PROXYELEMENT_GET_BYPASSONLOCAL_OFFSET))(this);
		}

		::System::Void set_BypassOnLocal(::System::Net::Configuration::ProxyElement_BypassOnLocalValues value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Configuration::ProxyElement_BypassOnLocalValues))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_PROXYELEMENT_SET_BYPASSONLOCAL_OFFSET))(this, value);
		}

		::System::Configuration::ConfigurationPropertyCollection* get_Properties()
		{
			return ((::System::Configuration::ConfigurationPropertyCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_PROXYELEMENT_GET_PROPERTIES_OFFSET))(this);
		}

		::System::Uri* get_ProxyAddress()
		{
			return ((::System::Uri*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_PROXYELEMENT_GET_PROXYADDRESS_OFFSET))(this);
		}

		::System::Void set_ProxyAddress(::System::Uri* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_PROXYELEMENT_SET_PROXYADDRESS_OFFSET))(this, value);
		}

		::System::Uri* get_ScriptLocation()
		{
			return ((::System::Uri*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_PROXYELEMENT_GET_SCRIPTLOCATION_OFFSET))(this);
		}

		::System::Void set_ScriptLocation(::System::Uri* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_PROXYELEMENT_SET_SCRIPTLOCATION_OFFSET))(this, value);
		}

		::System::Net::Configuration::ProxyElement_UseSystemDefaultValues get_UseSystemDefault()
		{
			return ((::System::Net::Configuration::ProxyElement_UseSystemDefaultValues(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_PROXYELEMENT_GET_USESYSTEMDEFAULT_OFFSET))(this);
		}

		::System::Void set_UseSystemDefault(::System::Net::Configuration::ProxyElement_UseSystemDefaultValues value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Configuration::ProxyElement_UseSystemDefaultValues))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_PROXYELEMENT_SET_USESYSTEMDEFAULT_OFFSET))(this, value);
		}
	};
}
