#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int ArrowDir_TypeDefinitionIndex = 32354;

	enum class ArrowDir : ::System::Byte
	{
		LeftTop = 0x0,
		RightTop = 0x1,
		LeftUp = 0x2,
		LeftDown = 0x3,
		LeftBottom = 0x4,
		RightBottom = 0x5,
		RightUp = 0x6,
		RightDown = 0x7,
		Count = 0x8,
	};
}
