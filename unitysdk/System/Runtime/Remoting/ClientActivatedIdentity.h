#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Remoting/ServerIdentity.h"

namespace System { class MarshalByRefObject; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Runtime::Remoting::Messaging { class IMessage; }
namespace System::Runtime::Remoting::Messaging { class IMessageCtrl; }
namespace System::Runtime::Remoting::Messaging { class IMessageSink; }

#define SYSTEM_RUNTIME_REMOTING_CLIENTACTIVATEDIDENTITY_ASYNCOBJECTPROCESSMESSAGE_OFFSET UNITYSDK_OFFSET(0x1A7C2000)
#define SYSTEM_RUNTIME_REMOTING_CLIENTACTIVATEDIDENTITY_ONLIFETIMEEXPIRED_OFFSET UNITYSDK_OFFSET(0x1A7C1E50)
#define SYSTEM_RUNTIME_REMOTING_CLIENTACTIVATEDIDENTITY_SYNCOBJECTPROCESSMESSAGE_OFFSET UNITYSDK_OFFSET(0x1A7C1EE0)
#define SYSTEM_RUNTIME_REMOTING_CLIENTACTIVATEDIDENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7C1E30)

namespace System::Runtime::Remoting
{
	inline static constexpr unsigned int ClientActivatedIdentity_TypeDefinitionIndex = 1257;

	class ClientActivatedIdentity : public ::System::Runtime::Remoting::ServerIdentity
	{
	public:
		::System::MarshalByRefObject* _targetThis; // 0x70

		::System::Void _ctor(::System::String* objectUri, ::System::Type* objectType)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CLIENTACTIVATEDIDENTITY__CTOR_OFFSET))(this, objectUri, objectType);
		}

		::System::Void OnLifetimeExpired()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CLIENTACTIVATEDIDENTITY_ONLIFETIMEEXPIRED_OFFSET))(this);
		}

		::System::Runtime::Remoting::Messaging::IMessage* SyncObjectProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* msg)
		{
			return ((::System::Runtime::Remoting::Messaging::IMessage*(*)(::PVOID, ::System::Runtime::Remoting::Messaging::IMessage*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CLIENTACTIVATEDIDENTITY_SYNCOBJECTPROCESSMESSAGE_OFFSET))(this, msg);
		}

		::System::Runtime::Remoting::Messaging::IMessageCtrl* AsyncObjectProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* msg, ::System::Runtime::Remoting::Messaging::IMessageSink* replySink)
		{
			return ((::System::Runtime::Remoting::Messaging::IMessageCtrl*(*)(::PVOID, ::System::Runtime::Remoting::Messaging::IMessage*, ::System::Runtime::Remoting::Messaging::IMessageSink*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CLIENTACTIVATEDIDENTITY_ASYNCOBJECTPROCESSMESSAGE_OFFSET))(this, msg, replySink);
		}
	};
}
