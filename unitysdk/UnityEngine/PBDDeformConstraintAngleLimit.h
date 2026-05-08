#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine
{
	inline static constexpr unsigned int PBDDeformConstraintAngleLimit_TypeDefinitionIndex = 24850;

	struct alignas(4) PBDDeformConstraintAngleLimit
	{
		::System::UInt32 limitType; // 0x10
		::System::Single minAngle; // 0x14
		::System::Single maxAngle; // 0x18
	};
}
