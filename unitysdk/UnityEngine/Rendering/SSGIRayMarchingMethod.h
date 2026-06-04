#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int SSGIRayMarchingMethod_TypeDefinitionIndex = 4825;

	enum class SSGIRayMarchingMethod : ::System::Int32
	{
		Compute = 0,
		HorizontalVisibilityMask = 1,
	};
}
