#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Remoting/ServerIdentity.h"

namespace System { class MarshalByRefObject; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Runtime::Remoting::Contexts { class Context; }
namespace System::Runtime::Remoting::Messaging { class IMessage; }
namespace System::Runtime::Remoting::Messaging { class IMessageCtrl; }
namespace System::Runtime::Remoting::Messaging { class IMessageSink; }

#define SYSTEM_RUNTIME_REMOTING_SINGLETONIDENTITY_ASYNCOBJECTPROCESSMESSAGE_OFFSET UNITYSDK_OFFSET(0x179F34D0)
#define SYSTEM_RUNTIME_REMOTING_SINGLETONIDENTITY_GETSERVEROBJECT_OFFSET UNITYSDK_OFFSET(0x179F3170)
#define SYSTEM_RUNTIME_REMOTING_SINGLETONIDENTITY_SYNCOBJECTPROCESSMESSAGE_OFFSET UNITYSDK_OFFSET(0x179F3370)
#define SYSTEM_RUNTIME_REMOTING_SINGLETONIDENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x179F2410)

namespace System::Runtime::Remoting
{
	inline static constexpr unsigned int SingletonIdentity_TypeDefinitionIndex = 1214;

	class SingletonIdentity : public ::System::Runtime::Remoting::ServerIdentity
	{
	public:
		::System::Void _ctor(::System::String* objectUri, ::System::Runtime::Remoting::Contexts::Context* context, ::System::Type* objectType)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Runtime::Remoting::Contexts::Context*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_SINGLETONIDENTITY__CTOR_OFFSET))(this, objectUri, context, objectType);
		}

		::System::MarshalByRefObject* GetServerObject()
		{
			return ((::System::MarshalByRefObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_SINGLETONIDENTITY_GETSERVEROBJECT_OFFSET))(this);
		}

		::System::Runtime::Remoting::Messaging::IMessage* SyncObjectProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* msg)
		{
			return ((::System::Runtime::Remoting::Messaging::IMessage*(*)(::PVOID, ::System::Runtime::Remoting::Messaging::IMessage*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_SINGLETONIDENTITY_SYNCOBJECTPROCESSMESSAGE_OFFSET))(this, msg);
		}

		::System::Runtime::Remoting::Messaging::IMessageCtrl* AsyncObjectProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* msg, ::System::Runtime::Remoting::Messaging::IMessageSink* replySink)
		{
			return ((::System::Runtime::Remoting::Messaging::IMessageCtrl*(*)(::PVOID, ::System::Runtime::Remoting::Messaging::IMessage*, ::System::Runtime::Remoting::Messaging::IMessageSink*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_SINGLETONIDENTITY_ASYNCOBJECTPROCESSMESSAGE_OFFSET))(this, msg, replySink);
		}
	};
}
