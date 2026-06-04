#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/PointerInputModule.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define UNITYENGINE_EVENTSYSTEMS_TOUCHINPUTMODULE_DEACTIVATEMODULE_OFFSET UNITYSDK_OFFSET(0x1B380AE0)
#define UNITYENGINE_EVENTSYSTEMS_TOUCHINPUTMODULE_FAKETOUCHES_OFFSET UNITYSDK_OFFSET(0x1B37FFD0)
#define UNITYENGINE_EVENTSYSTEMS_TOUCHINPUTMODULE_GET_ALLOWACTIVATIONONSTANDALONE_OFFSET UNITYSDK_OFFSET(0x1B37FD10)
#define UNITYENGINE_EVENTSYSTEMS_TOUCHINPUTMODULE_GET_FORCEMODULEACTIVE_OFFSET UNITYSDK_OFFSET(0x1B37FD30)
#define UNITYENGINE_EVENTSYSTEMS_TOUCHINPUTMODULE_ISMODULESUPPORTED_OFFSET UNITYSDK_OFFSET(0x1B37FE20)
#define UNITYENGINE_EVENTSYSTEMS_TOUCHINPUTMODULE_PROCESSTOUCHEVENTS_OFFSET UNITYSDK_OFFSET(0x1B3800D0)
#define UNITYENGINE_EVENTSYSTEMS_TOUCHINPUTMODULE_PROCESSTOUCHPRESS_OFFSET UNITYSDK_OFFSET(0x1B3802A0)
#define UNITYENGINE_EVENTSYSTEMS_TOUCHINPUTMODULE_PROCESS_OFFSET UNITYSDK_OFFSET(0x1B37FF80)
#define UNITYENGINE_EVENTSYSTEMS_TOUCHINPUTMODULE_SET_ALLOWACTIVATIONONSTANDALONE_OFFSET UNITYSDK_OFFSET(0x1B37FD20)
#define UNITYENGINE_EVENTSYSTEMS_TOUCHINPUTMODULE_SET_FORCEMODULEACTIVE_OFFSET UNITYSDK_OFFSET(0x1B37FD40)
#define UNITYENGINE_EVENTSYSTEMS_TOUCHINPUTMODULE_SHOULDACTIVATEMODULE_OFFSET UNITYSDK_OFFSET(0x1B37FE60)
#define UNITYENGINE_EVENTSYSTEMS_TOUCHINPUTMODULE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1B380AF0)
#define UNITYENGINE_EVENTSYSTEMS_TOUCHINPUTMODULE_UPDATEMODULE_OFFSET UNITYSDK_OFFSET(0x1B37FD50)
#define UNITYENGINE_EVENTSYSTEMS_TOUCHINPUTMODULE_USEFAKEINPUT_OFFSET UNITYSDK_OFFSET(0x1B37FF50)
#define UNITYENGINE_EVENTSYSTEMS_TOUCHINPUTMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B37FC10)

namespace UnityEngine::EventSystems
{
	inline static constexpr unsigned int TouchInputModule_TypeDefinitionIndex = 6102;

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

		::System::Void set_allowActivationOnStandalone(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_TOUCHINPUTMODULE_SET_ALLOWACTIVATIONONSTANDALONE_OFFSET))(this, a1);
		}

		::System::Boolean get_forceModuleActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_TOUCHINPUTMODULE_GET_FORCEMODULEACTIVE_OFFSET))(this);
		}

		::System::Void set_forceModuleActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_TOUCHINPUTMODULE_SET_FORCEMODULEACTIVE_OFFSET))(this, a1);
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

		::System::Void ProcessTouchPress(::UnityEngine::EventSystems::PointerEventData* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_TOUCHINPUTMODULE_PROCESSTOUCHPRESS_OFFSET))(this, a1, a2, a3);
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
