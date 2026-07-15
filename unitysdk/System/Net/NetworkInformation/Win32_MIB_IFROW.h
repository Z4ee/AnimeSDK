#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/NetworkInformation/NetworkInterfaceType.h"
#include "unitysdk/System/ValueType.h"

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int Win32_MIB_IFROW_TypeDefinitionIndex = 2960;

	struct alignas(8) Win32_MIB_IFROW
	{
		::Il2CppArray<::System::Char>* Name; // 0x10
		::System::Int32 Index; // 0x18
		::System::Net::NetworkInformation::NetworkInterfaceType Type; // 0x1C
		::System::Int32 Mtu; // 0x20
		::System::UInt32 Speed; // 0x24
		::System::Int32 PhysAddrLen; // 0x28
		::Il2CppArray<::System::Byte>* PhysAddr; // 0x30
		::System::UInt32 AdminStatus; // 0x38
		::System::UInt32 OperStatus; // 0x3C
		::System::UInt32 LastChange; // 0x40
		::System::Int32 InOctets; // 0x44
		::System::Int32 InUcastPkts; // 0x48
		::System::Int32 InNUcastPkts; // 0x4C
		::System::Int32 InDiscards; // 0x50
		::System::Int32 InErrors; // 0x54
		::System::Int32 InUnknownProtos; // 0x58
		::System::Int32 OutOctets; // 0x5C
		::System::Int32 OutUcastPkts; // 0x60
		::System::Int32 OutNUcastPkts; // 0x64
		::System::Int32 OutDiscards; // 0x68
		::System::Int32 OutErrors; // 0x6C
		::System::Int32 OutQLen; // 0x70
		::System::Int32 DescrLen; // 0x74
		::Il2CppArray<::System::Byte>* Descr; // 0x78
	};
}
