#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"

namespace UnityEngine::NAPRenderPipeline0 { class LightLoop_TileAndClusterData; }

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int LightLoop_BuildGPULightListResources_TypeDefinitionIndex = 6007;

	struct alignas(8) LightLoop_BuildGPULightListResources
	{
		::UnityEngine::NAPRenderPipeline0::LightLoop_TileAndClusterData* tileAndClusterData; // 0x10
		::UnityEngine::Rendering::RenderTargetIdentifier depthBuffer; // 0x18
	};
}
