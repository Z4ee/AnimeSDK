#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int EIndirectionSpecularQuality_TypeDefinitionIndex = 29821;

	enum class EIndirectionSpecularQuality : ::System::Int32
	{
		SingleCubeMap = 0,
		CubeMapWithBlend = 1,
	};
}
