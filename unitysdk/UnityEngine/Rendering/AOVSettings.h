#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int AOVSettings_TypeDefinitionIndex = 4828;

	struct alignas(4) AOVSettings
	{
		::System::Boolean Enabled; // 0x10
		::System::Int32 MainLightRT; // 0x14
		::System::Int32 LocalLightRT; // 0x18
		::System::Int32 CharLocalLightRT; // 0x1C
	};
}
