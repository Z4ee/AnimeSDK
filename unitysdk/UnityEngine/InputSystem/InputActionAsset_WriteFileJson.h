#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/InputActionMap_WriteMapJson.h"
#include "unitysdk/UnityEngine/InputSystem/InputControlScheme_SchemeJson.h"

namespace System { class String; }

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputActionAsset_WriteFileJson_TypeDefinitionIndex = 32150;

	struct alignas(8) InputActionAsset_WriteFileJson
	{
		::System::String* name; // 0x10
		::Il2CppArray<::UnityEngine::InputSystem::InputActionMap_WriteMapJson>* maps; // 0x18
		::Il2CppArray<::UnityEngine::InputSystem::InputControlScheme_SchemeJson>* controlSchemes; // 0x20
	};
}
