#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int TransparentDynamicShadingRateMethod_TypeDefinitionIndex = 5895;

	enum class TransparentDynamicShadingRateMethod : ::System::Int32
	{
		PreferVRS = 0,
		PreferMSAA = 1,
		MustVRS = 2,
	};
}
