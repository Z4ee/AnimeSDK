#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Configuration/ConfigurationSection.h"
#include "unitysdk/System/Net/Mail/SmtpDeliveryFormat.h"
#include "unitysdk/System/Net/Mail/SmtpDeliveryMethod.h"

namespace System { class String; }
namespace System::Configuration { class ConfigurationPropertyCollection; }
namespace System::Net::Configuration { class SmtpNetworkElement; }
namespace System::Net::Configuration { class SmtpSpecifiedPickupDirectoryElement; }

#define SYSTEM_NET_CONFIGURATION_SMTPSECTION_GET_DELIVERYFORMAT_OFFSET UNITYSDK_OFFSET(0x1C701C70)
#define SYSTEM_NET_CONFIGURATION_SMTPSECTION_GET_DELIVERYMETHOD_OFFSET UNITYSDK_OFFSET(0x1C701CF0)
#define SYSTEM_NET_CONFIGURATION_SMTPSECTION_GET_FROM_OFFSET UNITYSDK_OFFSET(0x1C701D70)
#define SYSTEM_NET_CONFIGURATION_SMTPSECTION_GET_NETWORK_OFFSET UNITYSDK_OFFSET(0x1C701DF0)
#define SYSTEM_NET_CONFIGURATION_SMTPSECTION_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x1C701E30)
#define SYSTEM_NET_CONFIGURATION_SMTPSECTION_GET_SPECIFIEDPICKUPDIRECTORY_OFFSET UNITYSDK_OFFSET(0x1C701E70)
#define SYSTEM_NET_CONFIGURATION_SMTPSECTION_SET_DELIVERYFORMAT_OFFSET UNITYSDK_OFFSET(0x1C701CB0)
#define SYSTEM_NET_CONFIGURATION_SMTPSECTION_SET_DELIVERYMETHOD_OFFSET UNITYSDK_OFFSET(0x1C701D30)
#define SYSTEM_NET_CONFIGURATION_SMTPSECTION_SET_FROM_OFFSET UNITYSDK_OFFSET(0x1C701DB0)
#define SYSTEM_NET_CONFIGURATION_SMTPSECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C701C30)

namespace System::Net::Configuration
{
	inline static constexpr unsigned int SmtpSection_TypeDefinitionIndex = 4135;

	class SmtpSection : public ::System::Configuration::ConfigurationSection
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SMTPSECTION__CTOR_OFFSET))(this);
		}

		::System::Net::Mail::SmtpDeliveryFormat get_DeliveryFormat()
		{
			return ((::System::Net::Mail::SmtpDeliveryFormat(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SMTPSECTION_GET_DELIVERYFORMAT_OFFSET))(this);
		}

		::System::Void set_DeliveryFormat(::System::Net::Mail::SmtpDeliveryFormat value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Mail::SmtpDeliveryFormat))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SMTPSECTION_SET_DELIVERYFORMAT_OFFSET))(this, value);
		}

		::System::Net::Mail::SmtpDeliveryMethod get_DeliveryMethod()
		{
			return ((::System::Net::Mail::SmtpDeliveryMethod(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SMTPSECTION_GET_DELIVERYMETHOD_OFFSET))(this);
		}

		::System::Void set_DeliveryMethod(::System::Net::Mail::SmtpDeliveryMethod value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Mail::SmtpDeliveryMethod))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SMTPSECTION_SET_DELIVERYMETHOD_OFFSET))(this, value);
		}

		::System::String* get_From()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SMTPSECTION_GET_FROM_OFFSET))(this);
		}

		::System::Void set_From(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SMTPSECTION_SET_FROM_OFFSET))(this, value);
		}

		::System::Net::Configuration::SmtpNetworkElement* get_Network()
		{
			return ((::System::Net::Configuration::SmtpNetworkElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SMTPSECTION_GET_NETWORK_OFFSET))(this);
		}

		::System::Configuration::ConfigurationPropertyCollection* get_Properties()
		{
			return ((::System::Configuration::ConfigurationPropertyCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SMTPSECTION_GET_PROPERTIES_OFFSET))(this);
		}

		::System::Net::Configuration::SmtpSpecifiedPickupDirectoryElement* get_SpecifiedPickupDirectory()
		{
			return ((::System::Net::Configuration::SmtpSpecifiedPickupDirectoryElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SMTPSECTION_GET_SPECIFIEDPICKUPDIRECTORY_OFFSET))(this);
		}
	};
}
