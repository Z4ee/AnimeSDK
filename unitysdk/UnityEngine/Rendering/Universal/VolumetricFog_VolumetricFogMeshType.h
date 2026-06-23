#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int VolumetricFog_VolumetricFogMeshType_TypeDefinitionIndex = 26586;

	enum class VolumetricFog_VolumetricFogMeshType : ::System::Int32
	{
		Cube = 2,
		CeilWindow = 0,
		WallWindow = 1,
	};
}
