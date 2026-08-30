#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Events/UnityEvent_1.h"

namespace UnityEngine::EventSystems { class BaseEventData; }

#define UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_TRIGGEREVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE09170)

namespace UnityEngine::EventSystems
{
	inline static constexpr unsigned int EventTrigger_TriggerEvent_TypeDefinitionIndex = 6922;

	class EventTrigger_TriggerEvent : public ::UnityEngine::Events::UnityEvent_1<::UnityEngine::EventSystems::BaseEventData*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_TRIGGEREVENT__CTOR_OFFSET))(this);
		}
	};
}
