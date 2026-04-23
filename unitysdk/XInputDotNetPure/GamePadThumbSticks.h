#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/XInputDotNetPure/GamePadThumbSticks_StickValue.h"

#define XINPUTDOTNETPURE_GAMEPADTHUMBSTICKS_GET_LEFT_OFFSET UNITYSDK_OFFSET(0x5580)
#define XINPUTDOTNETPURE_GAMEPADTHUMBSTICKS_GET_RIGHT_OFFSET UNITYSDK_OFFSET(0x5AF0)
#define XINPUTDOTNETPURE_GAMEPADTHUMBSTICKS__CTOR_OFFSET UNITYSDK_OFFSET(0x743C0)

namespace XInputDotNetPure
{
	inline static constexpr unsigned int GamePadThumbSticks_TypeDefinitionIndex = 37087;

	struct alignas(4) GamePadThumbSticks
	{
		::XInputDotNetPure::GamePadThumbSticks_StickValue left; // 0x10
		::XInputDotNetPure::GamePadThumbSticks_StickValue right; // 0x18

		::System::Void _ctor(::XInputDotNetPure::GamePadThumbSticks_StickValue left, ::XInputDotNetPure::GamePadThumbSticks_StickValue right)
		{
			return ((::System::Void(*)(::PVOID, ::XInputDotNetPure::GamePadThumbSticks_StickValue, ::XInputDotNetPure::GamePadThumbSticks_StickValue))((::PBYTE)hIl2Cpp + XINPUTDOTNETPURE_GAMEPADTHUMBSTICKS__CTOR_OFFSET))(this, left, right);
		}

		::XInputDotNetPure::GamePadThumbSticks_StickValue get_Left()
		{
			return ((::XInputDotNetPure::GamePadThumbSticks_StickValue(*)(::PVOID))((::PBYTE)hIl2Cpp + XINPUTDOTNETPURE_GAMEPADTHUMBSTICKS_GET_LEFT_OFFSET))(this);
		}

		::XInputDotNetPure::GamePadThumbSticks_StickValue get_Right()
		{
			return ((::XInputDotNetPure::GamePadThumbSticks_StickValue(*)(::PVOID))((::PBYTE)hIl2Cpp + XINPUTDOTNETPURE_GAMEPADTHUMBSTICKS_GET_RIGHT_OFFSET))(this);
		}
	};
}
