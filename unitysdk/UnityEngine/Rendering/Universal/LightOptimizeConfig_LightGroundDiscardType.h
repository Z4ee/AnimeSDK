#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int LightOptimizeConfig_LightGroundDiscardType_TypeDefinitionIndex = 26974;

	enum class LightOptimizeConfig_LightGroundDiscardType : ::System::Int32
	{
		Nothing = 0,
		UnderGroundLight = 1,
		UpGroundLight = 2,
	};
}
