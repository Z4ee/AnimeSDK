#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/InputControlExtensions_InputEventControlEnumerator.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputEventPtr.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace UnityEngine::InputSystem { class InputControl; }

#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS__GETALLBUTTONPRESSES_D__43_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1F7E6470)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS__GETALLBUTTONPRESSES_D__43_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_UNITYENGINE_INPUTSYSTEM_INPUTCONTROL__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1F7E6810)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS__GETALLBUTTONPRESSES_D__43_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_UNITYENGINE_INPUTSYSTEM_INPUTCONTROL__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1F7E67A0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS__GETALLBUTTONPRESSES_D__43_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1F7E68C0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS__GETALLBUTTONPRESSES_D__43_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1F7E6800)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS__GETALLBUTTONPRESSES_D__43_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1F7E67B0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS__GETALLBUTTONPRESSES_D__43_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1F7E6420)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS__GETALLBUTTONPRESSES_D__43__CTOR_OFFSET UNITYSDK_OFFSET(0x1F7E6400)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS__GETALLBUTTONPRESSES_D__43___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1F7E6450)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputControlExtensions__GetAllButtonPresses_d__43_TypeDefinitionIndex = 32233;

	class InputControlExtensions__GetAllButtonPresses_d__43 : public ::System::Object
	{
	public:
		::UnityEngine::InputSystem::InputControl* __2__current; // 0x10
		::UnityEngine::InputSystem::InputControlExtensions_InputEventControlEnumerator __7__wrap1; // 0x18
		::UnityEngine::InputSystem::LowLevel::InputEventPtr __3__eventPtr; // 0x88
		::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr; // 0x90
		::System::Int32 __1__state; // 0x98
		::System::Single __3__magnitude; // 0x9C
		::System::Single magnitude; // 0xA0
		::System::Int32 __l__initialThreadId; // 0xA4
		::System::Boolean __3__buttonControlsOnly; // 0xA8
		::System::Boolean buttonControlsOnly; // 0xA9

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS__GETALLBUTTONPRESSES_D__43__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS__GETALLBUTTONPRESSES_D__43_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS__GETALLBUTTONPRESSES_D__43_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS__GETALLBUTTONPRESSES_D__43___M__FINALLY1_OFFSET))(this);
		}

		::UnityEngine::InputSystem::InputControl* System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputControl__get_Current()
		{
			return ((::UnityEngine::InputSystem::InputControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS__GETALLBUTTONPRESSES_D__43_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_UNITYENGINE_INPUTSYSTEM_INPUTCONTROL__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS__GETALLBUTTONPRESSES_D__43_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS__GETALLBUTTONPRESSES_D__43_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputControl*>* System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_InputControl__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputControl*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS__GETALLBUTTONPRESSES_D__43_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_UNITYENGINE_INPUTSYSTEM_INPUTCONTROL__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS__GETALLBUTTONPRESSES_D__43_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
