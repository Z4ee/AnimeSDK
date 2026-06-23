#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int VisualEnvironmentE_WeatherConfigDataType_TypeDefinitionIndex = 26501;

	enum class VisualEnvironmentE_WeatherConfigDataType : ::System::Int32
	{
		TempPostVolumeData = 1,
		Default = 0,
		LocalVolumeData = 2,
	};
}
