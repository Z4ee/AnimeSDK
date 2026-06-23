#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int LineRenderer_SubdivisionMode_TypeDefinitionIndex = 5196;

	enum class LineRenderer_SubdivisionMode : ::System::Int32
	{
		Disabled = 0,
		Bezier = 1,
		BSpline = 2,
	};
}
