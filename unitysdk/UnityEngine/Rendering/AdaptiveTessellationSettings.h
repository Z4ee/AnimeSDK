#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rendering/AdaptiveTessellationDrawControl.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int AdaptiveTessellationSettings_TypeDefinitionIndex = 4847;

	struct alignas(4) AdaptiveTessellationSettings
	{
		::System::Boolean ForceDisable; // 0x10
		::System::Boolean ForceUsingTexture; // 0x11
		::System::Boolean EnableCulling; // 0x12
		::System::Boolean ForceComplexDicingPattern; // 0x13
		::System::Boolean ForceWireframe; // 0x14
		::System::Boolean EnableWaterSSR; // 0x15
		::UnityEngine::Rendering::AdaptiveTessellationDrawControl DrawControl; // 0x18
	};
}
