#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int Win32_MIBICMPSTATS_TypeDefinitionIndex = 3783;

	struct alignas(4) Win32_MIBICMPSTATS
	{
		::System::UInt32 Msgs; // 0x10
		::System::UInt32 Errors; // 0x14
		::System::UInt32 DestUnreachs; // 0x18
		::System::UInt32 TimeExcds; // 0x1C
		::System::UInt32 ParmProbs; // 0x20
		::System::UInt32 SrcQuenchs; // 0x24
		::System::UInt32 Redirects; // 0x28
		::System::UInt32 Echos; // 0x2C
		::System::UInt32 EchoReps; // 0x30
		::System::UInt32 Timestamps; // 0x34
		::System::UInt32 TimestampReps; // 0x38
		::System::UInt32 AddrMasks; // 0x3C
		::System::UInt32 AddrMaskReps; // 0x40
	};
}
