#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/NetworkInformation/OperationalStatus.h"
#include "unitysdk/System/Net/NetworkInformation/UnixNetworkInterface.h"

namespace System { class String; }

#define SYSTEM_NET_NETWORKINFORMATION_MACOSNETWORKINTERFACE_GET_OPERATIONALSTATUS_OFFSET UNITYSDK_OFFSET(0x1E9A4EC0)
#define SYSTEM_NET_NETWORKINFORMATION_MACOSNETWORKINTERFACE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E9A4E60)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int MacOsNetworkInterface_TypeDefinitionIndex = 2961;

	class MacOsNetworkInterface : public ::System::Net::NetworkInformation::UnixNetworkInterface
	{
	public:
		::System::UInt32 _ifa_flags; // 0x30

		::System::Void _ctor(::System::String* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_MACOSNETWORKINTERFACE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Net::NetworkInformation::OperationalStatus get_OperationalStatus()
		{
			return ((::System::Net::NetworkInformation::OperationalStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_MACOSNETWORKINTERFACE_GET_OPERATIONALSTATUS_OFFSET))(this);
		}
	};
}
