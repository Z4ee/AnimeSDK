#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int EntityType_TypeDefinitionIndex = 41587;

	enum class EntityType : ::System::Int32
	{
		Detail = 0,
		Occluder = 1,
		Trigger = 2,
		Collider = 3,
		Mover = 4,
	};
}
