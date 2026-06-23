#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int MacNetworkChange_SCNetworkReachabilityContext_TypeDefinitionIndex = 3803;

	struct alignas(8) MacNetworkChange_SCNetworkReachabilityContext
	{
		::System::IntPtr version; // 0x10
		::System::IntPtr info; // 0x18
		::System::IntPtr retain; // 0x20
		::System::IntPtr release; // 0x28
		::System::IntPtr copyDescription; // 0x30
	};
}
