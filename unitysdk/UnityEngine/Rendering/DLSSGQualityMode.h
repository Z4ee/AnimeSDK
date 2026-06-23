#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DLSSGQualityMode_TypeDefinitionIndex = 6139;

	enum class DLSSGQualityMode : ::System::Int32
	{
		Off = 0,
		On = 1,
		Auto = 2,
		Count = 3,
	};
}
