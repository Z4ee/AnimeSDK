#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/InputControlExtensions_Enumerate.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputEventPtr.h"

namespace System { class Object; }
namespace UnityEngine::InputSystem { class InputControl; }
namespace UnityEngine::InputSystem { class InputDevice; }

#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_INPUTEVENTCONTROLENUMERATOR_CHECKCURRENT_OFFSET UNITYSDK_OFFSET(0xAA35C0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_INPUTEVENTCONTROLENUMERATOR_CHECKDEFAULT_OFFSET UNITYSDK_OFFSET(0xAA3590)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_INPUTEVENTCONTROLENUMERATOR_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAA3610)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_INPUTEVENTCONTROLENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x611420)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_INPUTEVENTCONTROLENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xAA35F0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_INPUTEVENTCONTROLENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xAA3600)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_INPUTEVENTCONTROLENUMERATOR_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x611420)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_INPUTEVENTCONTROLENUMERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0xAA3580)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputControlExtensions_InputEventControlEnumerator_TypeDefinitionIndex = 32230;

	struct alignas(8) InputControlExtensions_InputEventControlEnumerator
	{
		::UnityEngine::InputSystem::InputControlExtensions_Enumerate m_Flags; // 0x10
		::UnityEngine::InputSystem::InputDevice* m_Device; // 0x18
		::Il2CppArray<::System::UInt32>* m_StateOffsetToControlIndex; // 0x20
		::System::Int32 m_StateOffsetToControlIndexLength; // 0x28
		::Il2CppArray<::UnityEngine::InputSystem::InputControl*>* m_AllControls; // 0x30
		::System::Byte* m_DefaultState; // 0x38
		::System::Byte* m_CurrentState; // 0x40
		::System::Byte* m_NoiseMask; // 0x48
		::UnityEngine::InputSystem::LowLevel::InputEventPtr m_EventPtr; // 0x50
		::UnityEngine::InputSystem::InputControl* m_CurrentControl; // 0x58
		::System::Int32 m_CurrentIndexInStateOffsetToControlIndexMap; // 0x60
		::System::UInt32 m_CurrentControlStateBitOffset; // 0x64
		::System::Byte* m_EventState; // 0x68
		::System::UInt32 m_CurrentBitOffset; // 0x70
		::System::UInt32 m_EndBitOffset; // 0x74
		::System::Single m_MagnitudeThreshold; // 0x78

		::System::Void _ctor(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, ::UnityEngine::InputSystem::InputDevice* device, ::UnityEngine::InputSystem::InputControlExtensions_Enumerate flags, ::System::Single magnitudeThreshold)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputControlExtensions_Enumerate, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_INPUTEVENTCONTROLENUMERATOR__CTOR_OFFSET))(this, eventPtr, device, flags, magnitudeThreshold);
		}

		::System::Boolean CheckDefault(::System::UInt32 numBits)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_INPUTEVENTCONTROLENUMERATOR_CHECKDEFAULT_OFFSET))(this, numBits);
		}

		::System::Boolean CheckCurrent(::System::UInt32 numBits)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_INPUTEVENTCONTROLENUMERATOR_CHECKCURRENT_OFFSET))(this, numBits);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_INPUTEVENTCONTROLENUMERATOR_MOVENEXT_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_INPUTEVENTCONTROLENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_INPUTEVENTCONTROLENUMERATOR_DISPOSE_OFFSET))(this);
		}

		::UnityEngine::InputSystem::InputControl* get_Current()
		{
			return ((::UnityEngine::InputSystem::InputControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_INPUTEVENTCONTROLENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_INPUTEVENTCONTROLENUMERATOR_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
