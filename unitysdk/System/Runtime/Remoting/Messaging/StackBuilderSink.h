#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class MarshalByRefObject; }
namespace System::Runtime::Remoting::Messaging { class IMessage; }
namespace System::Runtime::Remoting::Messaging { class IMessageCtrl; }
namespace System::Runtime::Remoting::Messaging { class IMessageSink; }
namespace System::Runtime::Remoting::Proxies { class RealProxy; }

#define SYSTEM_RUNTIME_REMOTING_MESSAGING_STACKBUILDERSINK_ASYNCPROCESSMESSAGE_OFFSET UNITYSDK_OFFSET(0x1AC579B0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_STACKBUILDERSINK_CHECKPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1AC575A0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_STACKBUILDERSINK_EXECUTEASYNCMESSAGE_OFFSET UNITYSDK_OFFSET(0x1AC57B30)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_STACKBUILDERSINK_SYNCPROCESSMESSAGE_OFFSET UNITYSDK_OFFSET(0x1AC574F0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_STACKBUILDERSINK__ASYNCPROCESSMESSAGE_B__4_0_OFFSET UNITYSDK_OFFSET(0x1AC57D60)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_STACKBUILDERSINK__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC57480)

namespace System::Runtime::Remoting::Messaging
{
	inline static constexpr unsigned int StackBuilderSink_TypeDefinitionIndex = 1371;

	class StackBuilderSink : public ::System::Object
	{
	public:
		::System::Runtime::Remoting::Proxies::RealProxy* _rp; // 0x10
		::System::MarshalByRefObject* _target; // 0x18

		::System::Void _ctor(::System::MarshalByRefObject* obj, ::System::Boolean forceInternalExecute)
		{
			return ((::System::Void(*)(::PVOID, ::System::MarshalByRefObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_STACKBUILDERSINK__CTOR_OFFSET))(this, obj, forceInternalExecute);
		}

		::System::Runtime::Remoting::Messaging::IMessage* SyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* msg)
		{
			return ((::System::Runtime::Remoting::Messaging::IMessage*(*)(::PVOID, ::System::Runtime::Remoting::Messaging::IMessage*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_STACKBUILDERSINK_SYNCPROCESSMESSAGE_OFFSET))(this, msg);
		}

		::System::Runtime::Remoting::Messaging::IMessageCtrl* AsyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* msg, ::System::Runtime::Remoting::Messaging::IMessageSink* replySink)
		{
			return ((::System::Runtime::Remoting::Messaging::IMessageCtrl*(*)(::PVOID, ::System::Runtime::Remoting::Messaging::IMessage*, ::System::Runtime::Remoting::Messaging::IMessageSink*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_STACKBUILDERSINK_ASYNCPROCESSMESSAGE_OFFSET))(this, msg, replySink);
		}

		::System::Void ExecuteAsyncMessage(::System::Object* ob)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_STACKBUILDERSINK_EXECUTEASYNCMESSAGE_OFFSET))(this, ob);
		}

		::System::Void CheckParameters(::System::Runtime::Remoting::Messaging::IMessage* msg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Remoting::Messaging::IMessage*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_STACKBUILDERSINK_CHECKPARAMETERS_OFFSET))(this, msg);
		}

		::System::Void _AsyncProcessMessage_b__4_0(::System::Object* data)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_STACKBUILDERSINK__ASYNCPROCESSMESSAGE_B__4_0_OFFSET))(this, data);
		}
	};
}
