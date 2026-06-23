#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/InputActionPhase.h"
#include "unitysdk/UnityEngine/InputSystem/Key.h"
#include "unitysdk/UnityEngine/InputSystem/TouchPhase.h"

#define UNITYENGINE_INPUTSYSTEM_INPUTEXTENSIONS_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1E39D870)
#define UNITYENGINE_INPUTSYSTEM_INPUTEXTENSIONS_ISENDEDORCANCELED_OFFSET UNITYSDK_OFFSET(0x1E39D860)
#define UNITYENGINE_INPUTSYSTEM_INPUTEXTENSIONS_ISINPROGRESS_OFFSET UNITYSDK_OFFSET(0x1E39D850)
#define UNITYENGINE_INPUTSYSTEM_INPUTEXTENSIONS_ISMODIFIERKEY_OFFSET UNITYSDK_OFFSET(0x1E39D890)
#define UNITYENGINE_INPUTSYSTEM_INPUTEXTENSIONS_ISTEXTINPUTKEY_OFFSET UNITYSDK_OFFSET(0x1E39D8A0)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputExtensions_TypeDefinitionIndex = 31680;

	class InputExtensions : public ::System::Object
	{
	public:
		static ::System::Boolean IsInProgress(::UnityEngine::InputSystem::InputActionPhase phase)
		{
			return ((::System::Boolean(*)(::UnityEngine::InputSystem::InputActionPhase))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTEXTENSIONS_ISINPROGRESS_OFFSET))(phase);
		}

		static ::System::Boolean IsEndedOrCanceled(::UnityEngine::InputSystem::TouchPhase phase)
		{
			return ((::System::Boolean(*)(::UnityEngine::InputSystem::TouchPhase))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTEXTENSIONS_ISENDEDORCANCELED_OFFSET))(phase);
		}

		static ::System::Boolean IsActive(::UnityEngine::InputSystem::TouchPhase phase)
		{
			return ((::System::Boolean(*)(::UnityEngine::InputSystem::TouchPhase))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTEXTENSIONS_ISACTIVE_OFFSET))(phase);
		}

		static ::System::Boolean IsModifierKey(::UnityEngine::InputSystem::Key key)
		{
			return ((::System::Boolean(*)(::UnityEngine::InputSystem::Key))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTEXTENSIONS_ISMODIFIERKEY_OFFSET))(key);
		}

		static ::System::Boolean IsTextInputKey(::UnityEngine::InputSystem::Key key)
		{
			return ((::System::Boolean(*)(::UnityEngine::InputSystem::Key))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTEXTENSIONS_ISTEXTINPUTKEY_OFFSET))(key);
		}
	};
}
