#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Runtime::Remoting::Messaging { class LogicalCallContext; }

#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CALLCONTEXT_LOGICALGETDATA_OFFSET UNITYSDK_OFFSET(0x178EAE40)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CALLCONTEXT_LOGICALSETDATA_OFFSET UNITYSDK_OFFSET(0x178EAF00)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CALLCONTEXT_SETCURRENTCALLCONTEXT_OFFSET UNITYSDK_OFFSET(0x178EAD50)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CALLCONTEXT_SETLOGICALCALLCONTEXT_OFFSET UNITYSDK_OFFSET(0x178EAD60)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CALLCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x178EAD40)

namespace System::Runtime::Remoting::Messaging
{
	inline static constexpr unsigned int CallContext_TypeDefinitionIndex = 1283;

	class CallContext : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CALLCONTEXT__CTOR_OFFSET))(this);
		}

		static ::System::Object* SetCurrentCallContext(::System::Runtime::Remoting::Messaging::LogicalCallContext* a1)
		{
			return ((::System::Object*(*)(::System::Runtime::Remoting::Messaging::LogicalCallContext*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CALLCONTEXT_SETCURRENTCALLCONTEXT_OFFSET))(a1);
		}

		static ::System::Runtime::Remoting::Messaging::LogicalCallContext* SetLogicalCallContext(::System::Runtime::Remoting::Messaging::LogicalCallContext* a1)
		{
			return ((::System::Runtime::Remoting::Messaging::LogicalCallContext*(*)(::System::Runtime::Remoting::Messaging::LogicalCallContext*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CALLCONTEXT_SETLOGICALCALLCONTEXT_OFFSET))(a1);
		}

		static ::System::Object* LogicalGetData(::System::String* a1)
		{
			return ((::System::Object*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CALLCONTEXT_LOGICALGETDATA_OFFSET))(a1);
		}

		static ::System::Void LogicalSetData(::System::String* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CALLCONTEXT_LOGICALSETDATA_OFFSET))(a1, a2);
		}
	};
}
