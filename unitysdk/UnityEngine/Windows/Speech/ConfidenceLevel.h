#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Windows::Speech
{
	inline static constexpr unsigned int ConfidenceLevel_TypeDefinitionIndex = 4428;

	enum class ConfidenceLevel : ::System::Int32
	{
		High = 0,
		Medium = 1,
		Low = 2,
		Rejected = 3,
	};
}
