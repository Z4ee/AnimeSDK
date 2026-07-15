#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int AvatarMaskBodyPart_TypeDefinitionIndex = 5153;

	enum class AvatarMaskBodyPart : ::System::Int32
	{
		Root = 0,
		Body = 1,
		Head = 2,
		LeftLeg = 3,
		RightLeg = 4,
		LeftArm = 5,
		RightArm = 6,
		LeftFingers = 7,
		RightFingers = 8,
		LeftFootIK = 9,
		RightFootIK = 10,
		LeftHandIK = 11,
		RightHandIK = 12,
		LastBodyPart = 13,
	};
}
