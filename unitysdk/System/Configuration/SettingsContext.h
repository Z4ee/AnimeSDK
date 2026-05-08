#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Hashtable.h"

#define SYSTEM_CONFIGURATION_SETTINGSCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x19E29A50)

namespace System::Configuration
{
	inline static constexpr unsigned int SettingsContext_TypeDefinitionIndex = 4073;

	class SettingsContext : public ::System::Collections::Hashtable
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
