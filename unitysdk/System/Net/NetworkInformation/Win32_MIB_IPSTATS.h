#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int Win32_MIB_IPSTATS_TypeDefinitionIndex = 3766;

	struct alignas(4) Win32_MIB_IPSTATS
	{
		::System::Int32 Forwarding; // 0x10
		::System::Int32 DefaultTTL; // 0x14
		::System::UInt32 InReceives; // 0x18
		::System::UInt32 InHdrErrors; // 0x1C
		::System::UInt32 InAddrErrors; // 0x20
		::System::UInt32 ForwDatagrams; // 0x24
		::System::UInt32 InUnknownProtos; // 0x28
		::System::UInt32 InDiscards; // 0x2C
		::System::UInt32 InDelivers; // 0x30
		::System::UInt32 OutRequests; // 0x34
		::System::UInt32 RoutingDiscards; // 0x38
		::System::UInt32 OutDiscards; // 0x3C
		::System::UInt32 OutNoRoutes; // 0x40
		::System::UInt32 ReasmTimeout; // 0x44
		::System::UInt32 ReasmReqds; // 0x48
		::System::UInt32 ReasmOks; // 0x4C
		::System::UInt32 ReasmFails; // 0x50
		::System::UInt32 FragOks; // 0x54
		::System::UInt32 FragFails; // 0x58
		::System::UInt32 FragCreates; // 0x5C
		::System::Int32 NumIf; // 0x60
		::System::Int32 NumAddr; // 0x64
		::System::Int32 NumRoutes; // 0x68
	};
}
