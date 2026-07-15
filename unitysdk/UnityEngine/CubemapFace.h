#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int CubemapFace_TypeDefinitionIndex = 4162;

	enum class CubemapFace : ::System::Int32
	{
		Unknown = -1,
		PositiveX = 0,
		NegativeX = 1,
		PositiveY = 2,
		NegativeY = 3,
		PositiveZ = 4,
		NegativeZ = 5,
	};
}
