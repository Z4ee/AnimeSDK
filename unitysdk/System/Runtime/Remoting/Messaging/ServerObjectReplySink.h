#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Runtime::Remoting { class ServerIdentity; }
namespace System::Runtime::Remoting::Messaging { class IMessage; }
namespace System::Runtime::Remoting::Messaging { class IMessageCtrl; }
namespace System::Runtime::Remoting::Messaging { class IMessageSink; }

#define SYSTEM_RUNTIME_REMOTING_MESSAGING_SERVEROBJECTREPLYSINK_ASYNCPROCESSMESSAGE_OFFSET UNITYSDK_OFFSET(0x178FAB00)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_SERVEROBJECTREPLYSINK_SYNCPROCESSMESSAGE_OFFSET UNITYSDK_OFFSET(0x178FA9B0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_SERVEROBJECTREPLYSINK__CTOR_OFFSET UNITYSDK_OFFSET(0x178FA9A0)

namespace System::Runtime::Remoting::Messaging
{
	inline static constexpr unsigned int ServerObjectReplySink_TypeDefinitionIndex = 1329;

	class ServerObjectReplySink : public ::System::Object
	{
	public:
		::System::Runtime::Remoting::Messaging::IMessageSink* _replySink; // 0x10
		::System::Runtime::Remoting::ServerIdentity* _identity; // 0x18

		::System::Void _ctor(::System::Runtime::Remoting::ServerIdentity* a1, ::System::Runtime::Remoting::Messaging::IMessageSink* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Remoting::ServerIdentity*, ::System::Runtime::Remoting::Messaging::IMessageSink*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_SERVEROBJECTREPLYSINK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Runtime::Remoting::Messaging::IMessage* SyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* a1)
		{
			return ((::System::Runtime::Remoting::Messaging::IMessage*(*)(::PVOID, ::System::Runtime::Remoting::Messaging::IMessage*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_SERVEROBJECTREPLYSINK_SYNCPROCESSMESSAGE_OFFSET))(this, a1);
		}

		::System::Runtime::Remoting::Messaging::IMessageCtrl* AsyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* a1, ::System::Runtime::Remoting::Messaging::IMessageSink* a2)
		{
			return ((::System::Runtime::Remoting::Messaging::IMessageCtrl*(*)(::PVOID, ::System::Runtime::Remoting::Messaging::IMessage*, ::System::Runtime::Remoting::Messaging::IMessageSink*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_SERVEROBJECTREPLYSINK_ASYNCPROCESSMESSAGE_OFFSET))(this, a1, a2);
		}
	};
}
