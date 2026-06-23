#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Experimental::Rendering::Universal::LibTessDotNet
{
	inline static constexpr unsigned int ContourOrientation_TypeDefinitionIndex = 26388;

	enum class ContourOrientation : ::System::Int32
	{
		Original = 0,
		CounterClockwise = 2,
		Clockwise = 1,
	};
}
