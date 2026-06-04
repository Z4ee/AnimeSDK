#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class IOSelectorJob; }
namespace System::Net::Sockets { class Socket; }
namespace System::Threading::Tasks { class Task; }

#define SYSTEM_NET_SOCKETS_SOCKET___C__DISPLAYCLASS298_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFB3BE0)
#define SYSTEM_NET_SOCKETS_SOCKET___C__DISPLAYCLASS298_0__QUEUEIOSELECTORJOB_B__0_OFFSET UNITYSDK_OFFSET(0x1AFB6770)

namespace System::Net::Sockets
{
	inline static constexpr unsigned int Socket___c__DisplayClass298_0_TypeDefinitionIndex = 2895;

	class Socket___c__DisplayClass298_0 : public ::System::Object
	{
	public:
		::System::IOSelectorJob* job; // 0x10
		::System::Net::Sockets::Socket* __4__this; // 0x18
		::System::IntPtr handle; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET___C__DISPLAYCLASS298_0__CTOR_OFFSET))(this);
		}

		::System::Void _QueueIOSelectorJob_b__0(::System::Threading::Tasks::Task* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::Tasks::Task*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET___C__DISPLAYCLASS298_0__QUEUEIOSELECTORJOB_B__0_OFFSET))(this, a1);
		}
	};
}
