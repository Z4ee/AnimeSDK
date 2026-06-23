#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int Win32IPGlobalProperties_Win32_IN6_ADDR_TypeDefinitionIndex = 3759;

	struct alignas(8) Win32IPGlobalProperties_Win32_IN6_ADDR
	{
		::Il2CppArray<::System::Byte>* Bytes; // 0x10
	};
}
