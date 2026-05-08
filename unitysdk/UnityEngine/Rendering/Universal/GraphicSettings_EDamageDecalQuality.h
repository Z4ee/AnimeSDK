#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int GraphicSettings_EDamageDecalQuality_TypeDefinitionIndex = 30007;

	enum class GraphicSettings_EDamageDecalQuality : ::System::Int32
	{
		High = 0,
		Medium = 1,
		Low = 2,
		Off = 3,
	};
}
