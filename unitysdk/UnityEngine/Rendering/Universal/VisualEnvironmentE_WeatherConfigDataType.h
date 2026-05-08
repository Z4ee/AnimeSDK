#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int VisualEnvironmentE_WeatherConfigDataType_TypeDefinitionIndex = 29917;

	enum class VisualEnvironmentE_WeatherConfigDataType : ::System::Int32
	{
		Default = 0,
		TempPostVolumeData = 1,
		LocalVolumeData = 2,
	};
}
