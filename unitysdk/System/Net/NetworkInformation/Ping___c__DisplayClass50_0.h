#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Net { class IPAddress; }
namespace System::Net::NetworkInformation { class Ping; }
namespace System::Net::NetworkInformation { class PingOptions; }
namespace System::Net::NetworkInformation { class PingReply; }
namespace System::Threading::Tasks { template <typename T> class Task_1; }

#define SYSTEM_NET_NETWORKINFORMATION_PING___C__DISPLAYCLASS50_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2558C0)
#define SYSTEM_NET_NETWORKINFORMATION_PING___C__DISPLAYCLASS50_0__SENDPINGASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x1D2558D0)
#define SYSTEM_NET_NETWORKINFORMATION_PING___C__DISPLAYCLASS50_0__SENDPINGASYNC_B__1_OFFSET UNITYSDK_OFFSET(0x1D255910)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int Ping___c__DisplayClass50_0_TypeDefinitionIndex = 3823;

	class Ping___c__DisplayClass50_0 : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Byte>* buffer; // 0x10
		::System::Net::NetworkInformation::PingOptions* options; // 0x18
		::System::Net::NetworkInformation::Ping* __4__this; // 0x20
		::System::Net::IPAddress* address; // 0x28
		::System::Int32 timeout; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_PING___C__DISPLAYCLASS50_0__CTOR_OFFSET))(this);
		}

		::System::Net::NetworkInformation::PingReply* _SendPingAsync_b__0()
		{
			return ((::System::Net::NetworkInformation::PingReply*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_PING___C__DISPLAYCLASS50_0__SENDPINGASYNC_B__0_OFFSET))(this);
		}

		::System::Void _SendPingAsync_b__1(::System::Threading::Tasks::Task_1<::System::Net::NetworkInformation::PingReply*>* t)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::Tasks::Task_1<::System::Net::NetworkInformation::PingReply*>*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_PING___C__DISPLAYCLASS50_0__SENDPINGASYNC_B__1_OFFSET))(this, t);
		}
	};
}
