#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int ECameraRenderPassMask_TypeDefinitionIndex = 5855;

	enum class ECameraRenderPassMask : ::System::UInt32
	{
		None = 0x0,
		Silhouette = 0x1,
		EnemyPointToneAndOutline = 0x2,
		CharacterStencilShadow = 0x4,
		SceneLocalLight = 0x8,
		All = 0xFFFFFFFF,
	};
}
