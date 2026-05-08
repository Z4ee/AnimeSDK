#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class Texture; }

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int SceneColorGradingParams_TypeDefinitionIndex = 30189;

	struct alignas(8) SceneColorGradingParams
	{
		::System::Single saturation; // 0x10
		::System::Single gBufferOnlySaturation; // 0x14
		::System::Single contrast; // 0x18
		::System::Single customGamma; // 0x1C
		::UnityEngine::Vector3 lmsColorBalance; // 0x20
		::UnityEngine::Vector4 hueSatCon; // 0x2C
		::UnityEngine::Vector4 channelMixerR; // 0x3C
		::UnityEngine::Vector4 channelMixerG; // 0x4C
		::UnityEngine::Vector4 channelMixerB; // 0x5C
		::UnityEngine::Vector4 shadowsHighlightsLimits; // 0x6C
		::UnityEngine::Vector4 shadows; // 0x7C
		::UnityEngine::Vector4 midtones; // 0x8C
		::UnityEngine::Vector4 highlights; // 0x9C
		::UnityEngine::Vector4 lift; // 0xAC
		::UnityEngine::Vector4 gamma; // 0xBC
		::UnityEngine::Vector4 gain; // 0xCC
		::UnityEngine::Vector4 splitHighlights; // 0xDC
		::UnityEngine::Vector4 splitShadows; // 0xEC
		::UnityEngine::Color colorFilter; // 0xFC
		::System::Single desaturate; // 0x10C
		::UnityEngine::Texture* master; // 0x110
		::UnityEngine::Texture* red; // 0x118
		::UnityEngine::Texture* green; // 0x120
		::UnityEngine::Texture* blue; // 0x128
		::UnityEngine::Texture* hueVsHue; // 0x130
		::UnityEngine::Texture* hueVsSat; // 0x138
		::UnityEngine::Texture* lumVsSat; // 0x140
		::UnityEngine::Texture* satVsSat; // 0x148
	};
}
