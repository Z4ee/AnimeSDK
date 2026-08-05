#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Configuration/ConfigurationElement.h"
#include "unitysdk/System/Net/Configuration/ProxyElement_AutoDetectValues.h"
#include "unitysdk/System/Net/Configuration/ProxyElement_BypassOnLocalValues.h"
#include "unitysdk/System/Net/Configuration/ProxyElement_UseSystemDefaultValues.h"

namespace System { class Uri; }
namespace System::Configuration { class ConfigurationPropertyCollection; }

#define SYSTEM_NET_CONFIGURATION_PROXYELEMENT_GET_AUTODETECT_OFFSET UNITYSDK_OFFSET(0x1D46CF80)
#define SYSTEM_NET_CONFIGURATION_PROXYELEMENT_GET_BYPASSONLOCAL_OFFSET UNITYSDK_OFFSET(0x1D46D000)
#define SYSTEM_NET_CONFIGURATION_PROXYELEMENT_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x1D46D080)
#define SYSTEM_NET_CONFIGURATION_PROXYELEMENT_GET_PROXYADDRESS_OFFSET UNITYSDK_OFFSET(0x1D46D0C0)
#define SYSTEM_NET_CONFIGURATION_PROXYELEMENT_GET_SCRIPTLOCATION_OFFSET UNITYSDK_OFFSET(0x1D46D140)
#define SYSTEM_NET_CONFIGURATION_PROXYELEMENT_GET_USESYSTEMDEFAULT_OFFSET UNITYSDK_OFFSET(0x1D46D1C0)
#define SYSTEM_NET_CONFIGURATION_PROXYELEMENT_SET_AUTODETECT_OFFSET UNITYSDK_OFFSET(0x1D46CFC0)
#define SYSTEM_NET_CONFIGURATION_PROXYELEMENT_SET_BYPASSONLOCAL_OFFSET UNITYSDK_OFFSET(0x1D46D040)
#define SYSTEM_NET_CONFIGURATION_PROXYELEMENT_SET_PROXYADDRESS_OFFSET UNITYSDK_OFFSET(0x1D46D100)
#define SYSTEM_NET_CONFIGURATION_PROXYELEMENT_SET_SCRIPTLOCATION_OFFSET UNITYSDK_OFFSET(0x1D46D180)
#define SYSTEM_NET_CONFIGURATION_PROXYELEMENT_SET_USESYSTEMDEFAULT_OFFSET UNITYSDK_OFFSET(0x1D46D200)
#define SYSTEM_NET_CONFIGURATION_PROXYELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D46CF40)

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
