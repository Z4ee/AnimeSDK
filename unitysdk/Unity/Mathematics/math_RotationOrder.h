#pragma once
#include "unitysdk/unitysdk.h"

namespace Unity::Mathematics
{
	inline static constexpr unsigned int math_RotationOrder_TypeDefinitionIndex = 32729;

	enum class math_RotationOrder : ::System::Byte
	{
		XYZ = 0x0,
		XZY = 0x1,
		YXZ = 0x2,
		YZX = 0x3,
		ZXY = 0x4,
		ZYX = 0x5,
		Default = 0x4,
	};
}
