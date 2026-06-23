#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputControlList_1_Enumerator_TypeDefinitionIndex = 31616;

	template <typename TControl>
	struct InputControlList_1_Enumerator
	{
		::System::UInt64* m_Indices; // 0x0
		::System::Int32 m_Count; // 0x0
		::System::Int32 m_Current; // 0x0
	};
}
