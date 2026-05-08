#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int ClipType_TypeDefinitionIndex = 30870;

	enum class ClipType : ::System::Int32
	{
		Normal = 0,
		UnNormal = 1,
	};
}
