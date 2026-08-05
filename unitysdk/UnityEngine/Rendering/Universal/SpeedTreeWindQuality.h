#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int SpeedTreeWindQuality_TypeDefinitionIndex = 27587;

	enum class SpeedTreeWindQuality : ::System::Int32
	{
		Fastest = 1,
		Fast = 2,
		Better = 3,
		None = 0,
		Best = 4,
	};
}
