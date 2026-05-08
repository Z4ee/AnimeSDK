#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int SimulatingPlatform_TypeDefinitionIndex = 29997;

	enum class SimulatingPlatform : ::System::UInt32
	{
		None = 0x0,
		Any = 0xFFFFFFFF,
		PC = 0x1,
		IOS = 0x2,
		Android = 0x4,
		PS5 = 0x8,
		Switch = 0x10,
		XBOX = 0x20,
		IsMobile = 0x6,
		LowEndPlatform = 0x16,
		HighEndPlatform = 0x29,
		ConsolePlatform = 0x28,
	};
}
