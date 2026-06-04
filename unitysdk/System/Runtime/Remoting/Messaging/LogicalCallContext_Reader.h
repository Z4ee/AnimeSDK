#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Runtime::Remoting::Messaging { class LogicalCallContext; }

#define SYSTEM_RUNTIME_REMOTING_MESSAGING_LOGICALCALLCONTEXT_READER_CLONE_OFFSET UNITYSDK_OFFSET(0x383BFB0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_LOGICALCALLCONTEXT_READER_GETDATA_OFFSET UNITYSDK_OFFSET(0x383BFF0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_LOGICALCALLCONTEXT_READER_GET_HASINFO_OFFSET UNITYSDK_OFFSET(0x383BF50)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_LOGICALCALLCONTEXT_READER_GET_ISNULL_OFFSET UNITYSDK_OFFSET(0x2BC7020)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_LOGICALCALLCONTEXT_READER__CTOR_OFFSET UNITYSDK_OFFSET(0xC630)

namespace System::Runtime::Remoting::Messaging
{
	inline static constexpr unsigned int LogicalCallContext_Reader_TypeDefinitionIndex = 1284;

	struct alignas(8) LogicalCallContext_Reader
	{
		::System::Runtime::Remoting::Messaging::LogicalCallContext* m_ctx; // 0x10

		::System::Void _ctor(::System::Runtime::Remoting::Messaging::LogicalCallContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Remoting::Messaging::LogicalCallContext*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_LOGICALCALLCONTEXT_READER__CTOR_OFFSET))(this, a1);
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

		::System::Object* GetData(::System::String* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_LOGICALCALLCONTEXT_READER_GETDATA_OFFSET))(this, a1);
		}
	};
}
