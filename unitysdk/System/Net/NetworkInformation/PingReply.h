#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/NetworkInformation/IPStatus.h"
#include "unitysdk/System/Net/NetworkInformation/IcmpV4Code.h"
#include "unitysdk/System/Net/NetworkInformation/IcmpV4Type.h"
#include "unitysdk/System/Object.h"

namespace System::Net { class IPAddress; }
namespace System::Net::NetworkInformation { class PingOptions; }

#define SYSTEM_NET_NETWORKINFORMATION_PINGREPLY_GETIPSTATUS_OFFSET UNITYSDK_OFFSET(0x1C2EE020)
#define SYSTEM_NET_NETWORKINFORMATION_PINGREPLY_GET_ADDRESS_OFFSET UNITYSDK_OFFSET(0x1C2EE0D0)
#define SYSTEM_NET_NETWORKINFORMATION_PINGREPLY_GET_BUFFER_OFFSET UNITYSDK_OFFSET(0x1C2EE100)
#define SYSTEM_NET_NETWORKINFORMATION_PINGREPLY_GET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x1C2EE0F0)
#define SYSTEM_NET_NETWORKINFORMATION_PINGREPLY_GET_ROUNDTRIPTIME_OFFSET UNITYSDK_OFFSET(0x1C2EE0E0)
#define SYSTEM_NET_NETWORKINFORMATION_PINGREPLY_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x1C2EE0C0)
#define SYSTEM_NET_NETWORKINFORMATION_PINGREPLY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C2EDE60)
#define SYSTEM_NET_NETWORKINFORMATION_PINGREPLY__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1C2EDEB0)
#define SYSTEM_NET_NETWORKINFORMATION_PINGREPLY__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1C2EE0A0)
#define SYSTEM_NET_NETWORKINFORMATION_PINGREPLY__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2EDE50)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int PingReply_TypeDefinitionIndex = 3736;

	class PingReply : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Byte>* buffer; // 0x10
		::System::Net::NetworkInformation::PingOptions* options; // 0x18
		::System::Net::IPAddress* address; // 0x20
		::System::Int64 rtt; // 0x28
		::System::Net::NetworkInformation::IPStatus ipStatus; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_PINGREPLY__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Net::NetworkInformation::IPStatus ipStatus)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::NetworkInformation::IPStatus))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_PINGREPLY__CTOR_1_OFFSET))(this, ipStatus);
		}

		::System::Void _ctor_2(::Il2CppArray<::System::Byte>* data, ::System::Int32 dataLength, ::System::Net::IPAddress* address, ::System::Int32 time)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Net::IPAddress*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_PINGREPLY__CTOR_2_OFFSET))(this, data, dataLength, address, time);
		}

		::System::Void _ctor_3(::System::Net::IPAddress* address, ::Il2CppArray<::System::Byte>* buffer, ::System::Net::NetworkInformation::PingOptions* options, ::System::Int64 roundtripTime, ::System::Net::NetworkInformation::IPStatus status)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::IPAddress*, ::Il2CppArray<::System::Byte>*, ::System::Net::NetworkInformation::PingOptions*, ::System::Int64, ::System::Net::NetworkInformation::IPStatus))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_PINGREPLY__CTOR_3_OFFSET))(this, address, buffer, options, roundtripTime, status);
		}

		::System::Net::NetworkInformation::IPStatus GetIPStatus(::System::Net::NetworkInformation::IcmpV4Type type, ::System::Net::NetworkInformation::IcmpV4Code code)
		{
			return ((::System::Net::NetworkInformation::IPStatus(*)(::PVOID, ::System::Net::NetworkInformation::IcmpV4Type, ::System::Net::NetworkInformation::IcmpV4Code))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_PINGREPLY_GETIPSTATUS_OFFSET))(this, type, code);
		}

		::System::Net::NetworkInformation::IPStatus get_Status()
		{
			return ((::System::Net::NetworkInformation::IPStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_PINGREPLY_GET_STATUS_OFFSET))(this);
		}

		::System::Net::IPAddress* get_Address()
		{
			return ((::System::Net::IPAddress*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_PINGREPLY_GET_ADDRESS_OFFSET))(this);
		}

		::System::Int64 get_RoundtripTime()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_PINGREPLY_GET_ROUNDTRIPTIME_OFFSET))(this);
		}

		::System::Net::NetworkInformation::PingOptions* get_Options()
		{
			return ((::System::Net::NetworkInformation::PingOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_PINGREPLY_GET_OPTIONS_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* get_Buffer()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_PINGREPLY_GET_BUFFER_OFFSET))(this);
		}
	};
}
