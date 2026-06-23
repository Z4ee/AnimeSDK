#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int CGAvatarLightType_TypeDefinitionIndex = 26274;

	enum class CGAvatarLightType : ::System::UInt32
	{
		AttenuationOnly = 0x2,
		NoGradient = 0x1,
		Gradient = 0x0,
	};
}
