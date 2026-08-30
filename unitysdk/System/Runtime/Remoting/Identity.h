#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Runtime::Remoting { class ObjRef; }
namespace System::Runtime::Remoting::Contexts { class DynamicPropertyCollection; }
namespace System::Runtime::Remoting::Messaging { class IMessage; }
namespace System::Runtime::Remoting::Messaging { class IMessageSink; }

#define SYSTEM_RUNTIME_REMOTING_IDENTITY_GET_CHANNELSINK_OFFSET UNITYSDK_OFFSET(0x1C46C860)
#define SYSTEM_RUNTIME_REMOTING_IDENTITY_GET_CLIENTDYNAMICPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1C469BA0)
#define SYSTEM_RUNTIME_REMOTING_IDENTITY_GET_DISPOSED_OFFSET UNITYSDK_OFFSET(0x1C46C8C0)
#define SYSTEM_RUNTIME_REMOTING_IDENTITY_GET_ENVOYSINK_OFFSET UNITYSDK_OFFSET(0x1C46C880)
#define SYSTEM_RUNTIME_REMOTING_IDENTITY_GET_HASSERVERDYNAMICSINKS_OFFSET UNITYSDK_OFFSET(0x19430330)
#define SYSTEM_RUNTIME_REMOTING_IDENTITY_GET_ISCONNECTED_OFFSET UNITYSDK_OFFSET(0x1C46C8B0)
#define SYSTEM_RUNTIME_REMOTING_IDENTITY_GET_OBJECTURI_OFFSET UNITYSDK_OFFSET(0x1C46C890)
#define SYSTEM_RUNTIME_REMOTING_IDENTITY_NOTIFYCLIENTDYNAMICSINKS_OFFSET UNITYSDK_OFFSET(0x19430470)
#define SYSTEM_RUNTIME_REMOTING_IDENTITY_NOTIFYSERVERDYNAMICSINKS_OFFSET UNITYSDK_OFFSET(0x19430550)
#define SYSTEM_RUNTIME_REMOTING_IDENTITY_SET_CHANNELSINK_OFFSET UNITYSDK_OFFSET(0x1C46C870)
#define SYSTEM_RUNTIME_REMOTING_IDENTITY_SET_DISPOSED_OFFSET UNITYSDK_OFFSET(0x1C46C8D0)
#define SYSTEM_RUNTIME_REMOTING_IDENTITY_SET_OBJECTURI_OFFSET UNITYSDK_OFFSET(0x1C46C8A0)
#define SYSTEM_RUNTIME_REMOTING_IDENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1C465250)

namespace System::Runtime::Remoting
{
	inline static constexpr unsigned int Identity_TypeDefinitionIndex = 1208;

	class Identity : public ::System::Object
	{
	public:
		::System::Runtime::Remoting::Contexts::DynamicPropertyCollection* _clientDynamicProperties; // 0x10
		::System::Runtime::Remoting::Messaging::IMessageSink* _channelSink; // 0x18
		::System::Runtime::Remoting::Contexts::DynamicPropertyCollection* _serverDynamicProperties; // 0x20
		::System::String* _objectUri; // 0x28
		::System::Runtime::Remoting::Messaging::IMessageSink* _envoySink; // 0x30
		::System::Runtime::Remoting::ObjRef* _objRef; // 0x38
		::System::Boolean _disposed; // 0x40

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_IDENTITY__CTOR_OFFSET))(this, a1);
		}

		::System::Runtime::Remoting::Messaging::IMessageSink* get_ChannelSink()
		{
			return ((::System::Runtime::Remoting::Messaging::IMessageSink*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_IDENTITY_GET_CHANNELSINK_OFFSET))(this);
		}

		::System::Void set_ChannelSink(::System::Runtime::Remoting::Messaging::IMessageSink* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Remoting::Messaging::IMessageSink*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_IDENTITY_SET_CHANNELSINK_OFFSET))(this, a1);
		}

		::System::Runtime::Remoting::Messaging::IMessageSink* get_EnvoySink()
		{
			return ((::System::Runtime::Remoting::Messaging::IMessageSink*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_IDENTITY_GET_ENVOYSINK_OFFSET))(this);
		}

		::System::String* get_ObjectUri()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_IDENTITY_GET_OBJECTURI_OFFSET))(this);
		}

		::System::Void set_ObjectUri(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_IDENTITY_SET_OBJECTURI_OFFSET))(this, a1);
		}

		::System::Boolean get_IsConnected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_IDENTITY_GET_ISCONNECTED_OFFSET))(this);
		}

		::System::Boolean get_Disposed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_IDENTITY_GET_DISPOSED_OFFSET))(this);
		}

		::System::Void set_Disposed(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_IDENTITY_SET_DISPOSED_OFFSET))(this, a1);
		}

		::System::Runtime::Remoting::Contexts::DynamicPropertyCollection* get_ClientDynamicProperties()
		{
			return ((::System::Runtime::Remoting::Contexts::DynamicPropertyCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_IDENTITY_GET_CLIENTDYNAMICPROPERTIES_OFFSET))(this);
		}

		::System::Boolean get_HasServerDynamicSinks()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_IDENTITY_GET_HASSERVERDYNAMICSINKS_OFFSET))(this);
		}

		::System::Void NotifyClientDynamicSinks(::System::Boolean a1, ::System::Runtime::Remoting::Messaging::IMessage* a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Runtime::Remoting::Messaging::IMessage*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_IDENTITY_NOTIFYCLIENTDYNAMICSINKS_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void NotifyServerDynamicSinks(::System::Boolean a1, ::System::Runtime::Remoting::Messaging::IMessage* a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Runtime::Remoting::Messaging::IMessage*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_IDENTITY_NOTIFYSERVERDYNAMICSINKS_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
