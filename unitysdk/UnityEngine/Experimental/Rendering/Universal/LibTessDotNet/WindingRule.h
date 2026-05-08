#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Experimental::Rendering::Universal::LibTessDotNet
{
	inline static constexpr unsigned int WindingRule_TypeDefinitionIndex = 29755;

	enum class WindingRule : ::System::Int32
	{
		EvenOdd = 0,
		NonZero = 1,
		Positive = 2,
		Negative = 3,
		AbsGeqTwo = 4,
	};
}
