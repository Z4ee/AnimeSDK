#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/InputActionMap_BindingJson.h"

namespace System { class String; }
namespace UnityEngine::InputSystem { class InputAction; }

#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_READACTIONJSON_TOACTION_OFFSET UNITYSDK_OFFSET(0xA42CB0)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputActionMap_ReadActionJson_TypeDefinitionIndex = 31540;

	struct alignas(8) InputActionMap_ReadActionJson
	{
		::System::String* name; // 0x10
		::System::String* type; // 0x18
		::System::String* id; // 0x20
		::System::String* expectedControlType; // 0x28
		::System::String* expectedControlLayout; // 0x30
		::System::String* processors; // 0x38
		::System::String* interactions; // 0x40
		::System::Boolean passThrough; // 0x48
		::System::Boolean initialStateCheck; // 0x49
		::Il2CppArray<::UnityEngine::InputSystem::InputActionMap_BindingJson>* bindings; // 0x50

		::UnityEngine::InputSystem::InputAction* ToAction(::System::String* actionName)
		{
			return ((::UnityEngine::InputSystem::InputAction*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_READACTIONJSON_TOACTION_OFFSET))(this, actionName);
		}
	};
}
