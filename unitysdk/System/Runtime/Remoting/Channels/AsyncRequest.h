#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Runtime::Remoting::Messaging { class IMessage; }
namespace System::Runtime::Remoting::Messaging { class IMessageSink; }

#define SYSTEM_RUNTIME_REMOTING_CHANNELS_ASYNCREQUEST__CTOR_OFFSET UNITYSDK_OFFSET(0x187768A0)

namespace System::Runtime::Remoting::Channels
{
	inline static constexpr unsigned int AsyncRequest_TypeDefinitionIndex = 1259;

	class AsyncRequest : public ::System::Object
	{
	public:
		::System::Runtime::Remoting::Messaging::IMessage* MsgRequest; // 0x10
		::System::Runtime::Remoting::Messaging::IMessageSink* ReplySink; // 0x18

		::System::Void _ctor(::System::Runtime::Remoting::Messaging::IMessage* a1, ::System::Runtime::Remoting::Messaging::IMessageSink* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Remoting::Messaging::IMessage*, ::System::Runtime::Remoting::Messaging::IMessageSink*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_ASYNCREQUEST__CTOR_OFFSET))(this, a1, a2);
		}
	};
}
