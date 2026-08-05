#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class Texture2D; }

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int GPUGrassWindConfig_TypeDefinitionIndex = 27764;

	struct alignas(8) GPUGrassWindConfig
	{
		::System::Single globalWindFacingAngle; // 0x10
		::System::Single globalWindFacingCont; // 0x14
		::System::Single windRotateAmount; // 0x18
		::UnityEngine::Vector2 windSpeedRange; // 0x1C
		::UnityEngine::Vector2 windScaleRange; // 0x24
		::System::Single bounceAmplitude; // 0x2C
		::System::Single windTexContrast; // 0x30
		::UnityEngine::Texture2D* windTex; // 0x38
		::System::Single windControl; // 0x40
	};
}
