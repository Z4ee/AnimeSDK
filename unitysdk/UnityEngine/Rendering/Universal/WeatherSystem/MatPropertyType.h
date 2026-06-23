#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal::WeatherSystem
{
	inline static constexpr unsigned int MatPropertyType_TypeDefinitionIndex = 27031;

	enum class MatPropertyType : ::System::Int32
	{
		Vector = 2,
		Color = 1,
		Float = 0,
	};
}
