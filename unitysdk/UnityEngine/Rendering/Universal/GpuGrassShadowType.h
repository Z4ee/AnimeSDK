#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int GpuGrassShadowType_TypeDefinitionIndex = 27523;

	enum class GpuGrassShadowType : ::System::Int32
	{
		AllCasCadeShadow = 3,
		CasCade12Shadow = 2,
		NoneShadow = 0,
		CasCade1Shadow = 1,
	};
}
