#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/KeyCode.h"
#include "unitysdk/UnityEngine/Rendering/DebugActionState_DebugActionKeyType.h"

namespace System { class String; }
namespace UnityEngine::Rendering { class DebugActionDesc; }

#define UNITYENGINE_RENDERING_DEBUGACTIONSTATE_GET_ACTIONSTATE_OFFSET UNITYSDK_OFFSET(0x1A313CA0)
#define UNITYENGINE_RENDERING_DEBUGACTIONSTATE_GET_RUNNINGACTION_OFFSET UNITYSDK_OFFSET(0x1A313C80)
#define UNITYENGINE_RENDERING_DEBUGACTIONSTATE_RESET_OFFSET UNITYSDK_OFFSET(0x1A313E90)
#define UNITYENGINE_RENDERING_DEBUGACTIONSTATE_SET_ACTIONSTATE_OFFSET UNITYSDK_OFFSET(0x1A313CB0)
#define UNITYENGINE_RENDERING_DEBUGACTIONSTATE_SET_RUNNINGACTION_OFFSET UNITYSDK_OFFSET(0x1A313C90)
#define UNITYENGINE_RENDERING_DEBUGACTIONSTATE_TRIGGERWITHAXIS_OFFSET UNITYSDK_OFFSET(0x1A313DA0)
#define UNITYENGINE_RENDERING_DEBUGACTIONSTATE_TRIGGERWITHBUTTON_OFFSET UNITYSDK_OFFSET(0x1A313D20)
#define UNITYENGINE_RENDERING_DEBUGACTIONSTATE_TRIGGERWITHKEY_OFFSET UNITYSDK_OFFSET(0x1A313E10)
#define UNITYENGINE_RENDERING_DEBUGACTIONSTATE_TRIGGER_OFFSET UNITYSDK_OFFSET(0x1A313CC0)
#define UNITYENGINE_RENDERING_DEBUGACTIONSTATE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1A313EB0)
#define UNITYENGINE_RENDERING_DEBUGACTIONSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A314220)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DebugActionState_TypeDefinitionIndex = 33430;

	class DebugActionState : public ::System::Object
	{
	public:
		::Il2CppArray<::UnityEngine::KeyCode>* m_PressedKeys; // 0x10
		::Il2CppArray<::System::String*>* m_PressedButtons; // 0x18
		::Il2CppArray<::System::Boolean>* m_TriggerPressedUp; // 0x20
		::System::String* m_PressedAxis; // 0x28
		::System::Boolean _runningAction_k__BackingField; // 0x30
		::System::Single m_Timer; // 0x34
		::System::Single _actionState_k__BackingField; // 0x38
		::UnityEngine::Rendering::DebugActionState_DebugActionKeyType m_Type; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGACTIONSTATE__CTOR_OFFSET))(this);
		}

		::System::Boolean get_runningAction()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGACTIONSTATE_GET_RUNNINGACTION_OFFSET))(this);
		}

		::System::Void set_runningAction(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGACTIONSTATE_SET_RUNNINGACTION_OFFSET))(this, value);
		}

		::System::Single get_actionState()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGACTIONSTATE_GET_ACTIONSTATE_OFFSET))(this);
		}

		::System::Void set_actionState(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGACTIONSTATE_SET_ACTIONSTATE_OFFSET))(this, value);
		}

		::System::Void Trigger(::System::Int32 triggerCount, ::System::Single state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGACTIONSTATE_TRIGGER_OFFSET))(this, triggerCount, state);
		}

		::System::Void TriggerWithButton(::Il2CppArray<::System::String*>* buttons, ::System::Single state)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGACTIONSTATE_TRIGGERWITHBUTTON_OFFSET))(this, buttons, state);
		}

		::System::Void TriggerWithAxis(::System::String* axis, ::System::Single state)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGACTIONSTATE_TRIGGERWITHAXIS_OFFSET))(this, axis, state);
		}

		::System::Void TriggerWithKey(::Il2CppArray<::UnityEngine::KeyCode>* keys, ::System::Single state)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::KeyCode>*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGACTIONSTATE_TRIGGERWITHKEY_OFFSET))(this, keys, state);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGACTIONSTATE_RESET_OFFSET))(this);
		}

		::System::Void Update(::UnityEngine::Rendering::DebugActionDesc* desc)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::DebugActionDesc*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGACTIONSTATE_UPDATE_OFFSET))(this, desc);
		}
	};
}
