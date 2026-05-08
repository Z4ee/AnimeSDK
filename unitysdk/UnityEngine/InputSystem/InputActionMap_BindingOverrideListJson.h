#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/InputActionMap_BindingOverrideJson.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputActionMap_BindingOverrideListJson_TypeDefinitionIndex = 28881;

	struct alignas(8) InputActionMap_BindingOverrideListJson
	{
		::System::Collections::Generic::List_1<::UnityEngine::InputSystem::InputActionMap_BindingOverrideJson>* bindings; // 0x10
	};
}
