#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int PostLight_PostLightShape_TypeDefinitionIndex = 26844;

	enum class PostLight_PostLightShape : ::System::Int32
	{
		Sphere = 1,
		Box = 0,
		OneSizeBox = 2,
	};
}
