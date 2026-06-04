#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class AsyncCallback; }
namespace System::Net { class LazyAsyncResult_ThreadContext; }
namespace System::Threading { class ManualResetEvent; }
namespace System::Threading { class WaitHandle; }

#define SYSTEM_NET_LAZYASYNCRESULT_CLEANUP_OFFSET UNITYSDK_OFFSET(0x1AF96F20)
#define SYSTEM_NET_LAZYASYNCRESULT_COMPLETE_OFFSET UNITYSDK_OFFSET(0x1AF96C70)
#define SYSTEM_NET_LAZYASYNCRESULT_GET_ASYNCOBJECT_OFFSET UNITYSDK_OFFSET(0x1AF96790)
#define SYSTEM_NET_LAZYASYNCRESULT_GET_ASYNCSTATE_OFFSET UNITYSDK_OFFSET(0x1AF967A0)
#define SYSTEM_NET_LAZYASYNCRESULT_GET_ASYNCWAITHANDLE_OFFSET UNITYSDK_OFFSET(0x1AF967B0)
#define SYSTEM_NET_LAZYASYNCRESULT_GET_COMPLETEDSYNCHRONOUSLY_OFFSET UNITYSDK_OFFSET(0x1AF96A40)
#define SYSTEM_NET_LAZYASYNCRESULT_GET_CURRENTTHREADCONTEXT_OFFSET UNITYSDK_OFFSET(0x1AF966C0)
#define SYSTEM_NET_LAZYASYNCRESULT_GET_INTERNALPEEKCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1AF96A30)
#define SYSTEM_NET_LAZYASYNCRESULT_GET_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1AF72180)
#define SYSTEM_NET_LAZYASYNCRESULT_INTERNALWAITFORCOMPLETION_OFFSET UNITYSDK_OFFSET(0x1AF70750)
#define SYSTEM_NET_LAZYASYNCRESULT_INVOKECALLBACK_OFFSET UNITYSDK_OFFSET(0x1AF71410)
#define SYSTEM_NET_LAZYASYNCRESULT_LAZILYCREATEEVENT_OFFSET UNITYSDK_OFFSET(0x1AF96830)
#define SYSTEM_NET_LAZYASYNCRESULT_PROTECTEDINVOKECALLBACK_OFFSET UNITYSDK_OFFSET(0x1AF96A60)
#define SYSTEM_NET_LAZYASYNCRESULT_WAITFORCOMPLETION_OFFSET UNITYSDK_OFFSET(0x1AF96F30)
#define SYSTEM_NET_LAZYASYNCRESULT_WORKERTHREADCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1AF96E90)
#define SYSTEM_NET_LAZYASYNCRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF70190)

namespace System::Net
{
	inline static constexpr unsigned int LazyAsyncResult_TypeDefinitionIndex = 2769;

	class LazyAsyncResult : public ::System::Object
	{
	public:
		static ::System::Net::LazyAsyncResult_ThreadContext** StaticGet_t_ThreadContext()
		{
			return (::System::Net::LazyAsyncResult_ThreadContext**)Il2CppClass::FromTypeDefinitionIndex(LazyAsyncResult_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::Object* m_AsyncObject; // 0x10
		::System::AsyncCallback* m_AsyncCallback; // 0x18
		::System::Object* m_Event; // 0x20
		::System::Object* m_AsyncState; // 0x28
		::System::Object* m_Result; // 0x30
		::System::Int32 m_IntCompleted; // 0x38
		::System::Boolean m_UserEvent; // 0x3C

		::System::Void _ctor(::System::Object* a1, ::System::Object* a2, ::System::AsyncCallback* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::AsyncCallback*))((::PBYTE)hIl2Cpp + SYSTEM_NET_LAZYASYNCRESULT__CTOR_OFFSET))(this, a1, a2, a3);
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

		::System::Boolean LazilyCreateEvent(::System::Threading::ManualResetEvent*& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Threading::ManualResetEvent*&))((::PBYTE)hIl2Cpp + SYSTEM_NET_LAZYASYNCRESULT_LAZILYCREATEEVENT_OFFSET))(this, a1);
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

		::System::Void ProtectedInvokeCallback(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_NET_LAZYASYNCRESULT_PROTECTEDINVOKECALLBACK_OFFSET))(this, a1, a2);
		}

		::System::Void InvokeCallback(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_LAZYASYNCRESULT_INVOKECALLBACK_OFFSET))(this, a1);
		}

		::System::Void Complete(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_NET_LAZYASYNCRESULT_COMPLETE_OFFSET))(this, a1);
		}

		::System::Void WorkerThreadComplete(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_LAZYASYNCRESULT_WORKERTHREADCOMPLETE_OFFSET))(this, a1);
		}

		::System::Void Cleanup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_LAZYASYNCRESULT_CLEANUP_OFFSET))(this);
		}

		::System::Object* InternalWaitForCompletion()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_LAZYASYNCRESULT_INTERNALWAITFORCOMPLETION_OFFSET))(this);
		}

		::System::Object* WaitForCompletion(::System::Boolean a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_LAZYASYNCRESULT_WAITFORCOMPLETION_OFFSET))(this, a1);
		}
	};
}
