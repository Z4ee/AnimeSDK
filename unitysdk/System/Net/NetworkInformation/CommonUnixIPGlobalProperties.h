#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/NetworkInformation/IPGlobalProperties.h"

namespace System { class String; }

#define SYSTEM_NET_NETWORKINFORMATION_COMMONUNIXIPGLOBALPROPERTIES_GETDOMAINNAME_OFFSET UNITYSDK_OFFSET(0x1A134F60)
#define SYSTEM_NET_NETWORKINFORMATION_COMMONUNIXIPGLOBALPROPERTIES_GET_DOMAINNAME_OFFSET UNITYSDK_OFFSET(0x1A134FF0)
#define SYSTEM_NET_NETWORKINFORMATION_COMMONUNIXIPGLOBALPROPERTIES__CTOR_OFFSET UNITYSDK_OFFSET(0x1A135380)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int CommonUnixIPGlobalProperties_TypeDefinitionIndex = 2927;

	class CommonUnixIPGlobalProperties : public ::System::Net::NetworkInformation::IPGlobalProperties
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_COMMONUNIXIPGLOBALPROPERTIES__CTOR_OFFSET))(this);
		}

		static ::System::Int32 getdomainname(::Il2CppArray<::System::Byte>* name, ::System::Int32 len)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_COMMONUNIXIPGLOBALPROPERTIES_GETDOMAINNAME_OFFSET))(name, len);
		}

		::System::String* get_DomainName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_COMMONUNIXIPGLOBALPROPERTIES_GET_DOMAINNAME_OFFSET))(this);
		}
	};
}
