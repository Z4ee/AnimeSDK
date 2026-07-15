#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int Space_TypeDefinitionIndex = 4006;

	enum class Space : ::System::Int32
	{
		World = 0,
		Self = 1,
	};
}
