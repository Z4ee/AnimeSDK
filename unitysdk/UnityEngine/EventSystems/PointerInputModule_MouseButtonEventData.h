#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/EventSystems/PointerEventData_FramePressState.h"

namespace UnityEngine::EventSystems { class PointerEventData; }

#define UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_MOUSEBUTTONEVENTDATA_PRESSEDTHISFRAME_OFFSET UNITYSDK_OFFSET(0x1A531420)
#define UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_MOUSEBUTTONEVENTDATA_RELEASEDTHISFRAME_OFFSET UNITYSDK_OFFSET(0x1A531430)
#define UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_MOUSEBUTTONEVENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A531440)

namespace UnityEngine::EventSystems
{
	inline static constexpr unsigned int PointerInputModule_MouseButtonEventData_TypeDefinitionIndex = 5822;

	class PointerInputModule_MouseButtonEventData : public ::System::Object
	{
	public:
		::UnityEngine::EventSystems::PointerEventData_FramePressState buttonState; // 0x10
		::UnityEngine::EventSystems::PointerEventData* buttonData; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_MOUSEBUTTONEVENTDATA__CTOR_OFFSET))(this);
		}

		::System::Boolean PressedThisFrame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_MOUSEBUTTONEVENTDATA_PRESSEDTHISFRAME_OFFSET))(this);
		}

		::System::Boolean ReleasedThisFrame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_MOUSEBUTTONEVENTDATA_RELEASEDTHISFRAME_OFFSET))(this);
		}
	};
}
