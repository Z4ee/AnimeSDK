#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/InputActionMap_BindingJson.h"
#include "unitysdk/UnityEngine/InputSystem/InputActionMap_WriteActionJson.h"

namespace System { class String; }
namespace UnityEngine::InputSystem { class InputActionMap; }

#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_WRITEMAPJSON_FROMMAP_OFFSET UNITYSDK_OFFSET(0x1DF75F10)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputActionMap_WriteMapJson_TypeDefinitionIndex = 31543;

	struct alignas(8) InputActionMap_WriteMapJson
	{
		::System::String* name; // 0x10
		::System::String* id; // 0x18
		::Il2CppArray<::UnityEngine::InputSystem::InputActionMap_WriteActionJson>* actions; // 0x20
		::Il2CppArray<::UnityEngine::InputSystem::InputActionMap_BindingJson>* bindings; // 0x28

		static ::UnityEngine::InputSystem::InputActionMap_WriteMapJson FromMap(::UnityEngine::InputSystem::InputActionMap* map)
		{
			return ((::UnityEngine::InputSystem::InputActionMap_WriteMapJson(*)(::UnityEngine::InputSystem::InputActionMap*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_WRITEMAPJSON_FROMMAP_OFFSET))(map);
		}
	};
}
