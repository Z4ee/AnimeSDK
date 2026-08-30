#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System
{
	inline static constexpr unsigned int InputRecord_TypeDefinitionIndex = 457;

	struct alignas(4) InputRecord
	{
		::System::Int16 EventType; // 0x10
		::System::Boolean KeyDown; // 0x12
		::System::Int16 RepeatCount; // 0x14
		::System::Int16 VirtualKeyCode; // 0x16
		::System::Int16 VirtualScanCode; // 0x18
		::System::Char Character; // 0x1A
		::System::Int32 ControlKeyState; // 0x1C
		::System::Int32 pad1; // 0x20
		::System::Boolean pad2; // 0x24
	};
}
