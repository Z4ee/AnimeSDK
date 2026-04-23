#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/XInputDotNetPure/ButtonState.h"

#define XINPUTDOTNETPURE_GAMEPADDPAD_GET_DOWN_OFFSET UNITYSDK_OFFSET(0x1DA80)
#define XINPUTDOTNETPURE_GAMEPADDPAD_GET_LEFT_OFFSET UNITYSDK_OFFSET(0xD240)
#define XINPUTDOTNETPURE_GAMEPADDPAD_GET_RIGHT_OFFSET UNITYSDK_OFFSET(0x15A8520)
#define XINPUTDOTNETPURE_GAMEPADDPAD_GET_UP_OFFSET UNITYSDK_OFFSET(0x59D0)
#define XINPUTDOTNETPURE_GAMEPADDPAD__CTOR_OFFSET UNITYSDK_OFFSET(0x76020)

namespace XInputDotNetPure
{
	inline static constexpr unsigned int GamePadDPad_TypeDefinitionIndex = 37086;

	struct alignas(4) GamePadDPad
	{
		::XInputDotNetPure::ButtonState up; // 0x10
		::XInputDotNetPure::ButtonState down; // 0x14
		::XInputDotNetPure::ButtonState left; // 0x18
		::XInputDotNetPure::ButtonState right; // 0x1C

		::System::Void _ctor(::XInputDotNetPure::ButtonState up, ::XInputDotNetPure::ButtonState down, ::XInputDotNetPure::ButtonState left, ::XInputDotNetPure::ButtonState right)
		{
			return ((::System::Void(*)(::PVOID, ::XInputDotNetPure::ButtonState, ::XInputDotNetPure::ButtonState, ::XInputDotNetPure::ButtonState, ::XInputDotNetPure::ButtonState))((::PBYTE)hIl2Cpp + XINPUTDOTNETPURE_GAMEPADDPAD__CTOR_OFFSET))(this, up, down, left, right);
		}

		::XInputDotNetPure::ButtonState get_Up()
		{
			return ((::XInputDotNetPure::ButtonState(*)(::PVOID))((::PBYTE)hIl2Cpp + XINPUTDOTNETPURE_GAMEPADDPAD_GET_UP_OFFSET))(this);
		}

		::XInputDotNetPure::ButtonState get_Down()
		{
			return ((::XInputDotNetPure::ButtonState(*)(::PVOID))((::PBYTE)hIl2Cpp + XINPUTDOTNETPURE_GAMEPADDPAD_GET_DOWN_OFFSET))(this);
		}

		::XInputDotNetPure::ButtonState get_Left()
		{
			return ((::XInputDotNetPure::ButtonState(*)(::PVOID))((::PBYTE)hIl2Cpp + XINPUTDOTNETPURE_GAMEPADDPAD_GET_LEFT_OFFSET))(this);
		}

		::XInputDotNetPure::ButtonState get_Right()
		{
			return ((::XInputDotNetPure::ButtonState(*)(::PVOID))((::PBYTE)hIl2Cpp + XINPUTDOTNETPURE_GAMEPADDPAD_GET_RIGHT_OFFSET))(this);
		}
	};
}
