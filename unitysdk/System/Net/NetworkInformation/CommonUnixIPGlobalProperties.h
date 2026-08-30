#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/NetworkInformation/IPGlobalProperties.h"

namespace System { class String; }

#define SYSTEM_NET_NETWORKINFORMATION_COMMONUNIXIPGLOBALPROPERTIES_GETDOMAINNAME_OFFSET UNITYSDK_OFFSET(0x1E9A3E00)
#define SYSTEM_NET_NETWORKINFORMATION_COMMONUNIXIPGLOBALPROPERTIES_GET_DOMAINNAME_OFFSET UNITYSDK_OFFSET(0x1E9A3E90)
#define SYSTEM_NET_NETWORKINFORMATION_COMMONUNIXIPGLOBALPROPERTIES__CTOR_OFFSET UNITYSDK_OFFSET(0x1E9A4220)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int CommonUnixIPGlobalProperties_TypeDefinitionIndex = 2938;

	class CommonUnixIPGlobalProperties : public ::System::Net::NetworkInformation::IPGlobalProperties
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_COMMONUNIXIPGLOBALPROPERTIES__CTOR_OFFSET))(this);
		}

		static ::System::Int32 getdomainname(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_COMMONUNIXIPGLOBALPROPERTIES_GETDOMAINNAME_OFFSET))(a1, a2);
		}

		::System::String* get_DomainName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_COMMONUNIXIPGLOBALPROPERTIES_GET_DOMAINNAME_OFFSET))(this);
		}
	};
}
