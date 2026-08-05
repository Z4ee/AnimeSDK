#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI
{
	inline static constexpr unsigned int CanvasScaler_ScaleMode_TypeDefinitionIndex = 19237;

	enum class CanvasScaler_ScaleMode : ::System::Int32
	{
		ConstantPixelSize = 0,
		ScaleWithScreenSize = 1,
		ConstantPhysicalSize = 2,
	};
}
