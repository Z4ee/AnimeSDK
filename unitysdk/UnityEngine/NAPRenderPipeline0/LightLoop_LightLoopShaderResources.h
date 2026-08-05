#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class ComputeShader; }

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int LightLoop_LightLoopShaderResources_TypeDefinitionIndex = 6004;

	struct alignas(8) LightLoop_LightLoopShaderResources
	{
		::UnityEngine::ComputeShader* clearLightListsCS; // 0x10
		::UnityEngine::ComputeShader* buildScreenAABBCS; // 0x18
		::UnityEngine::ComputeShader* buildPerTileLightListCS; // 0x20
		::UnityEngine::ComputeShader* buildPerBigTileLightListCS; // 0x28
		::UnityEngine::ComputeShader* buildPerVoxelLightListCS; // 0x30
		::UnityEngine::ComputeShader* buildWorldGridLightListShaderCS; // 0x38
	};
}
