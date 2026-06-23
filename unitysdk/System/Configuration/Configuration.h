#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_CONFIGURATION_CONFIGURATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E88C2B0)

namespace System::Configuration
{
	inline static constexpr unsigned int Configuration_TypeDefinitionIndex = 2509;

	class Configuration : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGURATION__CTOR_OFFSET))(this);
		}
	};
}
