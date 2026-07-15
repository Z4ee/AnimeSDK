#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::UIElements { class EventBase; }
namespace UnityEngine::UIElements { class IPanel; }

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int EventDispatcher_EventRecord_TypeDefinitionIndex = 6132;

	struct alignas(8) EventDispatcher_EventRecord
	{
		::UnityEngine::UIElements::EventBase* m_Event; // 0x10
		::UnityEngine::UIElements::IPanel* m_Panel; // 0x18
	};
}
