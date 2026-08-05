#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace UnityEngine { class Animator; }

#define UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEENTER_OFFSET UNITYSDK_OFFSET(0x1FC57C40)
#define UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEEXIT_OFFSET UNITYSDK_OFFSET(0x1FC57C60)
#define UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1FC57C50)
#define UNITYENGINE_STATEMACHINEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC57C70)

namespace UnityEngine
{
	inline static constexpr unsigned int StateMachineBehaviour_TypeDefinitionIndex = 6612;

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
	};
}
