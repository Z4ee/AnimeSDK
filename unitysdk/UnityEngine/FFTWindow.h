#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int FFTWindow_TypeDefinitionIndex = 5189;

	enum class FFTWindow : ::System::Int32
	{
		Rectangular = 0,
		Triangle = 1,
		Hamming = 2,
		Hanning = 3,
		Blackman = 4,
		BlackmanHarris = 5,
	};
}
