#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/GPUParticlesPass_DispatchMode.h"

namespace UnityEngine
{
	inline static constexpr unsigned int GPUParticlesPass_TypeDefinitionIndex = 4103;

	struct alignas(4) GPUParticlesPass
	{
		::UnityEngine::GPUParticlesPass_DispatchMode dispatchMode; // 0x10
		::System::Int32 kernelName; // 0x14
		::System::Int32 numKernelInt; // 0x18
		::System::Single interval; // 0x1C
		::System::Int32 cachedKernelIndex; // 0x20
		::System::Boolean isEnabled; // 0x24
	};
}
