#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Experimental::Rendering::Universal::LibTessDotNet
{
	inline static constexpr unsigned int ContourOrientation_TypeDefinitionIndex = 27096;

	enum class ContourOrientation : ::System::Int32
	{
		CounterClockwise = 2,
		Original = 0,
		Clockwise = 1,
	};
}
