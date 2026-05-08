#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Runtime::Remoting::Messaging { class IMessage; }
namespace System::Runtime::Remoting::Messaging { class IMessageCtrl; }
namespace System::Runtime::Remoting::Messaging { class IMessageSink; }

#define SYSTEM_RUNTIME_REMOTING_MESSAGING_SERVEROBJECTTERMINATORSINK_ASYNCPROCESSMESSAGE_OFFSET UNITYSDK_OFFSET(0x1A7C53B0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_SERVEROBJECTTERMINATORSINK_SYNCPROCESSMESSAGE_OFFSET UNITYSDK_OFFSET(0x1A7C51B0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_SERVEROBJECTTERMINATORSINK__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7C51A0)

namespace System::Runtime::Remoting::Messaging
{
	inline static constexpr unsigned int ServerObjectTerminatorSink_TypeDefinitionIndex = 1369;

	class ServerObjectTerminatorSink : public ::System::Object
	{
	public:
		::System::Runtime::Remoting::Messaging::IMessageSink* _nextSink; // 0x10

		::System::Void _ctor(::System::Runtime::Remoting::Messaging::IMessageSink* nextSink)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Remoting::Messaging::IMessageSink*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_SERVEROBJECTTERMINATORSINK__CTOR_OFFSET))(this, nextSink);
		}

		::System::Runtime::Remoting::Messaging::IMessage* SyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* msg)
		{
			return ((::System::Runtime::Remoting::Messaging::IMessage*(*)(::PVOID, ::System::Runtime::Remoting::Messaging::IMessage*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_SERVEROBJECTTERMINATORSINK_SYNCPROCESSMESSAGE_OFFSET))(this, msg);
		}

		::System::Runtime::Remoting::Messaging::IMessageCtrl* AsyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* msg, ::System::Runtime::Remoting::Messaging::IMessageSink* replySink)
		{
			return ((::System::Runtime::Remoting::Messaging::IMessageCtrl*(*)(::PVOID, ::System::Runtime::Remoting::Messaging::IMessage*, ::System::Runtime::Remoting::Messaging::IMessageSink*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_SERVEROBJECTTERMINATORSINK_ASYNCPROCESSMESSAGE_OFFSET))(this, msg, replySink);
		}
	};
}
