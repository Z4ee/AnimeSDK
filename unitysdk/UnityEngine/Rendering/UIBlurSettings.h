#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int UIBlurSettings_TypeDefinitionIndex = 4825;

	struct alignas(4) UIBlurSettings
	{
		::System::Int32 Quality; // 0x10
		::System::Int32 VersionIndex; // 0x14
		::System::Single BlurFullScale; // 0x18
		::System::Single Brightness; // 0x1C
		::System::Single Alpha; // 0x20
		::System::Single BlurPartialScale; // 0x24
		::System::Single BlurPartialAlpha; // 0x28
		::System::Int32 RectCount; // 0x2C
		::System::Int32 CircleCount; // 0x30
		::UnityEngine::Vector4 BlurPartialParamsA0; // 0x34
		::UnityEngine::Vector4 BlurPartialParamsA1; // 0x44
		::UnityEngine::Vector4 BlurPartialParamsA2; // 0x54
		::UnityEngine::Vector4 BlurPartialParamsA3; // 0x64
		::UnityEngine::Vector4 BlurPartialParamsB0; // 0x74
		::UnityEngine::Vector4 BlurPartialParamsB1; // 0x84
		::UnityEngine::Vector4 BlurPartialParamsB2; // 0x94
		::UnityEngine::Vector4 BlurPartialParamsB3; // 0xA4
		::UnityEngine::Vector4 BlurPartialSmooth; // 0xB4
		::System::Boolean EnableVignette; // 0xC4
		::UnityEngine::Color VignetteColor; // 0xC8
		::UnityEngine::Vector2 VignetteCenter; // 0xD8
		::System::Single VignetteIntensity; // 0xE0
		::System::Single VignetteSmoothness; // 0xE4
		::System::Boolean VignetteRounded; // 0xE8
	};
}
