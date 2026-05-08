#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/DualShock/DualShock4GamepadHID.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/InternedString.h"

namespace System { class String; }
namespace UnityEngine::InputSystem { class InputControl; }
namespace UnityEngine::InputSystem::Controls { class AxisControl; }
namespace UnityEngine::InputSystem::Controls { class ButtonControl; }
namespace UnityEngine::InputSystem::Controls { class DiscreteButtonControl; }
namespace UnityEngine::InputSystem::Controls { class DpadControl; }
namespace UnityEngine::InputSystem::Controls { class DpadControl_DpadAxisControl; }
namespace UnityEngine::InputSystem::Controls { class StickControl; }

#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_FASTDUALSHOCK4GAMEPADHID_INITIALIZE_CTRLDUALSHOCK4GAMEPADHIDBUTTONEAST_OFFSET UNITYSDK_OFFSET(0x19568B70)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_FASTDUALSHOCK4GAMEPADHID_INITIALIZE_CTRLDUALSHOCK4GAMEPADHIDBUTTONNORTH_OFFSET UNITYSDK_OFFSET(0x19568E40)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_FASTDUALSHOCK4GAMEPADHID_INITIALIZE_CTRLDUALSHOCK4GAMEPADHIDBUTTONSOUTH_OFFSET UNITYSDK_OFFSET(0x195688A0)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_FASTDUALSHOCK4GAMEPADHID_INITIALIZE_CTRLDUALSHOCK4GAMEPADHIDBUTTONWEST_OFFSET UNITYSDK_OFFSET(0x195685D0)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_FASTDUALSHOCK4GAMEPADHID_INITIALIZE_CTRLDUALSHOCK4GAMEPADHIDDPADDOWN_OFFSET UNITYSDK_OFFSET(0x1956E810)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_FASTDUALSHOCK4GAMEPADHID_INITIALIZE_CTRLDUALSHOCK4GAMEPADHIDDPADLEFT_OFFSET UNITYSDK_OFFSET(0x1956EB40)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_FASTDUALSHOCK4GAMEPADHID_INITIALIZE_CTRLDUALSHOCK4GAMEPADHIDDPADRIGHT_OFFSET UNITYSDK_OFFSET(0x1956EE70)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_FASTDUALSHOCK4GAMEPADHID_INITIALIZE_CTRLDUALSHOCK4GAMEPADHIDDPADUP_OFFSET UNITYSDK_OFFSET(0x1956E4E0)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_FASTDUALSHOCK4GAMEPADHID_INITIALIZE_CTRLDUALSHOCK4GAMEPADHIDDPADX_OFFSET UNITYSDK_OFFSET(0x1956E100)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_FASTDUALSHOCK4GAMEPADHID_INITIALIZE_CTRLDUALSHOCK4GAMEPADHIDDPADY_OFFSET UNITYSDK_OFFSET(0x1956E2F0)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_FASTDUALSHOCK4GAMEPADHID_INITIALIZE_CTRLDUALSHOCK4GAMEPADHIDDPAD_OFFSET UNITYSDK_OFFSET(0x19568440)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_FASTDUALSHOCK4GAMEPADHID_INITIALIZE_CTRLDUALSHOCK4GAMEPADHIDLEFTSHOULDER_OFFSET UNITYSDK_OFFSET(0x19569100)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_FASTDUALSHOCK4GAMEPADHID_INITIALIZE_CTRLDUALSHOCK4GAMEPADHIDLEFTSTICKDOWN_OFFSET UNITYSDK_OFFSET(0x1956BBA0)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_FASTDUALSHOCK4GAMEPADHID_INITIALIZE_CTRLDUALSHOCK4GAMEPADHIDLEFTSTICKLEFT_OFFSET UNITYSDK_OFFSET(0x1956BFF0)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_FASTDUALSHOCK4GAMEPADHID_INITIALIZE_CTRLDUALSHOCK4GAMEPADHIDLEFTSTICKPRESS_OFFSET UNITYSDK_OFFSET(0x1956A040)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_FASTDUALSHOCK4GAMEPADHID_INITIALIZE_CTRLDUALSHOCK4GAMEPADHIDLEFTSTICKRIGHT_OFFSET UNITYSDK_OFFSET(0x1956C440)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_FASTDUALSHOCK4GAMEPADHID_INITIALIZE_CTRLDUALSHOCK4GAMEPADHIDLEFTSTICKUP_OFFSET UNITYSDK_OFFSET(0x1956B020)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_FASTDUALSHOCK4GAMEPADHID_INITIALIZE_CTRLDUALSHOCK4GAMEPADHIDLEFTSTICKX_OFFSET UNITYSDK_OFFSET(0x1956B470)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_FASTDUALSHOCK4GAMEPADHID_INITIALIZE_CTRLDUALSHOCK4GAMEPADHIDLEFTSTICKY_OFFSET UNITYSDK_OFFSET(0x1956B800)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_FASTDUALSHOCK4GAMEPADHID_INITIALIZE_CTRLDUALSHOCK4GAMEPADHIDLEFTSTICK_OFFSET UNITYSDK_OFFSET(0x19567EA0)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_FASTDUALSHOCK4GAMEPADHID_INITIALIZE_CTRLDUALSHOCK4GAMEPADHIDLEFTTRIGGERBUTTON_OFFSET UNITYSDK_OFFSET(0x19569660)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_FASTDUALSHOCK4GAMEPADHID_INITIALIZE_CTRLDUALSHOCK4GAMEPADHIDLEFTTRIGGER_OFFSET UNITYSDK_OFFSET(0x1956AA80)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_FASTDUALSHOCK4GAMEPADHID_INITIALIZE_CTRLDUALSHOCK4GAMEPADHIDRIGHTSHOULDER_OFFSET UNITYSDK_OFFSET(0x195693B0)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_FASTDUALSHOCK4GAMEPADHID_INITIALIZE_CTRLDUALSHOCK4GAMEPADHIDRIGHTSTICKDOWN_OFFSET UNITYSDK_OFFSET(0x1956D410)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_FASTDUALSHOCK4GAMEPADHID_INITIALIZE_CTRLDUALSHOCK4GAMEPADHIDRIGHTSTICKLEFT_OFFSET UNITYSDK_OFFSET(0x1956D860)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_FASTDUALSHOCK4GAMEPADHID_INITIALIZE_CTRLDUALSHOCK4GAMEPADHIDRIGHTSTICKPRESS_OFFSET UNITYSDK_OFFSET(0x1956A2F0)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_FASTDUALSHOCK4GAMEPADHID_INITIALIZE_CTRLDUALSHOCK4GAMEPADHIDRIGHTSTICKRIGHT_OFFSET UNITYSDK_OFFSET(0x1956DCB0)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_FASTDUALSHOCK4GAMEPADHID_INITIALIZE_CTRLDUALSHOCK4GAMEPADHIDRIGHTSTICKUP_OFFSET UNITYSDK_OFFSET(0x1956C890)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_FASTDUALSHOCK4GAMEPADHID_INITIALIZE_CTRLDUALSHOCK4GAMEPADHIDRIGHTSTICKX_OFFSET UNITYSDK_OFFSET(0x1956CCE0)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_FASTDUALSHOCK4GAMEPADHID_INITIALIZE_CTRLDUALSHOCK4GAMEPADHIDRIGHTSTICKY_OFFSET UNITYSDK_OFFSET(0x1956D070)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_FASTDUALSHOCK4GAMEPADHID_INITIALIZE_CTRLDUALSHOCK4GAMEPADHIDRIGHTSTICK_OFFSET UNITYSDK_OFFSET(0x19568170)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_FASTDUALSHOCK4GAMEPADHID_INITIALIZE_CTRLDUALSHOCK4GAMEPADHIDRIGHTTRIGGERBUTTON_OFFSET UNITYSDK_OFFSET(0x195698D0)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_FASTDUALSHOCK4GAMEPADHID_INITIALIZE_CTRLDUALSHOCK4GAMEPADHIDRIGHTTRIGGER_OFFSET UNITYSDK_OFFSET(0x1956AD50)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_FASTDUALSHOCK4GAMEPADHID_INITIALIZE_CTRLDUALSHOCK4GAMEPADHIDSELECT_OFFSET UNITYSDK_OFFSET(0x19569B40)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_FASTDUALSHOCK4GAMEPADHID_INITIALIZE_CTRLDUALSHOCK4GAMEPADHIDSTART_OFFSET UNITYSDK_OFFSET(0x19569DB0)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_FASTDUALSHOCK4GAMEPADHID_INITIALIZE_CTRLDUALSHOCK4GAMEPADHIDSYSTEMBUTTON_OFFSET UNITYSDK_OFFSET(0x1956A5A0)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_FASTDUALSHOCK4GAMEPADHID_INITIALIZE_CTRLDUALSHOCK4GAMEPADHIDTOUCHPADBUTTON_OFFSET UNITYSDK_OFFSET(0x1956A810)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_FASTDUALSHOCK4GAMEPADHID__CTOR_OFFSET UNITYSDK_OFFSET(0x19566D60)

namespace UnityEngine::InputSystem::DualShock
{
	inline static constexpr unsigned int FastDualShock4GamepadHID_TypeDefinitionIndex = 29171;

	class FastDualShock4GamepadHID : public ::UnityEngine::InputSystem::DualShock::DualShock4GamepadHID
	{
	public:
		// static const ::System::String* metadata; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_FASTDUALSHOCK4GAMEPADHID__CTOR_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::StickControl* Initialize_ctrlDualShock4GamepadHIDleftStick(::UnityEngine::InputSystem::Utilities::InternedString kStickLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::StickControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_FASTDUALSHOCK4GAMEPADHID_INITIALIZE_CTRLDUALSHOCK4GAMEPADHIDLEFTSTICK_OFFSET))(this, kStickLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::StickControl* Initialize_ctrlDualShock4GamepadHIDrightStick(::UnityEngine::InputSystem::Utilities::InternedString kStickLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::StickControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_FASTDUALSHOCK4GAMEPADHID_INITIALIZE_CTRLDUALSHOCK4GAMEPADHIDRIGHTSTICK_OFFSET))(this, kStickLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::DpadControl* Initialize_ctrlDualShock4GamepadHIDdpad(::UnityEngine::InputSystem::Utilities::InternedString kDpadLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::DpadControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_FASTDUALSHOCK4GAMEPADHID_INITIALIZE_CTRLDUALSHOCK4GAMEPADHIDDPAD_OFFSET))(this, kDpadLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlDualShock4GamepadHIDbuttonWest(::UnityEngine::InputSystem::Utilities::InternedString kButtonLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_FASTDUALSHOCK4GAMEPADHID_INITIALIZE_CTRLDUALSHOCK4GAMEPADHIDBUTTONWEST_OFFSET))(this, kButtonLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlDualShock4GamepadHIDbuttonSouth(::UnityEngine::InputSystem::Utilities::InternedString kButtonLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_FASTDUALSHOCK4GAMEPADHID_INITIALIZE_CTRLDUALSHOCK4GAMEPADHIDBUTTONSOUTH_OFFSET))(this, kButtonLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlDualShock4GamepadHIDbuttonEast(::UnityEngine::InputSystem::Utilities::InternedString kButtonLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_FASTDUALSHOCK4GAMEPADHID_INITIALIZE_CTRLDUALSHOCK4GAMEPADHIDBUTTONEAST_OFFSET))(this, kButtonLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlDualShock4GamepadHIDbuttonNorth(::UnityEngine::InputSystem::Utilities::InternedString kButtonLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_FASTDUALSHOCK4GAMEPADHID_INITIALIZE_CTRLDUALSHOCK4GAMEPADHIDBUTTONNORTH_OFFSET))(this, kButtonLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlDualShock4GamepadHIDleftShoulder(::UnityEngine::InputSystem::Utilities::InternedString kButtonLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_FASTDUALSHOCK4GAMEPADHID_INITIALIZE_CTRLDUALSHOCK4GAMEPADHIDLEFTSHOULDER_OFFSET))(this, kButtonLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlDualShock4GamepadHIDrightShoulder(::UnityEngine::InputSystem::Utilities::InternedString kButtonLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_FASTDUALSHOCK4GAMEPADHID_INITIALIZE_CTRLDUALSHOCK4GAMEPADHIDRIGHTSHOULDER_OFFSET))(this, kButtonLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlDualShock4GamepadHIDleftTriggerButton(::UnityEngine::InputSystem::Utilities::InternedString kButtonLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_FASTDUALSHOCK4GAMEPADHID_INITIALIZE_CTRLDUALSHOCK4GAMEPADHIDLEFTTRIGGERBUTTON_OFFSET))(this, kButtonLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlDualShock4GamepadHIDrightTriggerButton(::UnityEngine::InputSystem::Utilities::InternedString kButtonLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_FASTDUALSHOCK4GAMEPADHID_INITIALIZE_CTRLDUALSHOCK4GAMEPADHIDRIGHTTRIGGERBUTTON_OFFSET))(this, kButtonLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlDualShock4GamepadHIDselect(::UnityEngine::InputSystem::Utilities::InternedString kButtonLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_FASTDUALSHOCK4GAMEPADHID_INITIALIZE_CTRLDUALSHOCK4GAMEPADHIDSELECT_OFFSET))(this, kButtonLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlDualShock4GamepadHIDstart(::UnityEngine::InputSystem::Utilities::InternedString kButtonLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_FASTDUALSHOCK4GAMEPADHID_INITIALIZE_CTRLDUALSHOCK4GAMEPADHIDSTART_OFFSET))(this, kButtonLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlDualShock4GamepadHIDleftStickPress(::UnityEngine::InputSystem::Utilities::InternedString kButtonLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_FASTDUALSHOCK4GAMEPADHID_INITIALIZE_CTRLDUALSHOCK4GAMEPADHIDLEFTSTICKPRESS_OFFSET))(this, kButtonLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlDualShock4GamepadHIDrightStickPress(::UnityEngine::InputSystem::Utilities::InternedString kButtonLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_FASTDUALSHOCK4GAMEPADHID_INITIALIZE_CTRLDUALSHOCK4GAMEPADHIDRIGHTSTICKPRESS_OFFSET))(this, kButtonLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlDualShock4GamepadHIDsystemButton(::UnityEngine::InputSystem::Utilities::InternedString kButtonLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_FASTDUALSHOCK4GAMEPADHID_INITIALIZE_CTRLDUALSHOCK4GAMEPADHIDSYSTEMBUTTON_OFFSET))(this, kButtonLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlDualShock4GamepadHIDtouchpadButton(::UnityEngine::InputSystem::Utilities::InternedString kButtonLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_FASTDUALSHOCK4GAMEPADHID_INITIALIZE_CTRLDUALSHOCK4GAMEPADHIDTOUCHPADBUTTON_OFFSET))(this, kButtonLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlDualShock4GamepadHIDleftTrigger(::UnityEngine::InputSystem::Utilities::InternedString kButtonLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_FASTDUALSHOCK4GAMEPADHID_INITIALIZE_CTRLDUALSHOCK4GAMEPADHIDLEFTTRIGGER_OFFSET))(this, kButtonLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlDualShock4GamepadHIDrightTrigger(::UnityEngine::InputSystem::Utilities::InternedString kButtonLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_FASTDUALSHOCK4GAMEPADHID_INITIALIZE_CTRLDUALSHOCK4GAMEPADHIDRIGHTTRIGGER_OFFSET))(this, kButtonLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlDualShock4GamepadHIDleftStickup(::UnityEngine::InputSystem::Utilities::InternedString kButtonLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_FASTDUALSHOCK4GAMEPADHID_INITIALIZE_CTRLDUALSHOCK4GAMEPADHIDLEFTSTICKUP_OFFSET))(this, kButtonLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlDualShock4GamepadHIDleftStickx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_FASTDUALSHOCK4GAMEPADHID_INITIALIZE_CTRLDUALSHOCK4GAMEPADHIDLEFTSTICKX_OFFSET))(this, kAxisLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlDualShock4GamepadHIDleftSticky(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_FASTDUALSHOCK4GAMEPADHID_INITIALIZE_CTRLDUALSHOCK4GAMEPADHIDLEFTSTICKY_OFFSET))(this, kAxisLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlDualShock4GamepadHIDleftStickdown(::UnityEngine::InputSystem::Utilities::InternedString kButtonLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_FASTDUALSHOCK4GAMEPADHID_INITIALIZE_CTRLDUALSHOCK4GAMEPADHIDLEFTSTICKDOWN_OFFSET))(this, kButtonLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlDualShock4GamepadHIDleftStickleft(::UnityEngine::InputSystem::Utilities::InternedString kButtonLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_FASTDUALSHOCK4GAMEPADHID_INITIALIZE_CTRLDUALSHOCK4GAMEPADHIDLEFTSTICKLEFT_OFFSET))(this, kButtonLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlDualShock4GamepadHIDleftStickright(::UnityEngine::InputSystem::Utilities::InternedString kButtonLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_FASTDUALSHOCK4GAMEPADHID_INITIALIZE_CTRLDUALSHOCK4GAMEPADHIDLEFTSTICKRIGHT_OFFSET))(this, kButtonLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlDualShock4GamepadHIDrightStickup(::UnityEngine::InputSystem::Utilities::InternedString kButtonLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_FASTDUALSHOCK4GAMEPADHID_INITIALIZE_CTRLDUALSHOCK4GAMEPADHIDRIGHTSTICKUP_OFFSET))(this, kButtonLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlDualShock4GamepadHIDrightStickx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_FASTDUALSHOCK4GAMEPADHID_INITIALIZE_CTRLDUALSHOCK4GAMEPADHIDRIGHTSTICKX_OFFSET))(this, kAxisLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlDualShock4GamepadHIDrightSticky(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_FASTDUALSHOCK4GAMEPADHID_INITIALIZE_CTRLDUALSHOCK4GAMEPADHIDRIGHTSTICKY_OFFSET))(this, kAxisLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlDualShock4GamepadHIDrightStickdown(::UnityEngine::InputSystem::Utilities::InternedString kButtonLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_FASTDUALSHOCK4GAMEPADHID_INITIALIZE_CTRLDUALSHOCK4GAMEPADHIDRIGHTSTICKDOWN_OFFSET))(this, kButtonLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlDualShock4GamepadHIDrightStickleft(::UnityEngine::InputSystem::Utilities::InternedString kButtonLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_FASTDUALSHOCK4GAMEPADHID_INITIALIZE_CTRLDUALSHOCK4GAMEPADHIDRIGHTSTICKLEFT_OFFSET))(this, kButtonLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlDualShock4GamepadHIDrightStickright(::UnityEngine::InputSystem::Utilities::InternedString kButtonLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_FASTDUALSHOCK4GAMEPADHID_INITIALIZE_CTRLDUALSHOCK4GAMEPADHIDRIGHTSTICKRIGHT_OFFSET))(this, kButtonLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::DpadControl_DpadAxisControl* Initialize_ctrlDualShock4GamepadHIDdpadx(::UnityEngine::InputSystem::Utilities::InternedString kDpadAxisLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::DpadControl_DpadAxisControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_FASTDUALSHOCK4GAMEPADHID_INITIALIZE_CTRLDUALSHOCK4GAMEPADHIDDPADX_OFFSET))(this, kDpadAxisLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::DpadControl_DpadAxisControl* Initialize_ctrlDualShock4GamepadHIDdpady(::UnityEngine::InputSystem::Utilities::InternedString kDpadAxisLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::DpadControl_DpadAxisControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_FASTDUALSHOCK4GAMEPADHID_INITIALIZE_CTRLDUALSHOCK4GAMEPADHIDDPADY_OFFSET))(this, kDpadAxisLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::DiscreteButtonControl* Initialize_ctrlDualShock4GamepadHIDdpadup(::UnityEngine::InputSystem::Utilities::InternedString kDiscreteButtonLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::DiscreteButtonControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_FASTDUALSHOCK4GAMEPADHID_INITIALIZE_CTRLDUALSHOCK4GAMEPADHIDDPADUP_OFFSET))(this, kDiscreteButtonLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::DiscreteButtonControl* Initialize_ctrlDualShock4GamepadHIDdpaddown(::UnityEngine::InputSystem::Utilities::InternedString kDiscreteButtonLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::DiscreteButtonControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_FASTDUALSHOCK4GAMEPADHID_INITIALIZE_CTRLDUALSHOCK4GAMEPADHIDDPADDOWN_OFFSET))(this, kDiscreteButtonLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::DiscreteButtonControl* Initialize_ctrlDualShock4GamepadHIDdpadleft(::UnityEngine::InputSystem::Utilities::InternedString kDiscreteButtonLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::DiscreteButtonControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_FASTDUALSHOCK4GAMEPADHID_INITIALIZE_CTRLDUALSHOCK4GAMEPADHIDDPADLEFT_OFFSET))(this, kDiscreteButtonLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::DiscreteButtonControl* Initialize_ctrlDualShock4GamepadHIDdpadright(::UnityEngine::InputSystem::Utilities::InternedString kDiscreteButtonLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::DiscreteButtonControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_FASTDUALSHOCK4GAMEPADHID_INITIALIZE_CTRLDUALSHOCK4GAMEPADHIDDPADRIGHT_OFFSET))(this, kDiscreteButtonLayout, parent);
		}
	};
}
