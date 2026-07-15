#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::ProBuilder::Poly2Tri
{
	inline static constexpr unsigned int Orientation_TypeDefinitionIndex = 36593;

	enum class Orientation : ::System::Int32
	{
		CW = 0,
		CCW = 1,
		Collinear = 2,
	};
}
