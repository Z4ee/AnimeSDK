#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Runtime::Remoting::Messaging { class IMessage; }
namespace System::Runtime::Remoting::Messaging { class IMessageCtrl; }
namespace System::Runtime::Remoting::Messaging { class IMessageSink; }
namespace System::Runtime::Remoting::Messaging { class MonoMethodMessage; }
namespace System::Threading { class ContextCallback; }
namespace System::Threading { class ExecutionContext; }
namespace System::Threading { class ThreadAbortException; }
namespace System::Threading { class WaitCallback; }
namespace System::Threading { class WaitHandle; }

#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_ASYNCPROCESSMESSAGE_OFFSET UNITYSDK_OFFSET(0x1CCB9300)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_GET_ASYNCDELEGATE_OFFSET UNITYSDK_OFFSET(0x1CCB92F0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_GET_ASYNCSTATE_OFFSET UNITYSDK_OFFSET(0x1CCB91A0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_GET_ASYNCWAITHANDLE_OFFSET UNITYSDK_OFFSET(0x1CCB91B0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_GET_COMPLETEDSYNCHRONOUSLY_OFFSET UNITYSDK_OFFSET(0x1CCB92D0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_GET_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1CCB92E0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CCB94E0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_SYNCPROCESSMESSAGE_OFFSET UNITYSDK_OFFSET(0x1CCB9350)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_SYSTEM_THREADING_ITHREADPOOLWORKITEM_EXECUTEWORKITEM_OFFSET UNITYSDK_OFFSET(0x1CCB94D0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_SYSTEM_THREADING_ITHREADPOOLWORKITEM_MARKABORTED_OFFSET UNITYSDK_OFFSET(0x1CCB94F0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_WAITCALLBACK_CONTEXT_OFFSET UNITYSDK_OFFSET(0x1CCB9120)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CCB9500)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCB9110)

namespace System::Runtime::Remoting::Messaging
{
	inline static constexpr unsigned int AsyncResult_TypeDefinitionIndex = 1331;

	class AsyncResult : public ::System::Object
	{
	public:
		static ::System::Threading::ContextCallback** StaticGet_ccb()
		{
			return (::System::Threading::ContextCallback**)Il2CppClass::FromTypeDefinitionIndex(AsyncResult_TypeDefinitionIndex)->GetStaticField(0x6C0);
		}
		::System::Object* async_state; // 0x10
		::System::Threading::WaitHandle* handle; // 0x18
		::System::Object* async_delegate; // 0x20
		::System::IntPtr data; // 0x28
		::System::Object* object_data; // 0x30
		::System::Boolean sync_completed; // 0x38
		::System::Boolean completed; // 0x39
		::System::Boolean endinvoke_called; // 0x3A
		::System::Object* async_callback; // 0x40
		::System::Threading::ExecutionContext* current; // 0x48
		::System::Threading::ExecutionContext* original; // 0x50
		::System::Int64 add_time; // 0x58
		::System::Runtime::Remoting::Messaging::MonoMethodMessage* call_message; // 0x60
		::System::Runtime::Remoting::Messaging::IMessageCtrl* message_ctrl; // 0x68
		::System::Runtime::Remoting::Messaging::IMessage* reply_message; // 0x70
		::System::Threading::WaitCallback* orig_cb; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT__CCTOR_OFFSET))();
		}

		static ::System::Void WaitCallback_Context(::System::Object* state)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_WAITCALLBACK_CONTEXT_OFFSET))(state);
		}

		::System::Object* get_AsyncState()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_GET_ASYNCSTATE_OFFSET))(this);
		}

		::System::Threading::WaitHandle* get_AsyncWaitHandle()
		{
			return ((::System::Threading::WaitHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_GET_ASYNCWAITHANDLE_OFFSET))(this);
		}

		::System::Boolean get_CompletedSynchronously()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_GET_COMPLETEDSYNCHRONOUSLY_OFFSET))(this);
		}

		::System::Boolean get_IsCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_GET_ISCOMPLETED_OFFSET))(this);
		}

		::System::Object* get_AsyncDelegate()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_GET_ASYNCDELEGATE_OFFSET))(this);
		}

		::System::Runtime::Remoting::Messaging::IMessageCtrl* AsyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* msg, ::System::Runtime::Remoting::Messaging::IMessageSink* replySink)
		{
			return ((::System::Runtime::Remoting::Messaging::IMessageCtrl*(*)(::PVOID, ::System::Runtime::Remoting::Messaging::IMessage*, ::System::Runtime::Remoting::Messaging::IMessageSink*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_ASYNCPROCESSMESSAGE_OFFSET))(this, msg, replySink);
		}

		::System::Runtime::Remoting::Messaging::IMessage* SyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* msg)
		{
			return ((::System::Runtime::Remoting::Messaging::IMessage*(*)(::PVOID, ::System::Runtime::Remoting::Messaging::IMessage*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_SYNCPROCESSMESSAGE_OFFSET))(this, msg);
		}

		::System::Void System_Threading_IThreadPoolWorkItem_ExecuteWorkItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_SYSTEM_THREADING_ITHREADPOOLWORKITEM_EXECUTEWORKITEM_OFFSET))(this);
		}

		::System::Void System_Threading_IThreadPoolWorkItem_MarkAborted(::System::Threading::ThreadAbortException* tae)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::ThreadAbortException*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_SYSTEM_THREADING_ITHREADPOOLWORKITEM_MARKABORTED_OFFSET))(this, tae);
		}

		::System::Object* Invoke()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_INVOKE_OFFSET))(this);
		}
	};
}
