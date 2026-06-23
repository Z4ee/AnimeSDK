#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int MotionBlurMode_TypeDefinitionIndex = 5860;

	enum class MotionBlurMode : ::System::Int32
	{
		SceneOnly = 0,
		SceneOnlyCG = 1,
		CharacterOnlyCG = 2,
		SceneAndCharacterCG = 3,
	};
}
