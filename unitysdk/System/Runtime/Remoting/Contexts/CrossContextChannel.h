#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Runtime::Remoting::Messaging { class IMessage; }
namespace System::Runtime::Remoting::Messaging { class IMessageCtrl; }
namespace System::Runtime::Remoting::Messaging { class IMessageSink; }

#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CROSSCONTEXTCHANNEL_ASYNCPROCESSMESSAGE_OFFSET UNITYSDK_OFFSET(0x163A34B0)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CROSSCONTEXTCHANNEL_SYNCPROCESSMESSAGE_OFFSET UNITYSDK_OFFSET(0x1639C3F0)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CROSSCONTEXTCHANNEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1639CA80)

namespace System::Runtime::Remoting::Contexts
{
	inline static constexpr unsigned int CrossContextChannel_TypeDefinitionIndex = 1240;

	class CrossContextChannel : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CROSSCONTEXTCHANNEL__CTOR_OFFSET))(this);
		}

		::System::Runtime::Remoting::Messaging::IMessage* SyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* msg)
		{
			return ((::System::Runtime::Remoting::Messaging::IMessage*(*)(::PVOID, ::System::Runtime::Remoting::Messaging::IMessage*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CROSSCONTEXTCHANNEL_SYNCPROCESSMESSAGE_OFFSET))(this, msg);
		}

		::System::Runtime::Remoting::Messaging::IMessageCtrl* AsyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* msg, ::System::Runtime::Remoting::Messaging::IMessageSink* replySink)
		{
			return ((::System::Runtime::Remoting::Messaging::IMessageCtrl*(*)(::PVOID, ::System::Runtime::Remoting::Messaging::IMessage*, ::System::Runtime::Remoting::Messaging::IMessageSink*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CROSSCONTEXTCHANNEL_ASYNCPROCESSMESSAGE_OFFSET))(this, msg, replySink);
		}
	};
}
