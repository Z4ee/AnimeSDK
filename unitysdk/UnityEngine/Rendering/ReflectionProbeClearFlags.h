#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int ReflectionProbeClearFlags_TypeDefinitionIndex = 4702;

	enum class ReflectionProbeClearFlags : ::System::Int32
	{
		Skybox = 1,
		SolidColor = 2,
	};
}
