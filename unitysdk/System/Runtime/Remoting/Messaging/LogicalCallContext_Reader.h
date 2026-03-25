#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Runtime::Remoting::Messaging { class LogicalCallContext; }

#define SYSTEM_RUNTIME_REMOTING_MESSAGING_LOGICALCALLCONTEXT_READER_CLONE_OFFSET UNITYSDK_OFFSET(0x20DA640)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_LOGICALCALLCONTEXT_READER_GETDATA_OFFSET UNITYSDK_OFFSET(0x20DA680)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_LOGICALCALLCONTEXT_READER_GET_HASINFO_OFFSET UNITYSDK_OFFSET(0x20DA5E0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_LOGICALCALLCONTEXT_READER_GET_ISNULL_OFFSET UNITYSDK_OFFSET(0x14E5D30)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_LOGICALCALLCONTEXT_READER__CTOR_OFFSET UNITYSDK_OFFSET(0xBDD0)

namespace System::Runtime::Remoting::Messaging
{
	inline static constexpr unsigned int LogicalCallContext_Reader_TypeDefinitionIndex = 1283;

	struct alignas(8) LogicalCallContext_Reader
	{
		::System::Runtime::Remoting::Messaging::LogicalCallContext* m_ctx; // 0x10

		::System::Void _ctor(::System::Runtime::Remoting::Messaging::LogicalCallContext* ctx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Remoting::Messaging::LogicalCallContext*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_LOGICALCALLCONTEXT_READER__CTOR_OFFSET))(this, ctx);
		}

		::System::Boolean get_IsNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_LOGICALCALLCONTEXT_READER_GET_ISNULL_OFFSET))(this);
		}

		::System::Boolean get_HasInfo()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_LOGICALCALLCONTEXT_READER_GET_HASINFO_OFFSET))(this);
		}

		::System::Runtime::Remoting::Messaging::LogicalCallContext* Clone()
		{
			return ((::System::Runtime::Remoting::Messaging::LogicalCallContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_LOGICALCALLCONTEXT_READER_CLONE_OFFSET))(this);
		}

		::System::Object* GetData(::System::String* name)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_LOGICALCALLCONTEXT_READER_GETDATA_OFFSET))(this, name);
		}
	};
}
