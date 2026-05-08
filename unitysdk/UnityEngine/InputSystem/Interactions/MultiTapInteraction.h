#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/InputInteractionContext.h"
#include "unitysdk/UnityEngine/InputSystem/Interactions/MultiTapInteraction_TapPhase.h"

#define UNITYENGINE_INPUTSYSTEM_INTERACTIONS_MULTITAPINTERACTION_GET_PRESSPOINTORDEFAULT_OFFSET UNITYSDK_OFFSET(0x1AF978D0)
#define UNITYENGINE_INPUTSYSTEM_INTERACTIONS_MULTITAPINTERACTION_GET_RELEASEPOINTORDEFAULT_OFFSET UNITYSDK_OFFSET(0x1AF978F0)
#define UNITYENGINE_INPUTSYSTEM_INTERACTIONS_MULTITAPINTERACTION_GET_TAPDELAYORDEFAULT_OFFSET UNITYSDK_OFFSET(0x1AF977E0)
#define UNITYENGINE_INPUTSYSTEM_INTERACTIONS_MULTITAPINTERACTION_GET_TAPTIMEORDEFAULT_OFFSET UNITYSDK_OFFSET(0x1AF976F0)
#define UNITYENGINE_INPUTSYSTEM_INTERACTIONS_MULTITAPINTERACTION_PROCESS_OFFSET UNITYSDK_OFFSET(0x1AF97920)
#define UNITYENGINE_INPUTSYSTEM_INTERACTIONS_MULTITAPINTERACTION_RESET_OFFSET UNITYSDK_OFFSET(0x1AF98250)
#define UNITYENGINE_INPUTSYSTEM_INTERACTIONS_MULTITAPINTERACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF98270)

namespace UnityEngine::InputSystem::Interactions
{
	inline static constexpr unsigned int MultiTapInteraction_TypeDefinitionIndex = 29370;

	class MultiTapInteraction : public ::System::Object
	{
	public:
		::UnityEngine::InputSystem::Interactions::MultiTapInteraction_TapPhase m_CurrentTapPhase; // 0x10
		::System::Single tapTime; // 0x14
		::System::Int32 tapCount; // 0x18
		::System::Single tapDelay; // 0x1C
		::System::Double m_CurrentTapStartTime; // 0x20
		::System::Int32 m_CurrentTapCount; // 0x28
		::System::Single pressPoint; // 0x2C
		::System::Double m_LastTapReleaseTime; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INTERACTIONS_MULTITAPINTERACTION__CTOR_OFFSET))(this);
		}

		::System::Single get_tapTimeOrDefault()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INTERACTIONS_MULTITAPINTERACTION_GET_TAPTIMEORDEFAULT_OFFSET))(this);
		}

		::System::Single get_tapDelayOrDefault()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INTERACTIONS_MULTITAPINTERACTION_GET_TAPDELAYORDEFAULT_OFFSET))(this);
		}

		::System::Single get_pressPointOrDefault()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INTERACTIONS_MULTITAPINTERACTION_GET_PRESSPOINTORDEFAULT_OFFSET))(this);
		}

		::System::Single get_releasePointOrDefault()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INTERACTIONS_MULTITAPINTERACTION_GET_RELEASEPOINTORDEFAULT_OFFSET))(this);
		}

		::System::Void Process(::UnityEngine::InputSystem::InputInteractionContext& context)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputInteractionContext&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INTERACTIONS_MULTITAPINTERACTION_PROCESS_OFFSET))(this, context);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INTERACTIONS_MULTITAPINTERACTION_RESET_OFFSET))(this);
		}
	};
}
