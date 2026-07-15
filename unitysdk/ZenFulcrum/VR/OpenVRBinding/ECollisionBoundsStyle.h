#pragma once
#include "unitysdk/unitysdk.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int ECollisionBoundsStyle_TypeDefinitionIndex = 37076;

	enum class ECollisionBoundsStyle : ::System::Int32
	{
		COLLISION_BOUNDS_STYLE_BEGINNER = 0,
		COLLISION_BOUNDS_STYLE_INTERMEDIATE = 1,
		COLLISION_BOUNDS_STYLE_SQUARES = 2,
		COLLISION_BOUNDS_STYLE_ADVANCED = 3,
		COLLISION_BOUNDS_STYLE_NONE = 4,
		COLLISION_BOUNDS_STYLE_COUNT = 5,
	};
}
