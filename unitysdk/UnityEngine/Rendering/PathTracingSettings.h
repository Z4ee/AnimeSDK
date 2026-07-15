#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rendering/PathTracingDebugMode.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int PathTracingSettings_TypeDefinitionIndex = 4811;

	struct alignas(4) PathTracingSettings
	{
		::System::Boolean Enable; // 0x10
		::System::Single SkyIndirectBoost; // 0x14
		::System::Single EmissionIndirectBoost; // 0x18
		::System::Single MainLightIndirectBoost; // 0x1C
		::System::Int32 MaxBounce; // 0x20
		::System::Single IndirectMinRoughnessClamp; // 0x24
		::System::Single IndirectContribClamp; // 0x28
		::UnityEngine::Rendering::PathTracingDebugMode DebugMode; // 0x2C
	};
}
