#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Profiling
{
	inline static constexpr unsigned int RendererType_TypeDefinitionIndex = 4501;

	enum class RendererType : ::System::Int32
	{
		kRendererUnknown = 0,
		kRendererMesh = 1,
		kRendererSkinnedMesh = 2,
		kRendererSprite = 3,
		kRendererTilemap = 4,
		kRendererTrail = 5,
		kRendererLine = 6,
		kRendererParticleSystem = 7,
		kRendererBillboard = 8,
		kRendererSpriteMask = 9,
		kRendererSpriteShape = 10,
		kRendererVFX = 11,
		kVolumetricLightMgr = 12,
		kBatchAnimationRender = 13,
		kRendererGPUParticles = 14,
		kRendererIntermediate = 15,
		kRendererBatchRendererGroup = 16,
		kRendererSpriteGroup = 17,
		kRendererQuadTreeNodeBatched = 18,
		kRendererIntermediateInstancedBatched = 19,
		kRendererTypeCount = 20,
		kRendererTypeBitSize = 6,
	};
}
