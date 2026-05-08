#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int KFrameFieldType_TypeDefinitionIndex = 30742;

	enum class KFrameFieldType : ::System::Int32
	{
		boolType = 0,
		intType = 1,
		floatType = 2,
		enumType = 3,
		colorTypeR = 4,
		colorTypeG = 5,
		colorTypeB = 6,
		colorTypeA = 7,
		vectorX = 8,
		vectorY = 9,
		vector4X = 10,
		vector4Y = 11,
		vector4W = 12,
		vector4Z = 13,
	};
}
