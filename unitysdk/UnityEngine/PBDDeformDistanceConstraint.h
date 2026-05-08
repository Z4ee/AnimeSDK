#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine
{
	inline static constexpr unsigned int PBDDeformDistanceConstraint_TypeDefinitionIndex = 24847;

	struct alignas(4) PBDDeformDistanceConstraint
	{
		::System::UInt32 particle0; // 0x10
		::System::UInt32 particle1; // 0x14
		::System::Single distance; // 0x18
		::System::Single minScale; // 0x1C
		::System::Single maxScale; // 0x20
		::System::Single compliance; // 0x24
	};
}
