#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int UIBlurSettings_TypeDefinitionIndex = 4638;

	struct alignas(4) UIBlurSettings
	{
		::System::Int32 Quality; // 0x10
		::System::Int32 VersionIndex; // 0x14
		::System::Single BlurFullScale; // 0x18
		::System::Single Brightness; // 0x1C
		::System::Single Alpha; // 0x20
		::System::Boolean EnableBlurPartial; // 0x24
		::System::Single BlurPartialScale; // 0x28
		::System::Single BlurPartialAlpha; // 0x2C
		::System::Int32 RectCount; // 0x30
		::System::Int32 CircleCount; // 0x34
		::UnityEngine::Vector4 BlurPartialParamsA0; // 0x38
		::UnityEngine::Vector4 BlurPartialParamsA1; // 0x48
		::UnityEngine::Vector4 BlurPartialParamsA2; // 0x58
		::UnityEngine::Vector4 BlurPartialParamsA3; // 0x68
		::UnityEngine::Vector4 BlurPartialParamsB0; // 0x78
		::UnityEngine::Vector4 BlurPartialParamsB1; // 0x88
		::UnityEngine::Vector4 BlurPartialParamsB2; // 0x98
		::UnityEngine::Vector4 BlurPartialParamsB3; // 0xA8
		::UnityEngine::Vector4 BlurPartialSmooth; // 0xB8
		::System::Boolean EnableVignette; // 0xC8
		::UnityEngine::Color VignetteColor; // 0xCC
		::UnityEngine::Vector2 VignetteCenter; // 0xDC
		::System::Single VignetteIntensity; // 0xE4
		::System::Single VignetteSmoothness; // 0xE8
		::System::Boolean VignetteRounded; // 0xEC
	};
}
