#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace UnityEngine::InputSystem::LowLevel { template <typename T> class InputStateHistory_1; }

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int InputStateHistory_1_Enumerator_TypeDefinitionIndex = 31956;

	template <typename TValue>
	struct InputStateHistory_1_Enumerator
	{
		::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>* m_History; // 0x0
		::System::Int32 m_Index; // 0x0
	};
}
