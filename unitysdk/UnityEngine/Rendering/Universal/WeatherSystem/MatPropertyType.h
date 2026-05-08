#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal::WeatherSystem
{
	inline static constexpr unsigned int MatPropertyType_TypeDefinitionIndex = 30284;

	enum class MatPropertyType : ::System::Int32
	{
		Float = 0,
		Color = 1,
		Vector = 2,
	};
}
