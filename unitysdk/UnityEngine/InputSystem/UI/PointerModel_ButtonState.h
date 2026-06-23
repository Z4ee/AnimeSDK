#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/EventSystems/PointerEventData_FramePressState.h"
#include "unitysdk/UnityEngine/EventSystems/RaycastResult.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL_BUTTONSTATE_COPYPRESSSTATEFROM_OFFSET UNITYSDK_OFFSET(0xA40970)
#define UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL_BUTTONSTATE_COPYPRESSSTATETO_OFFSET UNITYSDK_OFFSET(0xA408A0)
#define UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL_BUTTONSTATE_GET_CLICKEDONSAMEGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0xA40860)
#define UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL_BUTTONSTATE_GET_IGNORENEXTCLICK_OFFSET UNITYSDK_OFFSET(0xA40840)
#define UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL_BUTTONSTATE_GET_ISPRESSED_OFFSET UNITYSDK_OFFSET(0x2ACBE0)
#define UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL_BUTTONSTATE_GET_PRESSTIME_OFFSET UNITYSDK_OFFSET(0x416EC0)
#define UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL_BUTTONSTATE_GET_WASPRESSEDTHISFRAME_OFFSET UNITYSDK_OFFSET(0xA40880)
#define UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL_BUTTONSTATE_GET_WASRELEASEDTHISFRAME_OFFSET UNITYSDK_OFFSET(0xA40890)
#define UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL_BUTTONSTATE_ONENDFRAME_OFFSET UNITYSDK_OFFSET(0xA40A20)
#define UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL_BUTTONSTATE_SET_CLICKEDONSAMEGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0xA40870)
#define UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL_BUTTONSTATE_SET_IGNORENEXTCLICK_OFFSET UNITYSDK_OFFSET(0xA40850)
#define UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL_BUTTONSTATE_SET_ISPRESSED_OFFSET UNITYSDK_OFFSET(0xA40800)
#define UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL_BUTTONSTATE_SET_PRESSTIME_OFFSET UNITYSDK_OFFSET(0x5CC490)

namespace UnityEngine::InputSystem::UI
{
	inline static constexpr unsigned int PointerModel_ButtonState_TypeDefinitionIndex = 31772;

	struct alignas(8) PointerModel_ButtonState
	{
		::System::Boolean m_IsPressed; // 0x10
		::UnityEngine::EventSystems::PointerEventData_FramePressState m_FramePressState; // 0x14
		::System::Single m_PressTime; // 0x18
		::UnityEngine::EventSystems::RaycastResult m_PressRaycast; // 0x20
		::UnityEngine::GameObject* m_PressObject; // 0x68
		::UnityEngine::GameObject* m_RawPressObject; // 0x70
		::UnityEngine::GameObject* m_LastPressObject; // 0x78
		::UnityEngine::GameObject* m_DragObject; // 0x80
		::UnityEngine::Vector2 m_PressPosition; // 0x88
		::System::Single m_ClickTime; // 0x90
		::System::Int32 m_ClickCount; // 0x94
		::System::Boolean m_Dragging; // 0x98
		::System::Boolean m_ClickedOnSameGameObject; // 0x99
		::System::Boolean m_IgnoreNextClick; // 0x9A

		::System::Boolean get_isPressed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL_BUTTONSTATE_GET_ISPRESSED_OFFSET))(this);
		}

		::System::Void set_isPressed(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL_BUTTONSTATE_SET_ISPRESSED_OFFSET))(this, value);
		}

		::System::Boolean get_ignoreNextClick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL_BUTTONSTATE_GET_IGNORENEXTCLICK_OFFSET))(this);
		}

		::System::Void set_ignoreNextClick(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL_BUTTONSTATE_SET_IGNORENEXTCLICK_OFFSET))(this, value);
		}

		::System::Single get_pressTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL_BUTTONSTATE_GET_PRESSTIME_OFFSET))(this);
		}

		::System::Void set_pressTime(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL_BUTTONSTATE_SET_PRESSTIME_OFFSET))(this, value);
		}

		::System::Boolean get_clickedOnSameGameObject()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL_BUTTONSTATE_GET_CLICKEDONSAMEGAMEOBJECT_OFFSET))(this);
		}

		::System::Void set_clickedOnSameGameObject(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL_BUTTONSTATE_SET_CLICKEDONSAMEGAMEOBJECT_OFFSET))(this, value);
		}

		::System::Boolean get_wasPressedThisFrame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL_BUTTONSTATE_GET_WASPRESSEDTHISFRAME_OFFSET))(this);
		}

		::System::Boolean get_wasReleasedThisFrame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL_BUTTONSTATE_GET_WASRELEASEDTHISFRAME_OFFSET))(this);
		}

		::System::Void CopyPressStateTo(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL_BUTTONSTATE_COPYPRESSSTATETO_OFFSET))(this, eventData);
		}

		::System::Void CopyPressStateFrom(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL_BUTTONSTATE_COPYPRESSSTATEFROM_OFFSET))(this, eventData);
		}

		::System::Void OnEndFrame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_POINTERMODEL_BUTTONSTATE_ONENDFRAME_OFFSET))(this);
		}
	};
}
