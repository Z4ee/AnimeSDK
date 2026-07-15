#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int BezierTangentMode_TypeDefinitionIndex = 41532;

	enum class BezierTangentMode : ::System::Int32
	{
		Free = 0,
		Aligned = 1,
		Mirrored = 2,
	};
}
