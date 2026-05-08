#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/InputActionMap_ReadActionJson.h"
#include "unitysdk/UnityEngine/InputSystem/InputActionMap_ReadMapJson.h"

namespace UnityEngine::InputSystem { class InputActionMap; }

#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_READFILEJSON_TOMAPS_OFFSET UNITYSDK_OFFSET(0x9A0C20)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputActionMap_ReadFileJson_TypeDefinitionIndex = 28889;

	struct alignas(8) InputActionMap_ReadFileJson
	{
		::Il2CppArray<::UnityEngine::InputSystem::InputActionMap_ReadActionJson>* actions; // 0x10
		::Il2CppArray<::UnityEngine::InputSystem::InputActionMap_ReadMapJson>* maps; // 0x18

		::Il2CppArray<::UnityEngine::InputSystem::InputActionMap*>* ToMaps()
		{
			return ((::Il2CppArray<::UnityEngine::InputSystem::InputActionMap*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_READFILEJSON_TOMAPS_OFFSET))(this);
		}
	};
}
