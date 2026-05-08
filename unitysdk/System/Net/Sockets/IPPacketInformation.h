#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System::Net { class IPAddress; }

#define SYSTEM_NET_SOCKETS_IPPACKETINFORMATION_EQUALS_OFFSET UNITYSDK_OFFSET(0x8A6B80)
#define SYSTEM_NET_SOCKETS_IPPACKETINFORMATION_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x8A6C00)
#define SYSTEM_NET_SOCKETS_IPPACKETINFORMATION_GET_ADDRESS_OFFSET UNITYSDK_OFFSET(0x228FE0)
#define SYSTEM_NET_SOCKETS_IPPACKETINFORMATION_GET_INTERFACE_OFFSET UNITYSDK_OFFSET(0x2F0420)
#define SYSTEM_NET_SOCKETS_IPPACKETINFORMATION_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x19AFDE60)
#define SYSTEM_NET_SOCKETS_IPPACKETINFORMATION_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x19AFDF90)
#define SYSTEM_NET_SOCKETS_IPPACKETINFORMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x39EDC0)

namespace System::Net::Sockets
{
	inline static constexpr unsigned int IPPacketInformation_TypeDefinitionIndex = 3644;

	struct alignas(8) IPPacketInformation
	{
		::System::Net::IPAddress* address; // 0x10
		::System::Int32 networkInterface; // 0x18

		::System::Void _ctor(::System::Net::IPAddress* address, ::System::Int32 networkInterface)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::IPAddress*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_IPPACKETINFORMATION__CTOR_OFFSET))(this, address, networkInterface);
		}

		::System::Net::IPAddress* get_Address()
		{
			return ((::System::Net::IPAddress*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_IPPACKETINFORMATION_GET_ADDRESS_OFFSET))(this);
		}

		::System::Int32 get_Interface()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_IPPACKETINFORMATION_GET_INTERFACE_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::System::Net::Sockets::IPPacketInformation packetInformation1, ::System::Net::Sockets::IPPacketInformation packetInformation2)
		{
			return ((::System::Boolean(*)(::System::Net::Sockets::IPPacketInformation, ::System::Net::Sockets::IPPacketInformation))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_IPPACKETINFORMATION_OP_EQUALITY_OFFSET))(packetInformation1, packetInformation2);
		}

		static ::System::Boolean op_Inequality(::System::Net::Sockets::IPPacketInformation packetInformation1, ::System::Net::Sockets::IPPacketInformation packetInformation2)
		{
			return ((::System::Boolean(*)(::System::Net::Sockets::IPPacketInformation, ::System::Net::Sockets::IPPacketInformation))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_IPPACKETINFORMATION_OP_INEQUALITY_OFFSET))(packetInformation1, packetInformation2);
		}

		::System::Boolean Equals(::System::Object* comparand)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_IPPACKETINFORMATION_EQUALS_OFFSET))(this, comparand);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_IPPACKETINFORMATION_GETHASHCODE_OFFSET))(this);
		}
	};
}
