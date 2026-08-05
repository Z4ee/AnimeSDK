#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/InputActionProperty.h"
#include "unitysdk/UnityEngine/InputSystem/InputAction_CallbackContext.h"
#include "unitysdk/UnityEngine/InputSystem/UI/VirtualMouseInput_CursorMode.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::InputSystem { class Mouse; }
namespace UnityEngine::UI { class Graphic; }

#define UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_GET_BACKBUTTONACTION_OFFSET UNITYSDK_OFFSET(0x1F7E8730)
#define UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_GET_CURSORGRAPHIC_OFFSET UNITYSDK_OFFSET(0x1F7E7B30)
#define UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_GET_CURSORMODE_OFFSET UNITYSDK_OFFSET(0x1F7E7440)
#define UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_GET_CURSORSPEED_OFFSET UNITYSDK_OFFSET(0x1F7E7420)
#define UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_GET_CURSORTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1F7E7400)
#define UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_GET_FORWARDBUTTONACTION_OFFSET UNITYSDK_OFFSET(0x1F7E8580)
#define UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_GET_LEFTBUTTONACTION_OFFSET UNITYSDK_OFFSET(0x1F7E7F50)
#define UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_GET_MIDDLEBUTTONACTION_OFFSET UNITYSDK_OFFSET(0x1F7E83D0)
#define UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_GET_RIGHTBUTTONACTION_OFFSET UNITYSDK_OFFSET(0x1F7E8220)
#define UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_GET_SCROLLSPEED_OFFSET UNITYSDK_OFFSET(0x1F7E7C00)
#define UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_GET_SCROLLWHEELACTION_OFFSET UNITYSDK_OFFSET(0x1F7E88E0)
#define UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_GET_STICKACTION_OFFSET UNITYSDK_OFFSET(0x1F7E7C30)
#define UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_GET_VIRTUALMOUSE_OFFSET UNITYSDK_OFFSET(0x1F7E7C20)
#define UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_ONAFTERINPUTUPDATE_OFFSET UNITYSDK_OFFSET(0x1F7E9FD0)
#define UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_ONBUTTONACTIONTRIGGERED_OFFSET UNITYSDK_OFFSET(0x1F7E9DD0)
#define UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1F7E90B0)
#define UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1F7E8930)
#define UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_SETACTIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x1F7E8100)
#define UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_SETACTION_OFFSET UNITYSDK_OFFSET(0x1F7E7C80)
#define UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_SET_BACKBUTTONACTION_OFFSET UNITYSDK_OFFSET(0x1F7E8750)
#define UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_SET_CURSORGRAPHIC_OFFSET UNITYSDK_OFFSET(0x1F7E7B40)
#define UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_SET_CURSORMODE_OFFSET UNITYSDK_OFFSET(0x1F7E7450)
#define UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_SET_CURSORSPEED_OFFSET UNITYSDK_OFFSET(0x1F7E7430)
#define UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_SET_CURSORTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1F7E7410)
#define UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_SET_FORWARDBUTTONACTION_OFFSET UNITYSDK_OFFSET(0x1F7E85A0)
#define UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_SET_LEFTBUTTONACTION_OFFSET UNITYSDK_OFFSET(0x1F7E7F70)
#define UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_SET_MIDDLEBUTTONACTION_OFFSET UNITYSDK_OFFSET(0x1F7E83F0)
#define UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_SET_RIGHTBUTTONACTION_OFFSET UNITYSDK_OFFSET(0x1F7E8240)
#define UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_SET_SCROLLSPEED_OFFSET UNITYSDK_OFFSET(0x1F7E7C10)
#define UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_SET_SCROLLWHEELACTION_OFFSET UNITYSDK_OFFSET(0x1F7E8900)
#define UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_SET_STICKACTION_OFFSET UNITYSDK_OFFSET(0x1F7E7C50)
#define UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_TRYENABLEHARDWARECURSOR_OFFSET UNITYSDK_OFFSET(0x1F7E7680)
#define UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_TRYFINDCANVAS_OFFSET UNITYSDK_OFFSET(0x1F7E7BA0)
#define UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_UPDATEMOTION_OFFSET UNITYSDK_OFFSET(0x1F7E96D0)
#define UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT__CTOR_OFFSET UNITYSDK_OFFSET(0x1F7E9FE0)

namespace UnityEngine::InputSystem::UI
{
	inline static constexpr unsigned int VirtualMouseInput_TypeDefinitionIndex = 32396;

	class VirtualMouseInput : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::InputSystem::UI::VirtualMouseInput_CursorMode m_CursorMode; // 0x18
		::UnityEngine::UI::Graphic* m_CursorGraphic; // 0x20
		::UnityEngine::RectTransform* m_CursorTransform; // 0x28
		::System::Single m_CursorSpeed; // 0x30
		::System::Single m_ScrollSpeed; // 0x34
		::UnityEngine::InputSystem::InputActionProperty m_StickAction; // 0x38
		::UnityEngine::InputSystem::InputActionProperty m_LeftButtonAction; // 0x50
		::UnityEngine::InputSystem::InputActionProperty m_MiddleButtonAction; // 0x68
		::UnityEngine::InputSystem::InputActionProperty m_RightButtonAction; // 0x80
		::UnityEngine::InputSystem::InputActionProperty m_ForwardButtonAction; // 0x98
		::UnityEngine::InputSystem::InputActionProperty m_BackButtonAction; // 0xB0
		::UnityEngine::InputSystem::InputActionProperty m_ScrollWheelAction; // 0xC8
		::UnityEngine::Canvas* m_Canvas; // 0xE0
		::UnityEngine::InputSystem::Mouse* m_VirtualMouse; // 0xE8
		::UnityEngine::InputSystem::Mouse* m_SystemMouse; // 0xF0
		::System::Action* m_AfterInputUpdateDelegate; // 0xF8
		::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* m_ButtonActionTriggeredDelegate; // 0x100
		::System::Double m_LastTime; // 0x108
		::UnityEngine::Vector2 m_LastStickValue; // 0x110

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT__CTOR_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_cursorTransform()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_GET_CURSORTRANSFORM_OFFSET))(this);
		}

		::System::Void set_cursorTransform(::UnityEngine::RectTransform* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_SET_CURSORTRANSFORM_OFFSET))(this, value);
		}

		::System::Single get_cursorSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_GET_CURSORSPEED_OFFSET))(this);
		}

		::System::Void set_cursorSpeed(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_SET_CURSORSPEED_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::UI::VirtualMouseInput_CursorMode get_cursorMode()
		{
			return ((::UnityEngine::InputSystem::UI::VirtualMouseInput_CursorMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_GET_CURSORMODE_OFFSET))(this);
		}

		::System::Void set_cursorMode(::UnityEngine::InputSystem::UI::VirtualMouseInput_CursorMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::UI::VirtualMouseInput_CursorMode))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_SET_CURSORMODE_OFFSET))(this, value);
		}

		::UnityEngine::UI::Graphic* get_cursorGraphic()
		{
			return ((::UnityEngine::UI::Graphic*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_GET_CURSORGRAPHIC_OFFSET))(this);
		}

		::System::Void set_cursorGraphic(::UnityEngine::UI::Graphic* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Graphic*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_SET_CURSORGRAPHIC_OFFSET))(this, value);
		}

		::System::Single get_scrollSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_GET_SCROLLSPEED_OFFSET))(this);
		}

		::System::Void set_scrollSpeed(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_SET_SCROLLSPEED_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Mouse* get_virtualMouse()
		{
			return ((::UnityEngine::InputSystem::Mouse*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_GET_VIRTUALMOUSE_OFFSET))(this);
		}

		::UnityEngine::InputSystem::InputActionProperty get_stickAction()
		{
			return ((::UnityEngine::InputSystem::InputActionProperty(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_GET_STICKACTION_OFFSET))(this);
		}

		::System::Void set_stickAction(::UnityEngine::InputSystem::InputActionProperty value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputActionProperty))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_SET_STICKACTION_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::InputActionProperty get_leftButtonAction()
		{
			return ((::UnityEngine::InputSystem::InputActionProperty(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_GET_LEFTBUTTONACTION_OFFSET))(this);
		}

		::System::Void set_leftButtonAction(::UnityEngine::InputSystem::InputActionProperty value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputActionProperty))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_SET_LEFTBUTTONACTION_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::InputActionProperty get_rightButtonAction()
		{
			return ((::UnityEngine::InputSystem::InputActionProperty(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_GET_RIGHTBUTTONACTION_OFFSET))(this);
		}

		::System::Void set_rightButtonAction(::UnityEngine::InputSystem::InputActionProperty value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputActionProperty))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_SET_RIGHTBUTTONACTION_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::InputActionProperty get_middleButtonAction()
		{
			return ((::UnityEngine::InputSystem::InputActionProperty(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_GET_MIDDLEBUTTONACTION_OFFSET))(this);
		}

		::System::Void set_middleButtonAction(::UnityEngine::InputSystem::InputActionProperty value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputActionProperty))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_SET_MIDDLEBUTTONACTION_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::InputActionProperty get_forwardButtonAction()
		{
			return ((::UnityEngine::InputSystem::InputActionProperty(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_GET_FORWARDBUTTONACTION_OFFSET))(this);
		}

		::System::Void set_forwardButtonAction(::UnityEngine::InputSystem::InputActionProperty value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputActionProperty))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_SET_FORWARDBUTTONACTION_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::InputActionProperty get_backButtonAction()
		{
			return ((::UnityEngine::InputSystem::InputActionProperty(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_GET_BACKBUTTONACTION_OFFSET))(this);
		}

		::System::Void set_backButtonAction(::UnityEngine::InputSystem::InputActionProperty value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputActionProperty))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_SET_BACKBUTTONACTION_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::InputActionProperty get_scrollWheelAction()
		{
			return ((::UnityEngine::InputSystem::InputActionProperty(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_GET_SCROLLWHEELACTION_OFFSET))(this);
		}

		::System::Void set_scrollWheelAction(::UnityEngine::InputSystem::InputActionProperty value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputActionProperty))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_SET_SCROLLWHEELACTION_OFFSET))(this, value);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_ONDISABLE_OFFSET))(this);
		}

		::System::Void TryFindCanvas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_TRYFINDCANVAS_OFFSET))(this);
		}

		::System::Void TryEnableHardwareCursor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_TRYENABLEHARDWARECURSOR_OFFSET))(this);
		}

		::System::Void UpdateMotion()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_UPDATEMOTION_OFFSET))(this);
		}

		::System::Void OnButtonActionTriggered(::UnityEngine::InputSystem::InputAction_CallbackContext context)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputAction_CallbackContext))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_ONBUTTONACTIONTRIGGERED_OFFSET))(this, context);
		}

		static ::System::Void SetActionCallback(::UnityEngine::InputSystem::InputActionProperty field, ::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* callback, ::System::Boolean install)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::InputActionProperty, ::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_SETACTIONCALLBACK_OFFSET))(field, callback, install);
		}

		static ::System::Void SetAction(::UnityEngine::InputSystem::InputActionProperty& field, ::UnityEngine::InputSystem::InputActionProperty value)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::InputActionProperty&, ::UnityEngine::InputSystem::InputActionProperty))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_SETACTION_OFFSET))(field, value);
		}

		::System::Void OnAfterInputUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_ONAFTERINPUTUPDATE_OFFSET))(this);
		}
	};
}
