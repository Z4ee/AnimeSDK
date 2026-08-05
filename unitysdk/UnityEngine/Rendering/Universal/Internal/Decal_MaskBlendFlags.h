#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int Decal_MaskBlendFlags_TypeDefinitionIndex = 27080;

	enum class Decal_MaskBlendFlags : ::System::Int32
	{
		AO = 2,
		Metal = 1,
		Smoothness = 4,
	};
}
