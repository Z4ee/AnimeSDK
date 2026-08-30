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

#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_ASYNCPROCESSMESSAGE_OFFSET UNITYSDK_OFFSET(0x1BDD5660)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1BDD56E0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_GETREPLYMESSAGE_OFFSET UNITYSDK_OFFSET(0x1BDD56B0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_GET_ASYNCDELEGATE_OFFSET UNITYSDK_OFFSET(0x1BDD5640)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_GET_ASYNCSTATE_OFFSET UNITYSDK_OFFSET(0x1BDD5500)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_GET_ASYNCWAITHANDLE_OFFSET UNITYSDK_OFFSET(0x1BDD5510)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_GET_CALLMESSAGE_OFFSET UNITYSDK_OFFSET(0x1BDD5AD0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_GET_COMPLETEDSYNCHRONOUSLY_OFFSET UNITYSDK_OFFSET(0x1BDD5600)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_GET_ENDINVOKECALLED_OFFSET UNITYSDK_OFFSET(0x1BDD5620)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_GET_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1BDD5610)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_GET_NEXTSINK_OFFSET UNITYSDK_OFFSET(0x1BDD5650)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_INVOKE_OFFSET UNITYSDK_OFFSET(0x1BDD5B00)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_SETCOMPLETEDSYNCHRONOUSLY_OFFSET UNITYSDK_OFFSET(0x1BDD56D0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_SETMESSAGECTRL_OFFSET UNITYSDK_OFFSET(0x1BDD56C0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_SET_CALLMESSAGE_OFFSET UNITYSDK_OFFSET(0x1BDD5AE0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_SET_ENDINVOKECALLED_OFFSET UNITYSDK_OFFSET(0x1BDD5630)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_SYNCPROCESSMESSAGE_OFFSET UNITYSDK_OFFSET(0x1BDD58F0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_SYSTEM_THREADING_ITHREADPOOLWORKITEM_EXECUTEWORKITEM_OFFSET UNITYSDK_OFFSET(0x1BDD5AF0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_SYSTEM_THREADING_ITHREADPOOLWORKITEM_MARKABORTED_OFFSET UNITYSDK_OFFSET(0x1BDD5B10)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_WAITCALLBACK_CONTEXT_OFFSET UNITYSDK_OFFSET(0x1BDD5470)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BDD5B20)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BDD53A0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDD5390)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT___CTOR_B__17_0_OFFSET UNITYSDK_OFFSET(0x1BDD5BA0)

namespace System::Runtime::Remoting::Messaging
{
	inline static constexpr unsigned int AsyncResult_TypeDefinitionIndex = 1298;

	class AsyncResult : public ::System::Object
	{
	public:
		static ::System::Threading::ContextCallback** StaticGet_ccb()
		{
			return (::System::Threading::ContextCallback**)Il2CppClass::FromTypeDefinitionIndex(AsyncResult_TypeDefinitionIndex)->GetStaticField(0x13880);
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

		::System::Void _ctor_1(::System::Threading::WaitCallback* a1, ::System::Object* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::WaitCallback*, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT__CTOR_1_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT__CCTOR_OFFSET))();
		}

		static ::System::Void WaitCallback_Context(::System::Object* a1)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_WAITCALLBACK_CONTEXT_OFFSET))(a1);
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

		::System::Void set_EndInvokeCalled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_SET_ENDINVOKECALLED_OFFSET))(this, a1);
		}

		::System::Object* get_AsyncDelegate()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_GET_ASYNCDELEGATE_OFFSET))(this);
		}

		::System::Runtime::Remoting::Messaging::IMessageSink* get_NextSink()
		{
			return ((::System::Runtime::Remoting::Messaging::IMessageSink*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_GET_NEXTSINK_OFFSET))(this);
		}

		::System::Runtime::Remoting::Messaging::IMessageCtrl* AsyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* a1, ::System::Runtime::Remoting::Messaging::IMessageSink* a2)
		{
			return ((::System::Runtime::Remoting::Messaging::IMessageCtrl*(*)(::PVOID, ::System::Runtime::Remoting::Messaging::IMessage*, ::System::Runtime::Remoting::Messaging::IMessageSink*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_ASYNCPROCESSMESSAGE_OFFSET))(this, a1, a2);
		}

		::System::Runtime::Remoting::Messaging::IMessage* GetReplyMessage()
		{
			return ((::System::Runtime::Remoting::Messaging::IMessage*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_GETREPLYMESSAGE_OFFSET))(this);
		}

		::System::Void SetMessageCtrl(::System::Runtime::Remoting::Messaging::IMessageCtrl* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Remoting::Messaging::IMessageCtrl*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_SETMESSAGECTRL_OFFSET))(this, a1);
		}

		::System::Void SetCompletedSynchronously(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_SETCOMPLETEDSYNCHRONOUSLY_OFFSET))(this, a1);
		}

		::System::Runtime::Remoting::Messaging::IMessage* EndInvoke()
		{
			return ((::System::Runtime::Remoting::Messaging::IMessage*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_ENDINVOKE_OFFSET))(this);
		}

		::System::Runtime::Remoting::Messaging::IMessage* SyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* a1)
		{
			return ((::System::Runtime::Remoting::Messaging::IMessage*(*)(::PVOID, ::System::Runtime::Remoting::Messaging::IMessage*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_SYNCPROCESSMESSAGE_OFFSET))(this, a1);
		}

		::System::Runtime::Remoting::Messaging::MonoMethodMessage* get_CallMessage()
		{
			return ((::System::Runtime::Remoting::Messaging::MonoMethodMessage*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_GET_CALLMESSAGE_OFFSET))(this);
		}

		::System::Void set_CallMessage(::System::Runtime::Remoting::Messaging::MonoMethodMessage* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Remoting::Messaging::MonoMethodMessage*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_SET_CALLMESSAGE_OFFSET))(this, a1);
		}

		::System::Void System_Threading_IThreadPoolWorkItem_ExecuteWorkItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_SYSTEM_THREADING_ITHREADPOOLWORKITEM_EXECUTEWORKITEM_OFFSET))(this);
		}

		::System::Void System_Threading_IThreadPoolWorkItem_MarkAborted(::System::Threading::ThreadAbortException* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::ThreadAbortException*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_SYSTEM_THREADING_ITHREADPOOLWORKITEM_MARKABORTED_OFFSET))(this, a1);
		}

		::System::Object* Invoke()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_INVOKE_OFFSET))(this);
		}

		::System::Void __ctor_b__17_0(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT___CTOR_B__17_0_OFFSET))(this, a1);
		}
	};
}
