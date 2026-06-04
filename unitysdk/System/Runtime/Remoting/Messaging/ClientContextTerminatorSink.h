#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Runtime::Remoting::Contexts { class Context; }
namespace System::Runtime::Remoting::Messaging { class IMessage; }
namespace System::Runtime::Remoting::Messaging { class IMessageCtrl; }
namespace System::Runtime::Remoting::Messaging { class IMessageSink; }

#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CLIENTCONTEXTTERMINATORSINK_ASYNCPROCESSMESSAGE_OFFSET UNITYSDK_OFFSET(0x187893F0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CLIENTCONTEXTTERMINATORSINK_SYNCPROCESSMESSAGE_OFFSET UNITYSDK_OFFSET(0x18789160)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CLIENTCONTEXTTERMINATORSINK__CTOR_OFFSET UNITYSDK_OFFSET(0x18789150)

namespace System::Runtime::Remoting::Messaging
{
	inline static constexpr unsigned int ClientContextTerminatorSink_TypeDefinitionIndex = 1296;

	class ClientContextTerminatorSink : public ::System::Object
	{
	public:
		::System::Runtime::Remoting::Contexts::Context* _context; // 0x10

		::System::Void _ctor(::System::Runtime::Remoting::Contexts::Context* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Remoting::Contexts::Context*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CLIENTCONTEXTTERMINATORSINK__CTOR_OFFSET))(this, a1);
		}

		::System::Runtime::Remoting::Messaging::IMessage* SyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* a1)
		{
			return ((::System::Runtime::Remoting::Messaging::IMessage*(*)(::PVOID, ::System::Runtime::Remoting::Messaging::IMessage*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CLIENTCONTEXTTERMINATORSINK_SYNCPROCESSMESSAGE_OFFSET))(this, a1);
		}

		::System::Runtime::Remoting::Messaging::IMessageCtrl* AsyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* a1, ::System::Runtime::Remoting::Messaging::IMessageSink* a2)
		{
			return ((::System::Runtime::Remoting::Messaging::IMessageCtrl*(*)(::PVOID, ::System::Runtime::Remoting::Messaging::IMessage*, ::System::Runtime::Remoting::Messaging::IMessageSink*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CLIENTCONTEXTTERMINATORSINK_ASYNCPROCESSMESSAGE_OFFSET))(this, a1, a2);
		}
	};
}
