#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/XInputDotNetPure/ButtonState.h"

#define XINPUTDOTNETPURE_GAMEPADBUTTONS_GET_A_OFFSET UNITYSDK_OFFSET(0x5E00)
#define XINPUTDOTNETPURE_GAMEPADBUTTONS_GET_BACK_OFFSET UNITYSDK_OFFSET(0x1DA90)
#define XINPUTDOTNETPURE_GAMEPADBUTTONS_GET_B_OFFSET UNITYSDK_OFFSET(0x1E140)
#define XINPUTDOTNETPURE_GAMEPADBUTTONS_GET_LEFTSHOULDER_OFFSET UNITYSDK_OFFSET(0x68F0)
#define XINPUTDOTNETPURE_GAMEPADBUTTONS_GET_LEFTSTICK_OFFSET UNITYSDK_OFFSET(0xD250)
#define XINPUTDOTNETPURE_GAMEPADBUTTONS_GET_RIGHTSHOULDER_OFFSET UNITYSDK_OFFSET(0x6900)
#define XINPUTDOTNETPURE_GAMEPADBUTTONS_GET_RIGHTSTICK_OFFSET UNITYSDK_OFFSET(0x793A0)
#define XINPUTDOTNETPURE_GAMEPADBUTTONS_GET_START_OFFSET UNITYSDK_OFFSET(0x59D0)
#define XINPUTDOTNETPURE_GAMEPADBUTTONS_GET_X_OFFSET UNITYSDK_OFFSET(0x1CCC0)
#define XINPUTDOTNETPURE_GAMEPADBUTTONS_GET_Y_OFFSET UNITYSDK_OFFSET(0x57C40)
#define XINPUTDOTNETPURE_GAMEPADBUTTONS__CTOR_OFFSET UNITYSDK_OFFSET(0x20C6AF0)

namespace XInputDotNetPure
{
	inline static constexpr unsigned int GamePadButtons_TypeDefinitionIndex = 31365;

	struct alignas(4) GamePadButtons
	{
		::XInputDotNetPure::ButtonState start; // 0x10
		::XInputDotNetPure::ButtonState back; // 0x14
		::XInputDotNetPure::ButtonState leftStick; // 0x18
		::XInputDotNetPure::ButtonState rightStick; // 0x1C
		::XInputDotNetPure::ButtonState leftShoulder; // 0x20
		::XInputDotNetPure::ButtonState rightShoulder; // 0x24
		::XInputDotNetPure::ButtonState a; // 0x28
		::XInputDotNetPure::ButtonState b; // 0x2C
		::XInputDotNetPure::ButtonState x; // 0x30
		::XInputDotNetPure::ButtonState y; // 0x34

		::System::Void _ctor(::XInputDotNetPure::ButtonState start, ::XInputDotNetPure::ButtonState back, ::XInputDotNetPure::ButtonState leftStick, ::XInputDotNetPure::ButtonState rightStick, ::XInputDotNetPure::ButtonState leftShoulder, ::XInputDotNetPure::ButtonState rightShoulder, ::XInputDotNetPure::ButtonState a, ::XInputDotNetPure::ButtonState b, ::XInputDotNetPure::ButtonState x, ::XInputDotNetPure::ButtonState y)
		{
			return ((::System::Void(*)(::PVOID, ::XInputDotNetPure::ButtonState, ::XInputDotNetPure::ButtonState, ::XInputDotNetPure::ButtonState, ::XInputDotNetPure::ButtonState, ::XInputDotNetPure::ButtonState, ::XInputDotNetPure::ButtonState, ::XInputDotNetPure::ButtonState, ::XInputDotNetPure::ButtonState, ::XInputDotNetPure::ButtonState, ::XInputDotNetPure::ButtonState))((::PBYTE)hIl2Cpp + XINPUTDOTNETPURE_GAMEPADBUTTONS__CTOR_OFFSET))(this, start, back, leftStick, rightStick, leftShoulder, rightShoulder, a, b, x, y);
		}

		::XInputDotNetPure::ButtonState get_Start()
		{
			return ((::XInputDotNetPure::ButtonState(*)(::PVOID))((::PBYTE)hIl2Cpp + XINPUTDOTNETPURE_GAMEPADBUTTONS_GET_START_OFFSET))(this);
		}

		::XInputDotNetPure::ButtonState get_Back()
		{
			return ((::XInputDotNetPure::ButtonState(*)(::PVOID))((::PBYTE)hIl2Cpp + XINPUTDOTNETPURE_GAMEPADBUTTONS_GET_BACK_OFFSET))(this);
		}

		::XInputDotNetPure::ButtonState get_LeftStick()
		{
			return ((::XInputDotNetPure::ButtonState(*)(::PVOID))((::PBYTE)hIl2Cpp + XINPUTDOTNETPURE_GAMEPADBUTTONS_GET_LEFTSTICK_OFFSET))(this);
		}

		::XInputDotNetPure::ButtonState get_RightStick()
		{
			return ((::XInputDotNetPure::ButtonState(*)(::PVOID))((::PBYTE)hIl2Cpp + XINPUTDOTNETPURE_GAMEPADBUTTONS_GET_RIGHTSTICK_OFFSET))(this);
		}

		::XInputDotNetPure::ButtonState get_LeftShoulder()
		{
			return ((::XInputDotNetPure::ButtonState(*)(::PVOID))((::PBYTE)hIl2Cpp + XINPUTDOTNETPURE_GAMEPADBUTTONS_GET_LEFTSHOULDER_OFFSET))(this);
		}

		::XInputDotNetPure::ButtonState get_RightShoulder()
		{
			return ((::XInputDotNetPure::ButtonState(*)(::PVOID))((::PBYTE)hIl2Cpp + XINPUTDOTNETPURE_GAMEPADBUTTONS_GET_RIGHTSHOULDER_OFFSET))(this);
		}

		::XInputDotNetPure::ButtonState get_A()
		{
			return ((::XInputDotNetPure::ButtonState(*)(::PVOID))((::PBYTE)hIl2Cpp + XINPUTDOTNETPURE_GAMEPADBUTTONS_GET_A_OFFSET))(this);
		}

		::XInputDotNetPure::ButtonState get_B()
		{
			return ((::XInputDotNetPure::ButtonState(*)(::PVOID))((::PBYTE)hIl2Cpp + XINPUTDOTNETPURE_GAMEPADBUTTONS_GET_B_OFFSET))(this);
		}

		::XInputDotNetPure::ButtonState get_X()
		{
			return ((::XInputDotNetPure::ButtonState(*)(::PVOID))((::PBYTE)hIl2Cpp + XINPUTDOTNETPURE_GAMEPADBUTTONS_GET_X_OFFSET))(this);
		}

		::XInputDotNetPure::ButtonState get_Y()
		{
			return ((::XInputDotNetPure::ButtonState(*)(::PVOID))((::PBYTE)hIl2Cpp + XINPUTDOTNETPURE_GAMEPADBUTTONS_GET_Y_OFFSET))(this);
		}
	};
}
