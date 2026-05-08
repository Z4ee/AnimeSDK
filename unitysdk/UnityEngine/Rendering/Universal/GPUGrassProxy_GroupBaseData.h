#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int GPUGrassProxy_GroupBaseData_TypeDefinitionIndex = 30243;

	struct alignas(4) GPUGrassProxy_GroupBaseData
	{
		::UnityEngine::Vector3 min; // 0x10
		::System::Int32 xGridCount; // 0x1C
		::System::Int32 yGridCount; // 0x20
		::UnityEngine::Vector3 groupSize; // 0x24
		::System::Int32 level2xGridCount; // 0x30
		::System::Int32 level2yGridCount; // 0x34
		::UnityEngine::Vector3 level2GroupSize; // 0x38
	};
}
