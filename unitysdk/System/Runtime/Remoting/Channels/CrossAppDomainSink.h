#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Remoting/Channels/CrossAppDomainSink_ProcessMessageRes.h"

namespace System::Collections { class Hashtable; }
namespace System::Reflection { class MethodInfo; }
namespace System::Runtime::Remoting::Messaging { class CADMethodCallMessage; }
namespace System::Runtime::Remoting::Messaging { class IMessage; }
namespace System::Runtime::Remoting::Messaging { class IMessageCtrl; }
namespace System::Runtime::Remoting::Messaging { class IMessageSink; }

#define SYSTEM_RUNTIME_REMOTING_CHANNELS_CROSSAPPDOMAINSINK_ASYNCPROCESSMESSAGE_OFFSET UNITYSDK_OFFSET(0x18B9DD40)
#define SYSTEM_RUNTIME_REMOTING_CHANNELS_CROSSAPPDOMAINSINK_GETSINK_OFFSET UNITYSDK_OFFSET(0x18B9D4A0)
#define SYSTEM_RUNTIME_REMOTING_CHANNELS_CROSSAPPDOMAINSINK_PROCESSMESSAGEINDOMAIN_OFFSET UNITYSDK_OFFSET(0x18B9D780)
#define SYSTEM_RUNTIME_REMOTING_CHANNELS_CROSSAPPDOMAINSINK_SENDASYNCMESSAGE_OFFSET UNITYSDK_OFFSET(0x18B9DDC0)
#define SYSTEM_RUNTIME_REMOTING_CHANNELS_CROSSAPPDOMAINSINK_SYNCPROCESSMESSAGE_OFFSET UNITYSDK_OFFSET(0x18B9D900)
#define SYSTEM_RUNTIME_REMOTING_CHANNELS_CROSSAPPDOMAINSINK__ASYNCPROCESSMESSAGE_B__10_0_OFFSET UNITYSDK_OFFSET(0x18B9E070)
#define SYSTEM_RUNTIME_REMOTING_CHANNELS_CROSSAPPDOMAINSINK__CCTOR_OFFSET UNITYSDK_OFFSET(0x18B9DEF0)
#define SYSTEM_RUNTIME_REMOTING_CHANNELS_CROSSAPPDOMAINSINK__CTOR_OFFSET UNITYSDK_OFFSET(0x18B9D490)

namespace System::Runtime::Remoting::Channels
{
	inline static constexpr unsigned int CrossAppDomainSink_TypeDefinitionIndex = 1298;

	class CrossAppDomainSink : public ::System::Object
	{
	public:
		static ::System::Collections::Hashtable** StaticGet_s_sinks()
		{
			return (::System::Collections::Hashtable**)Il2CppClass::FromTypeDefinitionIndex(CrossAppDomainSink_TypeDefinitionIndex)->GetStaticField(0x1500);
		}
		static ::System::Reflection::MethodInfo** StaticGet_processMessageMethod()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(CrossAppDomainSink_TypeDefinitionIndex)->GetStaticField(0x1508);
		}
		::System::Int32 _domainID; // 0x10

		::System::Void _ctor(::System::Int32 domainID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_CROSSAPPDOMAINSINK__CTOR_OFFSET))(this, domainID);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_CROSSAPPDOMAINSINK__CCTOR_OFFSET))();
		}

		static ::System::Runtime::Remoting::Channels::CrossAppDomainSink* GetSink(::System::Int32 domainID)
		{
			return ((::System::Runtime::Remoting::Channels::CrossAppDomainSink*(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_CROSSAPPDOMAINSINK_GETSINK_OFFSET))(domainID);
		}

		static ::System::Runtime::Remoting::Channels::CrossAppDomainSink_ProcessMessageRes ProcessMessageInDomain(::Il2CppArray<::System::Byte>* arrRequest, ::System::Runtime::Remoting::Messaging::CADMethodCallMessage* cadMsg)
		{
			return ((::System::Runtime::Remoting::Channels::CrossAppDomainSink_ProcessMessageRes(*)(::Il2CppArray<::System::Byte>*, ::System::Runtime::Remoting::Messaging::CADMethodCallMessage*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_CROSSAPPDOMAINSINK_PROCESSMESSAGEINDOMAIN_OFFSET))(arrRequest, cadMsg);
		}

		::System::Runtime::Remoting::Messaging::IMessage* SyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* msgRequest)
		{
			return ((::System::Runtime::Remoting::Messaging::IMessage*(*)(::PVOID, ::System::Runtime::Remoting::Messaging::IMessage*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_CROSSAPPDOMAINSINK_SYNCPROCESSMESSAGE_OFFSET))(this, msgRequest);
		}

		::System::Runtime::Remoting::Messaging::IMessageCtrl* AsyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* reqMsg, ::System::Runtime::Remoting::Messaging::IMessageSink* replySink)
		{
			return ((::System::Runtime::Remoting::Messaging::IMessageCtrl*(*)(::PVOID, ::System::Runtime::Remoting::Messaging::IMessage*, ::System::Runtime::Remoting::Messaging::IMessageSink*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_CROSSAPPDOMAINSINK_ASYNCPROCESSMESSAGE_OFFSET))(this, reqMsg, replySink);
		}

		::System::Void SendAsyncMessage(::System::Object* data)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_CROSSAPPDOMAINSINK_SENDASYNCMESSAGE_OFFSET))(this, data);
		}

		::System::Void _AsyncProcessMessage_b__10_0(::System::Object* data)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_CROSSAPPDOMAINSINK__ASYNCPROCESSMESSAGE_B__10_0_OFFSET))(this, data);
		}
	};
}
