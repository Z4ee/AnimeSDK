#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Experimental::Rendering::Universal::LibTessDotNet
{
	inline static constexpr unsigned int WindingRule_TypeDefinitionIndex = 27406;

	enum class WindingRule : ::System::Int32
	{
		Positive = 2,
		AbsGeqTwo = 4,
		Negative = 3,
		EvenOdd = 0,
		NonZero = 1,
	};
}
