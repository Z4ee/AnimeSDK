#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int Win32_MIB_TCPSTATS_TypeDefinitionIndex = 3828;

	struct alignas(4) Win32_MIB_TCPSTATS
	{
		::System::UInt32 RtoAlgorithm; // 0x10
		::System::UInt32 RtoMin; // 0x14
		::System::UInt32 RtoMax; // 0x18
		::System::UInt32 MaxConn; // 0x1C
		::System::UInt32 ActiveOpens; // 0x20
		::System::UInt32 PassiveOpens; // 0x24
		::System::UInt32 AttemptFails; // 0x28
		::System::UInt32 EstabResets; // 0x2C
		::System::UInt32 CurrEstab; // 0x30
		::System::UInt32 InSegs; // 0x34
		::System::UInt32 OutSegs; // 0x38
		::System::UInt32 RetransSegs; // 0x3C
		::System::UInt32 InErrs; // 0x40
		::System::UInt32 OutRsts; // 0x44
		::System::UInt32 NumConns; // 0x48
	};
}
