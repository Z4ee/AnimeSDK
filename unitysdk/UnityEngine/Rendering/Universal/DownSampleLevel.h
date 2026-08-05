#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int DownSampleLevel_TypeDefinitionIndex = 27881;

	enum class DownSampleLevel : ::System::Int32
	{
		Eighth = 3,
		None = 0,
		Quarter = 2,
		Half = 1,
	};
}
