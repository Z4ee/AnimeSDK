#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/InputControlScheme.h"

namespace System { class String; }

#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION___C__DISPLAYCLASS32_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A920430)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION___C__DISPLAYCLASS32_0__WITHTARGETBINDING_B__0_OFFSET UNITYSDK_OFFSET(0x1A920440)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputActionRebindingExtensions_RebindingOperation___c__DisplayClass32_0_TypeDefinitionIndex = 28895;

	class InputActionRebindingExtensions_RebindingOperation___c__DisplayClass32_0 : public ::System::Object
	{
	public:
		::System::String* group; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION___C__DISPLAYCLASS32_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _WithTargetBinding_b__0(::UnityEngine::InputSystem::InputControlScheme x)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::InputControlScheme))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS_REBINDINGOPERATION___C__DISPLAYCLASS32_0__WITHTARGETBINDING_B__0_OFFSET))(this, x);
		}
	};
}
