#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int RuntimePostLight_PostLightShape_TypeDefinitionIndex = 27309;

	enum class RuntimePostLight_PostLightShape : ::System::Int32
	{
		OneSizeBox = 2,
		Box = 0,
		Sphere = 1,
	};
}
