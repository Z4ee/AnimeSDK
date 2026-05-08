#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Hashtable.h"

#define SYSTEM_CONFIGURATION_SETTINGSATTRIBUTEDICTIONARY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1921B3D0)
#define SYSTEM_CONFIGURATION_SETTINGSATTRIBUTEDICTIONARY__CTOR_OFFSET UNITYSDK_OFFSET(0x1921B390)

namespace System::Configuration
{
	inline static constexpr unsigned int SettingsAttributeDictionary_TypeDefinitionIndex = 4080;

	class SettingsAttributeDictionary : public ::System::Collections::Hashtable
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSATTRIBUTEDICTIONARY__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Configuration::SettingsAttributeDictionary* attributes)
		{
			return ((::System::Void(*)(::PVOID, ::System::Configuration::SettingsAttributeDictionary*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSATTRIBUTEDICTIONARY__CTOR_1_OFFSET))(this, attributes);
		}
	};
}
