#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int UberPostCBSlot_TypeDefinitionIndex = 27014;

	enum class UberPostCBSlot : ::System::Int32
	{
		Base = 3,
		ColorCorrection = 0,
		ScreenEffectRandom = 2,
		ScreenEffectBase = 1,
	};
}
