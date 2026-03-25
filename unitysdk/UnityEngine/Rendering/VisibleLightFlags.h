#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int VisibleLightFlags_TypeDefinitionIndex = 4584;

	enum class VisibleLightFlags : ::System::Int32
	{
		IntersectsNearPlane = 1,
		IntersectsFarPlane = 2,
	};
}
