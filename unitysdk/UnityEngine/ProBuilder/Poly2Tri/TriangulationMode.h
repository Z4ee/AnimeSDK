#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::ProBuilder::Poly2Tri
{
	inline static constexpr unsigned int TriangulationMode_TypeDefinitionIndex = 36598;

	enum class TriangulationMode : ::System::Int32
	{
		Unconstrained = 0,
		Constrained = 1,
		Polygon = 2,
	};
}
