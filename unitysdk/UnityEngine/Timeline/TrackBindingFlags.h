#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int TrackBindingFlags_TypeDefinitionIndex = 33040;

	enum class TrackBindingFlags : ::System::Int32
	{
		None = 0,
		AllowCreateComponent = 1,
		All = 1,
	};
}
