#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int Win32_SOCKADDR_TypeDefinitionIndex = 3848;

	struct alignas(8) Win32_SOCKADDR
	{
		::System::UInt16 AddressFamily; // 0x10
		::Il2CppArray<::System::Byte>* AddressData; // 0x18
	};
}
