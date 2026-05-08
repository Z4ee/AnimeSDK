#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/Haptics/DualMotorRumble.h"
#include "unitysdk/UnityEngine/InputSystem/InputDevice.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/GamepadButton.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/ReadOnlyArray_1.h"

namespace UnityEngine::InputSystem::Controls { class ButtonControl; }
namespace UnityEngine::InputSystem::Controls { class DpadControl; }
namespace UnityEngine::InputSystem::Controls { class StickControl; }

#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x1B388480)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_ABUTTON_OFFSET UNITYSDK_OFFSET(0x1B388190)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_ALL_OFFSET UNITYSDK_OFFSET(0x1B388450)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_BBUTTON_OFFSET UNITYSDK_OFFSET(0x1B3881A0)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_BUTTONEAST_OFFSET UNITYSDK_OFFSET(0x1B388010)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_BUTTONNORTH_OFFSET UNITYSDK_OFFSET(0x1B387FD0)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_BUTTONSOUTH_OFFSET UNITYSDK_OFFSET(0x1B387FF0)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_BUTTONWEST_OFFSET UNITYSDK_OFFSET(0x1B387FB0)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_CIRCLEBUTTON_OFFSET UNITYSDK_OFFSET(0x1B3881F0)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_CROSSBUTTON_OFFSET UNITYSDK_OFFSET(0x1B388200)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1B388430)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_DPAD_OFFSET UNITYSDK_OFFSET(0x1B3880B0)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1B388210)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_LEFTSHOULDER_OFFSET UNITYSDK_OFFSET(0x1B3880D0)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_LEFTSTICKBUTTON_OFFSET UNITYSDK_OFFSET(0x1B388030)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_LEFTSTICK_OFFSET UNITYSDK_OFFSET(0x1B388110)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_LEFTTRIGGER_OFFSET UNITYSDK_OFFSET(0x1B388150)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_RIGHTSHOULDER_OFFSET UNITYSDK_OFFSET(0x1B3880F0)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_RIGHTSTICKBUTTON_OFFSET UNITYSDK_OFFSET(0x1B388050)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_RIGHTSTICK_OFFSET UNITYSDK_OFFSET(0x1B388130)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_RIGHTTRIGGER_OFFSET UNITYSDK_OFFSET(0x1B388170)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_SELECTBUTTON_OFFSET UNITYSDK_OFFSET(0x1B388090)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_SQUAREBUTTON_OFFSET UNITYSDK_OFFSET(0x1B3881E0)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_STARTBUTTON_OFFSET UNITYSDK_OFFSET(0x1B388070)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_TRIANGLEBUTTON_OFFSET UNITYSDK_OFFSET(0x1B3881D0)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_XBUTTON_OFFSET UNITYSDK_OFFSET(0x1B3881B0)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_YBUTTON_OFFSET UNITYSDK_OFFSET(0x1B3881C0)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_MAKECURRENT_OFFSET UNITYSDK_OFFSET(0x1B388670)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_ONADDED_OFFSET UNITYSDK_OFFSET(0x1B388680)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_ONREMOVED_OFFSET UNITYSDK_OFFSET(0x1B3886E0)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_PAUSEHAPTICS_OFFSET UNITYSDK_OFFSET(0x1B388840)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_RESETHAPTICS_OFFSET UNITYSDK_OFFSET(0x1B388860)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_RESUMEHAPTICS_OFFSET UNITYSDK_OFFSET(0x1B388850)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_SETMOTORSPEEDS_OFFSET UNITYSDK_OFFSET(0x1B388870)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_SET_BUTTONEAST_OFFSET UNITYSDK_OFFSET(0x1B388020)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_SET_BUTTONNORTH_OFFSET UNITYSDK_OFFSET(0x1B387FE0)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_SET_BUTTONSOUTH_OFFSET UNITYSDK_OFFSET(0x1B388000)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_SET_BUTTONWEST_OFFSET UNITYSDK_OFFSET(0x1B387FC0)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1B388440)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_SET_DPAD_OFFSET UNITYSDK_OFFSET(0x1B3880C0)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_SET_LEFTSHOULDER_OFFSET UNITYSDK_OFFSET(0x1B3880E0)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_SET_LEFTSTICKBUTTON_OFFSET UNITYSDK_OFFSET(0x1B388040)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_SET_LEFTSTICK_OFFSET UNITYSDK_OFFSET(0x1B388120)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_SET_LEFTTRIGGER_OFFSET UNITYSDK_OFFSET(0x1B388160)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_SET_RIGHTSHOULDER_OFFSET UNITYSDK_OFFSET(0x1B388100)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_SET_RIGHTSTICKBUTTON_OFFSET UNITYSDK_OFFSET(0x1B388060)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_SET_RIGHTSTICK_OFFSET UNITYSDK_OFFSET(0x1B388140)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_SET_RIGHTTRIGGER_OFFSET UNITYSDK_OFFSET(0x1B388180)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_SET_SELECTBUTTON_OFFSET UNITYSDK_OFFSET(0x1B3880A0)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_SET_STARTBUTTON_OFFSET UNITYSDK_OFFSET(0x1B388080)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD__CTOR_OFFSET UNITYSDK_OFFSET(0x1B388890)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int Gamepad_TypeDefinitionIndex = 28971;

	class Gamepad : public ::UnityEngine::InputSystem::InputDevice
	{
	public:
		static ::Il2CppArray<::UnityEngine::InputSystem::Gamepad*>** StaticGet_s_Gamepads()
		{
			return (::Il2CppArray<::UnityEngine::InputSystem::Gamepad*>**)Il2CppClass::FromTypeDefinitionIndex(Gamepad_TypeDefinitionIndex)->GetStaticField(0x22090);
		}
		static ::UnityEngine::InputSystem::Gamepad** StaticGet__current_k__BackingField()
		{
			return (::UnityEngine::InputSystem::Gamepad**)Il2CppClass::FromTypeDefinitionIndex(Gamepad_TypeDefinitionIndex)->GetStaticField(0x22098);
		}
		static ::System::Int32* StaticGet_s_GamepadCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Gamepad_TypeDefinitionIndex)->GetStaticField(0x4C10);
		}
		::UnityEngine::InputSystem::Controls::ButtonControl* _rightShoulder_k__BackingField; // 0x158
		::UnityEngine::InputSystem::Controls::ButtonControl* _buttonEast_k__BackingField; // 0x160
		::UnityEngine::InputSystem::Controls::ButtonControl* _leftTrigger_k__BackingField; // 0x168
		::UnityEngine::InputSystem::Controls::StickControl* _leftStick_k__BackingField; // 0x170
		::UnityEngine::InputSystem::Controls::ButtonControl* _selectButton_k__BackingField; // 0x178
		::UnityEngine::InputSystem::Controls::ButtonControl* _leftShoulder_k__BackingField; // 0x180
		::UnityEngine::InputSystem::Controls::ButtonControl* _buttonWest_k__BackingField; // 0x188
		::UnityEngine::InputSystem::Controls::ButtonControl* _buttonNorth_k__BackingField; // 0x190
		::UnityEngine::InputSystem::Controls::ButtonControl* _rightStickButton_k__BackingField; // 0x198
		::UnityEngine::InputSystem::Controls::ButtonControl* _leftStickButton_k__BackingField; // 0x1A0
		::UnityEngine::InputSystem::Controls::ButtonControl* _rightTrigger_k__BackingField; // 0x1A8
		::UnityEngine::InputSystem::Controls::ButtonControl* _buttonSouth_k__BackingField; // 0x1B0
		::UnityEngine::InputSystem::Controls::DpadControl* _dpad_k__BackingField; // 0x1B8
		::UnityEngine::InputSystem::Controls::StickControl* _rightStick_k__BackingField; // 0x1C0
		::UnityEngine::InputSystem::Controls::ButtonControl* _startButton_k__BackingField; // 0x1C8
		::UnityEngine::InputSystem::Haptics::DualMotorRumble m_Rumble; // 0x1D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD__CTOR_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_buttonWest()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_BUTTONWEST_OFFSET))(this);
		}

		::System::Void set_buttonWest(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_SET_BUTTONWEST_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_buttonNorth()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_BUTTONNORTH_OFFSET))(this);
		}

		::System::Void set_buttonNorth(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_SET_BUTTONNORTH_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_buttonSouth()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_BUTTONSOUTH_OFFSET))(this);
		}

		::System::Void set_buttonSouth(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_SET_BUTTONSOUTH_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_buttonEast()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_BUTTONEAST_OFFSET))(this);
		}

		::System::Void set_buttonEast(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_SET_BUTTONEAST_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_leftStickButton()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_LEFTSTICKBUTTON_OFFSET))(this);
		}

		::System::Void set_leftStickButton(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_SET_LEFTSTICKBUTTON_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_rightStickButton()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_RIGHTSTICKBUTTON_OFFSET))(this);
		}

		::System::Void set_rightStickButton(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_SET_RIGHTSTICKBUTTON_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_startButton()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_STARTBUTTON_OFFSET))(this);
		}

		::System::Void set_startButton(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_SET_STARTBUTTON_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_selectButton()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_SELECTBUTTON_OFFSET))(this);
		}

		::System::Void set_selectButton(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_SET_SELECTBUTTON_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::DpadControl* get_dpad()
		{
			return ((::UnityEngine::InputSystem::Controls::DpadControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_DPAD_OFFSET))(this);
		}

		::System::Void set_dpad(::UnityEngine::InputSystem::Controls::DpadControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::DpadControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_SET_DPAD_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_leftShoulder()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_LEFTSHOULDER_OFFSET))(this);
		}

		::System::Void set_leftShoulder(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_SET_LEFTSHOULDER_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_rightShoulder()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_RIGHTSHOULDER_OFFSET))(this);
		}

		::System::Void set_rightShoulder(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_SET_RIGHTSHOULDER_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::StickControl* get_leftStick()
		{
			return ((::UnityEngine::InputSystem::Controls::StickControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_LEFTSTICK_OFFSET))(this);
		}

		::System::Void set_leftStick(::UnityEngine::InputSystem::Controls::StickControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::StickControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_SET_LEFTSTICK_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::StickControl* get_rightStick()
		{
			return ((::UnityEngine::InputSystem::Controls::StickControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_RIGHTSTICK_OFFSET))(this);
		}

		::System::Void set_rightStick(::UnityEngine::InputSystem::Controls::StickControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::StickControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_SET_RIGHTSTICK_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_leftTrigger()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_LEFTTRIGGER_OFFSET))(this);
		}

		::System::Void set_leftTrigger(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_SET_LEFTTRIGGER_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_rightTrigger()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_RIGHTTRIGGER_OFFSET))(this);
		}

		::System::Void set_rightTrigger(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_SET_RIGHTTRIGGER_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_aButton()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_ABUTTON_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_bButton()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_BBUTTON_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_xButton()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_XBUTTON_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_yButton()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_YBUTTON_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_triangleButton()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_TRIANGLEBUTTON_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_squareButton()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_SQUAREBUTTON_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_circleButton()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_CIRCLEBUTTON_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_crossButton()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_CROSSBUTTON_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_Item(::UnityEngine::InputSystem::LowLevel::GamepadButton button)
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::GamepadButton))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_ITEM_OFFSET))(this, button);
		}

		static ::UnityEngine::InputSystem::Gamepad* get_current()
		{
			return ((::UnityEngine::InputSystem::Gamepad*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_CURRENT_OFFSET))();
		}

		static ::System::Void set_current(::UnityEngine::InputSystem::Gamepad* value)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::Gamepad*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_SET_CURRENT_OFFSET))(value);
		}

		static ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Gamepad*> get_all()
		{
			return ((::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Gamepad*>(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_ALL_OFFSET))();
		}

		::System::Void FinishSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_FINISHSETUP_OFFSET))(this);
		}

		::System::Void MakeCurrent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_MAKECURRENT_OFFSET))(this);
		}

		::System::Void OnAdded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_ONADDED_OFFSET))(this);
		}

		::System::Void OnRemoved()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_ONREMOVED_OFFSET))(this);
		}

		::System::Void PauseHaptics()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_PAUSEHAPTICS_OFFSET))(this);
		}

		::System::Void ResumeHaptics()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_RESUMEHAPTICS_OFFSET))(this);
		}

		::System::Void ResetHaptics()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_RESETHAPTICS_OFFSET))(this);
		}

		::System::Void SetMotorSpeeds(::System::Single lowFrequency, ::System::Single highFrequency)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_SETMOTORSPEEDS_OFFSET))(this, lowFrequency, highFrequency);
		}
	};
}
