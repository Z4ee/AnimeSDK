#pragma once
#include "unitysdk/unitysdk.h"

namespace miHoYoEmotion
{
	inline static constexpr unsigned int EyeKey_TickFrom_TypeDefinitionIndex = 39364;

	enum class EyeKey_TickFrom : ::System::Byte
	{
		FromEntity = 0x1,
		FromLateUpdate = 0x0,
	};
}
