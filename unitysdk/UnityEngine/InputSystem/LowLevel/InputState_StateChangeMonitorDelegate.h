#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputEventPtr.h"

namespace System { template <typename T1, typename T2, typename T3, typename T4> class Action_4; }
namespace UnityEngine::InputSystem { class InputControl; }

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATE_STATECHANGEMONITORDELEGATE_NOTIFYCONTROLSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x1A04F110)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATE_STATECHANGEMONITORDELEGATE_NOTIFYTIMEREXPIRED_OFFSET UNITYSDK_OFFSET(0x1A04F190)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATE_STATECHANGEMONITORDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A04F210)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int InputState_StateChangeMonitorDelegate_TypeDefinitionIndex = 29289;

	class InputState_StateChangeMonitorDelegate : public ::System::Object
	{
	public:
		::System::Action_4<::UnityEngine::InputSystem::InputControl*, ::System::Double, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::System::Int64>* valueChangeCallback; // 0x10
		::System::Action_4<::UnityEngine::InputSystem::InputControl*, ::System::Double, ::System::Int64, ::System::Int32>* timerExpiredCallback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATE_STATECHANGEMONITORDELEGATE__CTOR_OFFSET))(this);
		}

		::System::Void NotifyControlStateChanged(::UnityEngine::InputSystem::InputControl* control, ::System::Double time, ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, ::System::Int64 monitorIndex)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputControl*, ::System::Double, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::System::Int64))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATE_STATECHANGEMONITORDELEGATE_NOTIFYCONTROLSTATECHANGED_OFFSET))(this, control, time, eventPtr, monitorIndex);
		}

		::System::Void NotifyTimerExpired(::UnityEngine::InputSystem::InputControl* control, ::System::Double time, ::System::Int64 monitorIndex, ::System::Int32 timerIndex)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputControl*, ::System::Double, ::System::Int64, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATE_STATECHANGEMONITORDELEGATE_NOTIFYTIMEREXPIRED_OFFSET))(this, control, time, monitorIndex, timerIndex);
		}
	};
}
