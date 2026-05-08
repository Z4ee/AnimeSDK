#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/InputSystem_DeltaStateEventBuffer__data_e__FixedBuffer.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/DeltaStateEvent.h"

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputSystem_DeltaStateEventBuffer_TypeDefinitionIndex = 28944;

	struct alignas(1) InputSystem_DeltaStateEventBuffer
	{
		// static const ::System::Int32 kMaxSize = 0x200; // 0x0
		::UnityEngine::InputSystem::LowLevel::DeltaStateEvent stateEvent; // 0x10
		::UnityEngine::InputSystem::InputSystem_DeltaStateEventBuffer__data_e__FixedBuffer data; // 0x2D
	};
}
