#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/InlinedArray_1.h"

namespace System { class Object; }

namespace UnityEngine::InputSystem::Utilities
{
	inline static constexpr unsigned int InlinedArray_1_Enumerator_TypeDefinitionIndex = 32668;

	template <typename TValue>
	struct InlinedArray_1_Enumerator
	{
		::UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue> array; // 0x0
		::System::Int32 index; // 0x0
	};
}
