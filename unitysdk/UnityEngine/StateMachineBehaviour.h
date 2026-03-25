#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Animations/AnimatorControllerPlayable.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace UnityEngine { class Animator; }

#define UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEENTER_1_OFFSET UNITYSDK_OFFSET(0x189DE470)
#define UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEENTER_OFFSET UNITYSDK_OFFSET(0x189DE400)
#define UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEEXIT_1_OFFSET UNITYSDK_OFFSET(0x189DE490)
#define UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEEXIT_OFFSET UNITYSDK_OFFSET(0x189DE420)
#define UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEIK_1_OFFSET UNITYSDK_OFFSET(0x189DE4B0)
#define UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEIK_OFFSET UNITYSDK_OFFSET(0x189DE440)
#define UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEMACHINEENTER_1_OFFSET UNITYSDK_OFFSET(0x189DE4C0)
#define UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEMACHINEENTER_OFFSET UNITYSDK_OFFSET(0x189DE450)
#define UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEMACHINEEXIT_1_OFFSET UNITYSDK_OFFSET(0x189DE4D0)
#define UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEMACHINEEXIT_OFFSET UNITYSDK_OFFSET(0x189DE460)
#define UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEMOVE_1_OFFSET UNITYSDK_OFFSET(0x189DE4A0)
#define UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEMOVE_OFFSET UNITYSDK_OFFSET(0x189DE430)
#define UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEUPDATE_1_OFFSET UNITYSDK_OFFSET(0x189DE480)
#define UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEUPDATE_OFFSET UNITYSDK_OFFSET(0x189DE410)
#define UNITYENGINE_STATEMACHINEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x189DE4E0)

namespace UnityEngine
{
	inline static constexpr unsigned int StateMachineBehaviour_TypeDefinitionIndex = 5014;

	class StateMachineBehaviour : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_STATEMACHINEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void OnStateEnter(::UnityEngine::Animator* animator, ::UnityEngine::AnimatorStateInfo stateInfo, ::System::Int32 layerIndex)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEENTER_OFFSET))(this, animator, stateInfo, layerIndex);
		}

		::System::Void OnStateUpdate(::UnityEngine::Animator* animator, ::UnityEngine::AnimatorStateInfo stateInfo, ::System::Int32 layerIndex)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEUPDATE_OFFSET))(this, animator, stateInfo, layerIndex);
		}

		::System::Void OnStateExit(::UnityEngine::Animator* animator, ::UnityEngine::AnimatorStateInfo stateInfo, ::System::Int32 layerIndex)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEEXIT_OFFSET))(this, animator, stateInfo, layerIndex);
		}

		::System::Void OnStateMove(::UnityEngine::Animator* animator, ::UnityEngine::AnimatorStateInfo stateInfo, ::System::Int32 layerIndex)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEMOVE_OFFSET))(this, animator, stateInfo, layerIndex);
		}

		::System::Void OnStateIK(::UnityEngine::Animator* animator, ::UnityEngine::AnimatorStateInfo stateInfo, ::System::Int32 layerIndex)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEIK_OFFSET))(this, animator, stateInfo, layerIndex);
		}

		::System::Void OnStateMachineEnter(::UnityEngine::Animator* animator, ::System::Int32 stateMachinePathHash)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEMACHINEENTER_OFFSET))(this, animator, stateMachinePathHash);
		}

		::System::Void OnStateMachineExit(::UnityEngine::Animator* animator, ::System::Int32 stateMachinePathHash)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEMACHINEEXIT_OFFSET))(this, animator, stateMachinePathHash);
		}

		::System::Void OnStateEnter_1(::UnityEngine::Animator* animator, ::UnityEngine::AnimatorStateInfo stateInfo, ::System::Int32 layerIndex, ::UnityEngine::Animations::AnimatorControllerPlayable controller)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32, ::UnityEngine::Animations::AnimatorControllerPlayable))((::PBYTE)hIl2Cpp + UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEENTER_1_OFFSET))(this, animator, stateInfo, layerIndex, controller);
		}

		::System::Void OnStateUpdate_1(::UnityEngine::Animator* animator, ::UnityEngine::AnimatorStateInfo stateInfo, ::System::Int32 layerIndex, ::UnityEngine::Animations::AnimatorControllerPlayable controller)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32, ::UnityEngine::Animations::AnimatorControllerPlayable))((::PBYTE)hIl2Cpp + UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEUPDATE_1_OFFSET))(this, animator, stateInfo, layerIndex, controller);
		}

		::System::Void OnStateExit_1(::UnityEngine::Animator* animator, ::UnityEngine::AnimatorStateInfo stateInfo, ::System::Int32 layerIndex, ::UnityEngine::Animations::AnimatorControllerPlayable controller)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32, ::UnityEngine::Animations::AnimatorControllerPlayable))((::PBYTE)hIl2Cpp + UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEEXIT_1_OFFSET))(this, animator, stateInfo, layerIndex, controller);
		}

		::System::Void OnStateMove_1(::UnityEngine::Animator* animator, ::UnityEngine::AnimatorStateInfo stateInfo, ::System::Int32 layerIndex, ::UnityEngine::Animations::AnimatorControllerPlayable controller)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32, ::UnityEngine::Animations::AnimatorControllerPlayable))((::PBYTE)hIl2Cpp + UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEMOVE_1_OFFSET))(this, animator, stateInfo, layerIndex, controller);
		}

		::System::Void OnStateIK_1(::UnityEngine::Animator* animator, ::UnityEngine::AnimatorStateInfo stateInfo, ::System::Int32 layerIndex, ::UnityEngine::Animations::AnimatorControllerPlayable controller)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32, ::UnityEngine::Animations::AnimatorControllerPlayable))((::PBYTE)hIl2Cpp + UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEIK_1_OFFSET))(this, animator, stateInfo, layerIndex, controller);
		}

		::System::Void OnStateMachineEnter_1(::UnityEngine::Animator* animator, ::System::Int32 stateMachinePathHash, ::UnityEngine::Animations::AnimatorControllerPlayable controller)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::System::Int32, ::UnityEngine::Animations::AnimatorControllerPlayable))((::PBYTE)hIl2Cpp + UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEMACHINEENTER_1_OFFSET))(this, animator, stateMachinePathHash, controller);
		}

		::System::Void OnStateMachineExit_1(::UnityEngine::Animator* animator, ::System::Int32 stateMachinePathHash, ::UnityEngine::Animations::AnimatorControllerPlayable controller)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::System::Int32, ::UnityEngine::Animations::AnimatorControllerPlayable))((::PBYTE)hIl2Cpp + UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEMACHINEEXIT_1_OFFSET))(this, animator, stateMachinePathHash, controller);
		}
	};
}
