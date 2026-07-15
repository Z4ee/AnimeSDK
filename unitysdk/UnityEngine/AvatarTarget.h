#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int AvatarTarget_TypeDefinitionIndex = 5123;

	enum class AvatarTarget : ::System::Int32
	{
		Root = 0,
		Body = 1,
		LeftFoot = 2,
		RightFoot = 3,
		LeftHand = 4,
		RightHand = 5,
	};
}
