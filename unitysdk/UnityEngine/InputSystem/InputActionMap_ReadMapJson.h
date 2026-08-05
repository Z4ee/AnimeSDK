#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/InputActionMap_BindingJson.h"
#include "unitysdk/UnityEngine/InputSystem/InputActionMap_ReadActionJson.h"

namespace System { class String; }

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputActionMap_ReadMapJson_TypeDefinitionIndex = 32162;

	struct alignas(8) InputActionMap_ReadMapJson
	{
		::System::String* name; // 0x10
		::System::String* id; // 0x18
		::Il2CppArray<::UnityEngine::InputSystem::InputActionMap_ReadActionJson>* actions; // 0x20
		::Il2CppArray<::UnityEngine::InputSystem::InputActionMap_BindingJson>* bindings; // 0x28
	};
}
