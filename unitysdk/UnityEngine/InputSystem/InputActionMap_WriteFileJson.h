#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/InputActionMap_WriteMapJson.h"

namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine::InputSystem { class InputActionMap; }

#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_WRITEFILEJSON_FROMMAPS_OFFSET UNITYSDK_OFFSET(0x1DDE8B80)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_WRITEFILEJSON_FROMMAP_OFFSET UNITYSDK_OFFSET(0x1DDE8AF0)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputActionMap_WriteFileJson_TypeDefinitionIndex = 31544;

	struct alignas(8) InputActionMap_WriteFileJson
	{
		::Il2CppArray<::UnityEngine::InputSystem::InputActionMap_WriteMapJson>* maps; // 0x10

		static ::UnityEngine::InputSystem::InputActionMap_WriteFileJson FromMap(::UnityEngine::InputSystem::InputActionMap* map)
		{
			return ((::UnityEngine::InputSystem::InputActionMap_WriteFileJson(*)(::UnityEngine::InputSystem::InputActionMap*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_WRITEFILEJSON_FROMMAP_OFFSET))(map);
		}

		static ::UnityEngine::InputSystem::InputActionMap_WriteFileJson FromMaps(::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputActionMap*>* maps)
		{
			return ((::UnityEngine::InputSystem::InputActionMap_WriteFileJson(*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputActionMap*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_WRITEFILEJSON_FROMMAPS_OFFSET))(maps);
		}
	};
}
