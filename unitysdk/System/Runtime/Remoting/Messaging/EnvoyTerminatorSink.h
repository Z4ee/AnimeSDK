#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Runtime::Remoting::Messaging { class IMessage; }
namespace System::Runtime::Remoting::Messaging { class IMessageCtrl; }
namespace System::Runtime::Remoting::Messaging { class IMessageSink; }

#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ENVOYTERMINATORSINK_ASYNCPROCESSMESSAGE_OFFSET UNITYSDK_OFFSET(0x1CD92190)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ENVOYTERMINATORSINK_SYNCPROCESSMESSAGE_OFFSET UNITYSDK_OFFSET(0x1CD92080)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ENVOYTERMINATORSINK__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD922B0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ENVOYTERMINATORSINK__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD922A0)

namespace System::Runtime::Remoting::Messaging
{
	inline static constexpr unsigned int EnvoyTerminatorSink_TypeDefinitionIndex = 1343;

	class EnvoyTerminatorSink : public ::System::Object
	{
	public:
		static ::System::Runtime::Remoting::Messaging::EnvoyTerminatorSink** StaticGet_Instance()
		{
			return (::System::Runtime::Remoting::Messaging::EnvoyTerminatorSink**)Il2CppClass::FromTypeDefinitionIndex(EnvoyTerminatorSink_TypeDefinitionIndex)->GetStaticField(0xE10);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ENVOYTERMINATORSINK__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ENVOYTERMINATORSINK__CCTOR_OFFSET))();
		}

		::System::Runtime::Remoting::Messaging::IMessage* SyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* msg)
		{
			return ((::System::Runtime::Remoting::Messaging::IMessage*(*)(::PVOID, ::System::Runtime::Remoting::Messaging::IMessage*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ENVOYTERMINATORSINK_SYNCPROCESSMESSAGE_OFFSET))(this, msg);
		}

		::System::Runtime::Remoting::Messaging::IMessageCtrl* AsyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* msg, ::System::Runtime::Remoting::Messaging::IMessageSink* replySink)
		{
			return ((::System::Runtime::Remoting::Messaging::IMessageCtrl*(*)(::PVOID, ::System::Runtime::Remoting::Messaging::IMessage*, ::System::Runtime::Remoting::Messaging::IMessageSink*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ENVOYTERMINATORSINK_ASYNCPROCESSMESSAGE_OFFSET))(this, msg, replySink);
		}
	};
}
