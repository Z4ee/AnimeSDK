#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UIElements/EventBase_1.h"

namespace UnityEngine::UIElements { class IEventHandler; }

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int PointerCaptureEventBase_1_TypeDefinitionIndex = 6169;

	template <typename T>
	class PointerCaptureEventBase_1 : public ::UnityEngine::UIElements::EventBase_1<T>
	{
	public:
		::UnityEngine::UIElements::IEventHandler* _relatedTarget_k__BackingField; // 0x0
		::System::Int32 _pointerId_k__BackingField; // 0x0
	};
}
