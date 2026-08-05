#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int LightOptimizeConfig_LightGroundDiscardType_TypeDefinitionIndex = 27165;

	enum class LightOptimizeConfig_LightGroundDiscardType : ::System::Int32
	{
		UpGroundLight = 2,
		UnderGroundLight = 1,
		Nothing = 0,
	};
}
