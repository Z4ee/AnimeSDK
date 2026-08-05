#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int ReflectionProbeClearFlags_TypeDefinitionIndex = 6189;

	enum class ReflectionProbeClearFlags : ::System::Int32
	{
		Skybox = 1,
		SolidColor = 2,
	};
}
