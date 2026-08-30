#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Remoting/ServerIdentity.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Runtime::Remoting::Contexts { class Context; }
namespace System::Runtime::Remoting::Messaging { class IMessage; }
namespace System::Runtime::Remoting::Messaging { class IMessageCtrl; }
namespace System::Runtime::Remoting::Messaging { class IMessageSink; }

#define SYSTEM_RUNTIME_REMOTING_SINGLECALLIDENTITY_ASYNCOBJECTPROCESSMESSAGE_OFFSET UNITYSDK_OFFSET(0x1945C7C0)
#define SYSTEM_RUNTIME_REMOTING_SINGLECALLIDENTITY_SYNCOBJECTPROCESSMESSAGE_OFFSET UNITYSDK_OFFSET(0x1945C740)
#define SYSTEM_RUNTIME_REMOTING_SINGLECALLIDENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1945B8B0)

namespace System::Runtime::Remoting
{
	inline static constexpr unsigned int SingleCallIdentity_TypeDefinitionIndex = 1223;

	class SingleCallIdentity : public ::System::Runtime::Remoting::ServerIdentity
	{
	public:
		::System::Void _ctor(::System::String* a1, ::System::Runtime::Remoting::Contexts::Context* a2, ::System::Type* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Runtime::Remoting::Contexts::Context*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_SINGLECALLIDENTITY__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Runtime::Remoting::Messaging::IMessage* SyncObjectProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* a1)
		{
			return ((::System::Runtime::Remoting::Messaging::IMessage*(*)(::PVOID, ::System::Runtime::Remoting::Messaging::IMessage*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_SINGLECALLIDENTITY_SYNCOBJECTPROCESSMESSAGE_OFFSET))(this, a1);
		}

		::System::Runtime::Remoting::Messaging::IMessageCtrl* AsyncObjectProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* a1, ::System::Runtime::Remoting::Messaging::IMessageSink* a2)
		{
			return ((::System::Runtime::Remoting::Messaging::IMessageCtrl*(*)(::PVOID, ::System::Runtime::Remoting::Messaging::IMessage*, ::System::Runtime::Remoting::Messaging::IMessageSink*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_SINGLECALLIDENTITY_ASYNCOBJECTPROCESSMESSAGE_OFFSET))(this, a1, a2);
		}
	};
}
