#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Net { class IPAddress; }

#define SYSTEM_NET_SOCKETS_MULTICASTOPTION_GET_GROUP_OFFSET UNITYSDK_OFFSET(0x19AFE310)
#define SYSTEM_NET_SOCKETS_MULTICASTOPTION_GET_INTERFACEINDEX_OFFSET UNITYSDK_OFFSET(0x19AFE340)
#define SYSTEM_NET_SOCKETS_MULTICASTOPTION_GET_LOCALADDRESS_OFFSET UNITYSDK_OFFSET(0x19AFE330)
#define SYSTEM_NET_SOCKETS_MULTICASTOPTION_SET_GROUP_OFFSET UNITYSDK_OFFSET(0x19AFE320)
#define SYSTEM_NET_SOCKETS_MULTICASTOPTION_SET_INTERFACEINDEX_OFFSET UNITYSDK_OFFSET(0x19AFE350)
#define SYSTEM_NET_SOCKETS_MULTICASTOPTION_SET_LOCALADDRESS_OFFSET UNITYSDK_OFFSET(0x19AFE1B0)
#define SYSTEM_NET_SOCKETS_MULTICASTOPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19AFE1C0)
#define SYSTEM_NET_SOCKETS_MULTICASTOPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x19AFE270)
#define SYSTEM_NET_SOCKETS_MULTICASTOPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x19AFE100)

namespace System::Net::Sockets
{
	inline static constexpr unsigned int MulticastOption_TypeDefinitionIndex = 3647;

	class MulticastOption : public ::System::Object
	{
	public:
		::System::Net::IPAddress* group; // 0x10
		::System::Net::IPAddress* localAddress; // 0x18
		::System::Int32 ifIndex; // 0x20

		::System::Void _ctor(::System::Net::IPAddress* group, ::System::Net::IPAddress* mcint)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::IPAddress*, ::System::Net::IPAddress*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_MULTICASTOPTION__CTOR_OFFSET))(this, group, mcint);
		}

		::System::Void _ctor_1(::System::Net::IPAddress* group, ::System::Int32 interfaceIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::IPAddress*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_MULTICASTOPTION__CTOR_1_OFFSET))(this, group, interfaceIndex);
		}

		::System::Void _ctor_2(::System::Net::IPAddress* group)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::IPAddress*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_MULTICASTOPTION__CTOR_2_OFFSET))(this, group);
		}

		::System::Net::IPAddress* get_Group()
		{
			return ((::System::Net::IPAddress*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_MULTICASTOPTION_GET_GROUP_OFFSET))(this);
		}

		::System::Void set_Group(::System::Net::IPAddress* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::IPAddress*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_MULTICASTOPTION_SET_GROUP_OFFSET))(this, value);
		}

		::System::Net::IPAddress* get_LocalAddress()
		{
			return ((::System::Net::IPAddress*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_MULTICASTOPTION_GET_LOCALADDRESS_OFFSET))(this);
		}

		::System::Void set_LocalAddress(::System::Net::IPAddress* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::IPAddress*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_MULTICASTOPTION_SET_LOCALADDRESS_OFFSET))(this, value);
		}

		::System::Int32 get_InterfaceIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_MULTICASTOPTION_GET_INTERFACEINDEX_OFFSET))(this);
		}

		::System::Void set_InterfaceIndex(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_MULTICASTOPTION_SET_INTERFACEINDEX_OFFSET))(this, value);
		}
	};
}
