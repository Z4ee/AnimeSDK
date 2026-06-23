#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int BatchDrawVisibilityMask_TypeDefinitionIndex = 6209;

	enum class BatchDrawVisibilityMask : ::System::Int32
	{
		Regular = 1,
		ShadowCascade0 = 2,
		ShadowCascade1 = 4,
		ShadowCascade2 = 8,
		ShadowCascade3 = 16,
		AllShadows = 30,
		All = 31,
	};
}
