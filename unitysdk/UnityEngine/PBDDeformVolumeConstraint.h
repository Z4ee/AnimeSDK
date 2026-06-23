#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine
{
	inline static constexpr unsigned int PBDDeformVolumeConstraint_TypeDefinitionIndex = 18753;

	struct alignas(4) PBDDeformVolumeConstraint
	{
		::System::UInt32 particle0; // 0x10
		::System::UInt32 particle1; // 0x14
		::System::UInt32 particle2; // 0x18
		::System::UInt32 particle3; // 0x1C
		::System::Single volume; // 0x20
		::System::Single minScale; // 0x24
		::System::Single maxScale; // 0x28
		::System::Single compliance; // 0x2C
	};
}
