#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Runtime::Remoting::Messaging { class IMessage; }
namespace System::Runtime::Remoting::Messaging { class IMessageSink; }

#define SYSTEM_RUNTIME_REMOTING_CHANNELS_ASYNCREQUEST__CTOR_OFFSET UNITYSDK_OFFSET(0x16398F30)

namespace System::Runtime::Remoting::Channels
{
	inline static constexpr unsigned int AsyncRequest_TypeDefinitionIndex = 1258;

	class AsyncRequest : public ::System::Object
	{
	public:
		::System::Runtime::Remoting::Messaging::IMessageSink* ReplySink; // 0x10
		::System::Runtime::Remoting::Messaging::IMessage* MsgRequest; // 0x18

		::System::Void _ctor(::System::Runtime::Remoting::Messaging::IMessage* msgRequest, ::System::Runtime::Remoting::Messaging::IMessageSink* replySink)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Remoting::Messaging::IMessage*, ::System::Runtime::Remoting::Messaging::IMessageSink*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_ASYNCREQUEST__CTOR_OFFSET))(this, msgRequest, replySink);
		}
	};
}
