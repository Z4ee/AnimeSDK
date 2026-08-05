#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/NetworkInformation/UnixIPGlobalProperties.h"

namespace System { class String; }

#define SYSTEM_NET_NETWORKINFORMATION_UNIXNOLIBCIPGLOBALPROPERTIES_GET_DOMAINNAME_OFFSET UNITYSDK_OFFSET(0x1D6260A0)
#define SYSTEM_NET_NETWORKINFORMATION_UNIXNOLIBCIPGLOBALPROPERTIES__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6260B0)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int UnixNoLibCIPGlobalProperties_TypeDefinitionIndex = 3756;

	class UnixNoLibCIPGlobalProperties : public ::System::Net::NetworkInformation::UnixIPGlobalProperties
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_UNIXNOLIBCIPGLOBALPROPERTIES__CTOR_OFFSET))(this);
		}

		::System::String* get_DomainName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_UNIXNOLIBCIPGLOBALPROPERTIES_GET_DOMAINNAME_OFFSET))(this);
		}
	};
}
