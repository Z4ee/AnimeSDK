#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int DownSampleLevel_TypeDefinitionIndex = 27269;

	enum class DownSampleLevel : ::System::Int32
	{
		Half = 1,
		Quarter = 2,
		None = 0,
		Eighth = 3,
	};
}
