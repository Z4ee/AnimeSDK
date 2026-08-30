#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Threading/Tasks/Task_1.h"

namespace System { class AsyncCallback; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::IO { class Stream; }
namespace System::Threading { class ContextCallback; }
namespace System::Threading { class ExecutionContext; }
namespace System::Threading::Tasks { class Task; }

#define SYSTEM_IO_STREAM_READWRITETASK_CLEARBEGINSTATE_OFFSET UNITYSDK_OFFSET(0x1BD5D2F0)
#define SYSTEM_IO_STREAM_READWRITETASK_INVOKEASYNCCALLBACK_OFFSET UNITYSDK_OFFSET(0x1BD5DFC0)
#define SYSTEM_IO_STREAM_READWRITETASK_SYSTEM_THREADING_TASKS_ITASKCOMPLETIONACTION_INVOKE_OFFSET UNITYSDK_OFFSET(0x1BD5E040)
#define SYSTEM_IO_STREAM_READWRITETASK__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD5BE50)

namespace System::IO
{
	inline static constexpr unsigned int Stream_ReadWriteTask_TypeDefinitionIndex = 686;

	class Stream_ReadWriteTask : public ::System::Threading::Tasks::Task_1<::System::Int32>
	{
	public:
		static ::System::Threading::ContextCallback** StaticGet_s_invokeAsyncCallback()
		{
			return (::System::Threading::ContextCallback**)Il2CppClass::FromTypeDefinitionIndex(Stream_ReadWriteTask_TypeDefinitionIndex)->GetStaticField(0xC950);
		}
		::System::IO::Stream* _stream; // 0x50
		::System::Threading::ExecutionContext* _context; // 0x58
		::Il2CppArray<::System::Byte>* _buffer; // 0x60
		::System::AsyncCallback* _callback; // 0x68
		::System::Boolean _isRead; // 0x70
		::System::Int32 _offset; // 0x74
		::System::Int32 _count; // 0x78

		::System::Void _ctor(::System::Boolean a1, ::System::Func_2<::System::Object*, ::System::Int32>* a2, ::System::Object* a3, ::System::IO::Stream* a4, ::Il2CppArray<::System::Byte>* a5, ::System::Int32 a6, ::System::Int32 a7, ::System::AsyncCallback* a8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Func_2<::System::Object*, ::System::Int32>*, ::System::Object*, ::System::IO::Stream*, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_READWRITETASK__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void ClearBeginState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_READWRITETASK_CLEARBEGINSTATE_OFFSET))(this);
		}

		static ::System::Void InvokeAsyncCallback(::System::Object* a1)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_READWRITETASK_INVOKEASYNCCALLBACK_OFFSET))(a1);
		}

		::System::Void System_Threading_Tasks_ITaskCompletionAction_Invoke(::System::Threading::Tasks::Task* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::Tasks::Task*))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_READWRITETASK_SYSTEM_THREADING_TASKS_ITASKCOMPLETIONACTION_INVOKE_OFFSET))(this, a1);
		}
	};
}
