#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int PostLight_PostLightShape_TypeDefinitionIndex = 26928;

	enum class PostLight_PostLightShape : ::System::Int32
	{
		Box = 0,
		OneSizeBox = 2,
		Sphere = 1,
	};
}
