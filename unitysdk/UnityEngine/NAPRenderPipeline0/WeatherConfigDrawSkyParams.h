#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"

namespace UnityEngine { class Cubemap; }
namespace UnityEngine { class Texture; }

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int WeatherConfigDrawSkyParams_TypeDefinitionIndex = 5941;

	struct alignas(8) WeatherConfigDrawSkyParams
	{
		::UnityEngine::Matrix4x4 daySkyParamsPartA; // 0x10
		::UnityEngine::Texture* cloudOnSky; // 0x50
		::UnityEngine::Texture* moonGlowOnSkyTex; // 0x58
		::UnityEngine::Texture* starMaskOnSkyTex; // 0x60
		::UnityEngine::Cubemap* starMapOnSkyTex; // 0x68
		::UnityEngine::Cubemap* galaxyOnSkyTex; // 0x70
		::UnityEngine::Texture* moonOnSkyTex; // 0x78
		::UnityEngine::Matrix4x4 nightSkyParamsPartA; // 0x80
		::UnityEngine::Matrix4x4 MoonAndGalaxyDir; // 0xC0
	};
}
