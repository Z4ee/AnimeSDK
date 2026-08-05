#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int UberPostCBSlot_TypeDefinitionIndex = 27592;

	enum class UberPostCBSlot : ::System::Int32
	{
		ColorCorrection = 0,
		Base = 3,
		ScreenEffectBase = 1,
		ScreenEffectRandom = 2,
	};
}
