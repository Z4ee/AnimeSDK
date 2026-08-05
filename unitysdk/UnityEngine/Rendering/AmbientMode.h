#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int AmbientMode_TypeDefinitionIndex = 6171;

	enum class AmbientMode : ::System::Int32
	{
		Skybox = 0,
		Trilight = 1,
		Flat = 3,
		Custom = 4,
	};
}
