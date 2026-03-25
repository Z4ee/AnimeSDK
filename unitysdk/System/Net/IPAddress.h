#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Sockets/AddressFamily.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_NET_IPADDRESS_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x186F6130)
#define SYSTEM_NET_IPADDRESS_EQUALS_OFFSET UNITYSDK_OFFSET(0x186F61B0)
#define SYSTEM_NET_IPADDRESS_GETADDRESSBYTES_OFFSET UNITYSDK_OFFSET(0x186DB060)
#define SYSTEM_NET_IPADDRESS_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x186F6370)
#define SYSTEM_NET_IPADDRESS_GET_ADDRESSFAMILY_OFFSET UNITYSDK_OFFSET(0x186F59A0)
#define SYSTEM_NET_IPADDRESS_GET_ISBROADCAST_OFFSET UNITYSDK_OFFSET(0x186F6140)
#define SYSTEM_NET_IPADDRESS_GET_SCOPEID_OFFSET UNITYSDK_OFFSET(0x186F59B0)
#define SYSTEM_NET_IPADDRESS_HOSTTONETWORKORDER_1_OFFSET UNITYSDK_OFFSET(0x186F5F40)
#define SYSTEM_NET_IPADDRESS_HOSTTONETWORKORDER_2_OFFSET UNITYSDK_OFFSET(0x186F5F70)
#define SYSTEM_NET_IPADDRESS_HOSTTONETWORKORDER_OFFSET UNITYSDK_OFFSET(0x186F5EE0)
#define SYSTEM_NET_IPADDRESS_INTERNALPARSE_OFFSET UNITYSDK_OFFSET(0x186F5610)
#define SYSTEM_NET_IPADDRESS_ISLOOPBACK_OFFSET UNITYSDK_OFFSET(0x186F6030)
#define SYSTEM_NET_IPADDRESS_MAPTOIPV6_OFFSET UNITYSDK_OFFSET(0x186F6400)
#define SYSTEM_NET_IPADDRESS_NETWORKTOHOSTORDER_1_OFFSET UNITYSDK_OFFSET(0x186F5FF0)
#define SYSTEM_NET_IPADDRESS_NETWORKTOHOSTORDER_OFFSET UNITYSDK_OFFSET(0x186F5F80)
#define SYSTEM_NET_IPADDRESS_PARSE_OFFSET UNITYSDK_OFFSET(0x186C8610)
#define SYSTEM_NET_IPADDRESS_TOSTRING_OFFSET UNITYSDK_OFFSET(0x186C8B10)
#define SYSTEM_NET_IPADDRESS_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x186C8920)
#define SYSTEM_NET_IPADDRESS__CCTOR_OFFSET UNITYSDK_OFFSET(0x186F6540)
#define SYSTEM_NET_IPADDRESS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x186F5360)
#define SYSTEM_NET_IPADDRESS__CTOR_2_OFFSET UNITYSDK_OFFSET(0x186F5560)
#define SYSTEM_NET_IPADDRESS__CTOR_3_OFFSET UNITYSDK_OFFSET(0x186F55C0)
#define SYSTEM_NET_IPADDRESS__CTOR_OFFSET UNITYSDK_OFFSET(0x186F52D0)

namespace System::Net
{
	inline static constexpr unsigned int IPAddress_TypeDefinitionIndex = 2731;

	class IPAddress : public ::System::Object
	{
	public:
		static ::System::Net::IPAddress** StaticGet_IPv6Any()
		{
			return (::System::Net::IPAddress**)Il2CppClass::FromTypeDefinitionIndex(IPAddress_TypeDefinitionIndex)->GetStaticField(0xC030);
		}
		static ::System::Net::IPAddress** StaticGet_Loopback()
		{
			return (::System::Net::IPAddress**)Il2CppClass::FromTypeDefinitionIndex(IPAddress_TypeDefinitionIndex)->GetStaticField(0xC038);
		}
		static ::System::Net::IPAddress** StaticGet_IPv6None()
		{
			return (::System::Net::IPAddress**)Il2CppClass::FromTypeDefinitionIndex(IPAddress_TypeDefinitionIndex)->GetStaticField(0xC040);
		}
		static ::System::Net::IPAddress** StaticGet_Broadcast()
		{
			return (::System::Net::IPAddress**)Il2CppClass::FromTypeDefinitionIndex(IPAddress_TypeDefinitionIndex)->GetStaticField(0xC048);
		}
		static ::System::Net::IPAddress** StaticGet_None()
		{
			return (::System::Net::IPAddress**)Il2CppClass::FromTypeDefinitionIndex(IPAddress_TypeDefinitionIndex)->GetStaticField(0xC050);
		}
		static ::System::Net::IPAddress** StaticGet_Any()
		{
			return (::System::Net::IPAddress**)Il2CppClass::FromTypeDefinitionIndex(IPAddress_TypeDefinitionIndex)->GetStaticField(0xC058);
		}
		static ::System::Net::IPAddress** StaticGet_IPv6Loopback()
		{
			return (::System::Net::IPAddress**)Il2CppClass::FromTypeDefinitionIndex(IPAddress_TypeDefinitionIndex)->GetStaticField(0xC060);
		}
		// static const ::System::Int64 LoopbackMask = 0xFF; // 0x0
		// static const ::System::Int32 IPv4AddressBytes = 0x4; // 0x0
		// static const ::System::Int32 IPv6AddressBytes = 0x10; // 0x0
		// static const ::System::Int32 NumberOfLabels = 0x8; // 0x0
		::System::String* m_ToString; // 0x10
		::Il2CppArray<::System::UInt16>* m_Numbers; // 0x18
		::System::Int64 m_Address; // 0x20
		::System::Int64 m_ScopeId; // 0x28
		::System::Net::Sockets::AddressFamily m_Family; // 0x30
		::System::Int32 m_HashCode; // 0x34

		::System::Void _ctor(::System::Int64 newAddress)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESS__CTOR_OFFSET))(this, newAddress);
		}

		::System::Void _ctor_1(::Il2CppArray<::System::Byte>* address, ::System::Int64 scopeid)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESS__CTOR_1_OFFSET))(this, address, scopeid);
		}

		::System::Void _ctor_2(::Il2CppArray<::System::UInt16>* address, ::System::UInt32 scopeid)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt16>*, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESS__CTOR_2_OFFSET))(this, address, scopeid);
		}

		::System::Void _ctor_3(::System::Int32 newAddress)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESS__CTOR_3_OFFSET))(this, newAddress);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESS__CCTOR_OFFSET))();
		}

		static ::System::Boolean TryParse(::System::String* ipString, ::System::Net::IPAddress*& address)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Net::IPAddress*&))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESS_TRYPARSE_OFFSET))(ipString, address);
		}

		static ::System::Net::IPAddress* Parse(::System::String* ipString)
		{
			return ((::System::Net::IPAddress*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESS_PARSE_OFFSET))(ipString);
		}

		static ::System::Net::IPAddress* InternalParse(::System::String* ipString, ::System::Boolean tryParse)
		{
			return ((::System::Net::IPAddress*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESS_INTERNALPARSE_OFFSET))(ipString, tryParse);
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

		static ::System::Int64 HostToNetworkOrder(::System::Int64 host)
		{
			return ((::System::Int64(*)(::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESS_HOSTTONETWORKORDER_OFFSET))(host);
		}

		static ::System::Int32 HostToNetworkOrder_1(::System::Int32 host)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESS_HOSTTONETWORKORDER_1_OFFSET))(host);
		}

		static ::System::Int16 HostToNetworkOrder_2(::System::Int16 host)
		{
			return ((::System::Int16(*)(::System::Int16))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESS_HOSTTONETWORKORDER_2_OFFSET))(host);
		}

		static ::System::Int64 NetworkToHostOrder(::System::Int64 network)
		{
			return ((::System::Int64(*)(::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESS_NETWORKTOHOSTORDER_OFFSET))(network);
		}

		static ::System::Int32 NetworkToHostOrder_1(::System::Int32 network)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESS_NETWORKTOHOSTORDER_1_OFFSET))(network);
		}

		static ::System::Boolean IsLoopback(::System::Net::IPAddress* address)
		{
			return ((::System::Boolean(*)(::System::Net::IPAddress*))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESS_ISLOOPBACK_OFFSET))(address);
		}

		::System::Boolean get_IsBroadcast()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESS_GET_ISBROADCAST_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* comparandObj, ::System::Boolean compareScopeId)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESS_EQUALS_OFFSET))(this, comparandObj, compareScopeId);
		}

		::System::Boolean Equals_1(::System::Object* comparand)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESS_EQUALS_1_OFFSET))(this, comparand);
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
