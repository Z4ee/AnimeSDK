#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int CameraOutput_TypeDefinitionIndex = 27253;

	enum class CameraOutput : ::System::Int32
	{
		Camera = 0,
		Texture = 1,
		Screen = 0,
	};
}
