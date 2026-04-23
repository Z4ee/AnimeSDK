#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/NetworkInformation/OperationalStatus.h"
#include "unitysdk/System/Net/NetworkInformation/UnixNetworkInterface.h"

namespace System { class String; }

#define SYSTEM_NET_NETWORKINFORMATION_LINUXNETWORKINTERFACE_GET_IFACEPATH_OFFSET UNITYSDK_OFFSET(0x1A135810)
#define SYSTEM_NET_NETWORKINFORMATION_LINUXNETWORKINTERFACE_GET_OPERATIONALSTATUS_OFFSET UNITYSDK_OFFSET(0x1A135950)
#define SYSTEM_NET_NETWORKINFORMATION_LINUXNETWORKINTERFACE_READLINE_OFFSET UNITYSDK_OFFSET(0x1A135CD0)
#define SYSTEM_NET_NETWORKINFORMATION_LINUXNETWORKINTERFACE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A135820)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int LinuxNetworkInterface_TypeDefinitionIndex = 2949;

	class LinuxNetworkInterface : public ::System::Net::NetworkInformation::UnixNetworkInterface
	{
	public:
		::System::String* iface_path; // 0x30
		::System::String* iface_operstate_path; // 0x38
		::System::String* iface_flags_path; // 0x40

		::System::Void _ctor(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_LINUXNETWORKINTERFACE__CTOR_OFFSET))(this, name);
		}

		::System::String* get_IfacePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_LINUXNETWORKINTERFACE_GET_IFACEPATH_OFFSET))(this);
		}

		::System::Net::NetworkInformation::OperationalStatus get_OperationalStatus()
		{
			return ((::System::Net::NetworkInformation::OperationalStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_LINUXNETWORKINTERFACE_GET_OPERATIONALSTATUS_OFFSET))(this);
		}

		static ::System::String* ReadLine(::System::String* path)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_LINUXNETWORKINTERFACE_READLINE_OFFSET))(path);
		}
	};
}
