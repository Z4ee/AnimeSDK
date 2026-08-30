#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/EndPoint.h"
#include "unitysdk/System/Net/Sockets/AddressFamily.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Net { class IPAddress; }
namespace System::Net { class SocketAddress; }

#define SYSTEM_NET_IPENDPOINT_CREATE_OFFSET UNITYSDK_OFFSET(0x1B043DD0)
#define SYSTEM_NET_IPENDPOINT_EQUALS_OFFSET UNITYSDK_OFFSET(0x1B044100)
#define SYSTEM_NET_IPENDPOINT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1B0441A0)
#define SYSTEM_NET_IPENDPOINT_GET_ADDRESSFAMILY_OFFSET UNITYSDK_OFFSET(0x1B0256A0)
#define SYSTEM_NET_IPENDPOINT_GET_ADDRESS_OFFSET UNITYSDK_OFFSET(0x1B043C50)
#define SYSTEM_NET_IPENDPOINT_GET_PORT_OFFSET UNITYSDK_OFFSET(0x1B043C60)
#define SYSTEM_NET_IPENDPOINT_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1B043D40)
#define SYSTEM_NET_IPENDPOINT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1B043C70)
#define SYSTEM_NET_IPENDPOINT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B0441D0)
#define SYSTEM_NET_IPENDPOINT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B013540)
#define SYSTEM_NET_IPENDPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B043B40)

namespace System::Net
{
	inline static constexpr unsigned int IPEndPoint_TypeDefinitionIndex = 2744;

	class IPEndPoint : public ::System::Net::EndPoint
	{
	public:
		static ::System::Net::IPEndPoint** StaticGet_IPv6Any()
		{
			return (::System::Net::IPEndPoint**)Il2CppClass::FromTypeDefinitionIndex(IPEndPoint_TypeDefinitionIndex)->GetStaticField(0x1C110);
		}
		static ::System::Net::IPEndPoint** StaticGet_Any()
		{
			return (::System::Net::IPEndPoint**)Il2CppClass::FromTypeDefinitionIndex(IPEndPoint_TypeDefinitionIndex)->GetStaticField(0x1C118);
		}
		::System::Net::IPAddress* m_Address; // 0x10
		::System::Int32 m_Port; // 0x18

		::System::Void _ctor(::System::Int64 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPENDPOINT__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::System::Net::IPAddress* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::IPAddress*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPENDPOINT__CTOR_1_OFFSET))(this, a1, a2);
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

		::System::Int32 get_Port()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPENDPOINT_GET_PORT_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPENDPOINT_TOSTRING_OFFSET))(this);
		}

		::System::Net::SocketAddress* Serialize()
		{
			return ((::System::Net::SocketAddress*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPENDPOINT_SERIALIZE_OFFSET))(this);
		}

		::System::Net::EndPoint* Create(::System::Net::SocketAddress* a1)
		{
			return ((::System::Net::EndPoint*(*)(::PVOID, ::System::Net::SocketAddress*))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPENDPOINT_CREATE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPENDPOINT_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPENDPOINT_GETHASHCODE_OFFSET))(this);
		}
	};
}
