#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::NVIDIA
{
	inline static constexpr unsigned int DLSSCommandExecutionData_Textures_TypeDefinitionIndex = 5008;

	enum class DLSSCommandExecutionData_Textures : ::System::Int32
	{
		ColorInput = 0,
		ColorOutput = 1,
		Depth = 2,
		MotionVectors = 3,
		TransparencyMask = 4,
		ExposureTexture = 5,
		BiasColorMask = 6,
	};
}
