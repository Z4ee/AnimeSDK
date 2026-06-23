#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Runtime::Remoting { class ObjRef; }
namespace System::Runtime::Remoting::Contexts { class DynamicPropertyCollection; }
namespace System::Runtime::Remoting::Messaging { class IMessage; }
namespace System::Runtime::Remoting::Messaging { class IMessageSink; }

#define SYSTEM_RUNTIME_REMOTING_IDENTITY_GET_HASSERVERDYNAMICSINKS_OFFSET UNITYSDK_OFFSET(0x1C4F67F0)
#define SYSTEM_RUNTIME_REMOTING_IDENTITY_GET_ISCONNECTED_OFFSET UNITYSDK_OFFSET(0x1C4F67E0)
#define SYSTEM_RUNTIME_REMOTING_IDENTITY_NOTIFYCLIENTDYNAMICSINKS_OFFSET UNITYSDK_OFFSET(0x1C4F6830)
#define SYSTEM_RUNTIME_REMOTING_IDENTITY_NOTIFYSERVERDYNAMICSINKS_OFFSET UNITYSDK_OFFSET(0x1C4F68A0)
#define SYSTEM_RUNTIME_REMOTING_IDENTITY_SET_OBJECTURI_OFFSET UNITYSDK_OFFSET(0x1C4F67D0)
#define SYSTEM_RUNTIME_REMOTING_IDENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4F67C0)

namespace System::Runtime::Remoting
{
	inline static constexpr unsigned int Identity_TypeDefinitionIndex = 1244;

	class Identity : public ::System::Object
	{
	public:
		::System::Runtime::Remoting::Contexts::DynamicPropertyCollection* _clientDynamicProperties; // 0x10
		::System::Runtime::Remoting::Messaging::IMessageSink* _envoySink; // 0x18
		::System::String* _objectUri; // 0x20
		::System::Runtime::Remoting::ObjRef* _objRef; // 0x28
		::System::Runtime::Remoting::Contexts::DynamicPropertyCollection* _serverDynamicProperties; // 0x30
		::System::Runtime::Remoting::Messaging::IMessageSink* _channelSink; // 0x38
		::System::Boolean _disposed; // 0x40

		::System::Void _ctor(::System::String* objectUri)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_IDENTITY__CTOR_OFFSET))(this, objectUri);
		}

		::System::Void set_ObjectUri(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_IDENTITY_SET_OBJECTURI_OFFSET))(this, value);
		}

		::System::Boolean get_IsConnected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_IDENTITY_GET_ISCONNECTED_OFFSET))(this);
		}

		::System::Boolean get_HasServerDynamicSinks()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_IDENTITY_GET_HASSERVERDYNAMICSINKS_OFFSET))(this);
		}

		::System::Void NotifyClientDynamicSinks(::System::Boolean start, ::System::Runtime::Remoting::Messaging::IMessage* req_msg, ::System::Boolean client_site, ::System::Boolean async)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Runtime::Remoting::Messaging::IMessage*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_IDENTITY_NOTIFYCLIENTDYNAMICSINKS_OFFSET))(this, start, req_msg, client_site, async);
		}

		::System::Void NotifyServerDynamicSinks(::System::Boolean start, ::System::Runtime::Remoting::Messaging::IMessage* req_msg, ::System::Boolean client_site, ::System::Boolean async)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Runtime::Remoting::Messaging::IMessage*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_IDENTITY_NOTIFYSERVERDYNAMICSINKS_OFFSET))(this, start, req_msg, client_site, async);
		}
	};
}
