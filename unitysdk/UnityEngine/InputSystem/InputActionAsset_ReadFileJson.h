#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/InputActionMap_ReadMapJson.h"
#include "unitysdk/UnityEngine/InputSystem/InputControlScheme_SchemeJson.h"

namespace System { class String; }
namespace UnityEngine::InputSystem { class InputActionAsset; }

#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_READFILEJSON_TOASSET_OFFSET UNITYSDK_OFFSET(0x929F20)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputActionAsset_ReadFileJson_TypeDefinitionIndex = 31531;

	struct alignas(8) InputActionAsset_ReadFileJson
	{
		::System::String* name; // 0x10
		::Il2CppArray<::UnityEngine::InputSystem::InputActionMap_ReadMapJson>* maps; // 0x18
		::Il2CppArray<::UnityEngine::InputSystem::InputControlScheme_SchemeJson>* controlSchemes; // 0x20

		::System::Void ToAsset(::UnityEngine::InputSystem::InputActionAsset* asset)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputActionAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_READFILEJSON_TOASSET_OFFSET))(this, asset);
		}
	};
}
