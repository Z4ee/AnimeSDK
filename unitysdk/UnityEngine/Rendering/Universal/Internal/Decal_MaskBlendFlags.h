#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int Decal_MaskBlendFlags_TypeDefinitionIndex = 26564;

	enum class Decal_MaskBlendFlags : ::System::Int32
	{
		Metal = 1,
		Smoothness = 4,
		AO = 2,
	};
}
