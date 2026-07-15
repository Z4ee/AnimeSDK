#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int ShadowSamplingMode_TypeDefinitionIndex = 4707;

	enum class ShadowSamplingMode : ::System::Int32
	{
		CompareDepths = 0,
		RawDepth = 1,
		None = 2,
	};
}
