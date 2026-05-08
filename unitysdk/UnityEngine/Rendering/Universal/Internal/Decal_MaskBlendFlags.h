#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int Decal_MaskBlendFlags_TypeDefinitionIndex = 30338;

	enum class Decal_MaskBlendFlags : ::System::Int32
	{
		Metal = 1,
		AO = 2,
		Smoothness = 4,
	};
}
