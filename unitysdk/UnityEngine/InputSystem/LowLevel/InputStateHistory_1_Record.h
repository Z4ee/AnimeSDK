#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::InputSystem { template <typename T> class InputControl_1; }
namespace UnityEngine::InputSystem::LowLevel { template <typename T> class InputStateHistory_1; }

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int InputStateHistory_1_Record_TypeDefinitionIndex = 32577;

	template <typename TValue>
	struct InputStateHistory_1_Record
	{
		::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>* m_Owner; // 0x0
		::System::Int32 m_IndexPlusOne; // 0x0
		::System::UInt32 m_Version; // 0x0
	};
}
