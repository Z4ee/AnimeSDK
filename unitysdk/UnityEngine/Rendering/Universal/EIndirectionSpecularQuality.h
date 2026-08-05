#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int EIndirectionSpecularQuality_TypeDefinitionIndex = 27909;

	enum class EIndirectionSpecularQuality : ::System::Int32
	{
		CubeMapWithBlend = 1,
		SingleCubeMap = 0,
	};
}
