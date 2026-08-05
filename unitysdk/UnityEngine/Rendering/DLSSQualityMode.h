#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DLSSQualityMode_TypeDefinitionIndex = 6140;

	enum class DLSSQualityMode : ::System::Int32
	{
		Off = 0,
		MaxPerformance = 1,
		Balanced = 2,
		MaxQuality = 3,
		UltraPerformance = 4,
		UltraQuality = 5,
		DLAA = 6,
		Count = 7,
	};
}
