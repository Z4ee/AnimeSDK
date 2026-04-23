#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Runtime::Remoting::Messaging { class LogicalCallContext; }

#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CALLCONTEXT_LOGICALGETDATA_OFFSET UNITYSDK_OFFSET(0x179D7DF0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CALLCONTEXT_LOGICALSETDATA_OFFSET UNITYSDK_OFFSET(0x179D7FA0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CALLCONTEXT_SETCURRENTCALLCONTEXT_OFFSET UNITYSDK_OFFSET(0x179D7D00)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CALLCONTEXT_SETLOGICALCALLCONTEXT_OFFSET UNITYSDK_OFFSET(0x179D7D10)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CALLCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x179D7CF0)

namespace System::Runtime::Remoting::Messaging
{
	inline static constexpr unsigned int CallContext_TypeDefinitionIndex = 1282;

	class CallContext : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CALLCONTEXT__CTOR_OFFSET))(this);
		}

		static ::System::Object* SetCurrentCallContext(::System::Runtime::Remoting::Messaging::LogicalCallContext* ctx)
		{
			return ((::System::Object*(*)(::System::Runtime::Remoting::Messaging::LogicalCallContext*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CALLCONTEXT_SETCURRENTCALLCONTEXT_OFFSET))(ctx);
		}

		static ::System::Runtime::Remoting::Messaging::LogicalCallContext* SetLogicalCallContext(::System::Runtime::Remoting::Messaging::LogicalCallContext* callCtx)
		{
			return ((::System::Runtime::Remoting::Messaging::LogicalCallContext*(*)(::System::Runtime::Remoting::Messaging::LogicalCallContext*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CALLCONTEXT_SETLOGICALCALLCONTEXT_OFFSET))(callCtx);
		}

		static ::System::Object* LogicalGetData(::System::String* name)
		{
			return ((::System::Object*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CALLCONTEXT_LOGICALGETDATA_OFFSET))(name);
		}

		static ::System::Void LogicalSetData(::System::String* name, ::System::Object* data)
		{
			return ((::System::Void(*)(::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CALLCONTEXT_LOGICALSETDATA_OFFSET))(name, data);
		}
	};
}
