#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Runtime::Remoting::Messaging { class IMessage; }
namespace System::Runtime::Remoting::Messaging { class IMessageCtrl; }
namespace System::Runtime::Remoting::Messaging { class IMessageSink; }

#define SYSTEM_RUNTIME_REMOTING_MESSAGING_SERVERCONTEXTTERMINATORSINK_ASYNCPROCESSMESSAGE_OFFSET UNITYSDK_OFFSET(0x1B8AEB40)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_SERVERCONTEXTTERMINATORSINK_SYNCPROCESSMESSAGE_OFFSET UNITYSDK_OFFSET(0x1B8AEA40)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_SERVERCONTEXTTERMINATORSINK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8AEC00)

namespace System::Runtime::Remoting::Messaging
{
	inline static constexpr unsigned int ServerContextTerminatorSink_TypeDefinitionIndex = 1367;

	class ServerContextTerminatorSink : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_SERVERCONTEXTTERMINATORSINK__CTOR_OFFSET))(this);
		}

		::System::Runtime::Remoting::Messaging::IMessage* SyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* msg)
		{
			return ((::System::Runtime::Remoting::Messaging::IMessage*(*)(::PVOID, ::System::Runtime::Remoting::Messaging::IMessage*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_SERVERCONTEXTTERMINATORSINK_SYNCPROCESSMESSAGE_OFFSET))(this, msg);
		}

		::System::Runtime::Remoting::Messaging::IMessageCtrl* AsyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* msg, ::System::Runtime::Remoting::Messaging::IMessageSink* replySink)
		{
			return ((::System::Runtime::Remoting::Messaging::IMessageCtrl*(*)(::PVOID, ::System::Runtime::Remoting::Messaging::IMessage*, ::System::Runtime::Remoting::Messaging::IMessageSink*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_SERVERCONTEXTTERMINATORSINK_ASYNCPROCESSMESSAGE_OFFSET))(this, msg, replySink);
		}
	};
}
