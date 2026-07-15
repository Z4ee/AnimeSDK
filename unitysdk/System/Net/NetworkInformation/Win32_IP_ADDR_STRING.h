#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int Win32_IP_ADDR_STRING_TypeDefinitionIndex = 2961;

	struct alignas(8) Win32_IP_ADDR_STRING
	{
		::System::IntPtr Next; // 0x10
		::System::String* IpAddress; // 0x18
		::System::String* IpMask; // 0x20
		::System::UInt32 Context; // 0x28
	};
}
