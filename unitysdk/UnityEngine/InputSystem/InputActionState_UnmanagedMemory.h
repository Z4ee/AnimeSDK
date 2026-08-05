#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/InputActionState_ActionMapIndices.h"
#include "unitysdk/UnityEngine/InputSystem/InputActionState_BindingState.h"
#include "unitysdk/UnityEngine/InputSystem/InputActionState_InteractionState.h"
#include "unitysdk/UnityEngine/InputSystem/InputActionState_TriggerState.h"

#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_UNMANAGEDMEMORY_ALLOCATE_OFFSET UNITYSDK_OFFSET(0xA5B390)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_UNMANAGEDMEMORY_CLONE_OFFSET UNITYSDK_OFFSET(0xA5B6B0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_UNMANAGEDMEMORY_COPYDATAFROM_OFFSET UNITYSDK_OFFSET(0xA5B530)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_UNMANAGEDMEMORY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA5B4E0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_UNMANAGEDMEMORY_GET_ISALLOCATED_OFFSET UNITYSDK_OFFSET(0x32EF90)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_UNMANAGEDMEMORY_GET_SIZEINBYTES_OFFSET UNITYSDK_OFFSET(0xA5B340)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputActionState_UnmanagedMemory_TypeDefinitionIndex = 32189;

	struct alignas(8) InputActionState_UnmanagedMemory
	{
		::System::Void* basePtr; // 0x10
		::System::Int32 mapCount; // 0x18
		::System::Int32 actionCount; // 0x1C
		::System::Int32 interactionCount; // 0x20
		::System::Int32 bindingCount; // 0x24
		::System::Int32 controlCount; // 0x28
		::System::Int32 compositeCount; // 0x2C
		::UnityEngine::InputSystem::InputActionState_TriggerState* actionStates; // 0x30
		::UnityEngine::InputSystem::InputActionState_BindingState* bindingStates; // 0x38
		::UnityEngine::InputSystem::InputActionState_InteractionState* interactionStates; // 0x40
		::System::Single* controlMagnitudes; // 0x48
		::System::Single* compositeMagnitudes; // 0x50
		::System::Int32* enabledControls; // 0x58
		::System::UInt16* actionBindingIndicesAndCounts; // 0x60
		::System::UInt16* actionBindingIndices; // 0x68
		::System::Int32* controlIndexToBindingIndex; // 0x70
		::UnityEngine::InputSystem::InputActionState_ActionMapIndices* mapIndices; // 0x78

		::System::Boolean get_isAllocated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_UNMANAGEDMEMORY_GET_ISALLOCATED_OFFSET))(this);
		}

		::System::Int32 get_sizeInBytes()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_UNMANAGEDMEMORY_GET_SIZEINBYTES_OFFSET))(this);
		}

		::System::Void Allocate(::System::Int32 mapCount, ::System::Int32 actionCount, ::System::Int32 bindingCount, ::System::Int32 controlCount, ::System::Int32 interactionCount, ::System::Int32 compositeCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_UNMANAGEDMEMORY_ALLOCATE_OFFSET))(this, mapCount, actionCount, bindingCount, controlCount, interactionCount, compositeCount);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_UNMANAGEDMEMORY_DISPOSE_OFFSET))(this);
		}

		::System::Void CopyDataFrom(::UnityEngine::InputSystem::InputActionState_UnmanagedMemory memory)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputActionState_UnmanagedMemory))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_UNMANAGEDMEMORY_COPYDATAFROM_OFFSET))(this, memory);
		}

		::UnityEngine::InputSystem::InputActionState_UnmanagedMemory Clone()
		{
			return ((::UnityEngine::InputSystem::InputActionState_UnmanagedMemory(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_UNMANAGEDMEMORY_CLONE_OFFSET))(this);
		}
	};
}
