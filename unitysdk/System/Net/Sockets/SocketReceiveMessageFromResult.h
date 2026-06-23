#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Sockets/IPPacketInformation.h"
#include "unitysdk/System/Net/Sockets/SocketFlags.h"
#include "unitysdk/System/ValueType.h"

namespace System::Net { class EndPoint; }

namespace System::Net::Sockets
{
	inline static constexpr unsigned int SocketReceiveMessageFromResult_TypeDefinitionIndex = 3688;

	struct alignas(8) SocketReceiveMessageFromResult
	{
		::System::Int32 ReceivedBytes; // 0x10
		::System::Net::Sockets::SocketFlags SocketFlags; // 0x14
		::System::Net::EndPoint* RemoteEndPoint; // 0x18
		::System::Net::Sockets::IPPacketInformation PacketInformation; // 0x20
	};
}
