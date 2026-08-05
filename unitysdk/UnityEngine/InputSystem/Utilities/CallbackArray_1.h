#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/InlinedArray_1.h"

namespace UnityEngine::InputSystem::Utilities
{
	inline static constexpr unsigned int CallbackArray_1_TypeDefinitionIndex = 32660;

	template <typename TDelegate>
	struct CallbackArray_1
	{
		::System::Boolean m_CannotMutateCallbacksArray; // 0x0
		::UnityEngine::InputSystem::Utilities::InlinedArray_1<TDelegate> m_Callbacks; // 0x0
		::UnityEngine::InputSystem::Utilities::InlinedArray_1<TDelegate> m_CallbacksToAdd; // 0x0
		::UnityEngine::InputSystem::Utilities::InlinedArray_1<TDelegate> m_CallbacksToRemove; // 0x0
	};
}
