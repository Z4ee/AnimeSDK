#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI
{
	inline static constexpr unsigned int CanvasScaler_Unit_TypeDefinitionIndex = 5926;

	enum class CanvasScaler_Unit : ::System::Int32
	{
		Centimeters = 0,
		Millimeters = 1,
		Inches = 2,
		Points = 3,
		Picas = 4,
	};
}
