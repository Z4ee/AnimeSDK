#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int VolumetricFog_VolumetricFogMeshType_TypeDefinitionIndex = 29923;

	enum class VolumetricFog_VolumetricFogMeshType : ::System::Int32
	{
		CeilWindow = 0,
		WallWindow = 1,
		Cube = 2,
	};
}
