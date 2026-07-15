#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI
{
	inline static constexpr unsigned int GraphicRaycaster_BlockingObjects_TypeDefinitionIndex = 5881;

	enum class GraphicRaycaster_BlockingObjects : ::System::Int32
	{
		None = 0,
		TwoD = 1,
		ThreeD = 2,
		All = 3,
	};
}
