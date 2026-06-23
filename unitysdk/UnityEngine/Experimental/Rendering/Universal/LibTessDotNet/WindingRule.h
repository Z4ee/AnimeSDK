#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Experimental::Rendering::Universal::LibTessDotNet
{
	inline static constexpr unsigned int WindingRule_TypeDefinitionIndex = 26318;

	enum class WindingRule : ::System::Int32
	{
		Positive = 2,
		Negative = 3,
		AbsGeqTwo = 4,
		NonZero = 1,
		EvenOdd = 0,
	};
}
