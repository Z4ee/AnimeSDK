#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/EventSystems/EventTriggerType.h"

namespace UnityEngine::EventSystems { class EventTrigger_TriggerEvent; }

#define UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x19BDCC20)

namespace UnityEngine::EventSystems
{
	inline static constexpr unsigned int EventTrigger_Entry_TypeDefinitionIndex = 6093;

	class EventTrigger_Entry : public ::System::Object
	{
	public:
		::UnityEngine::EventSystems::EventTriggerType eventID; // 0x10
		::UnityEngine::EventSystems::EventTrigger_TriggerEvent* callback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ENTRY__CTOR_OFFSET))(this);
		}
	};
}
