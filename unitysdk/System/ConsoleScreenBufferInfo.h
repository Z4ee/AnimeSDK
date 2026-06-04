#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Coord.h"
#include "unitysdk/System/SmallRect.h"
#include "unitysdk/System/ValueType.h"

namespace System
{
	inline static constexpr unsigned int ConsoleScreenBufferInfo_TypeDefinitionIndex = 457;

	struct alignas(2) ConsoleScreenBufferInfo
	{
		::System::Coord Size; // 0x10
		::System::Coord CursorPosition; // 0x14
		::System::Int16 Attribute; // 0x18
		::System::SmallRect Window; // 0x1A
		::System::Coord MaxWindowSize; // 0x22
	};
}
