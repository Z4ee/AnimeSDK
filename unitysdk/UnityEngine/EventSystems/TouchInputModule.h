#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/PointerInputModule.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define UNITYENGINE_EVENTSYSTEMS_TOUCHINPUTMODULE_DEACTIVATEMODULE_OFFSET UNITYSDK_OFFSET(0x1A5350C0)
#define UNITYENGINE_EVENTSYSTEMS_TOUCHINPUTMODULE_FAKETOUCHES_OFFSET UNITYSDK_OFFSET(0x1A5345D0)
#define UNITYENGINE_EVENTSYSTEMS_TOUCHINPUTMODULE_GET_ALLOWACTIVATIONONSTANDALONE_OFFSET UNITYSDK_OFFSET(0x1A5342E0)
#define UNITYENGINE_EVENTSYSTEMS_TOUCHINPUTMODULE_GET_FORCEMODULEACTIVE_OFFSET UNITYSDK_OFFSET(0x1A534300)
#define UNITYENGINE_EVENTSYSTEMS_TOUCHINPUTMODULE_ISMODULESUPPORTED_OFFSET UNITYSDK_OFFSET(0x1A534420)
#define UNITYENGINE_EVENTSYSTEMS_TOUCHINPUTMODULE_PROCESSTOUCHEVENTS_OFFSET UNITYSDK_OFFSET(0x1A5346D0)
#define UNITYENGINE_EVENTSYSTEMS_TOUCHINPUTMODULE_PROCESSTOUCHPRESS_OFFSET UNITYSDK_OFFSET(0x1A534880)
#define UNITYENGINE_EVENTSYSTEMS_TOUCHINPUTMODULE_PROCESS_OFFSET UNITYSDK_OFFSET(0x1A534580)
#define UNITYENGINE_EVENTSYSTEMS_TOUCHINPUTMODULE_SET_ALLOWACTIVATIONONSTANDALONE_OFFSET UNITYSDK_OFFSET(0x1A5342F0)
#define UNITYENGINE_EVENTSYSTEMS_TOUCHINPUTMODULE_SET_FORCEMODULEACTIVE_OFFSET UNITYSDK_OFFSET(0x1A534310)
#define UNITYENGINE_EVENTSYSTEMS_TOUCHINPUTMODULE_SHOULDACTIVATEMODULE_OFFSET UNITYSDK_OFFSET(0x1A534460)
#define UNITYENGINE_EVENTSYSTEMS_TOUCHINPUTMODULE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A5350D0)
#define UNITYENGINE_EVENTSYSTEMS_TOUCHINPUTMODULE_UPDATEMODULE_OFFSET UNITYSDK_OFFSET(0x1A534320)
#define UNITYENGINE_EVENTSYSTEMS_TOUCHINPUTMODULE_USEFAKEINPUT_OFFSET UNITYSDK_OFFSET(0x1A534550)
#define UNITYENGINE_EVENTSYSTEMS_TOUCHINPUTMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5341E0)

namespace UnityEngine::EventSystems
{
	inline static constexpr unsigned int TouchInputModule_TypeDefinitionIndex = 5825;

	class TouchInputModule : public ::UnityEngine::EventSystems::PointerInputModule
	{
	public:
		::UnityEngine::Vector2 m_LastMousePosition; // 0x58
		::UnityEngine::Vector2 m_MousePosition; // 0x60
		::UnityEngine::EventSystems::PointerEventData* m_InputPointerEvent; // 0x68
		::System::Boolean m_ForceModuleActive; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_TOUCHINPUTMODULE__CTOR_OFFSET))(this);
		}

		::System::Boolean get_allowActivationOnStandalone()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_TOUCHINPUTMODULE_GET_ALLOWACTIVATIONONSTANDALONE_OFFSET))(this);
		}

		::System::Void set_allowActivationOnStandalone(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_TOUCHINPUTMODULE_SET_ALLOWACTIVATIONONSTANDALONE_OFFSET))(this, value);
		}

		::System::Boolean get_forceModuleActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_TOUCHINPUTMODULE_GET_FORCEMODULEACTIVE_OFFSET))(this);
		}

		::System::Void set_forceModuleActive(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_TOUCHINPUTMODULE_SET_FORCEMODULEACTIVE_OFFSET))(this, value);
		}

		::System::Void UpdateModule()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_TOUCHINPUTMODULE_UPDATEMODULE_OFFSET))(this);
		}

		::System::Boolean IsModuleSupported()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_TOUCHINPUTMODULE_ISMODULESUPPORTED_OFFSET))(this);
		}

		::System::Boolean ShouldActivateModule()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_TOUCHINPUTMODULE_SHOULDACTIVATEMODULE_OFFSET))(this);
		}

		::System::Boolean UseFakeInput()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_TOUCHINPUTMODULE_USEFAKEINPUT_OFFSET))(this);
		}

		::System::Void Process()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_TOUCHINPUTMODULE_PROCESS_OFFSET))(this);
		}

		::System::Void FakeTouches()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_TOUCHINPUTMODULE_FAKETOUCHES_OFFSET))(this);
		}

		::System::Void ProcessTouchEvents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_TOUCHINPUTMODULE_PROCESSTOUCHEVENTS_OFFSET))(this);
		}

		::System::Void ProcessTouchPress(::UnityEngine::EventSystems::PointerEventData* pointerEvent, ::System::Boolean pressed, ::System::Boolean released)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_TOUCHINPUTMODULE_PROCESSTOUCHPRESS_OFFSET))(this, pointerEvent, pressed, released);
		}

		::System::Void DeactivateModule()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_TOUCHINPUTMODULE_DEACTIVATEMODULE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_TOUCHINPUTMODULE_TOSTRING_OFFSET))(this);
		}
	};
}
