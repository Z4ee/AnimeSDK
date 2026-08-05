#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/InputBinding.h"

#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1EAD82D0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS___C__DISPLAYCLASS5_0__REMOVEACTION_B__0_OFFSET UNITYSDK_OFFSET(0x1EAD82E0)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputActionSetupExtensions___c__DisplayClass5_0_TypeDefinitionIndex = 32180;

	class InputActionSetupExtensions___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::UnityEngine::InputSystem::InputBinding binding; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _RemoveAction_b__0(::UnityEngine::InputSystem::InputBinding b)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::InputBinding))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS___C__DISPLAYCLASS5_0__REMOVEACTION_B__0_OFFSET))(this, b);
		}
	};
}
