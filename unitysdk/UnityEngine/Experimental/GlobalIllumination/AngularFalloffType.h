#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Experimental::GlobalIllumination
{
	inline static constexpr unsigned int AngularFalloffType_TypeDefinitionIndex = 6310;

	enum class AngularFalloffType : ::System::Byte
	{
		LUT = 0x0,
		AnalyticAndInnerAngle = 0x1,
	};
}
