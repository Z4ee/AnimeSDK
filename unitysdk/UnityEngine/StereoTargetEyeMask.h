#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int StereoTargetEyeMask_TypeDefinitionIndex = 4140;

	enum class StereoTargetEyeMask : ::System::Int32
	{
		None = 0,
		Left = 1,
		Right = 2,
		Both = 3,
	};
}
