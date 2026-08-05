#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int DrawRainSplashParams_TypeDefinitionIndex = 5941;

	struct alignas(8) DrawRainSplashParams
	{
		::UnityEngine::Color RainSplashColor; // 0x10
		::UnityEngine::Vector4 RainSplashParam; // 0x20
		::UnityEngine::Vector2 RainSplashIntensityRange; // 0x30
		::System::Int32 RainSplashCount; // 0x38
		::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>* RainSplashTextureRTIDs; // 0x40
	};
}
