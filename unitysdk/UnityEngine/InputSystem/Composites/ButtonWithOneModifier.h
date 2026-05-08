#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/InputBindingCompositeContext.h"
#include "unitysdk/UnityEngine/InputSystem/InputBindingComposite_1.h"

#define UNITYENGINE_INPUTSYSTEM_COMPOSITES_BUTTONWITHONEMODIFIER_EVALUATEMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x1BC43E50)
#define UNITYENGINE_INPUTSYSTEM_COMPOSITES_BUTTONWITHONEMODIFIER_READVALUE_OFFSET UNITYSDK_OFFSET(0x1BC43DC0)
#define UNITYENGINE_INPUTSYSTEM_COMPOSITES_BUTTONWITHONEMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC43EE0)

namespace UnityEngine::InputSystem::Composites
{
	inline static constexpr unsigned int ButtonWithOneModifier_TypeDefinitionIndex = 29437;

	class ButtonWithOneModifier : public ::UnityEngine::InputSystem::InputBindingComposite_1<::System::Single>
	{
	public:
		::System::Int32 modifier; // 0x10
		::System::Int32 button; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_COMPOSITES_BUTTONWITHONEMODIFIER__CTOR_OFFSET))(this);
		}

		::System::Single ReadValue(::UnityEngine::InputSystem::InputBindingCompositeContext& context)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::InputSystem::InputBindingCompositeContext&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_COMPOSITES_BUTTONWITHONEMODIFIER_READVALUE_OFFSET))(this, context);
		}

		::System::Single EvaluateMagnitude(::UnityEngine::InputSystem::InputBindingCompositeContext& context)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::InputSystem::InputBindingCompositeContext&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_COMPOSITES_BUTTONWITHONEMODIFIER_EVALUATEMAGNITUDE_OFFSET))(this, context);
		}
	};
}
