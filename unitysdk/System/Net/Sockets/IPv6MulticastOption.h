#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Net { class IPAddress; }

#define SYSTEM_NET_SOCKETS_IPV6MULTICASTOPTION_GET_GROUP_OFFSET UNITYSDK_OFFSET(0x1C713E20)
#define SYSTEM_NET_SOCKETS_IPV6MULTICASTOPTION_GET_INTERFACEINDEX_OFFSET UNITYSDK_OFFSET(0x1C713E30)
#define SYSTEM_NET_SOCKETS_IPV6MULTICASTOPTION_SET_GROUP_OFFSET UNITYSDK_OFFSET(0x1C713C70)
#define SYSTEM_NET_SOCKETS_IPV6MULTICASTOPTION_SET_INTERFACEINDEX_OFFSET UNITYSDK_OFFSET(0x1C713CE0)
#define SYSTEM_NET_SOCKETS_IPV6MULTICASTOPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C713D60)
#define SYSTEM_NET_SOCKETS_IPV6MULTICASTOPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C713B80)

namespace System::Net::Sockets
{
	inline static constexpr unsigned int IPv6MulticastOption_TypeDefinitionIndex = 3647;

	class IPv6MulticastOption : public ::System::Object
	{
	public:
		::System::Net::IPAddress* m_Group; // 0x10
		::System::Int64 m_Interface; // 0x18

		::System::Void _ctor(::System::Net::IPAddress* group, ::System::Int64 ifindex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::IPAddress*, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_IPV6MULTICASTOPTION__CTOR_OFFSET))(this, group, ifindex);
		}

		::System::Void _ctor_1(::System::Net::IPAddress* group)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::IPAddress*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_IPV6MULTICASTOPTION__CTOR_1_OFFSET))(this, group);
		}

		::System::Net::IPAddress* get_Group()
		{
			return ((::System::Net::IPAddress*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_IPV6MULTICASTOPTION_GET_GROUP_OFFSET))(this);
		}

		::System::Void set_Group(::System::Net::IPAddress* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::IPAddress*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_IPV6MULTICASTOPTION_SET_GROUP_OFFSET))(this, value);
		}

		::System::Int64 get_InterfaceIndex()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_IPV6MULTICASTOPTION_GET_INTERFACEINDEX_OFFSET))(this);
		}

		::System::Void set_InterfaceIndex(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_IPV6MULTICASTOPTION_SET_INTERFACEINDEX_OFFSET))(this, value);
		}
	};
}
