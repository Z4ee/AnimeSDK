#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int WaterInteractiveObjectType_TypeDefinitionIndex = 27482;

	enum class WaterInteractiveObjectType : ::System::Int32
	{
		StaticBoundary = 1,
		Count = 2,
		Dynamic = 0,
	};
}
