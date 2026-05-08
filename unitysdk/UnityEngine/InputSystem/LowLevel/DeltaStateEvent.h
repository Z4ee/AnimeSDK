#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/DeltaStateEvent__stateData_e__FixedBuffer.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputEvent.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/FourCC.h"

namespace UnityEngine::InputSystem { class InputControl; }

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_DELTASTATEEVENT_FROMUNCHECKED_OFFSET UNITYSDK_OFFSET(0x1C088250)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_DELTASTATEEVENT_FROM_1_OFFSET UNITYSDK_OFFSET(0x1C088260)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_DELTASTATEEVENT_FROM_OFFSET UNITYSDK_OFFSET(0x1C088190)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_DELTASTATEEVENT_GET_DELTASTATESIZEINBYTES_OFFSET UNITYSDK_OFFSET(0x9C0410)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_DELTASTATEEVENT_GET_DELTASTATE_OFFSET UNITYSDK_OFFSET(0x9C0420)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_DELTASTATEEVENT_GET_TYPESTATIC_OFFSET UNITYSDK_OFFSET(0x9C0430)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_DELTASTATEEVENT_TOEVENTPTR_OFFSET UNITYSDK_OFFSET(0x8B6F00)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int DeltaStateEvent_TypeDefinitionIndex = 29244;

	struct alignas(1) DeltaStateEvent
	{
		// static const ::System::Int32 Type = 0x444C5441; // 0x0
		::UnityEngine::InputSystem::LowLevel::InputEvent baseEvent; // 0x10
		::UnityEngine::InputSystem::Utilities::FourCC stateFormat; // 0x24
		::System::UInt32 stateOffset; // 0x28
		::UnityEngine::InputSystem::LowLevel::DeltaStateEvent__stateData_e__FixedBuffer stateData; // 0x2C

		::System::UInt32 get_deltaStateSizeInBytes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_DELTASTATEEVENT_GET_DELTASTATESIZEINBYTES_OFFSET))(this);
		}

		::System::Void* get_deltaState()
		{
			return ((::System::Void*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_DELTASTATEEVENT_GET_DELTASTATE_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Utilities::FourCC get_typeStatic()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_DELTASTATEEVENT_GET_TYPESTATIC_OFFSET))(this);
		}

		/*
		::UnityEngine::InputSystem::LowLevel::InputEventPtr ToEventPtr()
		{
			return ((::UnityEngine::InputSystem::LowLevel::InputEventPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_DELTASTATEEVENT_TOEVENTPTR_OFFSET))(this);
		}
		*/

		/*
		static ::UnityEngine::InputSystem::LowLevel::DeltaStateEvent* From(::UnityEngine::InputSystem::LowLevel::InputEventPtr ptr)
		{
			return ((::UnityEngine::InputSystem::LowLevel::DeltaStateEvent*(*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_DELTASTATEEVENT_FROM_OFFSET))(ptr);
		}
		*/

		/*
		static ::UnityEngine::InputSystem::LowLevel::DeltaStateEvent* FromUnchecked(::UnityEngine::InputSystem::LowLevel::InputEventPtr ptr)
		{
			return ((::UnityEngine::InputSystem::LowLevel::DeltaStateEvent*(*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_DELTASTATEEVENT_FROMUNCHECKED_OFFSET))(ptr);
		}
		*/

		/*
		static ::Unity::Collections::NativeArray_1<::System::Byte> From_1(::UnityEngine::InputSystem::InputControl* control, ::UnityEngine::InputSystem::LowLevel::InputEventPtr& eventPtr, ::Unity::Collections::Allocator allocator)
		{
			return ((::Unity::Collections::NativeArray_1<::System::Byte>(*)(::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr&, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_DELTASTATEEVENT_FROM_1_OFFSET))(control, eventPtr, allocator);
		}
		*/
	};
}
