#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Rendering/PcssSampleQuality.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int PcssSettings_TypeDefinitionIndex = 4869;

	struct alignas(4) PcssSettings
	{
		::System::Boolean enable; // 0x10
		::System::Single searchRadiusInMeters; // 0x14
		::System::Single filterRadiusInMeters; // 0x18
		::System::Single transitionStartDistance; // 0x1C
		::System::Single transitionEndDistance; // 0x20
		::System::Boolean enablePenumbraRamp; // 0x24
		::UnityEngine::Color rampColor0; // 0x28
		::UnityEngine::Color rampColor1; // 0x38
		::System::Single rampIntensity; // 0x48
		::System::Single rampSizeScale; // 0x4C
		::System::Single resolutionScale; // 0x50
		::UnityEngine::Rendering::PcssSampleQuality sampleQuality; // 0x54
	};
}
