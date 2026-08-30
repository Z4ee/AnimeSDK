#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define XINPUTDOTNETPURE_GAMEPADTRIGGERS_GET_LEFT_OFFSET UNITYSDK_OFFSET(0xD4B0)
#define XINPUTDOTNETPURE_GAMEPADTRIGGERS_GET_RIGHT_OFFSET UNITYSDK_OFFSET(0xD4D0)
#define XINPUTDOTNETPURE_GAMEPADTRIGGERS__CTOR_OFFSET UNITYSDK_OFFSET(0x2F440)

namespace XInputDotNetPure
{
	inline static constexpr unsigned int GamePadTriggers_TypeDefinitionIndex = 39488;

	struct alignas(4) GamePadTriggers
	{
		::System::Single left; // 0x10
		::System::Single right; // 0x14

		::System::Void _ctor(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + XINPUTDOTNETPURE_GAMEPADTRIGGERS__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Single get_Left()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + XINPUTDOTNETPURE_GAMEPADTRIGGERS_GET_LEFT_OFFSET))(this);
		}

		::System::Single get_Right()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + XINPUTDOTNETPURE_GAMEPADTRIGGERS_GET_RIGHT_OFFSET))(this);
		}
	};
}
