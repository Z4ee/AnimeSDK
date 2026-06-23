#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputUpdateType.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputUpdate_UpdateStepCount.h"

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int InputUpdate_SerializedState_TypeDefinitionIndex = 31936;

	struct alignas(4) InputUpdate_SerializedState
	{
		::UnityEngine::InputSystem::LowLevel::InputUpdateType lastUpdateType; // 0x10
		::UnityEngine::InputSystem::LowLevel::InputUpdate_UpdateStepCount playerUpdateStepCount; // 0x14
	};
}
