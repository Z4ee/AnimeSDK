#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int CameraClearFlags_TypeDefinitionIndex = 4151;

	enum class CameraClearFlags : ::System::Int32
	{
		Skybox = 1,
		Color = 2,
		SolidColor = 2,
		Depth = 3,
		Nothing = 4,
	};
}
