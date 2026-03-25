#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Pooled
{
	inline static constexpr unsigned int ClearMode_TypeDefinitionIndex = 4328;

	enum class ClearMode : ::System::Int32
	{
		Auto = 0,
		Always = 1,
		Never = 2,
	};
}
