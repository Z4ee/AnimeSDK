#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Remoting/ServerIdentity.h"

namespace System { class MarshalByRefObject; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Runtime::Remoting::Messaging { class IMessage; }
namespace System::Runtime::Remoting::Messaging { class IMessageCtrl; }
namespace System::Runtime::Remoting::Messaging { class IMessageSink; }

#define SYSTEM_RUNTIME_REMOTING_CLIENTACTIVATEDIDENTITY_ASYNCOBJECTPROCESSMESSAGE_OFFSET UNITYSDK_OFFSET(0x1877B620)
#define SYSTEM_RUNTIME_REMOTING_CLIENTACTIVATEDIDENTITY_GETSERVEROBJECT_OFFSET UNITYSDK_OFFSET(0x1877B240)
#define SYSTEM_RUNTIME_REMOTING_CLIENTACTIVATEDIDENTITY_ONLIFETIMEEXPIRED_OFFSET UNITYSDK_OFFSET(0x1877B260)
#define SYSTEM_RUNTIME_REMOTING_CLIENTACTIVATEDIDENTITY_SETCLIENTPROXY_OFFSET UNITYSDK_OFFSET(0x1877B250)
#define SYSTEM_RUNTIME_REMOTING_CLIENTACTIVATEDIDENTITY_SYNCOBJECTPROCESSMESSAGE_OFFSET UNITYSDK_OFFSET(0x1877B2F0)
#define SYSTEM_RUNTIME_REMOTING_CLIENTACTIVATEDIDENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1877B220)

namespace System::Runtime::Remoting
{
	inline static constexpr unsigned int ClientActivatedIdentity_TypeDefinitionIndex = 1212;

	class ClientActivatedIdentity : public ::System::Runtime::Remoting::ServerIdentity
	{
	public:
		::System::MarshalByRefObject* _targetThis; // 0x70

		::System::Void _ctor(::System::String* a1, ::System::Type* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CLIENTACTIVATEDIDENTITY__CTOR_OFFSET))(this, a1, a2);
		}

		::System::MarshalByRefObject* GetServerObject()
		{
			return ((::System::MarshalByRefObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CLIENTACTIVATEDIDENTITY_GETSERVEROBJECT_OFFSET))(this);
		}

		::System::Void SetClientProxy(::System::MarshalByRefObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::MarshalByRefObject*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CLIENTACTIVATEDIDENTITY_SETCLIENTPROXY_OFFSET))(this, a1);
		}

		::System::Void OnLifetimeExpired()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CLIENTACTIVATEDIDENTITY_ONLIFETIMEEXPIRED_OFFSET))(this);
		}

		::System::Runtime::Remoting::Messaging::IMessage* SyncObjectProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* a1)
		{
			return ((::System::Runtime::Remoting::Messaging::IMessage*(*)(::PVOID, ::System::Runtime::Remoting::Messaging::IMessage*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CLIENTACTIVATEDIDENTITY_SYNCOBJECTPROCESSMESSAGE_OFFSET))(this, a1);
		}

		::System::Runtime::Remoting::Messaging::IMessageCtrl* AsyncObjectProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* a1, ::System::Runtime::Remoting::Messaging::IMessageSink* a2)
		{
			return ((::System::Runtime::Remoting::Messaging::IMessageCtrl*(*)(::PVOID, ::System::Runtime::Remoting::Messaging::IMessage*, ::System::Runtime::Remoting::Messaging::IMessageSink*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CLIENTACTIVATEDIDENTITY_ASYNCOBJECTPROCESSMESSAGE_OFFSET))(this, a1, a2);
		}
	};
}
