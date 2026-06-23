#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int AddLightMode_TypeDefinitionIndex = 27110;

	enum class AddLightMode : ::System::UInt32
	{
		Ambient = 0x2,
		Toon = 0x3,
		Blend = 0x1,
	};
}
