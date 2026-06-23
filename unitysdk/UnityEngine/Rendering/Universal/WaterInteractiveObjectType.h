#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int WaterInteractiveObjectType_TypeDefinitionIndex = 26483;

	enum class WaterInteractiveObjectType : ::System::Int32
	{
		Dynamic = 0,
		Count = 2,
		StaticBoundary = 1,
	};
}
