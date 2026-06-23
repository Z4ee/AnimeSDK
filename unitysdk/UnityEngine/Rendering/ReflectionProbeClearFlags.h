#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int ReflectionProbeClearFlags_TypeDefinitionIndex = 6185;

	enum class ReflectionProbeClearFlags : ::System::Int32
	{
		Skybox = 1,
		SolidColor = 2,
	};
}
