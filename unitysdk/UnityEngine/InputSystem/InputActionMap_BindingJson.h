#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_BINDINGJSON_FROMBINDING_OFFSET UNITYSDK_OFFSET(0x1F80FD30)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_BINDINGJSON_TOBINDING_OFFSET UNITYSDK_OFFSET(0xAB5220)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputActionMap_BindingJson_TypeDefinitionIndex = 32159;

	struct alignas(8) InputActionMap_BindingJson
	{
		::System::String* name; // 0x10
		::System::String* id; // 0x18
		::System::String* path; // 0x20
		::System::String* interactions; // 0x28
		::System::String* processors; // 0x30
		::System::String* groups; // 0x38
		::System::String* action; // 0x40
		::System::Boolean isComposite; // 0x48
		::System::Boolean isPartOfComposite; // 0x49

		/*
		::UnityEngine::InputSystem::InputBinding ToBinding()
		{
			return ((::UnityEngine::InputSystem::InputBinding(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_BINDINGJSON_TOBINDING_OFFSET))(this);
		}
		*/

		/*
		static ::UnityEngine::InputSystem::InputActionMap_BindingJson FromBinding(::UnityEngine::InputSystem::InputBinding& binding)
		{
			return ((::UnityEngine::InputSystem::InputActionMap_BindingJson(*)(::UnityEngine::InputSystem::InputBinding&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_BINDINGJSON_FROMBINDING_OFFSET))(binding);
		}
		*/
	};
}
