#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System::Threading { class ExecutionContext; }
namespace System::Threading { class IAsyncLocal; }
namespace System::Threading { class SynchronizationContext; }

#define SYSTEM_THREADING_EXECUTIONCONTEXT_READER_DANGEROUSGETRAWEXECUTIONCONTEXT_OFFSET UNITYSDK_OFFSET(0x1651A0)
#define SYSTEM_THREADING_EXECUTIONCONTEXT_READER_GETLOCALVALUE_OFFSET UNITYSDK_OFFSET(0x39E4E80)
#define SYSTEM_THREADING_EXECUTIONCONTEXT_READER_GET_ISFLOWSUPPRESSED_OFFSET UNITYSDK_OFFSET(0x39E4DE0)
#define SYSTEM_THREADING_EXECUTIONCONTEXT_READER_GET_ISNULL_OFFSET UNITYSDK_OFFSET(0x6765C0)
#define SYSTEM_THREADING_EXECUTIONCONTEXT_READER_GET_LOGICALCALLCONTEXT_OFFSET UNITYSDK_OFFSET(0x39E4E40)
#define SYSTEM_THREADING_EXECUTIONCONTEXT_READER_GET_SYNCHRONIZATIONCONTEXTNOFLOW_OFFSET UNITYSDK_OFFSET(0x39E4E20)
#define SYSTEM_THREADING_EXECUTIONCONTEXT_READER_GET_SYNCHRONIZATIONCONTEXT_OFFSET UNITYSDK_OFFSET(0x39E4E00)
#define SYSTEM_THREADING_EXECUTIONCONTEXT_READER_HASSAMELOCALVALUES_OFFSET UNITYSDK_OFFSET(0x39E4F00)
#define SYSTEM_THREADING_EXECUTIONCONTEXT_READER_ISDEFAULTFTCONTEXT_OFFSET UNITYSDK_OFFSET(0x39E4D10)
#define SYSTEM_THREADING_EXECUTIONCONTEXT_READER__CTOR_OFFSET UNITYSDK_OFFSET(0x164FF0)

namespace System::Threading
{
	inline static constexpr unsigned int ExecutionContext_Reader_TypeDefinitionIndex = 829;

	struct alignas(8) ExecutionContext_Reader
	{
		::System::Threading::ExecutionContext* m_ec; // 0x10

		::System::Void _ctor(::System::Threading::ExecutionContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::ExecutionContext*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT_READER__CTOR_OFFSET))(this, a1);
		}

		::System::Threading::ExecutionContext* DangerousGetRawExecutionContext()
		{
			return ((::System::Threading::ExecutionContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT_READER_DANGEROUSGETRAWEXECUTIONCONTEXT_OFFSET))(this);
		}

		::System::Boolean get_IsNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT_READER_GET_ISNULL_OFFSET))(this);
		}

		::System::Boolean IsDefaultFTContext(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT_READER_ISDEFAULTFTCONTEXT_OFFSET))(this, a1);
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

		::System::Object* GetLocalValue(::System::Threading::IAsyncLocal* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Threading::IAsyncLocal*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT_READER_GETLOCALVALUE_OFFSET))(this, a1);
		}

		::System::Boolean HasSameLocalValues(::System::Threading::ExecutionContext* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Threading::ExecutionContext*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT_READER_HASSAMELOCALVALUES_OFFSET))(this, a1);
		}
	};
}
