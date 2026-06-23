#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine
{
	inline static constexpr unsigned int NAPAdditionalProbeData_TypeDefinitionIndex = 5148;

	struct alignas(4) NAPAdditionalProbeData
	{
		::System::Int32 Index; // 0x10
		::UnityEngine::Vector3 BlendDistance; // 0x14
		::System::Single rotationY; // 0x20
		::UnityEngine::Vector3 aabbCenter; // 0x24
		::UnityEngine::Vector3 aabbExtent; // 0x30
	};
}
