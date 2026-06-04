#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Runtime::Remoting::Messaging { class IMessage; }
namespace System::Runtime::Remoting::Messaging { class IMessageCtrl; }
namespace System::Runtime::Remoting::Messaging { class IMessageSink; }

#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASESINK_ASYNCPROCESSMESSAGE_OFFSET UNITYSDK_OFFSET(0x18783B80)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASESINK_RENEWLEASE_OFFSET UNITYSDK_OFFSET(0x187839C0)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASESINK_SYNCPROCESSMESSAGE_OFFSET UNITYSDK_OFFSET(0x187838E0)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASESINK__CTOR_OFFSET UNITYSDK_OFFSET(0x187838D0)

namespace System::Runtime::Remoting::Lifetime
{
	inline static constexpr unsigned int LeaseSink_TypeDefinitionIndex = 1234;

	class LeaseSink : public ::System::Object
	{
	public:
		::System::Runtime::Remoting::Messaging::IMessageSink* _nextSink; // 0x10

		::System::Void _ctor(::System::Runtime::Remoting::Messaging::IMessageSink* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Remoting::Messaging::IMessageSink*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASESINK__CTOR_OFFSET))(this, a1);
		}

		::System::Runtime::Remoting::Messaging::IMessage* SyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* a1)
		{
			return ((::System::Runtime::Remoting::Messaging::IMessage*(*)(::PVOID, ::System::Runtime::Remoting::Messaging::IMessage*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASESINK_SYNCPROCESSMESSAGE_OFFSET))(this, a1);
		}

		::System::Runtime::Remoting::Messaging::IMessageCtrl* AsyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* a1, ::System::Runtime::Remoting::Messaging::IMessageSink* a2)
		{
			return ((::System::Runtime::Remoting::Messaging::IMessageCtrl*(*)(::PVOID, ::System::Runtime::Remoting::Messaging::IMessage*, ::System::Runtime::Remoting::Messaging::IMessageSink*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASESINK_ASYNCPROCESSMESSAGE_OFFSET))(this, a1, a2);
		}

		::System::Void RenewLease(::System::Runtime::Remoting::Messaging::IMessage* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Remoting::Messaging::IMessage*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASESINK_RENEWLEASE_OFFSET))(this, a1);
		}
	};
}
