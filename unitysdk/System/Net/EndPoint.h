#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Sockets/AddressFamily.h"
#include "unitysdk/System/Object.h"

namespace System::Net { class SocketAddress; }

#define SYSTEM_NET_ENDPOINT_CREATE_OFFSET UNITYSDK_OFFSET(0x1CC17290)
#define SYSTEM_NET_ENDPOINT_GET_ADDRESSFAMILY_OFFSET UNITYSDK_OFFSET(0x1CC171F0)
#define SYSTEM_NET_ENDPOINT_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1CC17240)
#define SYSTEM_NET_ENDPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC172E0)

namespace System::Net
{
	inline static constexpr unsigned int EndPoint_TypeDefinitionIndex = 3271;

	class EndPoint : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_ENDPOINT__CTOR_OFFSET))(this);
		}

		::System::Net::Sockets::AddressFamily get_AddressFamily()
		{
			return ((::System::Net::Sockets::AddressFamily(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_ENDPOINT_GET_ADDRESSFAMILY_OFFSET))(this);
		}

		::System::Net::SocketAddress* Serialize()
		{
			return ((::System::Net::SocketAddress*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_ENDPOINT_SERIALIZE_OFFSET))(this);
		}

		::System::Net::EndPoint* Create(::System::Net::SocketAddress* socketAddress)
		{
			return ((::System::Net::EndPoint*(*)(::PVOID, ::System::Net::SocketAddress*))((::PBYTE)hIl2Cpp + SYSTEM_NET_ENDPOINT_CREATE_OFFSET))(this, socketAddress);
		}
	};
}
