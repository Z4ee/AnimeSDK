#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/InputSystem_StateEventBuffer__data_e__FixedBuffer.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/StateEvent.h"

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputSystem_StateEventBuffer_TypeDefinitionIndex = 32218;

	struct alignas(1) InputSystem_StateEventBuffer
	{
		// static const ::System::Int32 kMaxSize = 0x200; // 0x0
		::UnityEngine::InputSystem::LowLevel::StateEvent stateEvent; // 0x10
		::UnityEngine::InputSystem::InputSystem_StateEventBuffer__data_e__FixedBuffer data; // 0x29
	};
}
