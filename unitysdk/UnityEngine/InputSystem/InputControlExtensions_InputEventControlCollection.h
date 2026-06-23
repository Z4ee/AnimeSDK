#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/InputControlExtensions_Enumerate.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputEventPtr.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace UnityEngine::InputSystem { class InputControl; }
namespace UnityEngine::InputSystem { class InputDevice; }

#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_INPUTEVENTCONTROLCOLLECTION_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xA4E550)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_INPUTEVENTCONTROLCOLLECTION_GET_EVENTPTR_OFFSET UNITYSDK_OFFSET(0x2A99F0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_INPUTEVENTCONTROLCOLLECTION_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_UNITYENGINE_INPUTSYSTEM_INPUTCONTROL__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xA4E5A0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_INPUTEVENTCONTROLCOLLECTION_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xA4E6A0)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputControlExtensions_InputEventControlCollection_TypeDefinitionIndex = 31609;

	struct alignas(8) InputControlExtensions_InputEventControlCollection
	{
		::UnityEngine::InputSystem::InputDevice* m_Device; // 0x10
		::UnityEngine::InputSystem::LowLevel::InputEventPtr m_EventPtr; // 0x18
		::UnityEngine::InputSystem::InputControlExtensions_Enumerate m_Flags; // 0x20
		::System::Single m_MagnitudeThreshold; // 0x24

		::UnityEngine::InputSystem::LowLevel::InputEventPtr get_eventPtr()
		{
			return ((::UnityEngine::InputSystem::LowLevel::InputEventPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_INPUTEVENTCONTROLCOLLECTION_GET_EVENTPTR_OFFSET))(this);
		}

		/*
		::UnityEngine::InputSystem::InputControlExtensions_InputEventControlEnumerator GetEnumerator()
		{
			return ((::UnityEngine::InputSystem::InputControlExtensions_InputEventControlEnumerator(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_INPUTEVENTCONTROLCOLLECTION_GETENUMERATOR_OFFSET))(this);
		}
		*/

		::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputControl*>* System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_InputControl__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputControl*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_INPUTEVENTCONTROLCOLLECTION_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_UNITYENGINE_INPUTSYSTEM_INPUTCONTROL__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_INPUTEVENTCONTROLCOLLECTION_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
