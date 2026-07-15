#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine::AI
{
	inline static constexpr unsigned int AsyncNavMeshAgent_MotionSnapshot_TypeDefinitionIndex = 5673;

	struct alignas(4) AsyncNavMeshAgent_MotionSnapshot
	{
		::System::Single maxAcceleration; // 0x10
		::UnityEngine::Vector3 destination; // 0x14
		::System::Boolean valid; // 0x20
	};
}
