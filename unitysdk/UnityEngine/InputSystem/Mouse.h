#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputEventPtr.h"
#include "unitysdk/UnityEngine/InputSystem/Pointer.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine::InputSystem::Controls { class ButtonControl; }
namespace UnityEngine::InputSystem::Controls { class IntegerControl; }
namespace UnityEngine::InputSystem::Controls { class Vector2Control; }

#define UNITYENGINE_INPUTSYSTEM_MOUSE_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x1D3C8640)
#define UNITYENGINE_INPUTSYSTEM_MOUSE_GET_BACKBUTTON_OFFSET UNITYSDK_OFFSET(0x1D3C8500)
#define UNITYENGINE_INPUTSYSTEM_MOUSE_GET_CLICKCOUNT_OFFSET UNITYSDK_OFFSET(0x1D3C8540)
#define UNITYENGINE_INPUTSYSTEM_MOUSE_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D3C8560)
#define UNITYENGINE_INPUTSYSTEM_MOUSE_GET_FORWARDBUTTON_OFFSET UNITYSDK_OFFSET(0x1D3C8520)
#define UNITYENGINE_INPUTSYSTEM_MOUSE_GET_LEFTBUTTON_OFFSET UNITYSDK_OFFSET(0x1D3C84A0)
#define UNITYENGINE_INPUTSYSTEM_MOUSE_GET_MIDDLEBUTTON_OFFSET UNITYSDK_OFFSET(0x1D3C84C0)
#define UNITYENGINE_INPUTSYSTEM_MOUSE_GET_RIGHTBUTTON_OFFSET UNITYSDK_OFFSET(0x1D3C84E0)
#define UNITYENGINE_INPUTSYSTEM_MOUSE_GET_SCROLL_OFFSET UNITYSDK_OFFSET(0x1D3C8480)
#define UNITYENGINE_INPUTSYSTEM_MOUSE_MAKECURRENT_OFFSET UNITYSDK_OFFSET(0x1D3C8580)
#define UNITYENGINE_INPUTSYSTEM_MOUSE_ONADDED_OFFSET UNITYSDK_OFFSET(0x1D3C85A0)
#define UNITYENGINE_INPUTSYSTEM_MOUSE_ONNEXTUPDATE_OFFSET UNITYSDK_OFFSET(0x1D3C8750)
#define UNITYENGINE_INPUTSYSTEM_MOUSE_ONREMOVED_OFFSET UNITYSDK_OFFSET(0x1D3C85D0)
#define UNITYENGINE_INPUTSYSTEM_MOUSE_ONSTATEEVENT_OFFSET UNITYSDK_OFFSET(0x1D3C87B0)
#define UNITYENGINE_INPUTSYSTEM_MOUSE_SET_BACKBUTTON_OFFSET UNITYSDK_OFFSET(0x1D3C8510)
#define UNITYENGINE_INPUTSYSTEM_MOUSE_SET_CLICKCOUNT_OFFSET UNITYSDK_OFFSET(0x1D3C8550)
#define UNITYENGINE_INPUTSYSTEM_MOUSE_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D3C8570)
#define UNITYENGINE_INPUTSYSTEM_MOUSE_SET_FORWARDBUTTON_OFFSET UNITYSDK_OFFSET(0x1D3C8530)
#define UNITYENGINE_INPUTSYSTEM_MOUSE_SET_LEFTBUTTON_OFFSET UNITYSDK_OFFSET(0x1D3C84B0)
#define UNITYENGINE_INPUTSYSTEM_MOUSE_SET_MIDDLEBUTTON_OFFSET UNITYSDK_OFFSET(0x1D3C84D0)
#define UNITYENGINE_INPUTSYSTEM_MOUSE_SET_RIGHTBUTTON_OFFSET UNITYSDK_OFFSET(0x1D3C84F0)
#define UNITYENGINE_INPUTSYSTEM_MOUSE_SET_SCROLL_OFFSET UNITYSDK_OFFSET(0x1D3C8490)
#define UNITYENGINE_INPUTSYSTEM_MOUSE_UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IINPUTSTATECALLBACKRECEIVER_ONNEXTUPDATE_OFFSET UNITYSDK_OFFSET(0x1D3C8870)
#define UNITYENGINE_INPUTSYSTEM_MOUSE_UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IINPUTSTATECALLBACKRECEIVER_ONSTATEEVENT_OFFSET UNITYSDK_OFFSET(0x1D3C88D0)
#define UNITYENGINE_INPUTSYSTEM_MOUSE_WARPCURSORPOSITION_OFFSET UNITYSDK_OFFSET(0x1D3C8610)
#define UNITYENGINE_INPUTSYSTEM_MOUSE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3C8990)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int Mouse_TypeDefinitionIndex = 31634;

	class Mouse : public ::UnityEngine::InputSystem::Pointer
	{
	public:
		static ::UnityEngine::InputSystem::Mouse** StaticGet__current_k__BackingField()
		{
			return (::UnityEngine::InputSystem::Mouse**)Il2CppClass::FromTypeDefinitionIndex(Mouse_TypeDefinitionIndex)->GetStaticField(0x26660);
		}
		static ::UnityEngine::InputSystem::Mouse** StaticGet_s_PlatformMouseDevice()
		{
			return (::UnityEngine::InputSystem::Mouse**)Il2CppClass::FromTypeDefinitionIndex(Mouse_TypeDefinitionIndex)->GetStaticField(0x26668);
		}
		::UnityEngine::InputSystem::Controls::ButtonControl* _backButton_k__BackingField; // 0x180
		::UnityEngine::InputSystem::Controls::ButtonControl* _rightButton_k__BackingField; // 0x188
		::UnityEngine::InputSystem::Controls::Vector2Control* _scroll_k__BackingField; // 0x190
		::UnityEngine::InputSystem::Controls::IntegerControl* _clickCount_k__BackingField; // 0x198
		::UnityEngine::InputSystem::Controls::ButtonControl* _middleButton_k__BackingField; // 0x1A0
		::UnityEngine::InputSystem::Controls::ButtonControl* _forwardButton_k__BackingField; // 0x1A8
		::UnityEngine::InputSystem::Controls::ButtonControl* _leftButton_k__BackingField; // 0x1B0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_MOUSE__CTOR_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::Vector2Control* get_scroll()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector2Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_MOUSE_GET_SCROLL_OFFSET))(this);
		}

		::System::Void set_scroll(::UnityEngine::InputSystem::Controls::Vector2Control* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector2Control*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_MOUSE_SET_SCROLL_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_leftButton()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_MOUSE_GET_LEFTBUTTON_OFFSET))(this);
		}

		::System::Void set_leftButton(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_MOUSE_SET_LEFTBUTTON_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_middleButton()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_MOUSE_GET_MIDDLEBUTTON_OFFSET))(this);
		}

		::System::Void set_middleButton(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_MOUSE_SET_MIDDLEBUTTON_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_rightButton()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_MOUSE_GET_RIGHTBUTTON_OFFSET))(this);
		}

		::System::Void set_rightButton(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_MOUSE_SET_RIGHTBUTTON_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_backButton()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_MOUSE_GET_BACKBUTTON_OFFSET))(this);
		}

		::System::Void set_backButton(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_MOUSE_SET_BACKBUTTON_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_forwardButton()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_MOUSE_GET_FORWARDBUTTON_OFFSET))(this);
		}

		::System::Void set_forwardButton(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_MOUSE_SET_FORWARDBUTTON_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::IntegerControl* get_clickCount()
		{
			return ((::UnityEngine::InputSystem::Controls::IntegerControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_MOUSE_GET_CLICKCOUNT_OFFSET))(this);
		}

		::System::Void set_clickCount(::UnityEngine::InputSystem::Controls::IntegerControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::IntegerControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_MOUSE_SET_CLICKCOUNT_OFFSET))(this, value);
		}

		static ::UnityEngine::InputSystem::Mouse* get_current()
		{
			return ((::UnityEngine::InputSystem::Mouse*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_MOUSE_GET_CURRENT_OFFSET))();
		}

		static ::System::Void set_current(::UnityEngine::InputSystem::Mouse* value)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::Mouse*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_MOUSE_SET_CURRENT_OFFSET))(value);
		}

		::System::Void MakeCurrent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_MOUSE_MAKECURRENT_OFFSET))(this);
		}

		::System::Void OnAdded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_MOUSE_ONADDED_OFFSET))(this);
		}

		::System::Void OnRemoved()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_MOUSE_ONREMOVED_OFFSET))(this);
		}

		::System::Void WarpCursorPosition(::UnityEngine::Vector2 position)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_MOUSE_WARPCURSORPOSITION_OFFSET))(this, position);
		}

		::System::Void FinishSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_MOUSE_FINISHSETUP_OFFSET))(this);
		}

		::System::Void OnNextUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_MOUSE_ONNEXTUPDATE_OFFSET))(this);
		}

		::System::Void OnStateEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::InputEventPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_MOUSE_ONSTATEEVENT_OFFSET))(this, eventPtr);
		}

		::System::Void UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_OnNextUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_MOUSE_UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IINPUTSTATECALLBACKRECEIVER_ONNEXTUPDATE_OFFSET))(this);
		}

		::System::Void UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_OnStateEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::InputEventPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_MOUSE_UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IINPUTSTATECALLBACKRECEIVER_ONSTATEEVENT_OFFSET))(this, eventPtr);
		}
	};
}
