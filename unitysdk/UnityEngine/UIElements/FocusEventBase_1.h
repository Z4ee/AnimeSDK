#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UIElements/EventBase_1.h"

namespace UnityEngine::UIElements { class FocusChangeDirection; }
namespace UnityEngine::UIElements { class FocusController; }
namespace UnityEngine::UIElements { class Focusable; }
namespace UnityEngine::UIElements { class IEventHandler; }

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int FocusEventBase_1_TypeDefinitionIndex = 6199;

	template <typename T>
	class FocusEventBase_1 : public ::UnityEngine::UIElements::EventBase_1<T>
	{
	public:
		::UnityEngine::UIElements::Focusable* _relatedTarget_k__BackingField; // 0x0
		::UnityEngine::UIElements::FocusChangeDirection* _direction_k__BackingField; // 0x0
		::UnityEngine::UIElements::FocusController* _focusController_k__BackingField; // 0x0
	};
}
