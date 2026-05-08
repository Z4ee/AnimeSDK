#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int RuntimePostLight_PostLightShape_TypeDefinitionIndex = 30361;

	enum class RuntimePostLight_PostLightShape : ::System::Int32
	{
		Box = 0,
		Sphere = 1,
		OneSizeBox = 2,
	};
}
