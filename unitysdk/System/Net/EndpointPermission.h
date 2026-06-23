#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/TransportType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Net { class IPAddress; }

#define SYSTEM_NET_ENDPOINTPERMISSION_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CAF7F30)
#define SYSTEM_NET_ENDPOINTPERMISSION_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CAF8010)
#define SYSTEM_NET_ENDPOINTPERMISSION_GET_HOSTNAME_OFFSET UNITYSDK_OFFSET(0x1CAF7F00)
#define SYSTEM_NET_ENDPOINTPERMISSION_GET_PORT_OFFSET UNITYSDK_OFFSET(0x1CAF7F10)
#define SYSTEM_NET_ENDPOINTPERMISSION_GET_TRANSPORT_OFFSET UNITYSDK_OFFSET(0x1CAF7F20)
#define SYSTEM_NET_ENDPOINTPERMISSION_INTERSECTHOSTNAME_OFFSET UNITYSDK_OFFSET(0x1CAF8DA0)
#define SYSTEM_NET_ENDPOINTPERMISSION_INTERSECT_1_OFFSET UNITYSDK_OFFSET(0x1CAF8FE0)
#define SYSTEM_NET_ENDPOINTPERMISSION_INTERSECT_OFFSET UNITYSDK_OFFSET(0x1CAF8CA0)
#define SYSTEM_NET_ENDPOINTPERMISSION_ISSUBSETOF_1_OFFSET UNITYSDK_OFFSET(0x1CAF87C0)
#define SYSTEM_NET_ENDPOINTPERMISSION_ISSUBSETOF_OFFSET UNITYSDK_OFFSET(0x1CAF8390)
#define SYSTEM_NET_ENDPOINTPERMISSION_RESOLVE_OFFSET UNITYSDK_OFFSET(0x1CAF8500)
#define SYSTEM_NET_ENDPOINTPERMISSION_TONUMBER_OFFSET UNITYSDK_OFFSET(0x1CAF8A30)
#define SYSTEM_NET_ENDPOINTPERMISSION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CAF80A0)
#define SYSTEM_NET_ENDPOINTPERMISSION_UNDORESOLVE_OFFSET UNITYSDK_OFFSET(0x1CAF9310)
#define SYSTEM_NET_ENDPOINTPERMISSION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CAF9320)
#define SYSTEM_NET_ENDPOINTPERMISSION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CAF9390)
#define SYSTEM_NET_ENDPOINTPERMISSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1CAF7E70)

namespace System::Net
{
	inline static constexpr unsigned int EndpointPermission_TypeDefinitionIndex = 3509;

	class EndpointPermission : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Char>** StaticGet_dot_char()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(EndpointPermission_TypeDefinitionIndex)->GetStaticField(0x27A0);
		}
		::Il2CppArray<::System::Net::IPAddress*>* addresses; // 0x10
		::System::String* hostname; // 0x18
		::System::Int32 port; // 0x20
		::System::Net::TransportType transport; // 0x24
		::System::Boolean hasWildcard; // 0x28
		::System::Boolean resolved; // 0x29

		::System::Void _ctor(::System::String* hostname, ::System::Int32 port, ::System::Net::TransportType transport)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Net::TransportType))((::PBYTE)hIl2Cpp + SYSTEM_NET_ENDPOINTPERMISSION__CTOR_OFFSET))(this, hostname, port, transport);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_ENDPOINTPERMISSION__CCTOR_OFFSET))();
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_ENDPOINTPERMISSION__CTOR_1_OFFSET))(this);
		}

		::System::String* get_Hostname()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_ENDPOINTPERMISSION_GET_HOSTNAME_OFFSET))(this);
		}

		::System::Int32 get_Port()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_ENDPOINTPERMISSION_GET_PORT_OFFSET))(this);
		}

		::System::Net::TransportType get_Transport()
		{
			return ((::System::Net::TransportType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_ENDPOINTPERMISSION_GET_TRANSPORT_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_ENDPOINTPERMISSION_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_ENDPOINTPERMISSION_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_ENDPOINTPERMISSION_TOSTRING_OFFSET))(this);
		}

		::System::Boolean IsSubsetOf(::System::Net::EndpointPermission* perm)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Net::EndpointPermission*))((::PBYTE)hIl2Cpp + SYSTEM_NET_ENDPOINTPERMISSION_ISSUBSETOF_OFFSET))(this, perm);
		}

		::System::Boolean IsSubsetOf_1(::System::String* addr1, ::System::String* addr2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_ENDPOINTPERMISSION_ISSUBSETOF_1_OFFSET))(this, addr1, addr2);
		}

		::System::Net::EndpointPermission* Intersect(::System::Net::EndpointPermission* perm)
		{
			return ((::System::Net::EndpointPermission*(*)(::PVOID, ::System::Net::EndpointPermission*))((::PBYTE)hIl2Cpp + SYSTEM_NET_ENDPOINTPERMISSION_INTERSECT_OFFSET))(this, perm);
		}

		::System::String* IntersectHostname(::System::Net::EndpointPermission* perm)
		{
			return ((::System::String*(*)(::PVOID, ::System::Net::EndpointPermission*))((::PBYTE)hIl2Cpp + SYSTEM_NET_ENDPOINTPERMISSION_INTERSECTHOSTNAME_OFFSET))(this, perm);
		}

		::System::String* Intersect_1(::System::String* addr1, ::System::String* addr2)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_ENDPOINTPERMISSION_INTERSECT_1_OFFSET))(this, addr1, addr2);
		}

		::System::Int32 ToNumber(::System::String* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_ENDPOINTPERMISSION_TONUMBER_OFFSET))(this, value);
		}

		::System::Void Resolve()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_ENDPOINTPERMISSION_RESOLVE_OFFSET))(this);
		}

		::System::Void UndoResolve()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_ENDPOINTPERMISSION_UNDORESOLVE_OFFSET))(this);
		}
	};
}
