#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Configuration/ConfigurationElement.h"

namespace System { class String; }
namespace System::Configuration { class ConfigurationPropertyCollection; }

#define SYSTEM_NET_CONFIGURATION_SMTPSPECIFIEDPICKUPDIRECTORYELEMENT_GET_PICKUPDIRECTORYLOCATION_OFFSET UNITYSDK_OFFSET(0x1E978170)
#define SYSTEM_NET_CONFIGURATION_SMTPSPECIFIEDPICKUPDIRECTORYELEMENT_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x1E9781F0)
#define SYSTEM_NET_CONFIGURATION_SMTPSPECIFIEDPICKUPDIRECTORYELEMENT_SET_PICKUPDIRECTORYLOCATION_OFFSET UNITYSDK_OFFSET(0x1E9781B0)
#define SYSTEM_NET_CONFIGURATION_SMTPSPECIFIEDPICKUPDIRECTORYELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E978130)

namespace System::Net::Configuration
{
	inline static constexpr unsigned int SmtpSpecifiedPickupDirectoryElement_TypeDefinitionIndex = 4137;

	class SmtpSpecifiedPickupDirectoryElement : public ::System::Configuration::ConfigurationElement
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SMTPSPECIFIEDPICKUPDIRECTORYELEMENT__CTOR_OFFSET))(this);
		}

		::System::String* get_PickupDirectoryLocation()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SMTPSPECIFIEDPICKUPDIRECTORYELEMENT_GET_PICKUPDIRECTORYLOCATION_OFFSET))(this);
		}

		::System::Void set_PickupDirectoryLocation(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SMTPSPECIFIEDPICKUPDIRECTORYELEMENT_SET_PICKUPDIRECTORYLOCATION_OFFSET))(this, value);
		}

		::System::Configuration::ConfigurationPropertyCollection* get_Properties()
		{
			return ((::System::Configuration::ConfigurationPropertyCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SMTPSPECIFIEDPICKUPDIRECTORYELEMENT_GET_PROPERTIES_OFFSET))(this);
		}
	};
}
