#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class AsyncCallback; }
namespace System::Net { class LazyAsyncResult_ThreadContext; }
namespace System::Threading { class ManualResetEvent; }
namespace System::Threading { class WaitHandle; }

#define SYSTEM_NET_LAZYASYNCRESULT_CLEANUP_OFFSET UNITYSDK_OFFSET(0x186F7D70)
#define SYSTEM_NET_LAZYASYNCRESULT_COMPLETE_OFFSET UNITYSDK_OFFSET(0x186F7AE0)
#define SYSTEM_NET_LAZYASYNCRESULT_GET_ASYNCOBJECT_OFFSET UNITYSDK_OFFSET(0x186F75D0)
#define SYSTEM_NET_LAZYASYNCRESULT_GET_ASYNCSTATE_OFFSET UNITYSDK_OFFSET(0x186F75E0)
#define SYSTEM_NET_LAZYASYNCRESULT_GET_ASYNCWAITHANDLE_OFFSET UNITYSDK_OFFSET(0x186F75F0)
#define SYSTEM_NET_LAZYASYNCRESULT_GET_COMPLETEDSYNCHRONOUSLY_OFFSET UNITYSDK_OFFSET(0x186F7890)
#define SYSTEM_NET_LAZYASYNCRESULT_GET_CURRENTTHREADCONTEXT_OFFSET UNITYSDK_OFFSET(0x186F7500)
#define SYSTEM_NET_LAZYASYNCRESULT_GET_INTERNALPEEKCOMPLETED_OFFSET UNITYSDK_OFFSET(0x186F7880)
#define SYSTEM_NET_LAZYASYNCRESULT_GET_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x186D1DD0)
#define SYSTEM_NET_LAZYASYNCRESULT_INTERNALWAITFORCOMPLETION_OFFSET UNITYSDK_OFFSET(0x186D0430)
#define SYSTEM_NET_LAZYASYNCRESULT_INVOKECALLBACK_OFFSET UNITYSDK_OFFSET(0x186D10D0)
#define SYSTEM_NET_LAZYASYNCRESULT_LAZILYCREATEEVENT_OFFSET UNITYSDK_OFFSET(0x186F7670)
#define SYSTEM_NET_LAZYASYNCRESULT_PROTECTEDINVOKECALLBACK_OFFSET UNITYSDK_OFFSET(0x186F78B0)
#define SYSTEM_NET_LAZYASYNCRESULT_WAITFORCOMPLETION_OFFSET UNITYSDK_OFFSET(0x186F7D80)
#define SYSTEM_NET_LAZYASYNCRESULT_WORKERTHREADCOMPLETE_OFFSET UNITYSDK_OFFSET(0x186F7CE0)
#define SYSTEM_NET_LAZYASYNCRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x186CFE90)

namespace System::Net
{
	inline static constexpr unsigned int LazyAsyncResult_TypeDefinitionIndex = 2768;

	class LazyAsyncResult : public ::System::Object
	{
	public:
		static ::System::Net::LazyAsyncResult_ThreadContext** StaticGet_t_ThreadContext()
		{
			return (::System::Net::LazyAsyncResult_ThreadContext**)Il2CppClass::FromTypeDefinitionIndex(LazyAsyncResult_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::Object* m_Event; // 0x10
		::System::Object* m_Result; // 0x18
		::System::Object* m_AsyncState; // 0x20
		::System::AsyncCallback* m_AsyncCallback; // 0x28
		::System::Object* m_AsyncObject; // 0x30
		::System::Boolean m_UserEvent; // 0x38
		::System::Int32 m_IntCompleted; // 0x3C

		::System::Void _ctor(::System::Object* myObject, ::System::Object* myState, ::System::AsyncCallback* myCallBack)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::AsyncCallback*))((::PBYTE)hIl2Cpp + SYSTEM_NET_LAZYASYNCRESULT__CTOR_OFFSET))(this, myObject, myState, myCallBack);
		}

		static ::System::Net::LazyAsyncResult_ThreadContext* get_CurrentThreadContext()
		{
			return ((::System::Net::LazyAsyncResult_ThreadContext*(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_LAZYASYNCRESULT_GET_CURRENTTHREADCONTEXT_OFFSET))();
		}

		::System::Object* get_AsyncObject()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_LAZYASYNCRESULT_GET_ASYNCOBJECT_OFFSET))(this);
		}

		::System::Object* get_AsyncState()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_LAZYASYNCRESULT_GET_ASYNCSTATE_OFFSET))(this);
		}

		::System::Threading::WaitHandle* get_AsyncWaitHandle()
		{
			return ((::System::Threading::WaitHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_LAZYASYNCRESULT_GET_ASYNCWAITHANDLE_OFFSET))(this);
		}

		::System::Boolean LazilyCreateEvent(::System::Threading::ManualResetEvent*& waitHandle)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Threading::ManualResetEvent*&))((::PBYTE)hIl2Cpp + SYSTEM_NET_LAZYASYNCRESULT_LAZILYCREATEEVENT_OFFSET))(this, waitHandle);
		}

		::System::Boolean get_CompletedSynchronously()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_LAZYASYNCRESULT_GET_COMPLETEDSYNCHRONOUSLY_OFFSET))(this);
		}

		::System::Boolean get_IsCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_LAZYASYNCRESULT_GET_ISCOMPLETED_OFFSET))(this);
		}

		::System::Boolean get_InternalPeekCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_LAZYASYNCRESULT_GET_INTERNALPEEKCOMPLETED_OFFSET))(this);
		}

		::System::Void ProtectedInvokeCallback(::System::Object* result, ::System::IntPtr userToken)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_NET_LAZYASYNCRESULT_PROTECTEDINVOKECALLBACK_OFFSET))(this, result, userToken);
		}

		::System::Void InvokeCallback(::System::Object* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_LAZYASYNCRESULT_INVOKECALLBACK_OFFSET))(this, result);
		}

		::System::Void Complete(::System::IntPtr userToken)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_NET_LAZYASYNCRESULT_COMPLETE_OFFSET))(this, userToken);
		}

		::System::Void WorkerThreadComplete(::System::Object* state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_LAZYASYNCRESULT_WORKERTHREADCOMPLETE_OFFSET))(this, state);
		}

		::System::Void Cleanup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_LAZYASYNCRESULT_CLEANUP_OFFSET))(this);
		}

		::System::Object* InternalWaitForCompletion()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_LAZYASYNCRESULT_INTERNALWAITFORCOMPLETION_OFFSET))(this);
		}

		::System::Object* WaitForCompletion(::System::Boolean snap)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_LAZYASYNCRESULT_WAITFORCOMPLETION_OFFSET))(this, snap);
		}
	};
}
