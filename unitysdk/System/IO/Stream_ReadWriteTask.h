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

#define SYSTEM_IO_STREAM_READWRITETASK_CLEARBEGINSTATE_OFFSET UNITYSDK_OFFSET(0x1A0A76B0)
#define SYSTEM_IO_STREAM_READWRITETASK_INVOKEASYNCCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A0A7810)
#define SYSTEM_IO_STREAM_READWRITETASK_SYSTEM_THREADING_TASKS_ITASKCOMPLETIONACTION_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A0A7880)
#define SYSTEM_IO_STREAM_READWRITETASK__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0A76D0)

namespace System::IO
{
	inline static constexpr unsigned int Stream_ReadWriteTask_TypeDefinitionIndex = 652;

	class Stream_ReadWriteTask : public ::System::Threading::Tasks::Task_1<::System::Int32>
	{
	public:
		static ::System::Threading::ContextCallback** StaticGet_s_invokeAsyncCallback()
		{
			return (::System::Threading::ContextCallback**)Il2CppClass::FromTypeDefinitionIndex(Stream_ReadWriteTask_TypeDefinitionIndex)->GetStaticField(0xD40);
		}
		::System::AsyncCallback* _callback; // 0x50
		::Il2CppArray<::System::Byte>* _buffer; // 0x58
		::System::Threading::ExecutionContext* _context; // 0x60
		::System::IO::Stream* _stream; // 0x68
		::System::Int32 _count; // 0x70
		::System::Int32 _offset; // 0x74
		::System::Boolean _isRead; // 0x78

		::System::Void _ctor(::System::Boolean isRead, ::System::Func_2<::System::Object*, ::System::Int32>* function, ::System::Object* state, ::System::IO::Stream* stream, ::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count, ::System::AsyncCallback* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Func_2<::System::Object*, ::System::Int32>*, ::System::Object*, ::System::IO::Stream*, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_READWRITETASK__CTOR_OFFSET))(this, isRead, function, state, stream, buffer, offset, count, callback);
		}

		::System::Void ClearBeginState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_READWRITETASK_CLEARBEGINSTATE_OFFSET))(this);
		}

		static ::System::Void InvokeAsyncCallback(::System::Object* completedTask)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_READWRITETASK_INVOKEASYNCCALLBACK_OFFSET))(completedTask);
		}

		::System::Void System_Threading_Tasks_ITaskCompletionAction_Invoke(::System::Threading::Tasks::Task* completingTask)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::Tasks::Task*))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_READWRITETASK_SYSTEM_THREADING_TASKS_ITASKCOMPLETIONACTION_INVOKE_OFFSET))(this, completingTask);
		}
	};
}
