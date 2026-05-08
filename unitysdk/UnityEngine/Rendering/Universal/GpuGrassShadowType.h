#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int GpuGrassShadowType_TypeDefinitionIndex = 30237;

	enum class GpuGrassShadowType : ::System::Int32
	{
		NoneShadow = 0,
		CasCade1Shadow = 1,
		CasCade12Shadow = 2,
		AllCasCadeShadow = 3,
	};
}
