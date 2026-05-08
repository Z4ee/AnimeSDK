#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int AddLightMode_TypeDefinitionIndex = 30082;

	enum class AddLightMode : ::System::UInt32
	{
		Blend = 0x1,
		Ambient = 0x2,
		Toon = 0x3,
	};
}
