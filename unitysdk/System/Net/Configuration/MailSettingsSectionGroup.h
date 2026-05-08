#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Configuration/ConfigurationSectionGroup.h"

namespace System::Net::Configuration { class SmtpSection; }

#define SYSTEM_NET_CONFIGURATION_MAILSETTINGSSECTIONGROUP_GET_SMTP_OFFSET UNITYSDK_OFFSET(0x193B6600)
#define SYSTEM_NET_CONFIGURATION_MAILSETTINGSSECTIONGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x193B65C0)

namespace System::Net::Configuration
{
	inline static constexpr unsigned int MailSettingsSectionGroup_TypeDefinitionIndex = 4135;

	class MailSettingsSectionGroup : public ::System::Configuration::ConfigurationSectionGroup
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_MAILSETTINGSSECTIONGROUP__CTOR_OFFSET))(this);
		}

		::System::Net::Configuration::SmtpSection* get_Smtp()
		{
			return ((::System::Net::Configuration::SmtpSection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_MAILSETTINGSSECTIONGROUP_GET_SMTP_OFFSET))(this);
		}
	};
}
