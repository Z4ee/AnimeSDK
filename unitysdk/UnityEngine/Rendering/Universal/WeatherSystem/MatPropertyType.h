#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal::WeatherSystem
{
	inline static constexpr unsigned int MatPropertyType_TypeDefinitionIndex = 26768;

	enum class MatPropertyType : ::System::Int32
	{
		Color = 1,
		Float = 0,
		Vector = 2,
	};
}
