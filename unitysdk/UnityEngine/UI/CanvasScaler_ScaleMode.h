#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI
{
	inline static constexpr unsigned int CanvasScaler_ScaleMode_TypeDefinitionIndex = 5642;

	enum class CanvasScaler_ScaleMode : ::System::Int32
	{
		ConstantPixelSize = 0,
		ScaleWithScreenSize = 1,
		ConstantPhysicalSize = 2,
	};
}
