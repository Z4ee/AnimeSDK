#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Runtime::Remoting::Messaging { class IMessage; }
namespace System::Runtime::Remoting::Messaging { class IMessageCtrl; }
namespace System::Runtime::Remoting::Messaging { class IMessageSink; }

#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASESINK_ASYNCPROCESSMESSAGE_OFFSET UNITYSDK_OFFSET(0x163A6290)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASESINK_RENEWLEASE_OFFSET UNITYSDK_OFFSET(0x163A6380)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASESINK_SYNCPROCESSMESSAGE_OFFSET UNITYSDK_OFFSET(0x163A61B0)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASESINK__CTOR_OFFSET UNITYSDK_OFFSET(0x163A2DC0)

namespace System::Runtime::Remoting::Lifetime
{
	inline static constexpr unsigned int LeaseSink_TypeDefinitionIndex = 1233;

	class LeaseSink : public ::System::Object
	{
	public:
		::System::Runtime::Remoting::Messaging::IMessageSink* _nextSink; // 0x10

		::System::Void _ctor(::System::Runtime::Remoting::Messaging::IMessageSink* nextSink)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Remoting::Messaging::IMessageSink*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASESINK__CTOR_OFFSET))(this, nextSink);
		}

		::System::Runtime::Remoting::Messaging::IMessage* SyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* msg)
		{
			return ((::System::Runtime::Remoting::Messaging::IMessage*(*)(::PVOID, ::System::Runtime::Remoting::Messaging::IMessage*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASESINK_SYNCPROCESSMESSAGE_OFFSET))(this, msg);
		}

		::System::Runtime::Remoting::Messaging::IMessageCtrl* AsyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* msg, ::System::Runtime::Remoting::Messaging::IMessageSink* replySink)
		{
			return ((::System::Runtime::Remoting::Messaging::IMessageCtrl*(*)(::PVOID, ::System::Runtime::Remoting::Messaging::IMessage*, ::System::Runtime::Remoting::Messaging::IMessageSink*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASESINK_ASYNCPROCESSMESSAGE_OFFSET))(this, msg, replySink);
		}

		::System::Void RenewLease(::System::Runtime::Remoting::Messaging::IMessage* msg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Remoting::Messaging::IMessage*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASESINK_RENEWLEASE_OFFSET))(this, msg);
		}
	};
}
