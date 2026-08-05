#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Configuration/ConfigurationSectionGroup.h"

namespace System::Net::Configuration { class SmtpSection; }

#define SYSTEM_NET_CONFIGURATION_MAILSETTINGSSECTIONGROUP_GET_SMTP_OFFSET UNITYSDK_OFFSET(0x1CC16030)
#define SYSTEM_NET_CONFIGURATION_MAILSETTINGSSECTIONGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC15FF0)

namespace System::Net::Configuration
{
	inline static constexpr unsigned int MailSettingsSectionGroup_TypeDefinitionIndex = 4134;

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
