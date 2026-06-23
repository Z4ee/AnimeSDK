#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int CameraOutput_TypeDefinitionIndex = 27266;

	enum class CameraOutput : ::System::Int32
	{
		Screen = 0,
		Camera = 0,
		Texture = 1,
	};
}
