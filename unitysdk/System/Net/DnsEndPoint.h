#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/EndPoint.h"
#include "unitysdk/System/Net/Sockets/AddressFamily.h"

namespace System { class Object; }
namespace System { class String; }

#define SYSTEM_NET_DNSENDPOINT_EQUALS_OFFSET UNITYSDK_OFFSET(0x19BB6140)
#define SYSTEM_NET_DNSENDPOINT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19BB61E0)
#define SYSTEM_NET_DNSENDPOINT_GET_ADDRESSFAMILY_OFFSET UNITYSDK_OFFSET(0x19BB6570)
#define SYSTEM_NET_DNSENDPOINT_GET_HOST_OFFSET UNITYSDK_OFFSET(0x19BB6560)
#define SYSTEM_NET_DNSENDPOINT_GET_PORT_OFFSET UNITYSDK_OFFSET(0x19BB6580)
#define SYSTEM_NET_DNSENDPOINT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19BB6270)
#define SYSTEM_NET_DNSENDPOINT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19BB5FC0)
#define SYSTEM_NET_DNSENDPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x19BB5FB0)

namespace System::Net
{
	inline static constexpr unsigned int DnsEndPoint_TypeDefinitionIndex = 3271;

	class DnsEndPoint : public ::System::Net::EndPoint
	{
	public:
		::System::String* m_Host; // 0x10
		::System::Net::Sockets::AddressFamily m_Family; // 0x18
		::System::Int32 m_Port; // 0x1C

		::System::Void _ctor(::System::String* host, ::System::Int32 port)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_DNSENDPOINT__CTOR_OFFSET))(this, host, port);
		}

		::System::Void _ctor_1(::System::String* host, ::System::Int32 port, ::System::Net::Sockets::AddressFamily addressFamily)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Net::Sockets::AddressFamily))((::PBYTE)hIl2Cpp + SYSTEM_NET_DNSENDPOINT__CTOR_1_OFFSET))(this, host, port, addressFamily);
		}

		::System::Boolean Equals(::System::Object* comparand)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_DNSENDPOINT_EQUALS_OFFSET))(this, comparand);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_DNSENDPOINT_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_DNSENDPOINT_TOSTRING_OFFSET))(this);
		}

		::System::String* get_Host()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_DNSENDPOINT_GET_HOST_OFFSET))(this);
		}

		::System::Net::Sockets::AddressFamily get_AddressFamily()
		{
			return ((::System::Net::Sockets::AddressFamily(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_DNSENDPOINT_GET_ADDRESSFAMILY_OFFSET))(this);
		}

		::System::Int32 get_Port()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_DNSENDPOINT_GET_PORT_OFFSET))(this);
		}
	};
}
