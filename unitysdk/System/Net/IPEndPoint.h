#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/EndPoint.h"
#include "unitysdk/System/Net/Sockets/AddressFamily.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Net { class IPAddress; }
namespace System::Net { class SocketAddress; }

#define SYSTEM_NET_IPENDPOINT_CREATE_OFFSET UNITYSDK_OFFSET(0x193B82F0)
#define SYSTEM_NET_IPENDPOINT_EQUALS_OFFSET UNITYSDK_OFFSET(0x193B85D0)
#define SYSTEM_NET_IPENDPOINT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x193B8690)
#define SYSTEM_NET_IPENDPOINT_GET_ADDRESSFAMILY_OFFSET UNITYSDK_OFFSET(0x193B7E30)
#define SYSTEM_NET_IPENDPOINT_GET_ADDRESS_OFFSET UNITYSDK_OFFSET(0x193B8060)
#define SYSTEM_NET_IPENDPOINT_GET_PORT_OFFSET UNITYSDK_OFFSET(0x193B8080)
#define SYSTEM_NET_IPENDPOINT_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x193B8290)
#define SYSTEM_NET_IPENDPOINT_SET_ADDRESS_OFFSET UNITYSDK_OFFSET(0x193B8070)
#define SYSTEM_NET_IPENDPOINT_SET_PORT_OFFSET UNITYSDK_OFFSET(0x193B8090)
#define SYSTEM_NET_IPENDPOINT_SNAPSHOT_OFFSET UNITYSDK_OFFSET(0x193B8740)
#define SYSTEM_NET_IPENDPOINT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x193B8130)
#define SYSTEM_NET_IPENDPOINT__CCTOR_OFFSET UNITYSDK_OFFSET(0x193B87B0)
#define SYSTEM_NET_IPENDPOINT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x193B7F90)
#define SYSTEM_NET_IPENDPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x193B7E50)

namespace System::Net
{
	inline static constexpr unsigned int IPEndPoint_TypeDefinitionIndex = 3288;

	class IPEndPoint : public ::System::Net::EndPoint
	{
	public:
		static ::System::Net::IPEndPoint** StaticGet_Any()
		{
			return (::System::Net::IPEndPoint**)Il2CppClass::FromTypeDefinitionIndex(IPEndPoint_TypeDefinitionIndex)->GetStaticField(0x3350);
		}
		static ::System::Net::IPEndPoint** StaticGet_IPv6Any()
		{
			return (::System::Net::IPEndPoint**)Il2CppClass::FromTypeDefinitionIndex(IPEndPoint_TypeDefinitionIndex)->GetStaticField(0x3358);
		}
		// static const ::System::Int32 MinPort = 0x0; // 0x0
		// static const ::System::Int32 MaxPort = 0xFFFF; // 0x0
		// static const ::System::Int32 AnyPort = 0x0; // 0x0
		::System::Net::IPAddress* m_Address; // 0x10
		::System::Int32 m_Port; // 0x18

		::System::Void _ctor(::System::Int64 address, ::System::Int32 port)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPENDPOINT__CTOR_OFFSET))(this, address, port);
		}

		::System::Void _ctor_1(::System::Net::IPAddress* address, ::System::Int32 port)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::IPAddress*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPENDPOINT__CTOR_1_OFFSET))(this, address, port);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_IPENDPOINT__CCTOR_OFFSET))();
		}

		::System::Net::Sockets::AddressFamily get_AddressFamily()
		{
			return ((::System::Net::Sockets::AddressFamily(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPENDPOINT_GET_ADDRESSFAMILY_OFFSET))(this);
		}

		::System::Net::IPAddress* get_Address()
		{
			return ((::System::Net::IPAddress*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPENDPOINT_GET_ADDRESS_OFFSET))(this);
		}

		::System::Void set_Address(::System::Net::IPAddress* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::IPAddress*))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPENDPOINT_SET_ADDRESS_OFFSET))(this, value);
		}

		::System::Int32 get_Port()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPENDPOINT_GET_PORT_OFFSET))(this);
		}

		::System::Void set_Port(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPENDPOINT_SET_PORT_OFFSET))(this, value);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPENDPOINT_TOSTRING_OFFSET))(this);
		}

		::System::Net::SocketAddress* Serialize()
		{
			return ((::System::Net::SocketAddress*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPENDPOINT_SERIALIZE_OFFSET))(this);
		}

		::System::Net::EndPoint* Create(::System::Net::SocketAddress* socketAddress)
		{
			return ((::System::Net::EndPoint*(*)(::PVOID, ::System::Net::SocketAddress*))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPENDPOINT_CREATE_OFFSET))(this, socketAddress);
		}

		::System::Boolean Equals(::System::Object* comparand)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPENDPOINT_EQUALS_OFFSET))(this, comparand);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPENDPOINT_GETHASHCODE_OFFSET))(this);
		}

		::System::Net::IPEndPoint* Snapshot()
		{
			return ((::System::Net::IPEndPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPENDPOINT_SNAPSHOT_OFFSET))(this);
		}
	};
}
