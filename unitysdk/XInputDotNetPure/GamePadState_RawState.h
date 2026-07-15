#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/XInputDotNetPure/GamePadState_RawState_GamePad.h"

namespace XInputDotNetPure
{
	inline static constexpr unsigned int GamePadState_RawState_TypeDefinitionIndex = 38631;

	struct alignas(4) GamePadState_RawState
	{
		::System::UInt32 dwPacketNumber; // 0x10
		::XInputDotNetPure::GamePadState_RawState_GamePad Gamepad; // 0x14
	};
}
