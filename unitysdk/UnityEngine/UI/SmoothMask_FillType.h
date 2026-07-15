#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI
{
	inline static constexpr unsigned int SmoothMask_FillType_TypeDefinitionIndex = 6011;

	enum class SmoothMask_FillType : ::System::Int32
	{
		Unused = 0,
		Horizontal = 1,
		Vertical = 2,
		Radial90 = 3,
		Radial180 = 4,
		Radial360 = 5,
	};
}
