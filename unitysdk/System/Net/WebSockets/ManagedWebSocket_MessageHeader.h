#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/WebSockets/ManagedWebSocket_MessageOpcode.h"
#include "unitysdk/System/ValueType.h"

namespace System::Net::WebSockets
{
	inline static constexpr unsigned int ManagedWebSocket_MessageHeader_TypeDefinitionIndex = 3876;

	struct alignas(8) ManagedWebSocket_MessageHeader
	{
		::System::Net::WebSockets::ManagedWebSocket_MessageOpcode Opcode; // 0x10
		::System::Boolean Fin; // 0x11
		::System::Int32 Mask; // 0x14
		::System::Int64 PayloadLength; // 0x18
	};
}
