#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Net::Sockets
{
	inline static constexpr unsigned int Socket_WSABUF_TypeDefinitionIndex = 2896;

	struct alignas(8) Socket_WSABUF
	{
		::System::Int32 len; // 0x10
		::System::IntPtr buf; // 0x18
	};
}
