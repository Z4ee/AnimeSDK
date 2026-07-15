#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int CRPShadowFilterMode_TypeDefinitionIndex = 4867;

	enum class CRPShadowFilterMode : ::System::Int32
	{
		PCF2x2 = 0,
		PCF3x3_Tent = 1,
		PCF5x5_Tent = 2,
		PCF7x7_Tent = 3,
		PCFNone = 4,
	};
}
