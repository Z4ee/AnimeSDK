#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/EventSystems/PointerEventData_InputButton.h"

namespace UnityEngine::EventSystems { class PointerInputModule_MouseButtonEventData; }

#define UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_BUTTONSTATE_GET_BUTTON_OFFSET UNITYSDK_OFFSET(0x1EF2B1A0)
#define UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_BUTTONSTATE_GET_EVENTDATA_OFFSET UNITYSDK_OFFSET(0x1EF2B180)
#define UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_BUTTONSTATE_SET_BUTTON_OFFSET UNITYSDK_OFFSET(0x1EF2B1B0)
#define UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_BUTTONSTATE_SET_EVENTDATA_OFFSET UNITYSDK_OFFSET(0x1EF2B190)
#define UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_BUTTONSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF2B1C0)

namespace UnityEngine::EventSystems
{
	inline static constexpr unsigned int PointerInputModule_ButtonState_TypeDefinitionIndex = 19394;

	class PointerInputModule_ButtonState : public ::System::Object
	{
	public:
		::UnityEngine::EventSystems::PointerEventData_InputButton m_Button; // 0x10
		::UnityEngine::EventSystems::PointerInputModule_MouseButtonEventData* m_EventData; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_BUTTONSTATE__CTOR_OFFSET))(this);
		}

		::UnityEngine::EventSystems::PointerInputModule_MouseButtonEventData* get_eventData()
		{
			return ((::UnityEngine::EventSystems::PointerInputModule_MouseButtonEventData*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_BUTTONSTATE_GET_EVENTDATA_OFFSET))(this);
		}

		::System::Void set_eventData(::UnityEngine::EventSystems::PointerInputModule_MouseButtonEventData* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerInputModule_MouseButtonEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_BUTTONSTATE_SET_EVENTDATA_OFFSET))(this, value);
		}

		::UnityEngine::EventSystems::PointerEventData_InputButton get_button()
		{
			return ((::UnityEngine::EventSystems::PointerEventData_InputButton(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_BUTTONSTATE_GET_BUTTON_OFFSET))(this);
		}

		::System::Void set_button(::UnityEngine::EventSystems::PointerEventData_InputButton value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData_InputButton))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_BUTTONSTATE_SET_BUTTON_OFFSET))(this, value);
		}
	};
}
