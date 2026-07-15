#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int DepthTextureMode_TypeDefinitionIndex = 4152;

	enum class DepthTextureMode : ::System::Int32
	{
		None = 0,
		Depth = 1,
		DepthNormals = 2,
		MotionVectors = 4,
	};
}
