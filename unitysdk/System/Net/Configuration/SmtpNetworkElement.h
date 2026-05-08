#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Configuration/ConfigurationElement.h"

namespace System { class String; }
namespace System::Configuration { class ConfigurationPropertyCollection; }

#define SYSTEM_NET_CONFIGURATION_SMTPNETWORKELEMENT_GET_CLIENTDOMAIN_OFFSET UNITYSDK_OFFSET(0x1A573C80)
#define SYSTEM_NET_CONFIGURATION_SMTPNETWORKELEMENT_GET_DEFAULTCREDENTIALS_OFFSET UNITYSDK_OFFSET(0x1A573D00)
#define SYSTEM_NET_CONFIGURATION_SMTPNETWORKELEMENT_GET_ENABLESSL_OFFSET UNITYSDK_OFFSET(0x1A573D80)
#define SYSTEM_NET_CONFIGURATION_SMTPNETWORKELEMENT_GET_HOST_OFFSET UNITYSDK_OFFSET(0x1A573E00)
#define SYSTEM_NET_CONFIGURATION_SMTPNETWORKELEMENT_GET_PASSWORD_OFFSET UNITYSDK_OFFSET(0x1A573E80)
#define SYSTEM_NET_CONFIGURATION_SMTPNETWORKELEMENT_GET_PORT_OFFSET UNITYSDK_OFFSET(0x1A573F00)
#define SYSTEM_NET_CONFIGURATION_SMTPNETWORKELEMENT_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x1A573F80)
#define SYSTEM_NET_CONFIGURATION_SMTPNETWORKELEMENT_GET_TARGETNAME_OFFSET UNITYSDK_OFFSET(0x1A573FC0)
#define SYSTEM_NET_CONFIGURATION_SMTPNETWORKELEMENT_GET_USERNAME_OFFSET UNITYSDK_OFFSET(0x1A574040)
#define SYSTEM_NET_CONFIGURATION_SMTPNETWORKELEMENT_POSTDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1A5740C0)
#define SYSTEM_NET_CONFIGURATION_SMTPNETWORKELEMENT_SET_CLIENTDOMAIN_OFFSET UNITYSDK_OFFSET(0x1A573CC0)
#define SYSTEM_NET_CONFIGURATION_SMTPNETWORKELEMENT_SET_DEFAULTCREDENTIALS_OFFSET UNITYSDK_OFFSET(0x1A573D40)
#define SYSTEM_NET_CONFIGURATION_SMTPNETWORKELEMENT_SET_ENABLESSL_OFFSET UNITYSDK_OFFSET(0x1A573DC0)
#define SYSTEM_NET_CONFIGURATION_SMTPNETWORKELEMENT_SET_HOST_OFFSET UNITYSDK_OFFSET(0x1A573E40)
#define SYSTEM_NET_CONFIGURATION_SMTPNETWORKELEMENT_SET_PASSWORD_OFFSET UNITYSDK_OFFSET(0x1A573EC0)
#define SYSTEM_NET_CONFIGURATION_SMTPNETWORKELEMENT_SET_PORT_OFFSET UNITYSDK_OFFSET(0x1A573F40)
#define SYSTEM_NET_CONFIGURATION_SMTPNETWORKELEMENT_SET_TARGETNAME_OFFSET UNITYSDK_OFFSET(0x1A574000)
#define SYSTEM_NET_CONFIGURATION_SMTPNETWORKELEMENT_SET_USERNAME_OFFSET UNITYSDK_OFFSET(0x1A574080)
#define SYSTEM_NET_CONFIGURATION_SMTPNETWORKELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A573C40)

namespace System::Net::Configuration
{
	inline static constexpr unsigned int SmtpNetworkElement_TypeDefinitionIndex = 4137;

	class SmtpNetworkElement : public ::System::Configuration::ConfigurationElement
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SMTPNETWORKELEMENT__CTOR_OFFSET))(this);
		}

		::System::String* get_ClientDomain()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SMTPNETWORKELEMENT_GET_CLIENTDOMAIN_OFFSET))(this);
		}

		::System::Void set_ClientDomain(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SMTPNETWORKELEMENT_SET_CLIENTDOMAIN_OFFSET))(this, value);
		}

		::System::Boolean get_DefaultCredentials()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SMTPNETWORKELEMENT_GET_DEFAULTCREDENTIALS_OFFSET))(this);
		}

		::System::Void set_DefaultCredentials(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SMTPNETWORKELEMENT_SET_DEFAULTCREDENTIALS_OFFSET))(this, value);
		}

		::System::Boolean get_EnableSsl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SMTPNETWORKELEMENT_GET_ENABLESSL_OFFSET))(this);
		}

		::System::Void set_EnableSsl(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SMTPNETWORKELEMENT_SET_ENABLESSL_OFFSET))(this, value);
		}

		::System::String* get_Host()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SMTPNETWORKELEMENT_GET_HOST_OFFSET))(this);
		}

		::System::Void set_Host(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SMTPNETWORKELEMENT_SET_HOST_OFFSET))(this, value);
		}

		::System::String* get_Password()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SMTPNETWORKELEMENT_GET_PASSWORD_OFFSET))(this);
		}

		::System::Void set_Password(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SMTPNETWORKELEMENT_SET_PASSWORD_OFFSET))(this, value);
		}

		::System::Int32 get_Port()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SMTPNETWORKELEMENT_GET_PORT_OFFSET))(this);
		}

		::System::Void set_Port(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SMTPNETWORKELEMENT_SET_PORT_OFFSET))(this, value);
		}

		::System::Configuration::ConfigurationPropertyCollection* get_Properties()
		{
			return ((::System::Configuration::ConfigurationPropertyCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SMTPNETWORKELEMENT_GET_PROPERTIES_OFFSET))(this);
		}

		::System::String* get_TargetName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SMTPNETWORKELEMENT_GET_TARGETNAME_OFFSET))(this);
		}

		::System::Void set_TargetName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SMTPNETWORKELEMENT_SET_TARGETNAME_OFFSET))(this, value);
		}

		::System::String* get_UserName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SMTPNETWORKELEMENT_GET_USERNAME_OFFSET))(this);
		}

		::System::Void set_UserName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SMTPNETWORKELEMENT_SET_USERNAME_OFFSET))(this, value);
		}

		::System::Void PostDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SMTPNETWORKELEMENT_POSTDESERIALIZE_OFFSET))(this);
		}
	};
}
