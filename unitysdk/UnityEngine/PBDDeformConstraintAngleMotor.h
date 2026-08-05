#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine
{
	inline static constexpr unsigned int PBDDeformConstraintAngleMotor_TypeDefinitionIndex = 19164;

	struct alignas(4) PBDDeformConstraintAngleMotor
	{
		::System::Single targetAngle; // 0x10
		::System::Single strength; // 0x14
	};
}
