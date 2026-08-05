#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace UnityEngine::InputSystem { class InputAction; }
namespace UnityEngine::InputSystem { class InputActionMap; }

#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_COMPOSITESYNTAX_GET_BINDINGINDEX_OFFSET UNITYSDK_OFFSET(0xA593F0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_COMPOSITESYNTAX_WITH_OFFSET UNITYSDK_OFFSET(0xA59430)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_COMPOSITESYNTAX__CTOR_OFFSET UNITYSDK_OFFSET(0xA59420)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputActionSetupExtensions_CompositeSyntax_TypeDefinitionIndex = 32178;

	struct alignas(8) InputActionSetupExtensions_CompositeSyntax
	{
		::UnityEngine::InputSystem::InputAction* m_Action; // 0x10
		::UnityEngine::InputSystem::InputActionMap* m_ActionMap; // 0x18
		::System::Int32 m_BindingIndexInMap; // 0x20

		::System::Void _ctor(::UnityEngine::InputSystem::InputActionMap* map, ::UnityEngine::InputSystem::InputAction* action, ::System::Int32 compositeIndex)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputActionMap*, ::UnityEngine::InputSystem::InputAction*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_COMPOSITESYNTAX__CTOR_OFFSET))(this, map, action, compositeIndex);
		}

		::System::Int32 get_bindingIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_COMPOSITESYNTAX_GET_BINDINGINDEX_OFFSET))(this);
		}

		::UnityEngine::InputSystem::InputActionSetupExtensions_CompositeSyntax With(::System::String* name, ::System::String* binding, ::System::String* groups, ::System::String* processors)
		{
			return ((::UnityEngine::InputSystem::InputActionSetupExtensions_CompositeSyntax(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_COMPOSITESYNTAX_WITH_OFFSET))(this, name, binding, groups, processors);
		}
	};
}
