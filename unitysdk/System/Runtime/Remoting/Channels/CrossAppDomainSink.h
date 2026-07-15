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

#define SYSTEM_RUNTIME_REMOTING_CHANNELS_CROSSAPPDOMAINSINK_ASYNCPROCESSMESSAGE_OFFSET UNITYSDK_OFFSET(0x1A832020)
#define SYSTEM_RUNTIME_REMOTING_CHANNELS_CROSSAPPDOMAINSINK_GETSINK_OFFSET UNITYSDK_OFFSET(0x1A831560)
#define SYSTEM_RUNTIME_REMOTING_CHANNELS_CROSSAPPDOMAINSINK_GET_TARGETDOMAINID_OFFSET UNITYSDK_OFFSET(0x1A831A60)
#define SYSTEM_RUNTIME_REMOTING_CHANNELS_CROSSAPPDOMAINSINK_PROCESSMESSAGEINDOMAIN_OFFSET UNITYSDK_OFFSET(0x1A831A70)
#define SYSTEM_RUNTIME_REMOTING_CHANNELS_CROSSAPPDOMAINSINK_SENDASYNCMESSAGE_OFFSET UNITYSDK_OFFSET(0x1A8320D0)
#define SYSTEM_RUNTIME_REMOTING_CHANNELS_CROSSAPPDOMAINSINK_SYNCPROCESSMESSAGE_OFFSET UNITYSDK_OFFSET(0x1A831BD0)
#define SYSTEM_RUNTIME_REMOTING_CHANNELS_CROSSAPPDOMAINSINK__ASYNCPROCESSMESSAGE_B__10_0_OFFSET UNITYSDK_OFFSET(0x1A832390)
#define SYSTEM_RUNTIME_REMOTING_CHANNELS_CROSSAPPDOMAINSINK__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A8322C0)
#define SYSTEM_RUNTIME_REMOTING_CHANNELS_CROSSAPPDOMAINSINK__CTOR_OFFSET UNITYSDK_OFFSET(0x1A831A50)

namespace System::Runtime::Remoting::Channels
{
	inline static constexpr unsigned int CrossAppDomainSink_TypeDefinitionIndex = 1258;

	class CrossAppDomainSink : public ::System::Object
	{
	public:
		static ::System::Reflection::MethodInfo** StaticGet_processMessageMethod()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(CrossAppDomainSink_TypeDefinitionIndex)->GetStaticField(0x17EB0);
		}
		static ::System::Collections::Hashtable** StaticGet_s_sinks()
		{
			return (::System::Collections::Hashtable**)Il2CppClass::FromTypeDefinitionIndex(CrossAppDomainSink_TypeDefinitionIndex)->GetStaticField(0x17EB8);
		}
		::System::Int32 _domainID; // 0x10

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_CROSSAPPDOMAINSINK__CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_CROSSAPPDOMAINSINK__CCTOR_OFFSET))();
		}

		static ::System::Runtime::Remoting::Channels::CrossAppDomainSink* GetSink(::System::Int32 a1)
		{
			return ((::System::Runtime::Remoting::Channels::CrossAppDomainSink*(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_CROSSAPPDOMAINSINK_GETSINK_OFFSET))(a1);
		}

		::System::Int32 get_TargetDomainId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_CROSSAPPDOMAINSINK_GET_TARGETDOMAINID_OFFSET))(this);
		}

		static ::System::Runtime::Remoting::Channels::CrossAppDomainSink_ProcessMessageRes ProcessMessageInDomain(::Il2CppArray<::System::Byte>* a1, ::System::Runtime::Remoting::Messaging::CADMethodCallMessage* a2)
		{
			return ((::System::Runtime::Remoting::Channels::CrossAppDomainSink_ProcessMessageRes(*)(::Il2CppArray<::System::Byte>*, ::System::Runtime::Remoting::Messaging::CADMethodCallMessage*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_CROSSAPPDOMAINSINK_PROCESSMESSAGEINDOMAIN_OFFSET))(a1, a2);
		}

		::System::Runtime::Remoting::Messaging::IMessage* SyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* a1)
		{
			return ((::System::Runtime::Remoting::Messaging::IMessage*(*)(::PVOID, ::System::Runtime::Remoting::Messaging::IMessage*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_CROSSAPPDOMAINSINK_SYNCPROCESSMESSAGE_OFFSET))(this, a1);
		}

		::System::Runtime::Remoting::Messaging::IMessageCtrl* AsyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* a1, ::System::Runtime::Remoting::Messaging::IMessageSink* a2)
		{
			return ((::System::Runtime::Remoting::Messaging::IMessageCtrl*(*)(::PVOID, ::System::Runtime::Remoting::Messaging::IMessage*, ::System::Runtime::Remoting::Messaging::IMessageSink*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_CROSSAPPDOMAINSINK_ASYNCPROCESSMESSAGE_OFFSET))(this, a1, a2);
		}

		::System::Void SendAsyncMessage(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_CROSSAPPDOMAINSINK_SENDASYNCMESSAGE_OFFSET))(this, a1);
		}

		::System::Void _AsyncProcessMessage_b__10_0(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_CROSSAPPDOMAINSINK__ASYNCPROCESSMESSAGE_B__10_0_OFFSET))(this, a1);
		}
	};
}
