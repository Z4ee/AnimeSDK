#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class AsyncCallback; }
namespace System::Net { class LazyAsyncResult_ThreadContext; }
namespace System::Threading { class ManualResetEvent; }
namespace System::Threading { class WaitHandle; }

#define SYSTEM_NET_LAZYASYNCRESULT_CLEANUP_OFFSET UNITYSDK_OFFSET(0x1E9797C0)
#define SYSTEM_NET_LAZYASYNCRESULT_COMPLETE_OFFSET UNITYSDK_OFFSET(0x1E9795B0)
#define SYSTEM_NET_LAZYASYNCRESULT_DEBUGPROTECTSTATE_OFFSET UNITYSDK_OFFSET(0x1E979230)
#define SYSTEM_NET_LAZYASYNCRESULT_GET_ASYNCCALLBACK_OFFSET UNITYSDK_OFFSET(0x1E978FA0)
#define SYSTEM_NET_LAZYASYNCRESULT_GET_ASYNCOBJECT_OFFSET UNITYSDK_OFFSET(0x1E978F80)
#define SYSTEM_NET_LAZYASYNCRESULT_GET_ASYNCSTATE_OFFSET UNITYSDK_OFFSET(0x1E978F90)
#define SYSTEM_NET_LAZYASYNCRESULT_GET_ASYNCWAITHANDLE_OFFSET UNITYSDK_OFFSET(0x1E978FC0)
#define SYSTEM_NET_LAZYASYNCRESULT_GET_COMPLETEDSYNCHRONOUSLY_OFFSET UNITYSDK_OFFSET(0x1E979240)
#define SYSTEM_NET_LAZYASYNCRESULT_GET_CURRENTTHREADCONTEXT_OFFSET UNITYSDK_OFFSET(0x1E978E00)
#define SYSTEM_NET_LAZYASYNCRESULT_GET_ENDCALLED_OFFSET UNITYSDK_OFFSET(0x1E979320)
#define SYSTEM_NET_LAZYASYNCRESULT_GET_ERRORCODE_OFFSET UNITYSDK_OFFSET(0x1E979340)
#define SYSTEM_NET_LAZYASYNCRESULT_GET_INTERNALPEEKCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1E979220)
#define SYSTEM_NET_LAZYASYNCRESULT_GET_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1E979260)
#define SYSTEM_NET_LAZYASYNCRESULT_GET_RESULT_OFFSET UNITYSDK_OFFSET(0x1E979290)
#define SYSTEM_NET_LAZYASYNCRESULT_INTERNALCLEANUP_OFFSET UNITYSDK_OFFSET(0x1E979A50)
#define SYSTEM_NET_LAZYASYNCRESULT_INTERNALWAITFORCOMPLETION_OFFSET UNITYSDK_OFFSET(0x1E9797D0)
#define SYSTEM_NET_LAZYASYNCRESULT_INVOKECALLBACK_1_OFFSET UNITYSDK_OFFSET(0x1E9795A0)
#define SYSTEM_NET_LAZYASYNCRESULT_INVOKECALLBACK_OFFSET UNITYSDK_OFFSET(0x1E979590)
#define SYSTEM_NET_LAZYASYNCRESULT_LAZILYCREATEEVENT_OFFSET UNITYSDK_OFFSET(0x1E979060)
#define SYSTEM_NET_LAZYASYNCRESULT_PROTECTEDINVOKECALLBACK_OFFSET UNITYSDK_OFFSET(0x1E979360)
#define SYSTEM_NET_LAZYASYNCRESULT_SET_ASYNCCALLBACK_OFFSET UNITYSDK_OFFSET(0x1E978FB0)
#define SYSTEM_NET_LAZYASYNCRESULT_SET_ENDCALLED_OFFSET UNITYSDK_OFFSET(0x1E979330)
#define SYSTEM_NET_LAZYASYNCRESULT_SET_ERRORCODE_OFFSET UNITYSDK_OFFSET(0x1E979350)
#define SYSTEM_NET_LAZYASYNCRESULT_SET_RESULT_OFFSET UNITYSDK_OFFSET(0x1E979310)
#define SYSTEM_NET_LAZYASYNCRESULT_WAITFORCOMPLETION_OFFSET UNITYSDK_OFFSET(0x1E9797E0)
#define SYSTEM_NET_LAZYASYNCRESULT_WORKERTHREADCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1E9797A0)
#define SYSTEM_NET_LAZYASYNCRESULT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E978F50)
#define SYSTEM_NET_LAZYASYNCRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E978EE0)

namespace System::Net
{
	inline static constexpr unsigned int LazyAsyncResult_TypeDefinitionIndex = 3377;

	class LazyAsyncResult : public ::System::Object
	{
	public:
		static ::System::Net::LazyAsyncResult_ThreadContext** StaticGet_t_ThreadContext()
		{
			return (::System::Net::LazyAsyncResult_ThreadContext**)Il2CppClass::FromTypeDefinitionIndex(LazyAsyncResult_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		// static const ::System::Int32 c_HighBit = 0x80000000; // 0x0
		// static const ::System::Int32 c_ForceAsyncCount = 0x32; // 0x0
		::System::Object* m_AsyncObject; // 0x10
		::System::Object* m_Result; // 0x18
		::System::Object* m_Event; // 0x20
		::System::Object* m_AsyncState; // 0x28
		::System::AsyncCallback* m_AsyncCallback; // 0x30
		::System::Int32 m_ErrorCode; // 0x38
		::System::Boolean m_UserEvent; // 0x3C
		::System::Boolean m_EndCalled; // 0x3D
		::System::Int32 m_IntCompleted; // 0x40

		::System::Void _ctor(::System::Object* myObject, ::System::Object* myState, ::System::AsyncCallback* myCallBack)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::AsyncCallback*))((::PBYTE)hIl2Cpp + SYSTEM_NET_LAZYASYNCRESULT__CTOR_OFFSET))(this, myObject, myState, myCallBack);
		}

		::System::Void _ctor_1(::System::Object* myObject, ::System::Object* myState, ::System::AsyncCallback* myCallBack, ::System::Object* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_LAZYASYNCRESULT__CTOR_1_OFFSET))(this, myObject, myState, myCallBack, result);
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

		::System::AsyncCallback* get_AsyncCallback()
		{
			return ((::System::AsyncCallback*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_LAZYASYNCRESULT_GET_ASYNCCALLBACK_OFFSET))(this);
		}

		::System::Void set_AsyncCallback(::System::AsyncCallback* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::AsyncCallback*))((::PBYTE)hIl2Cpp + SYSTEM_NET_LAZYASYNCRESULT_SET_ASYNCCALLBACK_OFFSET))(this, value);
		}

		::System::Threading::WaitHandle* get_AsyncWaitHandle()
		{
			return ((::System::Threading::WaitHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_LAZYASYNCRESULT_GET_ASYNCWAITHANDLE_OFFSET))(this);
		}

		::System::Boolean LazilyCreateEvent(::System::Threading::ManualResetEvent*& waitHandle)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Threading::ManualResetEvent*&))((::PBYTE)hIl2Cpp + SYSTEM_NET_LAZYASYNCRESULT_LAZILYCREATEEVENT_OFFSET))(this, waitHandle);
		}

		::System::Void DebugProtectState(::System::Boolean protect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_LAZYASYNCRESULT_DEBUGPROTECTSTATE_OFFSET))(this, protect);
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

		::System::Object* get_Result()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_LAZYASYNCRESULT_GET_RESULT_OFFSET))(this);
		}

		::System::Void set_Result(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_LAZYASYNCRESULT_SET_RESULT_OFFSET))(this, value);
		}

		::System::Boolean get_EndCalled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_LAZYASYNCRESULT_GET_ENDCALLED_OFFSET))(this);
		}

		::System::Void set_EndCalled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_LAZYASYNCRESULT_SET_ENDCALLED_OFFSET))(this, value);
		}

		::System::Int32 get_ErrorCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_LAZYASYNCRESULT_GET_ERRORCODE_OFFSET))(this);
		}

		::System::Void set_ErrorCode(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_LAZYASYNCRESULT_SET_ERRORCODE_OFFSET))(this, value);
		}

		::System::Void ProtectedInvokeCallback(::System::Object* result, ::System::IntPtr userToken)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_NET_LAZYASYNCRESULT_PROTECTEDINVOKECALLBACK_OFFSET))(this, result, userToken);
		}

		::System::Void InvokeCallback(::System::Object* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_LAZYASYNCRESULT_INVOKECALLBACK_OFFSET))(this, result);
		}

		::System::Void InvokeCallback_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_LAZYASYNCRESULT_INVOKECALLBACK_1_OFFSET))(this);
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

		::System::Void InternalCleanup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_LAZYASYNCRESULT_INTERNALCLEANUP_OFFSET))(this);
		}
	};
}
