#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/NetworkInformation/IPGlobalProperties.h"
#include "unitysdk/System/Net/NetworkInformation/NetBiosNodeType.h"

namespace System { class String; }

#define SYSTEM_NET_NETWORKINFORMATION_COMMONUNIXIPGLOBALPROPERTIES_GETDOMAINNAME_OFFSET UNITYSDK_OFFSET(0x1DD21DE0)
#define SYSTEM_NET_NETWORKINFORMATION_COMMONUNIXIPGLOBALPROPERTIES_GETHOSTNAME_OFFSET UNITYSDK_OFFSET(0x1DD21D50)
#define SYSTEM_NET_NETWORKINFORMATION_COMMONUNIXIPGLOBALPROPERTIES_GET_DHCPSCOPENAME_OFFSET UNITYSDK_OFFSET(0x1DD21E70)
#define SYSTEM_NET_NETWORKINFORMATION_COMMONUNIXIPGLOBALPROPERTIES_GET_DOMAINNAME_OFFSET UNITYSDK_OFFSET(0x1DD21E80)
#define SYSTEM_NET_NETWORKINFORMATION_COMMONUNIXIPGLOBALPROPERTIES_GET_HOSTNAME_OFFSET UNITYSDK_OFFSET(0x1DD220D0)
#define SYSTEM_NET_NETWORKINFORMATION_COMMONUNIXIPGLOBALPROPERTIES_GET_ISWINSPROXY_OFFSET UNITYSDK_OFFSET(0x1DD222B0)
#define SYSTEM_NET_NETWORKINFORMATION_COMMONUNIXIPGLOBALPROPERTIES_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1DD222C0)
#define SYSTEM_NET_NETWORKINFORMATION_COMMONUNIXIPGLOBALPROPERTIES__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD222D0)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int CommonUnixIPGlobalProperties_TypeDefinitionIndex = 3754;

	class CommonUnixIPGlobalProperties : public ::System::Net::NetworkInformation::IPGlobalProperties
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_COMMONUNIXIPGLOBALPROPERTIES__CTOR_OFFSET))(this);
		}

		static ::System::Int32 gethostname(::Il2CppArray<::System::Byte>* name, ::System::Int32 len)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_COMMONUNIXIPGLOBALPROPERTIES_GETHOSTNAME_OFFSET))(name, len);
		}

		static ::System::Int32 getdomainname(::Il2CppArray<::System::Byte>* name, ::System::Int32 len)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_COMMONUNIXIPGLOBALPROPERTIES_GETDOMAINNAME_OFFSET))(name, len);
		}

		::System::String* get_DhcpScopeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_COMMONUNIXIPGLOBALPROPERTIES_GET_DHCPSCOPENAME_OFFSET))(this);
		}

		::System::String* get_DomainName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_COMMONUNIXIPGLOBALPROPERTIES_GET_DOMAINNAME_OFFSET))(this);
		}

		::System::String* get_HostName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_COMMONUNIXIPGLOBALPROPERTIES_GET_HOSTNAME_OFFSET))(this);
		}

		::System::Boolean get_IsWinsProxy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_COMMONUNIXIPGLOBALPROPERTIES_GET_ISWINSPROXY_OFFSET))(this);
		}

		::System::Net::NetworkInformation::NetBiosNodeType get_NodeType()
		{
			return ((::System::Net::NetworkInformation::NetBiosNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_COMMONUNIXIPGLOBALPROPERTIES_GET_NODETYPE_OFFSET))(this);
		}
	};
}
