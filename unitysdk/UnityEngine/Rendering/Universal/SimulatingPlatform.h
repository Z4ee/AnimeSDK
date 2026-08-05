#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int SimulatingPlatform_TypeDefinitionIndex = 27424;

	enum class SimulatingPlatform : ::System::UInt32
	{
		None = 0x0,
		ConsolePlatform = 0x28,
		Any = 0xFFFFFFFF,
		LowEndPlatform = 0x16,
		IsMobile = 0x6,
		PC = 0x1,
		HighEndPlatform = 0x29,
		Android = 0x4,
		Switch = 0x10,
		XBOX = 0x20,
		PS5 = 0x8,
		IOS = 0x2,
	};
}
