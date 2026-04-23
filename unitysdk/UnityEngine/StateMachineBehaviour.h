#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Animations/AnimatorControllerPlayable.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace UnityEngine { class Animator; }

#define UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEENTER_1_OFFSET UNITYSDK_OFFSET(0x1A417D20)
#define UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEENTER_OFFSET UNITYSDK_OFFSET(0x1A417CB0)
#define UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEEXIT_1_OFFSET UNITYSDK_OFFSET(0x1A417D40)
#define UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEEXIT_OFFSET UNITYSDK_OFFSET(0x1A417CD0)
#define UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEIK_1_OFFSET UNITYSDK_OFFSET(0x1A417D60)
#define UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEIK_OFFSET UNITYSDK_OFFSET(0x1A417CF0)
#define UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEMACHINEENTER_1_OFFSET UNITYSDK_OFFSET(0x1A417D70)
#define UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEMACHINEENTER_OFFSET UNITYSDK_OFFSET(0x1A417D00)
#define UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEMACHINEEXIT_1_OFFSET UNITYSDK_OFFSET(0x1A417D80)
#define UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEMACHINEEXIT_OFFSET UNITYSDK_OFFSET(0x1A417D10)
#define UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEMOVE_1_OFFSET UNITYSDK_OFFSET(0x1A417D50)
#define UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEMOVE_OFFSET UNITYSDK_OFFSET(0x1A417CE0)
#define UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEUPDATE_1_OFFSET UNITYSDK_OFFSET(0x1A417D30)
#define UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1A417CC0)
#define UNITYENGINE_STATEMACHINEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1A417D90)

namespace UnityEngine
{
	inline static constexpr unsigned int StateMachineBehaviour_TypeDefinitionIndex = 5022;

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
