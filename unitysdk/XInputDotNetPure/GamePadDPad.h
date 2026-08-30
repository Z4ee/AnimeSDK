#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/XInputDotNetPure/ButtonState.h"

#define XINPUTDOTNETPURE_GAMEPADDPAD_GET_DOWN_OFFSET UNITYSDK_OFFSET(0x1E120)
#define XINPUTDOTNETPURE_GAMEPADDPAD_GET_LEFT_OFFSET UNITYSDK_OFFSET(0xDAB0)
#define XINPUTDOTNETPURE_GAMEPADDPAD_GET_RIGHT_OFFSET UNITYSDK_OFFSET(0x8A3A0)
#define XINPUTDOTNETPURE_GAMEPADDPAD_GET_UP_OFFSET UNITYSDK_OFFSET(0x5F00)
#define XINPUTDOTNETPURE_GAMEPADDPAD__CTOR_OFFSET UNITYSDK_OFFSET(0x8AFC0)

namespace XInputDotNetPure
{
	inline static constexpr unsigned int GamePadDPad_TypeDefinitionIndex = 39485;

	struct alignas(4) GamePadDPad
	{
		::XInputDotNetPure::ButtonState up; // 0x10
		::XInputDotNetPure::ButtonState down; // 0x14
		::XInputDotNetPure::ButtonState left; // 0x18
		::XInputDotNetPure::ButtonState right; // 0x1C

		::System::Void _ctor(::XInputDotNetPure::ButtonState a1, ::XInputDotNetPure::ButtonState a2, ::XInputDotNetPure::ButtonState a3, ::XInputDotNetPure::ButtonState a4)
		{
			return ((::System::Void(*)(::PVOID, ::XInputDotNetPure::ButtonState, ::XInputDotNetPure::ButtonState, ::XInputDotNetPure::ButtonState, ::XInputDotNetPure::ButtonState))((::PBYTE)hIl2Cpp + XINPUTDOTNETPURE_GAMEPADDPAD__CTOR_OFFSET))(this, a1, a2, a3, a4);
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
