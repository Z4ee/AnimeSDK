#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::ParticleSystemJobs
{
	inline static constexpr unsigned int NativeParticleData_Array3_TypeDefinitionIndex = 5802;

	struct alignas(8) NativeParticleData_Array3
	{
		::System::Single* x; // 0x10
		::System::Single* y; // 0x18
		::System::Single* z; // 0x20
	};
}
