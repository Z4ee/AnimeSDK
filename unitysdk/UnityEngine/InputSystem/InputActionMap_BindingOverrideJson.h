#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_BINDINGOVERRIDEJSON_FROMBINDING_OFFSET UNITYSDK_OFFSET(0x1F3DBA10)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputActionMap_BindingOverrideJson_TypeDefinitionIndex = 32158;

	struct alignas(8) InputActionMap_BindingOverrideJson
	{
		::System::String* action; // 0x10
		::System::String* id; // 0x18
		::System::String* path; // 0x20
		::System::String* interactions; // 0x28
		::System::String* processors; // 0x30

		/*
		static ::UnityEngine::InputSystem::InputActionMap_BindingOverrideJson FromBinding(::UnityEngine::InputSystem::InputBinding binding)
		{
			return ((::UnityEngine::InputSystem::InputActionMap_BindingOverrideJson(*)(::UnityEngine::InputSystem::InputBinding))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_BINDINGOVERRIDEJSON_FROMBINDING_OFFSET))(binding);
		}
		*/
	};
}
