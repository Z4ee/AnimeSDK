#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/OnScreen/OnScreenControl.h"

namespace System { class String; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENBUTTON_GET_CONTROLPATHINTERNAL_OFFSET UNITYSDK_OFFSET(0x1F1F6B10)
#define UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENBUTTON_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x1F1F6B00)
#define UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENBUTTON_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0x1F1F6AF0)
#define UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENBUTTON_SET_CONTROLPATHINTERNAL_OFFSET UNITYSDK_OFFSET(0x1F1F6B20)
#define UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENBUTTON__CTOR_OFFSET UNITYSDK_OFFSET(0x1F1F6B30)

namespace UnityEngine::InputSystem::OnScreen
{
	inline static constexpr unsigned int OnScreenButton_TypeDefinitionIndex = 32402;

	class OnScreenButton : public ::UnityEngine::InputSystem::OnScreen::OnScreenControl
	{
	public:
		::System::String* m_ControlPath; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENBUTTON__CTOR_OFFSET))(this);
		}

		::System::Void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENBUTTON_ONPOINTERUP_OFFSET))(this, eventData);
		}

		::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENBUTTON_ONPOINTERDOWN_OFFSET))(this, eventData);
		}

		::System::String* get_controlPathInternal()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENBUTTON_GET_CONTROLPATHINTERNAL_OFFSET))(this);
		}

		::System::Void set_controlPathInternal(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENBUTTON_SET_CONTROLPATHINTERNAL_OFFSET))(this, value);
		}
	};
}
