#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int CGAvatarLightType_TypeDefinitionIndex = 30008;

	enum class CGAvatarLightType : ::System::UInt32
	{
		Gradient = 0x0,
		NoGradient = 0x1,
		AttenuationOnly = 0x2,
	};
}
