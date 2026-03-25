#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class IDisposable; }
namespace System::Runtime::Remoting::Messaging { class IMessage; }
namespace System::Runtime::Remoting::Messaging { class IMessageCtrl; }
namespace System::Runtime::Remoting::Messaging { class IMessageSink; }

#define SYSTEM_RUNTIME_REMOTING_DISPOSERREPLYSINK_ASYNCPROCESSMESSAGE_OFFSET UNITYSDK_OFFSET(0x163A4220)
#define SYSTEM_RUNTIME_REMOTING_DISPOSERREPLYSINK_SYNCPROCESSMESSAGE_OFFSET UNITYSDK_OFFSET(0x163A40B0)
#define SYSTEM_RUNTIME_REMOTING_DISPOSERREPLYSINK__CTOR_OFFSET UNITYSDK_OFFSET(0x163A40A0)

namespace System::Runtime::Remoting
{
	inline static constexpr unsigned int DisposerReplySink_TypeDefinitionIndex = 1214;

	class DisposerReplySink : public ::System::Object
	{
	public:
		::System::Runtime::Remoting::Messaging::IMessageSink* _next; // 0x10
		::System::IDisposable* _disposable; // 0x18

		::System::Void _ctor(::System::Runtime::Remoting::Messaging::IMessageSink* next, ::System::IDisposable* disposable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Remoting::Messaging::IMessageSink*, ::System::IDisposable*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_DISPOSERREPLYSINK__CTOR_OFFSET))(this, next, disposable);
		}

		::System::Runtime::Remoting::Messaging::IMessage* SyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* msg)
		{
			return ((::System::Runtime::Remoting::Messaging::IMessage*(*)(::PVOID, ::System::Runtime::Remoting::Messaging::IMessage*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_DISPOSERREPLYSINK_SYNCPROCESSMESSAGE_OFFSET))(this, msg);
		}

		::System::Runtime::Remoting::Messaging::IMessageCtrl* AsyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* msg, ::System::Runtime::Remoting::Messaging::IMessageSink* replySink)
		{
			return ((::System::Runtime::Remoting::Messaging::IMessageCtrl*(*)(::PVOID, ::System::Runtime::Remoting::Messaging::IMessage*, ::System::Runtime::Remoting::Messaging::IMessageSink*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_DISPOSERREPLYSINK_ASYNCPROCESSMESSAGE_OFFSET))(this, msg, replySink);
		}
	};
}
