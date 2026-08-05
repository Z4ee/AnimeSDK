#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/InputSystem/Gamepad.h"

namespace UnityEngine::InputSystem::Controls { class ButtonControl; }

#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCKGAMEPAD_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x1EAD0770)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCKGAMEPAD_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1EAD12F0)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCKGAMEPAD_GET_L1_OFFSET UNITYSDK_OFFSET(0x1EAD1230)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCKGAMEPAD_GET_L2_OFFSET UNITYSDK_OFFSET(0x1EAD1270)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCKGAMEPAD_GET_L3_OFFSET UNITYSDK_OFFSET(0x1EAD12B0)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCKGAMEPAD_GET_OPTIONSBUTTON_OFFSET UNITYSDK_OFFSET(0x1EAD11F0)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCKGAMEPAD_GET_R1_OFFSET UNITYSDK_OFFSET(0x1EAD1250)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCKGAMEPAD_GET_R2_OFFSET UNITYSDK_OFFSET(0x1EAD1290)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCKGAMEPAD_GET_R3_OFFSET UNITYSDK_OFFSET(0x1EAD12D0)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCKGAMEPAD_GET_SHAREBUTTON_OFFSET UNITYSDK_OFFSET(0x1EAD1210)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCKGAMEPAD_GET_TOUCHPADBUTTON_OFFSET UNITYSDK_OFFSET(0x1EAD11D0)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCKGAMEPAD_MAKECURRENT_OFFSET UNITYSDK_OFFSET(0x1EAD1310)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCKGAMEPAD_ONREMOVED_OFFSET UNITYSDK_OFFSET(0x1EAD1330)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCKGAMEPAD_SETLIGHTBARCOLOR_OFFSET UNITYSDK_OFFSET(0x1EAD1370)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCKGAMEPAD_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1EAD1300)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCKGAMEPAD_SET_L1_OFFSET UNITYSDK_OFFSET(0x1EAD1240)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCKGAMEPAD_SET_L2_OFFSET UNITYSDK_OFFSET(0x1EAD1280)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCKGAMEPAD_SET_L3_OFFSET UNITYSDK_OFFSET(0x1EAD12C0)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCKGAMEPAD_SET_OPTIONSBUTTON_OFFSET UNITYSDK_OFFSET(0x1EAD1200)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCKGAMEPAD_SET_R1_OFFSET UNITYSDK_OFFSET(0x1EAD1260)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCKGAMEPAD_SET_R2_OFFSET UNITYSDK_OFFSET(0x1EAD12A0)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCKGAMEPAD_SET_R3_OFFSET UNITYSDK_OFFSET(0x1EAD12E0)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCKGAMEPAD_SET_SHAREBUTTON_OFFSET UNITYSDK_OFFSET(0x1EAD1220)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCKGAMEPAD_SET_TOUCHPADBUTTON_OFFSET UNITYSDK_OFFSET(0x1EAD11E0)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCKGAMEPAD__CTOR_OFFSET UNITYSDK_OFFSET(0x1EAD0860)

namespace UnityEngine::InputSystem::DualShock
{
	inline static constexpr unsigned int DualShockGamepad_TypeDefinitionIndex = 32438;

	class DualShockGamepad : public ::UnityEngine::InputSystem::Gamepad
	{
	public:
		static ::UnityEngine::InputSystem::DualShock::DualShockGamepad** StaticGet__current_k__BackingField()
		{
			return (::UnityEngine::InputSystem::DualShock::DualShockGamepad**)Il2CppClass::FromTypeDefinitionIndex(DualShockGamepad_TypeDefinitionIndex)->GetStaticField(0x27700);
		}
		::UnityEngine::InputSystem::Controls::ButtonControl* _L2_k__BackingField; // 0x1D8
		::UnityEngine::InputSystem::Controls::ButtonControl* _R3_k__BackingField; // 0x1E0
		::UnityEngine::InputSystem::Controls::ButtonControl* _shareButton_k__BackingField; // 0x1E8
		::UnityEngine::InputSystem::Controls::ButtonControl* _R1_k__BackingField; // 0x1F0
		::UnityEngine::InputSystem::Controls::ButtonControl* _touchpadButton_k__BackingField; // 0x1F8
		::UnityEngine::InputSystem::Controls::ButtonControl* _R2_k__BackingField; // 0x200
		::UnityEngine::InputSystem::Controls::ButtonControl* _optionsButton_k__BackingField; // 0x208
		::UnityEngine::InputSystem::Controls::ButtonControl* _L1_k__BackingField; // 0x210
		::UnityEngine::InputSystem::Controls::ButtonControl* _L3_k__BackingField; // 0x218

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCKGAMEPAD__CTOR_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_touchpadButton()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCKGAMEPAD_GET_TOUCHPADBUTTON_OFFSET))(this);
		}

		::System::Void set_touchpadButton(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCKGAMEPAD_SET_TOUCHPADBUTTON_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_optionsButton()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCKGAMEPAD_GET_OPTIONSBUTTON_OFFSET))(this);
		}

		::System::Void set_optionsButton(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCKGAMEPAD_SET_OPTIONSBUTTON_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_shareButton()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCKGAMEPAD_GET_SHAREBUTTON_OFFSET))(this);
		}

		::System::Void set_shareButton(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCKGAMEPAD_SET_SHAREBUTTON_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_L1()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCKGAMEPAD_GET_L1_OFFSET))(this);
		}

		::System::Void set_L1(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCKGAMEPAD_SET_L1_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_R1()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCKGAMEPAD_GET_R1_OFFSET))(this);
		}

		::System::Void set_R1(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCKGAMEPAD_SET_R1_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_L2()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCKGAMEPAD_GET_L2_OFFSET))(this);
		}

		::System::Void set_L2(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCKGAMEPAD_SET_L2_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_R2()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCKGAMEPAD_GET_R2_OFFSET))(this);
		}

		::System::Void set_R2(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCKGAMEPAD_SET_R2_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_L3()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCKGAMEPAD_GET_L3_OFFSET))(this);
		}

		::System::Void set_L3(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCKGAMEPAD_SET_L3_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_R3()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCKGAMEPAD_GET_R3_OFFSET))(this);
		}

		::System::Void set_R3(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCKGAMEPAD_SET_R3_OFFSET))(this, value);
		}

		static ::UnityEngine::InputSystem::DualShock::DualShockGamepad* get_current()
		{
			return ((::UnityEngine::InputSystem::DualShock::DualShockGamepad*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCKGAMEPAD_GET_CURRENT_OFFSET))();
		}

		static ::System::Void set_current(::UnityEngine::InputSystem::DualShock::DualShockGamepad* value)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::DualShock::DualShockGamepad*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCKGAMEPAD_SET_CURRENT_OFFSET))(value);
		}

		::System::Void MakeCurrent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCKGAMEPAD_MAKECURRENT_OFFSET))(this);
		}

		::System::Void OnRemoved()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCKGAMEPAD_ONREMOVED_OFFSET))(this);
		}

		::System::Void FinishSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCKGAMEPAD_FINISHSETUP_OFFSET))(this);
		}

		::System::Void SetLightBarColor(::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCKGAMEPAD_SETLIGHTBARCOLOR_OFFSET))(this, color);
		}
	};
}
