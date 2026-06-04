#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Runtime::Remoting::Contexts { class Context; }
namespace System::Runtime::Remoting::Messaging { class IMessage; }
namespace System::Runtime::Remoting::Messaging { class IMessageCtrl; }
namespace System::Runtime::Remoting::Messaging { class IMessageSink; }

#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CLIENTCONTEXTREPLYSINK_ASYNCPROCESSMESSAGE_OFFSET UNITYSDK_OFFSET(0x18789100)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CLIENTCONTEXTREPLYSINK_SYNCPROCESSMESSAGE_OFFSET UNITYSDK_OFFSET(0x18788F90)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CLIENTCONTEXTREPLYSINK__CTOR_OFFSET UNITYSDK_OFFSET(0x18788F80)

namespace System::Runtime::Remoting::Messaging
{
	inline static constexpr unsigned int ClientContextReplySink_TypeDefinitionIndex = 1297;

	class ClientContextReplySink : public ::System::Object
	{
	public:
		::System::Runtime::Remoting::Messaging::IMessageSink* _replySink; // 0x10
		::System::Runtime::Remoting::Contexts::Context* _context; // 0x18

		::System::Void _ctor(::System::Runtime::Remoting::Contexts::Context* a1, ::System::Runtime::Remoting::Messaging::IMessageSink* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Remoting::Contexts::Context*, ::System::Runtime::Remoting::Messaging::IMessageSink*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CLIENTCONTEXTREPLYSINK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Runtime::Remoting::Messaging::IMessage* SyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* a1)
		{
			return ((::System::Runtime::Remoting::Messaging::IMessage*(*)(::PVOID, ::System::Runtime::Remoting::Messaging::IMessage*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CLIENTCONTEXTREPLYSINK_SYNCPROCESSMESSAGE_OFFSET))(this, a1);
		}

		::System::Runtime::Remoting::Messaging::IMessageCtrl* AsyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* a1, ::System::Runtime::Remoting::Messaging::IMessageSink* a2)
		{
			return ((::System::Runtime::Remoting::Messaging::IMessageCtrl*(*)(::PVOID, ::System::Runtime::Remoting::Messaging::IMessage*, ::System::Runtime::Remoting::Messaging::IMessageSink*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CLIENTCONTEXTREPLYSINK_ASYNCPROCESSMESSAGE_OFFSET))(this, a1, a2);
		}
	};
}
