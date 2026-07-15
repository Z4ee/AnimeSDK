#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace XInputDotNetPure
{
	inline static constexpr unsigned int GamePadState_RawState_GamePad_TypeDefinitionIndex = 38632;

	struct alignas(2) GamePadState_RawState_GamePad
	{
		::System::UInt16 dwButtons; // 0x10
		::System::Byte bLeftTrigger; // 0x12
		::System::Byte bRightTrigger; // 0x13
		::System::Int16 sThumbLX; // 0x14
		::System::Int16 sThumbLY; // 0x16
		::System::Int16 sThumbRX; // 0x18
		::System::Int16 sThumbRY; // 0x1A
	};
}
