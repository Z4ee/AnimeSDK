#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System::Threading { class ExecutionContext; }
namespace System::Threading { class IAsyncLocal; }
namespace System::Threading { class SynchronizationContext; }

#define SYSTEM_THREADING_EXECUTIONCONTEXT_READER_DANGEROUSGETRAWEXECUTIONCONTEXT_OFFSET UNITYSDK_OFFSET(0x5580)
#define SYSTEM_THREADING_EXECUTIONCONTEXT_READER_GETLOCALVALUE_OFFSET UNITYSDK_OFFSET(0x229F650)
#define SYSTEM_THREADING_EXECUTIONCONTEXT_READER_GET_ISFLOWSUPPRESSED_OFFSET UNITYSDK_OFFSET(0x229F5B0)
#define SYSTEM_THREADING_EXECUTIONCONTEXT_READER_GET_ISNULL_OFFSET UNITYSDK_OFFSET(0x15AA500)
#define SYSTEM_THREADING_EXECUTIONCONTEXT_READER_GET_LOGICALCALLCONTEXT_OFFSET UNITYSDK_OFFSET(0x229F610)
#define SYSTEM_THREADING_EXECUTIONCONTEXT_READER_GET_SYNCHRONIZATIONCONTEXTNOFLOW_OFFSET UNITYSDK_OFFSET(0x229F5F0)
#define SYSTEM_THREADING_EXECUTIONCONTEXT_READER_GET_SYNCHRONIZATIONCONTEXT_OFFSET UNITYSDK_OFFSET(0x229F5D0)
#define SYSTEM_THREADING_EXECUTIONCONTEXT_READER_HASSAMELOCALVALUES_OFFSET UNITYSDK_OFFSET(0x229F6E0)
#define SYSTEM_THREADING_EXECUTIONCONTEXT_READER_ISDEFAULTFTCONTEXT_OFFSET UNITYSDK_OFFSET(0x229F500)
#define SYSTEM_THREADING_EXECUTIONCONTEXT_READER__CTOR_OFFSET UNITYSDK_OFFSET(0xBDC0)

namespace System::Threading
{
	inline static constexpr unsigned int ExecutionContext_Reader_TypeDefinitionIndex = 830;

	struct alignas(8) ExecutionContext_Reader
	{
		::System::Threading::ExecutionContext* m_ec; // 0x10

		::System::Void _ctor(::System::Threading::ExecutionContext* ec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::ExecutionContext*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT_READER__CTOR_OFFSET))(this, ec);
		}

		::System::Threading::ExecutionContext* DangerousGetRawExecutionContext()
		{
			return ((::System::Threading::ExecutionContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT_READER_DANGEROUSGETRAWEXECUTIONCONTEXT_OFFSET))(this);
		}

		::System::Boolean get_IsNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT_READER_GET_ISNULL_OFFSET))(this);
		}

		::System::Boolean IsDefaultFTContext(::System::Boolean ignoreSyncCtx)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT_READER_ISDEFAULTFTCONTEXT_OFFSET))(this, ignoreSyncCtx);
		}

		::System::Boolean get_IsFlowSuppressed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT_READER_GET_ISFLOWSUPPRESSED_OFFSET))(this);
		}

		::System::Threading::SynchronizationContext* get_SynchronizationContext()
		{
			return ((::System::Threading::SynchronizationContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT_READER_GET_SYNCHRONIZATIONCONTEXT_OFFSET))(this);
		}

		::System::Threading::SynchronizationContext* get_SynchronizationContextNoFlow()
		{
			return ((::System::Threading::SynchronizationContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT_READER_GET_SYNCHRONIZATIONCONTEXTNOFLOW_OFFSET))(this);
		}

		/*
		::System::Runtime::Remoting::Messaging::LogicalCallContext_Reader get_LogicalCallContext()
		{
			return ((::System::Runtime::Remoting::Messaging::LogicalCallContext_Reader(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT_READER_GET_LOGICALCALLCONTEXT_OFFSET))(this);
		}
		*/

		::System::Object* GetLocalValue(::System::Threading::IAsyncLocal* local)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Threading::IAsyncLocal*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT_READER_GETLOCALVALUE_OFFSET))(this, local);
		}

		::System::Boolean HasSameLocalValues(::System::Threading::ExecutionContext* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Threading::ExecutionContext*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT_READER_HASSAMELOCALVALUES_OFFSET))(this, other);
		}
	};
}
