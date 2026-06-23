#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int DrawRainDropParams_TypeDefinitionIndex = 5938;

	struct alignas(8) DrawRainDropParams
	{
		::UnityEngine::Vector4 RainDropEmitParam2; // 0x10
		::UnityEngine::Vector4 RainDropSizeRangesGlobal; // 0x20
		::UnityEngine::Vector4 RainDropMinMaxHeightInnerRadiusIsEasymode; // 0x30
		::UnityEngine::Color RainDropColor; // 0x40
		::UnityEngine::Rendering::RenderTargetIdentifier RainDropTexture; // 0x50
		::UnityEngine::Rendering::RenderTargetIdentifier RainSplashTexture; // 0x78
		::System::Int32 RainDropBatchCount; // 0xA0
	};
}
