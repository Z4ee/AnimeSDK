#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Runtime::Remoting::Contexts { class Context; }
namespace System::Runtime::Remoting::Messaging { class IMessage; }
namespace System::Runtime::Remoting::Messaging { class IMessageCtrl; }
namespace System::Runtime::Remoting::Messaging { class IMessageSink; }

#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CROSSCONTEXTCHANNEL_CONTEXTRESTORESINK_ASYNCPROCESSMESSAGE_OFFSET UNITYSDK_OFFSET(0x1ADC3890)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CROSSCONTEXTCHANNEL_CONTEXTRESTORESINK_SYNCPROCESSMESSAGE_OFFSET UNITYSDK_OFFSET(0x1ADC3600)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CROSSCONTEXTCHANNEL_CONTEXTRESTORESINK__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADC35F0)

namespace System::Runtime::Remoting::Contexts
{
	inline static constexpr unsigned int CrossContextChannel_ContextRestoreSink_TypeDefinitionIndex = 1286;

	class CrossContextChannel_ContextRestoreSink : public ::System::Object
	{
	public:
		::System::Runtime::Remoting::Messaging::IMessage* _call; // 0x10
		::System::Runtime::Remoting::Messaging::IMessageSink* _next; // 0x18
		::System::Runtime::Remoting::Contexts::Context* _context; // 0x20

		::System::Void _ctor(::System::Runtime::Remoting::Messaging::IMessageSink* next, ::System::Runtime::Remoting::Contexts::Context* context, ::System::Runtime::Remoting::Messaging::IMessage* call)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Remoting::Messaging::IMessageSink*, ::System::Runtime::Remoting::Contexts::Context*, ::System::Runtime::Remoting::Messaging::IMessage*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CROSSCONTEXTCHANNEL_CONTEXTRESTORESINK__CTOR_OFFSET))(this, next, context, call);
		}

		::System::Runtime::Remoting::Messaging::IMessage* SyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* msg)
		{
			return ((::System::Runtime::Remoting::Messaging::IMessage*(*)(::PVOID, ::System::Runtime::Remoting::Messaging::IMessage*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CROSSCONTEXTCHANNEL_CONTEXTRESTORESINK_SYNCPROCESSMESSAGE_OFFSET))(this, msg);
		}

		::System::Runtime::Remoting::Messaging::IMessageCtrl* AsyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* msg, ::System::Runtime::Remoting::Messaging::IMessageSink* replySink)
		{
			return ((::System::Runtime::Remoting::Messaging::IMessageCtrl*(*)(::PVOID, ::System::Runtime::Remoting::Messaging::IMessage*, ::System::Runtime::Remoting::Messaging::IMessageSink*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CROSSCONTEXTCHANNEL_CONTEXTRESTORESINK_ASYNCPROCESSMESSAGE_OFFSET))(this, msg, replySink);
		}
	};
}
