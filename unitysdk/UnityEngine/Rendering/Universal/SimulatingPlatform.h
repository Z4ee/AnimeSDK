#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int SimulatingPlatform_TypeDefinitionIndex = 26264;

	enum class SimulatingPlatform : ::System::UInt32
	{
		PS5 = 0x8,
		None = 0x0,
		HighEndPlatform = 0x29,
		ConsolePlatform = 0x28,
		XBOX = 0x20,
		IsMobile = 0x6,
		IOS = 0x2,
		PC = 0x1,
		Android = 0x4,
		Any = 0xFFFFFFFF,
		LowEndPlatform = 0x16,
		Switch = 0x10,
	};
}
