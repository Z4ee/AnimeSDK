#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Animations/AnimatorControllerPlayable.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace UnityEngine { class Animator; }

#define UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEENTER_1_OFFSET UNITYSDK_OFFSET(0x1ECF83E0)
#define UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEENTER_OFFSET UNITYSDK_OFFSET(0x1ECF8370)
#define UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEEXIT_1_OFFSET UNITYSDK_OFFSET(0x1ECF8400)
#define UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEEXIT_OFFSET UNITYSDK_OFFSET(0x1ECF8390)
#define UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEIK_1_OFFSET UNITYSDK_OFFSET(0x1ECF8420)
#define UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEIK_OFFSET UNITYSDK_OFFSET(0x1ECF83B0)
#define UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEMACHINEENTER_1_OFFSET UNITYSDK_OFFSET(0x1ECF8430)
#define UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEMACHINEENTER_OFFSET UNITYSDK_OFFSET(0x1ECF83C0)
#define UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEMACHINEEXIT_1_OFFSET UNITYSDK_OFFSET(0x1ECF8440)
#define UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEMACHINEEXIT_OFFSET UNITYSDK_OFFSET(0x1ECF83D0)
#define UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEMOVE_1_OFFSET UNITYSDK_OFFSET(0x1ECF8410)
#define UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEMOVE_OFFSET UNITYSDK_OFFSET(0x1ECF83A0)
#define UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEUPDATE_1_OFFSET UNITYSDK_OFFSET(0x1ECF83F0)
#define UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1ECF8380)
#define UNITYENGINE_STATEMACHINEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1ECF8450)

namespace UnityEngine
{
	inline static constexpr unsigned int StateMachineBehaviour_TypeDefinitionIndex = 5683;

	class StateMachineBehaviour : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_STATEMACHINEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void OnStateEnter(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEENTER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnStateUpdate(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEUPDATE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnStateExit(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEEXIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnStateMove(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEMOVE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnStateIK(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEIK_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnStateMachineEnter(::UnityEngine::Animator* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEMACHINEENTER_OFFSET))(this, a1, a2);
		}

		::System::Void OnStateMachineExit(::UnityEngine::Animator* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEMACHINEEXIT_OFFSET))(this, a1, a2);
		}

		::System::Void OnStateEnter_1(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3, ::UnityEngine::Animations::AnimatorControllerPlayable a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32, ::UnityEngine::Animations::AnimatorControllerPlayable))((::PBYTE)hIl2Cpp + UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEENTER_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void OnStateUpdate_1(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3, ::UnityEngine::Animations::AnimatorControllerPlayable a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32, ::UnityEngine::Animations::AnimatorControllerPlayable))((::PBYTE)hIl2Cpp + UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEUPDATE_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void OnStateExit_1(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3, ::UnityEngine::Animations::AnimatorControllerPlayable a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32, ::UnityEngine::Animations::AnimatorControllerPlayable))((::PBYTE)hIl2Cpp + UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEEXIT_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void OnStateMove_1(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3, ::UnityEngine::Animations::AnimatorControllerPlayable a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32, ::UnityEngine::Animations::AnimatorControllerPlayable))((::PBYTE)hIl2Cpp + UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEMOVE_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void OnStateIK_1(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3, ::UnityEngine::Animations::AnimatorControllerPlayable a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32, ::UnityEngine::Animations::AnimatorControllerPlayable))((::PBYTE)hIl2Cpp + UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEIK_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void OnStateMachineEnter_1(::UnityEngine::Animator* a1, ::System::Int32 a2, ::UnityEngine::Animations::AnimatorControllerPlayable a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::System::Int32, ::UnityEngine::Animations::AnimatorControllerPlayable))((::PBYTE)hIl2Cpp + UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEMACHINEENTER_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnStateMachineExit_1(::UnityEngine::Animator* a1, ::System::Int32 a2, ::UnityEngine::Animations::AnimatorControllerPlayable a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::System::Int32, ::UnityEngine::Animations::AnimatorControllerPlayable))((::PBYTE)hIl2Cpp + UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEMACHINEEXIT_1_OFFSET))(this, a1, a2, a3);
		}
	};
}
