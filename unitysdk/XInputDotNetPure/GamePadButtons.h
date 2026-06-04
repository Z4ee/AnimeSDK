#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/XInputDotNetPure/ButtonState.h"

#define XINPUTDOTNETPURE_GAMEPADBUTTONS_GET_A_OFFSET UNITYSDK_OFFSET(0x63E0)
#define XINPUTDOTNETPURE_GAMEPADBUTTONS_GET_BACK_OFFSET UNITYSDK_OFFSET(0x1E110)
#define XINPUTDOTNETPURE_GAMEPADBUTTONS_GET_B_OFFSET UNITYSDK_OFFSET(0x1E7D0)
#define XINPUTDOTNETPURE_GAMEPADBUTTONS_GET_LEFTSHOULDER_OFFSET UNITYSDK_OFFSET(0x6EE0)
#define XINPUTDOTNETPURE_GAMEPADBUTTONS_GET_LEFTSTICK_OFFSET UNITYSDK_OFFSET(0xDAD0)
#define XINPUTDOTNETPURE_GAMEPADBUTTONS_GET_RIGHTSHOULDER_OFFSET UNITYSDK_OFFSET(0x6EF0)
#define XINPUTDOTNETPURE_GAMEPADBUTTONS_GET_RIGHTSTICK_OFFSET UNITYSDK_OFFSET(0x140A50)
#define XINPUTDOTNETPURE_GAMEPADBUTTONS_GET_START_OFFSET UNITYSDK_OFFSET(0x5FB0)
#define XINPUTDOTNETPURE_GAMEPADBUTTONS_GET_X_OFFSET UNITYSDK_OFFSET(0x1D280)
#define XINPUTDOTNETPURE_GAMEPADBUTTONS_GET_Y_OFFSET UNITYSDK_OFFSET(0x5D4E0)
#define XINPUTDOTNETPURE_GAMEPADBUTTONS__CTOR_OFFSET UNITYSDK_OFFSET(0x3826320)

namespace XInputDotNetPure
{
	inline static constexpr unsigned int GamePadButtons_TypeDefinitionIndex = 37817;

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

		::System::Void _ctor(::XInputDotNetPure::ButtonState a1, ::XInputDotNetPure::ButtonState a2, ::XInputDotNetPure::ButtonState a3, ::XInputDotNetPure::ButtonState a4, ::XInputDotNetPure::ButtonState a5, ::XInputDotNetPure::ButtonState a6, ::XInputDotNetPure::ButtonState a7, ::XInputDotNetPure::ButtonState a8, ::XInputDotNetPure::ButtonState a9, ::XInputDotNetPure::ButtonState a10)
		{
			return ((::System::Void(*)(::PVOID, ::XInputDotNetPure::ButtonState, ::XInputDotNetPure::ButtonState, ::XInputDotNetPure::ButtonState, ::XInputDotNetPure::ButtonState, ::XInputDotNetPure::ButtonState, ::XInputDotNetPure::ButtonState, ::XInputDotNetPure::ButtonState, ::XInputDotNetPure::ButtonState, ::XInputDotNetPure::ButtonState, ::XInputDotNetPure::ButtonState))((::PBYTE)hIl2Cpp + XINPUTDOTNETPURE_GAMEPADBUTTONS__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
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
