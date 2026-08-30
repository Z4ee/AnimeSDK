#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/NetworkInformation/IPGlobalProperties.h"

namespace System { class String; }

#define SYSTEM_NET_NETWORKINFORMATION_WIN32IPGLOBALPROPERTIES_GET_DOMAINNAME_OFFSET UNITYSDK_OFFSET(0x1B04CC20)
#define SYSTEM_NET_NETWORKINFORMATION_WIN32IPGLOBALPROPERTIES__CTOR_OFFSET UNITYSDK_OFFSET(0x1B048A10)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int Win32IPGlobalProperties_TypeDefinitionIndex = 2942;

	class Win32IPGlobalProperties : public ::System::Net::NetworkInformation::IPGlobalProperties
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32IPGLOBALPROPERTIES__CTOR_OFFSET))(this);
		}

		::System::String* get_DomainName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32IPGLOBALPROPERTIES_GET_DOMAINNAME_OFFSET))(this);
		}
	};
}
