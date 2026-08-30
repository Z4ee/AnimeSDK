#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class IDisposable; }
namespace System::Runtime::Remoting::Messaging { class IMessage; }
namespace System::Runtime::Remoting::Messaging { class IMessageCtrl; }
namespace System::Runtime::Remoting::Messaging { class IMessageSink; }

#define SYSTEM_RUNTIME_REMOTING_DISPOSERREPLYSINK_ASYNCPROCESSMESSAGE_OFFSET UNITYSDK_OFFSET(0x1BDD1930)
#define SYSTEM_RUNTIME_REMOTING_DISPOSERREPLYSINK_SYNCPROCESSMESSAGE_OFFSET UNITYSDK_OFFSET(0x1BDD1710)
#define SYSTEM_RUNTIME_REMOTING_DISPOSERREPLYSINK__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDD1700)

namespace System::Runtime::Remoting
{
	inline static constexpr unsigned int DisposerReplySink_TypeDefinitionIndex = 1224;

	class DisposerReplySink : public ::System::Object
	{
	public:
		::System::IDisposable* _disposable; // 0x10
		::System::Runtime::Remoting::Messaging::IMessageSink* _next; // 0x18

		::System::Void _ctor(::System::Runtime::Remoting::Messaging::IMessageSink* a1, ::System::IDisposable* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Remoting::Messaging::IMessageSink*, ::System::IDisposable*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_DISPOSERREPLYSINK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Runtime::Remoting::Messaging::IMessage* SyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* a1)
		{
			return ((::System::Runtime::Remoting::Messaging::IMessage*(*)(::PVOID, ::System::Runtime::Remoting::Messaging::IMessage*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_DISPOSERREPLYSINK_SYNCPROCESSMESSAGE_OFFSET))(this, a1);
		}

		::System::Runtime::Remoting::Messaging::IMessageCtrl* AsyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* a1, ::System::Runtime::Remoting::Messaging::IMessageSink* a2)
		{
			return ((::System::Runtime::Remoting::Messaging::IMessageCtrl*(*)(::PVOID, ::System::Runtime::Remoting::Messaging::IMessage*, ::System::Runtime::Remoting::Messaging::IMessageSink*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_DISPOSERREPLYSINK_ASYNCPROCESSMESSAGE_OFFSET))(this, a1, a2);
		}
	};
}
