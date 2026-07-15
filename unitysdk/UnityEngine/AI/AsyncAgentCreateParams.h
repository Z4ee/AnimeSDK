#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/AI/ObstacleAvoidanceType.h"
#include "unitysdk/UnityEngine/AI/UpdateFlags.h"

namespace UnityEngine::AI
{
	inline static constexpr unsigned int AsyncAgentCreateParams_TypeDefinitionIndex = 5671;

	struct alignas(4) AsyncAgentCreateParams
	{
		::System::Single radius; // 0x10
		::System::Single height; // 0x14
		::System::Single maxAcceleration; // 0x18
		::System::Single maxSpeed; // 0x1C
		::System::Single stopDistance; // 0x20
		::System::Int32 priority; // 0x24
		::UnityEngine::AI::UpdateFlags updateFlags; // 0x28
		::UnityEngine::AI::ObstacleAvoidanceType obstacleAvoidanceType; // 0x2C
		::System::Single collisionQueryRange; // 0x30
		::System::Single separationWeight; // 0x34
	};
}
