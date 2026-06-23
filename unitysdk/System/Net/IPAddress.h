#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Sockets/AddressFamily.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_NET_IPADDRESS_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C896500)
#define SYSTEM_NET_IPADDRESS_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C8967A0)
#define SYSTEM_NET_IPADDRESS_GETADDRESSBYTES_OFFSET UNITYSDK_OFFSET(0x1C8957C0)
#define SYSTEM_NET_IPADDRESS_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C896990)
#define SYSTEM_NET_IPADDRESS_GET_ADDRESSFAMILY_OFFSET UNITYSDK_OFFSET(0x1C895B80)
#define SYSTEM_NET_IPADDRESS_GET_ADDRESS_OFFSET UNITYSDK_OFFSET(0x1C8956D0)
#define SYSTEM_NET_IPADDRESS_GET_ISBROADCAST_OFFSET UNITYSDK_OFFSET(0x1C896510)
#define SYSTEM_NET_IPADDRESS_GET_ISIPV4MAPPEDTOIPV6_OFFSET UNITYSDK_OFFSET(0x1C896700)
#define SYSTEM_NET_IPADDRESS_GET_ISIPV6LINKLOCAL_OFFSET UNITYSDK_OFFSET(0x1C8965F0)
#define SYSTEM_NET_IPADDRESS_GET_ISIPV6MULTICAST_OFFSET UNITYSDK_OFFSET(0x1C8965A0)
#define SYSTEM_NET_IPADDRESS_GET_ISIPV6SITELOCAL_OFFSET UNITYSDK_OFFSET(0x1C896640)
#define SYSTEM_NET_IPADDRESS_GET_ISIPV6TEREDO_OFFSET UNITYSDK_OFFSET(0x1C896690)
#define SYSTEM_NET_IPADDRESS_GET_SCOPEID_OFFSET UNITYSDK_OFFSET(0x1C895B90)
#define SYSTEM_NET_IPADDRESS_HOSTTONETWORKORDER_1_OFFSET UNITYSDK_OFFSET(0x1C896230)
#define SYSTEM_NET_IPADDRESS_HOSTTONETWORKORDER_2_OFFSET UNITYSDK_OFFSET(0x1C896290)
#define SYSTEM_NET_IPADDRESS_HOSTTONETWORKORDER_OFFSET UNITYSDK_OFFSET(0x1C896150)
#define SYSTEM_NET_IPADDRESS_INTERNALPARSE_OFFSET UNITYSDK_OFFSET(0x1C895280)
#define SYSTEM_NET_IPADDRESS_ISLOOPBACK_OFFSET UNITYSDK_OFFSET(0x1C896400)
#define SYSTEM_NET_IPADDRESS_MAPTOIPV4_OFFSET UNITYSDK_OFFSET(0x1C896CC0)
#define SYSTEM_NET_IPADDRESS_MAPTOIPV6_OFFSET UNITYSDK_OFFSET(0x1C896B80)
#define SYSTEM_NET_IPADDRESS_NETWORKTOHOSTORDER_1_OFFSET UNITYSDK_OFFSET(0x1C896300)
#define SYSTEM_NET_IPADDRESS_NETWORKTOHOSTORDER_2_OFFSET UNITYSDK_OFFSET(0x1C8963A0)
#define SYSTEM_NET_IPADDRESS_NETWORKTOHOSTORDER_OFFSET UNITYSDK_OFFSET(0x1C8962A0)
#define SYSTEM_NET_IPADDRESS_PARSE_OFFSET UNITYSDK_OFFSET(0x1C895670)
#define SYSTEM_NET_IPADDRESS_SET_ADDRESS_OFFSET UNITYSDK_OFFSET(0x1C895740)
#define SYSTEM_NET_IPADDRESS_SET_SCOPEID_OFFSET UNITYSDK_OFFSET(0x1C895C00)
#define SYSTEM_NET_IPADDRESS_SNAPSHOT_OFFSET UNITYSDK_OFFSET(0x1C896A20)
#define SYSTEM_NET_IPADDRESS_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C895CB0)
#define SYSTEM_NET_IPADDRESS_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x1C895210)
#define SYSTEM_NET_IPADDRESS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C896DC0)
#define SYSTEM_NET_IPADDRESS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C894DA0)
#define SYSTEM_NET_IPADDRESS__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1C894FA0)
#define SYSTEM_NET_IPADDRESS__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1C895000)
#define SYSTEM_NET_IPADDRESS__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1C8951C0)
#define SYSTEM_NET_IPADDRESS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C894D10)

namespace System::Net
{
	inline static constexpr unsigned int IPAddress_TypeDefinitionIndex = 3286;

	class IPAddress : public ::System::Object
	{
	public:
		static ::System::Net::IPAddress** StaticGet_IPv6Any()
		{
			return (::System::Net::IPAddress**)Il2CppClass::FromTypeDefinitionIndex(IPAddress_TypeDefinitionIndex)->GetStaticField(0x2810);
		}
		static ::System::Net::IPAddress** StaticGet_IPv6Loopback()
		{
			return (::System::Net::IPAddress**)Il2CppClass::FromTypeDefinitionIndex(IPAddress_TypeDefinitionIndex)->GetStaticField(0x2818);
		}
		static ::System::Net::IPAddress** StaticGet_None()
		{
			return (::System::Net::IPAddress**)Il2CppClass::FromTypeDefinitionIndex(IPAddress_TypeDefinitionIndex)->GetStaticField(0x2820);
		}
		static ::System::Net::IPAddress** StaticGet_Loopback()
		{
			return (::System::Net::IPAddress**)Il2CppClass::FromTypeDefinitionIndex(IPAddress_TypeDefinitionIndex)->GetStaticField(0x2828);
		}
		static ::System::Net::IPAddress** StaticGet_Broadcast()
		{
			return (::System::Net::IPAddress**)Il2CppClass::FromTypeDefinitionIndex(IPAddress_TypeDefinitionIndex)->GetStaticField(0x2830);
		}
		static ::System::Net::IPAddress** StaticGet_IPv6None()
		{
			return (::System::Net::IPAddress**)Il2CppClass::FromTypeDefinitionIndex(IPAddress_TypeDefinitionIndex)->GetStaticField(0x2838);
		}
		static ::System::Net::IPAddress** StaticGet_Any()
		{
			return (::System::Net::IPAddress**)Il2CppClass::FromTypeDefinitionIndex(IPAddress_TypeDefinitionIndex)->GetStaticField(0x2840);
		}
		// static const ::System::Int64 LoopbackMask = 0xFF; // 0x0
		// static const ::System::Int32 IPv4AddressBytes = 0x4; // 0x0
		// static const ::System::Int32 IPv6AddressBytes = 0x10; // 0x0
		// static const ::System::Int32 NumberOfLabels = 0x8; // 0x0
		::Il2CppArray<::System::UInt16>* m_Numbers; // 0x10
		::System::String* m_ToString; // 0x18
		::System::Int64 m_Address; // 0x20
		::System::Net::Sockets::AddressFamily m_Family; // 0x28
		::System::Int32 m_HashCode; // 0x2C
		::System::Int64 m_ScopeId; // 0x30

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

		::System::Void _ctor_3(::Il2CppArray<::System::Byte>* address)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESS__CTOR_3_OFFSET))(this, address);
		}

		::System::Void _ctor_4(::System::Int32 newAddress)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESS__CTOR_4_OFFSET))(this, newAddress);
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

		::System::Int64 get_Address()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESS_GET_ADDRESS_OFFSET))(this);
		}

		::System::Void set_Address(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESS_SET_ADDRESS_OFFSET))(this, value);
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

		::System::Void set_ScopeId(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESS_SET_SCOPEID_OFFSET))(this, value);
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

		static ::System::Int16 NetworkToHostOrder_2(::System::Int16 network)
		{
			return ((::System::Int16(*)(::System::Int16))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESS_NETWORKTOHOSTORDER_2_OFFSET))(network);
		}

		static ::System::Boolean IsLoopback(::System::Net::IPAddress* address)
		{
			return ((::System::Boolean(*)(::System::Net::IPAddress*))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESS_ISLOOPBACK_OFFSET))(address);
		}

		::System::Boolean get_IsBroadcast()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESS_GET_ISBROADCAST_OFFSET))(this);
		}

		::System::Boolean get_IsIPv6Multicast()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESS_GET_ISIPV6MULTICAST_OFFSET))(this);
		}

		::System::Boolean get_IsIPv6LinkLocal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESS_GET_ISIPV6LINKLOCAL_OFFSET))(this);
		}

		::System::Boolean get_IsIPv6SiteLocal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESS_GET_ISIPV6SITELOCAL_OFFSET))(this);
		}

		::System::Boolean get_IsIPv6Teredo()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESS_GET_ISIPV6TEREDO_OFFSET))(this);
		}

		::System::Boolean get_IsIPv4MappedToIPv6()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESS_GET_ISIPV4MAPPEDTOIPV6_OFFSET))(this);
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

		::System::Net::IPAddress* Snapshot()
		{
			return ((::System::Net::IPAddress*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESS_SNAPSHOT_OFFSET))(this);
		}

		::System::Net::IPAddress* MapToIPv6()
		{
			return ((::System::Net::IPAddress*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESS_MAPTOIPV6_OFFSET))(this);
		}

		::System::Net::IPAddress* MapToIPv4()
		{
			return ((::System::Net::IPAddress*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESS_MAPTOIPV4_OFFSET))(this);
		}
	};
}
