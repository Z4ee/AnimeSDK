#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

namespace UnityEngine::InputSystem::Utilities
{
	inline static constexpr unsigned int ReadOnlyArray_1_Enumerator_TypeDefinitionIndex = 32699;

	template <typename TValue>
	struct ReadOnlyArray_1_Enumerator
	{
		::Il2CppArray<TValue>* m_Array; // 0x0
		::System::Int32 m_IndexStart; // 0x0
		::System::Int32 m_IndexEnd; // 0x0
		::System::Int32 m_Index; // 0x0
	};
}
