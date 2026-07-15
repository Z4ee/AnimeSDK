#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int UVChannelFlags_TypeDefinitionIndex = 5800;

	enum class UVChannelFlags : ::System::Int32
	{
		UV0 = 1,
		UV1 = 2,
		UV2 = 4,
		UV3 = 8,
	};
}
