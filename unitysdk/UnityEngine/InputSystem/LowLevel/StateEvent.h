#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputEvent.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/StateEvent__stateData_e__FixedBuffer.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/FourCC.h"

namespace UnityEngine::InputSystem { class InputDevice; }

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_STATEEVENT_FROMDEFAULTSTATEFOR_OFFSET UNITYSDK_OFFSET(0x1EC4C8D0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_STATEEVENT_FROMUNCHECKED_OFFSET UNITYSDK_OFFSET(0x1EC45E60)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_STATEEVENT_FROM_1_OFFSET UNITYSDK_OFFSET(0x1EC4C5A0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_STATEEVENT_FROM_2_OFFSET UNITYSDK_OFFSET(0x1EC4C5D0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_STATEEVENT_FROM_OFFSET UNITYSDK_OFFSET(0x1EC4C4E0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_STATEEVENT_GET_STATESIZEINBYTES_OFFSET UNITYSDK_OFFSET(0xA68160)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_STATEEVENT_GET_STATE_OFFSET UNITYSDK_OFFSET(0xA68170)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_STATEEVENT_GET_TYPESTATIC_OFFSET UNITYSDK_OFFSET(0xA68180)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_STATEEVENT_TOEVENTPTR_OFFSET UNITYSDK_OFFSET(0x9A7180)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int StateEvent_TypeDefinitionIndex = 32545;

	struct alignas(1) StateEvent
	{
		// static const ::System::Int32 Type = 0x53544154; // 0x0
		// static const ::System::Int32 kStateDataSizeToSubtract = 0x1; // 0x0
		::UnityEngine::InputSystem::LowLevel::InputEvent baseEvent; // 0x10
		::UnityEngine::InputSystem::Utilities::FourCC stateFormat; // 0x24
		::UnityEngine::InputSystem::LowLevel::StateEvent__stateData_e__FixedBuffer stateData; // 0x28

		::System::UInt32 get_stateSizeInBytes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_STATEEVENT_GET_STATESIZEINBYTES_OFFSET))(this);
		}

		::System::Void* get_state()
		{
			return ((::System::Void*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_STATEEVENT_GET_STATE_OFFSET))(this);
		}

		/*
		::UnityEngine::InputSystem::LowLevel::InputEventPtr ToEventPtr()
		{
			return ((::UnityEngine::InputSystem::LowLevel::InputEventPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_STATEEVENT_TOEVENTPTR_OFFSET))(this);
		}
		*/

		::UnityEngine::InputSystem::Utilities::FourCC get_typeStatic()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_STATEEVENT_GET_TYPESTATIC_OFFSET))(this);
		}

		/*
		static ::UnityEngine::InputSystem::LowLevel::StateEvent* From(::UnityEngine::InputSystem::LowLevel::InputEventPtr ptr)
		{
			return ((::UnityEngine::InputSystem::LowLevel::StateEvent*(*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_STATEEVENT_FROM_OFFSET))(ptr);
		}
		*/

		/*
		static ::UnityEngine::InputSystem::LowLevel::StateEvent* FromUnchecked(::UnityEngine::InputSystem::LowLevel::InputEventPtr ptr)
		{
			return ((::UnityEngine::InputSystem::LowLevel::StateEvent*(*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_STATEEVENT_FROMUNCHECKED_OFFSET))(ptr);
		}
		*/

		/*
		static ::Unity::Collections::NativeArray_1<::System::Byte> From_1(::UnityEngine::InputSystem::InputDevice* device, ::UnityEngine::InputSystem::LowLevel::InputEventPtr& eventPtr, ::Unity::Collections::Allocator allocator)
		{
			return ((::Unity::Collections::NativeArray_1<::System::Byte>(*)(::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr&, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_STATEEVENT_FROM_1_OFFSET))(device, eventPtr, allocator);
		}
		*/

		/*
		static ::Unity::Collections::NativeArray_1<::System::Byte> FromDefaultStateFor(::UnityEngine::InputSystem::InputDevice* device, ::UnityEngine::InputSystem::LowLevel::InputEventPtr& eventPtr, ::Unity::Collections::Allocator allocator)
		{
			return ((::Unity::Collections::NativeArray_1<::System::Byte>(*)(::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr&, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_STATEEVENT_FROMDEFAULTSTATEFOR_OFFSET))(device, eventPtr, allocator);
		}
		*/

		/*
		static ::Unity::Collections::NativeArray_1<::System::Byte> From_2(::UnityEngine::InputSystem::InputDevice* device, ::UnityEngine::InputSystem::LowLevel::InputEventPtr& eventPtr, ::Unity::Collections::Allocator allocator, ::System::Boolean useDefaultState)
		{
			return ((::Unity::Collections::NativeArray_1<::System::Byte>(*)(::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr&, ::Unity::Collections::Allocator, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_STATEEVENT_FROM_2_OFFSET))(device, eventPtr, allocator, useDefaultState);
		}
		*/
	};
}
