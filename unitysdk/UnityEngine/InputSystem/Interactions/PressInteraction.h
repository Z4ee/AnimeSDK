#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/InputInteractionContext.h"
#include "unitysdk/UnityEngine/InputSystem/Interactions/PressBehavior.h"

#define UNITYENGINE_INPUTSYSTEM_INTERACTIONS_PRESSINTERACTION_GET_PRESSPOINTORDEFAULT_OFFSET UNITYSDK_OFFSET(0x1BA6CFF0)
#define UNITYENGINE_INPUTSYSTEM_INTERACTIONS_PRESSINTERACTION_GET_RELEASEPOINTORDEFAULT_OFFSET UNITYSDK_OFFSET(0x1BA6D010)
#define UNITYENGINE_INPUTSYSTEM_INTERACTIONS_PRESSINTERACTION_PROCESS_OFFSET UNITYSDK_OFFSET(0x1BA6D040)
#define UNITYENGINE_INPUTSYSTEM_INTERACTIONS_PRESSINTERACTION_RESET_OFFSET UNITYSDK_OFFSET(0x1BA6D430)
#define UNITYENGINE_INPUTSYSTEM_INTERACTIONS_PRESSINTERACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA6D440)

namespace UnityEngine::InputSystem::Interactions
{
	inline static constexpr unsigned int PressInteraction_TypeDefinitionIndex = 29372;

	class PressInteraction : public ::System::Object
	{
	public:
		::System::Single pressPoint; // 0x10
		::UnityEngine::InputSystem::Interactions::PressBehavior behavior; // 0x14
		::System::Boolean m_WaitingForRelease; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INTERACTIONS_PRESSINTERACTION__CTOR_OFFSET))(this);
		}

		::System::Single get_pressPointOrDefault()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INTERACTIONS_PRESSINTERACTION_GET_PRESSPOINTORDEFAULT_OFFSET))(this);
		}

		::System::Single get_releasePointOrDefault()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INTERACTIONS_PRESSINTERACTION_GET_RELEASEPOINTORDEFAULT_OFFSET))(this);
		}

		::System::Void Process(::UnityEngine::InputSystem::InputInteractionContext& context)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputInteractionContext&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INTERACTIONS_PRESSINTERACTION_PROCESS_OFFSET))(this, context);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INTERACTIONS_PRESSINTERACTION_RESET_OFFSET))(this);
		}
	};
}
