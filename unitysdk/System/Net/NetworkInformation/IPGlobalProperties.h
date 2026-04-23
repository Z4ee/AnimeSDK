#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_NET_NETWORKINFORMATION_IPGLOBALPROPERTIES_GETIPGLOBALPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1A1353E0)
#define SYSTEM_NET_NETWORKINFORMATION_IPGLOBALPROPERTIES_GET_PLATFORMNEEDSLIBCWORKAROUND_OFFSET UNITYSDK_OFFSET(0x1A1353A0)
#define SYSTEM_NET_NETWORKINFORMATION_IPGLOBALPROPERTIES_INTERNALGETIPGLOBALPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1A1357E0)
#define SYSTEM_NET_NETWORKINFORMATION_IPGLOBALPROPERTIES__CTOR_OFFSET UNITYSDK_OFFSET(0x1A135390)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int IPGlobalProperties_TypeDefinitionIndex = 2917;

	class IPGlobalProperties : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet__PlatformNeedsLibCWorkaround_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(IPGlobalProperties_TypeDefinitionIndex)->GetStaticField(0x5CB0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_IPGLOBALPROPERTIES__CTOR_OFFSET))(this);
		}

		static ::System::Boolean get_PlatformNeedsLibCWorkaround()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_IPGLOBALPROPERTIES_GET_PLATFORMNEEDSLIBCWORKAROUND_OFFSET))();
		}

		static ::System::Net::NetworkInformation::IPGlobalProperties* GetIPGlobalProperties()
		{
			return ((::System::Net::NetworkInformation::IPGlobalProperties*(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_IPGLOBALPROPERTIES_GETIPGLOBALPROPERTIES_OFFSET))();
		}

		static ::System::Net::NetworkInformation::IPGlobalProperties* InternalGetIPGlobalProperties()
		{
			return ((::System::Net::NetworkInformation::IPGlobalProperties*(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_IPGLOBALPROPERTIES_INTERNALGETIPGLOBALPROPERTIES_OFFSET))();
		}
	};
}
