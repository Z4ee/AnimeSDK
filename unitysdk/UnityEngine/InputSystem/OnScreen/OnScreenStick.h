#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/OnScreen/OnScreenControl.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENSTICK_GET_CONTROLPATHINTERNAL_OFFSET UNITYSDK_OFFSET(0x1DD824C0)
#define UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENSTICK_GET_MOVEMENTRANGE_OFFSET UNITYSDK_OFFSET(0x1DD824A0)
#define UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENSTICK_ONDRAG_OFFSET UNITYSDK_OFFSET(0x1DD82090)
#define UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENSTICK_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x1DD81EE0)
#define UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENSTICK_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0x1DD82370)
#define UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENSTICK_SET_CONTROLPATHINTERNAL_OFFSET UNITYSDK_OFFSET(0x1DD824D0)
#define UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENSTICK_SET_MOVEMENTRANGE_OFFSET UNITYSDK_OFFSET(0x1DD824B0)
#define UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENSTICK_START_OFFSET UNITYSDK_OFFSET(0x1DD82410)
#define UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENSTICK__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD824E0)

namespace UnityEngine::InputSystem::OnScreen
{
	inline static constexpr unsigned int OnScreenStick_TypeDefinitionIndex = 31785;

	class OnScreenStick : public ::UnityEngine::InputSystem::OnScreen::OnScreenControl
	{
	public:
		::System::Single m_MovementRange; // 0x30
		::System::String* m_ControlPath; // 0x38
		::UnityEngine::Vector3 m_StartPos; // 0x40
		::UnityEngine::Vector2 m_PointerDownPos; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENSTICK__CTOR_OFFSET))(this);
		}

		::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENSTICK_ONPOINTERDOWN_OFFSET))(this, eventData);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENSTICK_ONDRAG_OFFSET))(this, eventData);
		}

		::System::Void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENSTICK_ONPOINTERUP_OFFSET))(this, eventData);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENSTICK_START_OFFSET))(this);
		}

		::System::Single get_movementRange()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENSTICK_GET_MOVEMENTRANGE_OFFSET))(this);
		}

		::System::Void set_movementRange(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENSTICK_SET_MOVEMENTRANGE_OFFSET))(this, value);
		}

		::System::String* get_controlPathInternal()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENSTICK_GET_CONTROLPATHINTERNAL_OFFSET))(this);
		}

		::System::Void set_controlPathInternal(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENSTICK_SET_CONTROLPATHINTERNAL_OFFSET))(this, value);
		}
	};
}
