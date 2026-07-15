#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/MinMaxAABB.h"

namespace UnityEngine
{
	inline static constexpr unsigned int ClusterGroupPartInstance_TypeDefinitionIndex = 4093;

	struct alignas(4) ClusterGroupPartInstance
	{
		::System::UInt32 PartIndex; // 0x10
		::UnityEngine::MinMaxAABB Bounds; // 0x14
		::System::UInt32 BVHNodeIndex; // 0x2C
		::System::UInt32 BVHChildIndex; // 0x30
	};
}
