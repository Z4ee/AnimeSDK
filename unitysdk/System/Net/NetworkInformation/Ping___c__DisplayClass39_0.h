#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::ComponentModel { class DoWorkEventArgs; }
namespace System::ComponentModel { class RunWorkerCompletedEventArgs; }
namespace System::Net { class IPAddress; }
namespace System::Net::NetworkInformation { class Ping; }
namespace System::Net::NetworkInformation { class PingOptions; }

#define SYSTEM_NET_NETWORKINFORMATION_PING___C__DISPLAYCLASS39_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C70E430)
#define SYSTEM_NET_NETWORKINFORMATION_PING___C__DISPLAYCLASS39_0__SENDASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x1C70E440)
#define SYSTEM_NET_NETWORKINFORMATION_PING___C__DISPLAYCLASS39_0__SENDASYNC_B__1_OFFSET UNITYSDK_OFFSET(0x1C70E4F0)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int Ping___c__DisplayClass39_0_TypeDefinitionIndex = 3822;

	class Ping___c__DisplayClass39_0 : public ::System::Object
	{
	public:
		::System::Net::NetworkInformation::PingOptions* options; // 0x10
		::Il2CppArray<::System::Byte>* buffer; // 0x18
		::System::Net::NetworkInformation::Ping* __4__this; // 0x20
		::System::Net::IPAddress* address; // 0x28
		::System::Int32 timeout; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_PING___C__DISPLAYCLASS39_0__CTOR_OFFSET))(this);
		}

		::System::Void _SendAsync_b__0(::System::Object* o, ::System::ComponentModel::DoWorkEventArgs* ea)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::DoWorkEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_PING___C__DISPLAYCLASS39_0__SENDASYNC_B__0_OFFSET))(this, o, ea);
		}

		::System::Void _SendAsync_b__1(::System::Object* o, ::System::ComponentModel::RunWorkerCompletedEventArgs* ea)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::RunWorkerCompletedEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_PING___C__DISPLAYCLASS39_0__SENDASYNC_B__1_OFFSET))(this, o, ea);
		}
	};
}
