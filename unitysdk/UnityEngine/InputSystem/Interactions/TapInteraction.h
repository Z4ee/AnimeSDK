#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/InputInteractionContext.h"

#define UNITYENGINE_INPUTSYSTEM_INTERACTIONS_TAPINTERACTION_GET_DURATIONORDEFAULT_OFFSET UNITYSDK_OFFSET(0x1BCC5530)
#define UNITYENGINE_INPUTSYSTEM_INTERACTIONS_TAPINTERACTION_GET_PRESSPOINTORDEFAULT_OFFSET UNITYSDK_OFFSET(0x1BCC5620)
#define UNITYENGINE_INPUTSYSTEM_INTERACTIONS_TAPINTERACTION_GET_RELEASEPOINTORDEFAULT_OFFSET UNITYSDK_OFFSET(0x1BCC5640)
#define UNITYENGINE_INPUTSYSTEM_INTERACTIONS_TAPINTERACTION_PROCESS_OFFSET UNITYSDK_OFFSET(0x1BCC5670)
#define UNITYENGINE_INPUTSYSTEM_INTERACTIONS_TAPINTERACTION_RESET_OFFSET UNITYSDK_OFFSET(0x1BCC5B60)
#define UNITYENGINE_INPUTSYSTEM_INTERACTIONS_TAPINTERACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BCC5B70)

namespace UnityEngine::InputSystem::Interactions
{
	inline static constexpr unsigned int TapInteraction_TypeDefinitionIndex = 29375;

	class TapInteraction : public ::System::Object
	{
	public:
		::System::Double m_TapStartTime; // 0x10
		::System::Single pressPoint; // 0x18
		::System::Single duration; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INTERACTIONS_TAPINTERACTION__CTOR_OFFSET))(this);
		}

		::System::Single get_durationOrDefault()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INTERACTIONS_TAPINTERACTION_GET_DURATIONORDEFAULT_OFFSET))(this);
		}

		::System::Single get_pressPointOrDefault()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INTERACTIONS_TAPINTERACTION_GET_PRESSPOINTORDEFAULT_OFFSET))(this);
		}

		::System::Single get_releasePointOrDefault()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INTERACTIONS_TAPINTERACTION_GET_RELEASEPOINTORDEFAULT_OFFSET))(this);
		}

		::System::Void Process(::UnityEngine::InputSystem::InputInteractionContext& context)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputInteractionContext&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INTERACTIONS_TAPINTERACTION_PROCESS_OFFSET))(this, context);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INTERACTIONS_TAPINTERACTION_RESET_OFFSET))(this);
		}
	};
}
