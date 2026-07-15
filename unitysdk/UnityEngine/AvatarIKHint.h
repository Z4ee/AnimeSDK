#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int AvatarIKHint_TypeDefinitionIndex = 5125;

	enum class AvatarIKHint : ::System::Int32
	{
		LeftKnee = 0,
		RightKnee = 1,
		LeftElbow = 2,
		RightElbow = 3,
	};
}
