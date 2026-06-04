#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/KeyCode.h"
#include "unitysdk/UnityEngine/Rendering/DebugActionState_DebugActionKeyType.h"

namespace System { class String; }
namespace UnityEngine::Rendering { class DebugActionDesc; }

#define UNITYENGINE_RENDERING_DEBUGACTIONSTATE_GET_ACTIONSTATE_OFFSET UNITYSDK_OFFSET(0x1B16F0D0)
#define UNITYENGINE_RENDERING_DEBUGACTIONSTATE_GET_RUNNINGACTION_OFFSET UNITYSDK_OFFSET(0x1B16F0B0)
#define UNITYENGINE_RENDERING_DEBUGACTIONSTATE_RESET_OFFSET UNITYSDK_OFFSET(0x1B16F2C0)
#define UNITYENGINE_RENDERING_DEBUGACTIONSTATE_SET_ACTIONSTATE_OFFSET UNITYSDK_OFFSET(0x1B16F0E0)
#define UNITYENGINE_RENDERING_DEBUGACTIONSTATE_SET_RUNNINGACTION_OFFSET UNITYSDK_OFFSET(0x1B16F0C0)
#define UNITYENGINE_RENDERING_DEBUGACTIONSTATE_TRIGGERWITHAXIS_OFFSET UNITYSDK_OFFSET(0x1B16F1D0)
#define UNITYENGINE_RENDERING_DEBUGACTIONSTATE_TRIGGERWITHBUTTON_OFFSET UNITYSDK_OFFSET(0x1B16F150)
#define UNITYENGINE_RENDERING_DEBUGACTIONSTATE_TRIGGERWITHKEY_OFFSET UNITYSDK_OFFSET(0x1B16F240)
#define UNITYENGINE_RENDERING_DEBUGACTIONSTATE_TRIGGER_OFFSET UNITYSDK_OFFSET(0x1B16F0F0)
#define UNITYENGINE_RENDERING_DEBUGACTIONSTATE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1B16F2E0)
#define UNITYENGINE_RENDERING_DEBUGACTIONSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B16F600)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DebugActionState_TypeDefinitionIndex = 33712;

	class DebugActionState : public ::System::Object
	{
	public:
		::System::String* m_PressedAxis; // 0x10
		::Il2CppArray<::System::Boolean>* m_TriggerPressedUp; // 0x18
		::Il2CppArray<::UnityEngine::KeyCode>* m_PressedKeys; // 0x20
		::Il2CppArray<::System::String*>* m_PressedButtons; // 0x28
		::System::Single m_Timer; // 0x30
		::System::Boolean _runningAction_k__BackingField; // 0x34
		::UnityEngine::Rendering::DebugActionState_DebugActionKeyType m_Type; // 0x38
		::System::Single _actionState_k__BackingField; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGACTIONSTATE__CTOR_OFFSET))(this);
		}

		::System::Boolean get_runningAction()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGACTIONSTATE_GET_RUNNINGACTION_OFFSET))(this);
		}

		::System::Void set_runningAction(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGACTIONSTATE_SET_RUNNINGACTION_OFFSET))(this, a1);
		}

		::System::Single get_actionState()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGACTIONSTATE_GET_ACTIONSTATE_OFFSET))(this);
		}

		::System::Void set_actionState(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGACTIONSTATE_SET_ACTIONSTATE_OFFSET))(this, a1);
		}

		::System::Void Trigger(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGACTIONSTATE_TRIGGER_OFFSET))(this, a1, a2);
		}

		::System::Void TriggerWithButton(::Il2CppArray<::System::String*>* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGACTIONSTATE_TRIGGERWITHBUTTON_OFFSET))(this, a1, a2);
		}

		::System::Void TriggerWithAxis(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGACTIONSTATE_TRIGGERWITHAXIS_OFFSET))(this, a1, a2);
		}

		::System::Void TriggerWithKey(::Il2CppArray<::UnityEngine::KeyCode>* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::KeyCode>*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGACTIONSTATE_TRIGGERWITHKEY_OFFSET))(this, a1, a2);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGACTIONSTATE_RESET_OFFSET))(this);
		}

		::System::Void Update(::UnityEngine::Rendering::DebugActionDesc* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::DebugActionDesc*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGACTIONSTATE_UPDATE_OFFSET))(this, a1);
		}
	};
}
