#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/InputBindingCompositeContext.h"
#include "unitysdk/UnityEngine/InputSystem/InputBindingComposite_1.h"

#define UNITYENGINE_INPUTSYSTEM_COMPOSITES_BUTTONWITHTWOMODIFIERS_EVALUATEMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x1F377DA0)
#define UNITYENGINE_INPUTSYSTEM_COMPOSITES_BUTTONWITHTWOMODIFIERS_READVALUE_OFFSET UNITYSDK_OFFSET(0x1F377CB0)
#define UNITYENGINE_INPUTSYSTEM_COMPOSITES_BUTTONWITHTWOMODIFIERS__CTOR_OFFSET UNITYSDK_OFFSET(0x1F377E90)

namespace UnityEngine::InputSystem::Composites
{
	inline static constexpr unsigned int ButtonWithTwoModifiers_TypeDefinitionIndex = 32714;

	class ButtonWithTwoModifiers : public ::UnityEngine::InputSystem::InputBindingComposite_1<::System::Single>
	{
	public:
		::System::Int32 modifier2; // 0x10
		::System::Int32 button; // 0x14
		::System::Int32 modifier1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_COMPOSITES_BUTTONWITHTWOMODIFIERS__CTOR_OFFSET))(this);
		}

		::System::Single ReadValue(::UnityEngine::InputSystem::InputBindingCompositeContext& context)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::InputSystem::InputBindingCompositeContext&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_COMPOSITES_BUTTONWITHTWOMODIFIERS_READVALUE_OFFSET))(this, context);
		}

		::System::Single EvaluateMagnitude(::UnityEngine::InputSystem::InputBindingCompositeContext& context)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::InputSystem::InputBindingCompositeContext&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_COMPOSITES_BUTTONWITHTWOMODIFIERS_EVALUATEMAGNITUDE_OFFSET))(this, context);
		}
	};
}
