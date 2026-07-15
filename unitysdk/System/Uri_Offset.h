#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System
{
	inline static constexpr unsigned int Uri_Offset_TypeDefinitionIndex = 2457;

	struct alignas(1) Uri_Offset
	{
		::System::UInt16 Scheme; // 0x10
		::System::UInt16 User; // 0x12
		::System::UInt16 Host; // 0x14
		::System::UInt16 PortValue; // 0x16
		::System::UInt16 Path; // 0x18
		::System::UInt16 Query; // 0x1A
		::System::UInt16 Fragment; // 0x1C
		::System::UInt16 End; // 0x1E
	};
}
