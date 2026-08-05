#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Configuration/Provider/ProviderBase.h"

namespace System { class String; }
namespace System::Configuration { class SettingsContext; }
namespace System::Configuration { class SettingsPropertyCollection; }
namespace System::Configuration { class SettingsPropertyValueCollection; }

#define SYSTEM_CONFIGURATION_SETTINGSPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C87D0D0)

namespace System::Configuration
{
	inline static constexpr unsigned int SettingsProvider_TypeDefinitionIndex = 4075;

	class SettingsProvider : public ::System::Configuration::Provider::ProviderBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROVIDER__CTOR_OFFSET))(this);
		}
	};
}
