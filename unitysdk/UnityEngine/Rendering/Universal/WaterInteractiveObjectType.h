#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int WaterInteractiveObjectType_TypeDefinitionIndex = 29937;

	enum class WaterInteractiveObjectType : ::System::Int32
	{
		Dynamic = 0,
		StaticBoundary = 1,
		Count = 2,
	};
}
