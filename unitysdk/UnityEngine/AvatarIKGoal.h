#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int AvatarIKGoal_TypeDefinitionIndex = 5124;

	enum class AvatarIKGoal : ::System::Int32
	{
		LeftFoot = 0,
		RightFoot = 1,
		LeftHand = 2,
		RightHand = 3,
	};
}
