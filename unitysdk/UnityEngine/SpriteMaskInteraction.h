#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int SpriteMaskInteraction_TypeDefinitionIndex = 4399;

	enum class SpriteMaskInteraction : ::System::Int32
	{
		None = 0,
		VisibleInsideMask = 1,
		VisibleOutsideMask = 2,
	};
}
