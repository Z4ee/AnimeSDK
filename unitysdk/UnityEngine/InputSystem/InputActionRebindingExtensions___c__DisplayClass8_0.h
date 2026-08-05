#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/InputBinding.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/ReadOnlyArray_1.h"

#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1F7E5BA0)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputActionRebindingExtensions___c__DisplayClass8_0_TypeDefinitionIndex = 32173;

	class InputActionRebindingExtensions___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputBinding> bindings; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}
	};
}
