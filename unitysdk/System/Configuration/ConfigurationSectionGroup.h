#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_CONFIGURATION_CONFIGURATIONSECTIONGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1C55D1D0)

namespace System::Configuration
{
	inline static constexpr unsigned int ConfigurationSectionGroup_TypeDefinitionIndex = 2515;

	class ConfigurationSectionGroup : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGURATIONSECTIONGROUP__CTOR_OFFSET))(this);
		}
	};
}
