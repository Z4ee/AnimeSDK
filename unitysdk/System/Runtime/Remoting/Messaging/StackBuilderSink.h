#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class MarshalByRefObject; }
namespace System::Runtime::Remoting::Messaging { class IMessage; }
namespace System::Runtime::Remoting::Messaging { class IMessageCtrl; }
namespace System::Runtime::Remoting::Messaging { class IMessageSink; }
namespace System::Runtime::Remoting::Proxies { class RealProxy; }

#define SYSTEM_RUNTIME_REMOTING_MESSAGING_STACKBUILDERSINK_ASYNCPROCESSMESSAGE_OFFSET UNITYSDK_OFFSET(0x1944C290)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_STACKBUILDERSINK_CHECKPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1944A190)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_STACKBUILDERSINK_EXECUTEASYNCMESSAGE_OFFSET UNITYSDK_OFFSET(0x1944C3F0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_STACKBUILDERSINK_SYNCPROCESSMESSAGE_OFFSET UNITYSDK_OFFSET(0x1944A0E0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_STACKBUILDERSINK__ASYNCPROCESSMESSAGE_B__4_0_OFFSET UNITYSDK_OFFSET(0x1944C670)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_STACKBUILDERSINK__CTOR_OFFSET UNITYSDK_OFFSET(0x1944A080)

namespace System::Runtime::Remoting::Messaging
{
	inline static constexpr unsigned int StackBuilderSink_TypeDefinitionIndex = 1337;

	class StackBuilderSink : public ::System::Object
	{
	public:
		::System::Runtime::Remoting::Proxies::RealProxy* _rp; // 0x10
		::System::MarshalByRefObject* _target; // 0x18

		::System::Void _ctor(::System::MarshalByRefObject* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::MarshalByRefObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_STACKBUILDERSINK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Runtime::Remoting::Messaging::IMessage* SyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* a1)
		{
			return ((::System::Runtime::Remoting::Messaging::IMessage*(*)(::PVOID, ::System::Runtime::Remoting::Messaging::IMessage*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_STACKBUILDERSINK_SYNCPROCESSMESSAGE_OFFSET))(this, a1);
		}

		::System::Runtime::Remoting::Messaging::IMessageCtrl* AsyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* a1, ::System::Runtime::Remoting::Messaging::IMessageSink* a2)
		{
			return ((::System::Runtime::Remoting::Messaging::IMessageCtrl*(*)(::PVOID, ::System::Runtime::Remoting::Messaging::IMessage*, ::System::Runtime::Remoting::Messaging::IMessageSink*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_STACKBUILDERSINK_ASYNCPROCESSMESSAGE_OFFSET))(this, a1, a2);
		}

		::System::Void ExecuteAsyncMessage(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_STACKBUILDERSINK_EXECUTEASYNCMESSAGE_OFFSET))(this, a1);
		}

		::System::Void CheckParameters(::System::Runtime::Remoting::Messaging::IMessage* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Remoting::Messaging::IMessage*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_STACKBUILDERSINK_CHECKPARAMETERS_OFFSET))(this, a1);
		}

		::System::Void _AsyncProcessMessage_b__4_0(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_STACKBUILDERSINK__ASYNCPROCESSMESSAGE_B__4_0_OFFSET))(this, a1);
		}
	};
}
