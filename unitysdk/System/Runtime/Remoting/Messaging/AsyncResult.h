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

#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_ASYNCPROCESSMESSAGE_OFFSET UNITYSDK_OFFSET(0x179D3CD0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x179D3D50)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_GETREPLYMESSAGE_OFFSET UNITYSDK_OFFSET(0x179D3D20)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_GET_ASYNCDELEGATE_OFFSET UNITYSDK_OFFSET(0x179D3CB0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_GET_ASYNCSTATE_OFFSET UNITYSDK_OFFSET(0x179D3B70)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_GET_ASYNCWAITHANDLE_OFFSET UNITYSDK_OFFSET(0x179D3B80)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_GET_CALLMESSAGE_OFFSET UNITYSDK_OFFSET(0x179D4020)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_GET_COMPLETEDSYNCHRONOUSLY_OFFSET UNITYSDK_OFFSET(0x179D3C70)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_GET_ENDINVOKECALLED_OFFSET UNITYSDK_OFFSET(0x179D3C90)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_GET_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x179D3C80)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_GET_NEXTSINK_OFFSET UNITYSDK_OFFSET(0x179D3CC0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_INVOKE_OFFSET UNITYSDK_OFFSET(0x179D4050)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_SETCOMPLETEDSYNCHRONOUSLY_OFFSET UNITYSDK_OFFSET(0x179D3D40)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_SETMESSAGECTRL_OFFSET UNITYSDK_OFFSET(0x179D3D30)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_SET_CALLMESSAGE_OFFSET UNITYSDK_OFFSET(0x179D4030)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_SET_ENDINVOKECALLED_OFFSET UNITYSDK_OFFSET(0x179D3CA0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_SYNCPROCESSMESSAGE_OFFSET UNITYSDK_OFFSET(0x179D3E90)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_SYSTEM_THREADING_ITHREADPOOLWORKITEM_EXECUTEWORKITEM_OFFSET UNITYSDK_OFFSET(0x179D4040)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_SYSTEM_THREADING_ITHREADPOOLWORKITEM_MARKABORTED_OFFSET UNITYSDK_OFFSET(0x179D4060)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_WAITCALLBACK_CONTEXT_OFFSET UNITYSDK_OFFSET(0x179D3AF0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT__CCTOR_OFFSET UNITYSDK_OFFSET(0x179D4070)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x179D3A40)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x179D3A30)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT___CTOR_B__17_0_OFFSET UNITYSDK_OFFSET(0x179D40D0)

namespace System::Runtime::Remoting::Messaging
{
	inline static constexpr unsigned int AsyncResult_TypeDefinitionIndex = 1290;

	class AsyncResult : public ::System::Object
	{
	public:
		static ::System::Threading::ContextCallback** StaticGet_ccb()
		{
			return (::System::Threading::ContextCallback**)Il2CppClass::FromTypeDefinitionIndex(AsyncResult_TypeDefinitionIndex)->GetStaticField(0xBE00);
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

		::System::Void _ctor_1(::System::Threading::WaitCallback* cb, ::System::Object* state, ::System::Boolean capture_context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::WaitCallback*, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT__CTOR_1_OFFSET))(this, cb, state, capture_context);
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

		::System::Boolean get_EndInvokeCalled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_GET_ENDINVOKECALLED_OFFSET))(this);
		}

		::System::Void set_EndInvokeCalled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_SET_ENDINVOKECALLED_OFFSET))(this, value);
		}

		::System::Object* get_AsyncDelegate()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_GET_ASYNCDELEGATE_OFFSET))(this);
		}

		::System::Runtime::Remoting::Messaging::IMessageSink* get_NextSink()
		{
			return ((::System::Runtime::Remoting::Messaging::IMessageSink*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_GET_NEXTSINK_OFFSET))(this);
		}

		::System::Runtime::Remoting::Messaging::IMessageCtrl* AsyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* msg, ::System::Runtime::Remoting::Messaging::IMessageSink* replySink)
		{
			return ((::System::Runtime::Remoting::Messaging::IMessageCtrl*(*)(::PVOID, ::System::Runtime::Remoting::Messaging::IMessage*, ::System::Runtime::Remoting::Messaging::IMessageSink*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_ASYNCPROCESSMESSAGE_OFFSET))(this, msg, replySink);
		}

		::System::Runtime::Remoting::Messaging::IMessage* GetReplyMessage()
		{
			return ((::System::Runtime::Remoting::Messaging::IMessage*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_GETREPLYMESSAGE_OFFSET))(this);
		}

		::System::Void SetMessageCtrl(::System::Runtime::Remoting::Messaging::IMessageCtrl* mc)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Remoting::Messaging::IMessageCtrl*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_SETMESSAGECTRL_OFFSET))(this, mc);
		}

		::System::Void SetCompletedSynchronously(::System::Boolean completed)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_SETCOMPLETEDSYNCHRONOUSLY_OFFSET))(this, completed);
		}

		::System::Runtime::Remoting::Messaging::IMessage* EndInvoke()
		{
			return ((::System::Runtime::Remoting::Messaging::IMessage*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_ENDINVOKE_OFFSET))(this);
		}

		::System::Runtime::Remoting::Messaging::IMessage* SyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* msg)
		{
			return ((::System::Runtime::Remoting::Messaging::IMessage*(*)(::PVOID, ::System::Runtime::Remoting::Messaging::IMessage*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_SYNCPROCESSMESSAGE_OFFSET))(this, msg);
		}

		::System::Runtime::Remoting::Messaging::MonoMethodMessage* get_CallMessage()
		{
			return ((::System::Runtime::Remoting::Messaging::MonoMethodMessage*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_GET_CALLMESSAGE_OFFSET))(this);
		}

		::System::Void set_CallMessage(::System::Runtime::Remoting::Messaging::MonoMethodMessage* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Remoting::Messaging::MonoMethodMessage*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_SET_CALLMESSAGE_OFFSET))(this, value);
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

		::System::Void __ctor_b__17_0(::System::Object* _p0_)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT___CTOR_B__17_0_OFFSET))(this, _p0_);
		}
	};
}
