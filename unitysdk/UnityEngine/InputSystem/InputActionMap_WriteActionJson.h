#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace UnityEngine::InputSystem { class InputAction; }

#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_WRITEACTIONJSON_FROMACTION_OFFSET UNITYSDK_OFFSET(0x1E39C9A0)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputActionMap_WriteActionJson_TypeDefinitionIndex = 31541;

	struct alignas(8) InputActionMap_WriteActionJson
	{
		::System::String* name; // 0x10
		::System::String* type; // 0x18
		::System::String* id; // 0x20
		::System::String* expectedControlType; // 0x28
		::System::String* processors; // 0x30
		::System::String* interactions; // 0x38
		::System::Boolean initialStateCheck; // 0x40

		static ::UnityEngine::InputSystem::InputActionMap_WriteActionJson FromAction(::UnityEngine::InputSystem::InputAction* action)
		{
			return ((::UnityEngine::InputSystem::InputActionMap_WriteActionJson(*)(::UnityEngine::InputSystem::InputAction*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_WRITEACTIONJSON_FROMACTION_OFFSET))(action);
		}
	};
}
