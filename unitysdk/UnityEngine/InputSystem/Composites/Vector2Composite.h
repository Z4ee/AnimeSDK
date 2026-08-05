#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/Composites/Vector2Composite_Mode.h"
#include "unitysdk/UnityEngine/InputSystem/InputBindingCompositeContext.h"
#include "unitysdk/UnityEngine/InputSystem/InputBindingComposite_1.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define UNITYENGINE_INPUTSYSTEM_COMPOSITES_VECTOR2COMPOSITE_EVALUATEMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x1EB400A0)
#define UNITYENGINE_INPUTSYSTEM_COMPOSITES_VECTOR2COMPOSITE_READVALUE_OFFSET UNITYSDK_OFFSET(0x1EB3FDC0)
#define UNITYENGINE_INPUTSYSTEM_COMPOSITES_VECTOR2COMPOSITE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB400D0)

namespace UnityEngine::InputSystem::Composites
{
	inline static constexpr unsigned int Vector2Composite_TypeDefinitionIndex = 32717;

	class Vector2Composite : public ::UnityEngine::InputSystem::InputBindingComposite_1<::UnityEngine::Vector2>
	{
	public:
		::System::Int32 left; // 0x10
		::System::Int32 right; // 0x14
		::System::Int32 down; // 0x18
		::UnityEngine::InputSystem::Composites::Vector2Composite_Mode mode; // 0x1C
		::System::Int32 up; // 0x20
		::System::Boolean normalize; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_COMPOSITES_VECTOR2COMPOSITE__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector2 ReadValue(::UnityEngine::InputSystem::InputBindingCompositeContext& context)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::InputSystem::InputBindingCompositeContext&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_COMPOSITES_VECTOR2COMPOSITE_READVALUE_OFFSET))(this, context);
		}

		::System::Single EvaluateMagnitude(::UnityEngine::InputSystem::InputBindingCompositeContext& context)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::InputSystem::InputBindingCompositeContext&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_COMPOSITES_VECTOR2COMPOSITE_EVALUATEMAGNITUDE_OFFSET))(this, context);
		}
	};
}
