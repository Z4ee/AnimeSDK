#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Sockets/AddressFamily.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_NET_IPADDRESS_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1AF95280)
#define SYSTEM_NET_IPADDRESS_EQUALS_OFFSET UNITYSDK_OFFSET(0x1AF95320)
#define SYSTEM_NET_IPADDRESS_GETADDRESSBYTES_OFFSET UNITYSDK_OFFSET(0x1AF7AAA0)
#define SYSTEM_NET_IPADDRESS_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1AF95500)
#define SYSTEM_NET_IPADDRESS_GET_ADDRESSFAMILY_OFFSET UNITYSDK_OFFSET(0x1AF94740)
#define SYSTEM_NET_IPADDRESS_GET_ISBROADCAST_OFFSET UNITYSDK_OFFSET(0x1AF95290)
#define SYSTEM_NET_IPADDRESS_GET_SCOPEID_OFFSET UNITYSDK_OFFSET(0x1AF94750)
#define SYSTEM_NET_IPADDRESS_HOSTTONETWORKORDER_1_OFFSET UNITYSDK_OFFSET(0x1AF95010)
#define SYSTEM_NET_IPADDRESS_HOSTTONETWORKORDER_2_OFFSET UNITYSDK_OFFSET(0x1AF95070)
#define SYSTEM_NET_IPADDRESS_HOSTTONETWORKORDER_OFFSET UNITYSDK_OFFSET(0x1AF94F30)
#define SYSTEM_NET_IPADDRESS_INTERNALPARSE_OFFSET UNITYSDK_OFFSET(0x1AF943B0)
#define SYSTEM_NET_IPADDRESS_ISLOOPBACK_OFFSET UNITYSDK_OFFSET(0x1AF95180)
#define SYSTEM_NET_IPADDRESS_MAPTOIPV6_OFFSET UNITYSDK_OFFSET(0x1AF95590)
#define SYSTEM_NET_IPADDRESS_NETWORKTOHOSTORDER_1_OFFSET UNITYSDK_OFFSET(0x1AF950E0)
#define SYSTEM_NET_IPADDRESS_NETWORKTOHOSTORDER_OFFSET UNITYSDK_OFFSET(0x1AF95080)
#define SYSTEM_NET_IPADDRESS_PARSE_OFFSET UNITYSDK_OFFSET(0x1AF68EA0)
#define SYSTEM_NET_IPADDRESS_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1AF69490)
#define SYSTEM_NET_IPADDRESS_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x1AF69290)
#define SYSTEM_NET_IPADDRESS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AF95690)
#define SYSTEM_NET_IPADDRESS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AF94130)
#define SYSTEM_NET_IPADDRESS__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1AF94300)
#define SYSTEM_NET_IPADDRESS__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1AF94360)
#define SYSTEM_NET_IPADDRESS__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF940A0)

namespace System::Net
{
	inline static constexpr unsigned int IPAddress_TypeDefinitionIndex = 2732;

	class IPAddress : public ::System::Object
	{
	public:
		static ::System::Net::IPAddress** StaticGet_IPv6Loopback()
		{
			return (::System::Net::IPAddress**)Il2CppClass::FromTypeDefinitionIndex(IPAddress_TypeDefinitionIndex)->GetStaticField(0x9220);
		}
		static ::System::Net::IPAddress** StaticGet_Loopback()
		{
			return (::System::Net::IPAddress**)Il2CppClass::FromTypeDefinitionIndex(IPAddress_TypeDefinitionIndex)->GetStaticField(0x9228);
		}
		static ::System::Net::IPAddress** StaticGet_None()
		{
			return (::System::Net::IPAddress**)Il2CppClass::FromTypeDefinitionIndex(IPAddress_TypeDefinitionIndex)->GetStaticField(0x9230);
		}
		static ::System::Net::IPAddress** StaticGet_IPv6None()
		{
			return (::System::Net::IPAddress**)Il2CppClass::FromTypeDefinitionIndex(IPAddress_TypeDefinitionIndex)->GetStaticField(0x9238);
		}
		static ::System::Net::IPAddress** StaticGet_Any()
		{
			return (::System::Net::IPAddress**)Il2CppClass::FromTypeDefinitionIndex(IPAddress_TypeDefinitionIndex)->GetStaticField(0x9240);
		}
		static ::System::Net::IPAddress** StaticGet_Broadcast()
		{
			return (::System::Net::IPAddress**)Il2CppClass::FromTypeDefinitionIndex(IPAddress_TypeDefinitionIndex)->GetStaticField(0x9248);
		}
		static ::System::Net::IPAddress** StaticGet_IPv6Any()
		{
			return (::System::Net::IPAddress**)Il2CppClass::FromTypeDefinitionIndex(IPAddress_TypeDefinitionIndex)->GetStaticField(0x9250);
		}
		// static const ::System::Int64 LoopbackMask = 0xFF; // 0x0
		// static const ::System::Int32 IPv4AddressBytes = 0x4; // 0x0
		// static const ::System::Int32 IPv6AddressBytes = 0x10; // 0x0
		// static const ::System::Int32 NumberOfLabels = 0x8; // 0x0
		::System::String* m_ToString; // 0x10
		::Il2CppArray<::System::UInt16>* m_Numbers; // 0x18
		::System::Int64 m_ScopeId; // 0x20
		::System::Net::Sockets::AddressFamily m_Family; // 0x28
		::System::Int32 m_HashCode; // 0x2C
		::System::Int64 m_Address; // 0x30

		::System::Void _ctor(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESS__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::Il2CppArray<::System::Byte>* a1, ::System::Int64 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESS__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_2(::Il2CppArray<::System::UInt16>* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt16>*, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESS__CTOR_2_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_3(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESS__CTOR_3_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESS__CCTOR_OFFSET))();
		}

		static ::System::Boolean TryParse(::System::String* a1, ::System::Net::IPAddress*& a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Net::IPAddress*&))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESS_TRYPARSE_OFFSET))(a1, a2);
		}

		static ::System::Net::IPAddress* Parse(::System::String* a1)
		{
			return ((::System::Net::IPAddress*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESS_PARSE_OFFSET))(a1);
		}

		static ::System::Net::IPAddress* InternalParse(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Net::IPAddress*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESS_INTERNALPARSE_OFFSET))(a1, a2);
		}

		::Il2CppArray<::System::Byte>* GetAddressBytes()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESS_GETADDRESSBYTES_OFFSET))(this);
		}

		::System::Net::Sockets::AddressFamily get_AddressFamily()
		{
			return ((::System::Net::Sockets::AddressFamily(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESS_GET_ADDRESSFAMILY_OFFSET))(this);
		}

		::System::Int64 get_ScopeId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESS_GET_SCOPEID_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESS_TOSTRING_OFFSET))(this);
		}

		static ::System::Int64 HostToNetworkOrder(::System::Int64 a1)
		{
			return ((::System::Int64(*)(::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESS_HOSTTONETWORKORDER_OFFSET))(a1);
		}

		static ::System::Int32 HostToNetworkOrder_1(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESS_HOSTTONETWORKORDER_1_OFFSET))(a1);
		}

		static ::System::Int16 HostToNetworkOrder_2(::System::Int16 a1)
		{
			return ((::System::Int16(*)(::System::Int16))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESS_HOSTTONETWORKORDER_2_OFFSET))(a1);
		}

		static ::System::Int64 NetworkToHostOrder(::System::Int64 a1)
		{
			return ((::System::Int64(*)(::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESS_NETWORKTOHOSTORDER_OFFSET))(a1);
		}

		static ::System::Int32 NetworkToHostOrder_1(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESS_NETWORKTOHOSTORDER_1_OFFSET))(a1);
		}

		static ::System::Boolean IsLoopback(::System::Net::IPAddress* a1)
		{
			return ((::System::Boolean(*)(::System::Net::IPAddress*))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESS_ISLOOPBACK_OFFSET))(a1);
		}

		::System::Boolean get_IsBroadcast()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESS_GET_ISBROADCAST_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESS_EQUALS_OFFSET))(this, a1, a2);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESS_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESS_GETHASHCODE_OFFSET))(this);
		}

		::System::Net::IPAddress* MapToIPv6()
		{
			return ((::System::Net::IPAddress*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESS_MAPTOIPV6_OFFSET))(this);
		}
	};
}
