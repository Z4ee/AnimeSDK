#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/UIElements/EventDispatcher_EventRecord.h"

namespace System::Collections::Generic { template <typename T> class Queue_1; }

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int EventDispatcher_DispatchContext_TypeDefinitionIndex = 6133;

	struct alignas(8) EventDispatcher_DispatchContext
	{
		::System::UInt32 m_GateCount; // 0x10
		::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventDispatcher_EventRecord>* m_Queue; // 0x18
	};
}
