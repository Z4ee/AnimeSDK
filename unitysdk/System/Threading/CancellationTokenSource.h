#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationCallbackCoreWorkArguments.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Threading/CancellationTokenRegistration.h"
#include "unitysdk/System/TimeSpan.h"

namespace System { template <typename T> class Action_1; }
namespace System::Threading { class CancellationCallbackInfo; }
namespace System::Threading { class ExecutionContext; }
namespace System::Threading { class ManualResetEvent; }
namespace System::Threading { class SynchronizationContext; }
namespace System::Threading { class Timer; }
namespace System::Threading { class TimerCallback; }
namespace System::Threading { template <typename T> class SparselyPopulatedArray_1; }

#define SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_CANCELAFTER_1_OFFSET UNITYSDK_OFFSET(0x16230E70)
#define SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_CANCELAFTER_OFFSET UNITYSDK_OFFSET(0x16230DE0)
#define SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_CANCELLATIONCALLBACKCOREWORK_OFFSET UNITYSDK_OFFSET(0x16232090)
#define SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_CANCELLATIONCALLBACKCOREWORK_ONSYNCCONTEXT_OFFSET UNITYSDK_OFFSET(0x162321F0)
#define SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_CANCEL_1_OFFSET UNITYSDK_OFFSET(0x16230AC0)
#define SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_CANCEL_OFFSET UNITYSDK_OFFSET(0x162308B0)
#define SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_CREATELINKEDTOKENSOURCE_OFFSET UNITYSDK_OFFSET(0x162322B0)
#define SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x16231220)
#define SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x162311D0)
#define SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_EXECUTECALLBACKHANDLERS_OFFSET UNITYSDK_OFFSET(0x16231470)
#define SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_GET_CANBECANCELED_OFFSET UNITYSDK_OFFSET(0x1622F5E0)
#define SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_GET_EXECUTINGCALLBACK_OFFSET UNITYSDK_OFFSET(0x16230A70)
#define SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_GET_ISCANCELLATIONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x162306D0)
#define SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_GET_ISCANCELLATIONREQUESTED_OFFSET UNITYSDK_OFFSET(0x1622F5B0)
#define SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_GET_ISDISPOSED_OFFSET UNITYSDK_OFFSET(0x16230940)
#define SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_GET_THREADIDEXECUTINGCALLBACKS_OFFSET UNITYSDK_OFFSET(0x162306E0)
#define SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_GET_TOKEN_OFFSET UNITYSDK_OFFSET(0x16230960)
#define SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_INTERNALGETSTATICSOURCE_OFFSET UNITYSDK_OFFSET(0x1622FFF0)
#define SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_INTERNALREGISTER_OFFSET UNITYSDK_OFFSET(0x1622FBC0)
#define SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_LINKEDTOKENCANCELDELEGATE_OFFSET UNITYSDK_OFFSET(0x16230800)
#define SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_NOTIFYCANCELLATION_OFFSET UNITYSDK_OFFSET(0x16230B50)
#define SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_SET_THREADIDEXECUTINGCALLBACKS_OFFSET UNITYSDK_OFFSET(0x16230950)
#define SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_THROWIFDISPOSED_OFFSET UNITYSDK_OFFSET(0x162309F0)
#define SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_THROWOBJECTDISPOSEDEXCEPTION_OFFSET UNITYSDK_OFFSET(0x16231390)
#define SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_TIMERCALLBACKLOGIC_OFFSET UNITYSDK_OFFSET(0x162310F0)
#define SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_WAITFORCALLBACKTOCOMPLETE_OFFSET UNITYSDK_OFFSET(0x162306F0)
#define SYSTEM_THREADING_CANCELLATIONTOKENSOURCE__CCTOR_OFFSET UNITYSDK_OFFSET(0x16232590)
#define SYSTEM_THREADING_CANCELLATIONTOKENSOURCE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x16230AA0)
#define SYSTEM_THREADING_CANCELLATIONTOKENSOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x16230A80)

namespace System::Threading
{
	inline static constexpr unsigned int CancellationTokenSource_TypeDefinitionIndex = 796;

	class CancellationTokenSource : public ::System::Object
	{
	public:
		static ::System::Threading::TimerCallback** StaticGet_s_timerCallback()
		{
			return (::System::Threading::TimerCallback**)Il2CppClass::FromTypeDefinitionIndex(CancellationTokenSource_TypeDefinitionIndex)->GetStaticField(0x6370);
		}
		static ::System::Threading::CancellationTokenSource** StaticGet__staticSource_Set()
		{
			return (::System::Threading::CancellationTokenSource**)Il2CppClass::FromTypeDefinitionIndex(CancellationTokenSource_TypeDefinitionIndex)->GetStaticField(0x6378);
		}
		static ::System::Threading::CancellationTokenSource** StaticGet__staticSource_NotCancelable()
		{
			return (::System::Threading::CancellationTokenSource**)Il2CppClass::FromTypeDefinitionIndex(CancellationTokenSource_TypeDefinitionIndex)->GetStaticField(0x6380);
		}
		static ::System::Action_1<::System::Object*>** StaticGet_s_LinkedTokenCancelDelegate()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(CancellationTokenSource_TypeDefinitionIndex)->GetStaticField(0x6388);
		}
		static ::System::Int32* StaticGet_s_nLists()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CancellationTokenSource_TypeDefinitionIndex)->GetStaticField(0x3B80);
		}
		::System::Threading::Timer* m_timer; // 0x10
		::System::Threading::CancellationCallbackInfo* m_executingCallback; // 0x18
		::Il2CppArray<::System::Threading::CancellationTokenRegistration>* m_linkingRegistrations; // 0x20
		::Il2CppArray<::System::Threading::SparselyPopulatedArray_1<::System::Threading::CancellationCallbackInfo*>*>* m_registeredCallbacksLists; // 0x28
		::System::Threading::ManualResetEvent* m_kernelEvent; // 0x30
		::System::Int32 m_threadIDExecutingCallbacks; // 0x38
		::System::Boolean m_disposed; // 0x3C
		::System::Int32 m_state; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKENSOURCE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Boolean set)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKENSOURCE__CTOR_1_OFFSET))(this, set);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKENSOURCE__CCTOR_OFFSET))();
		}

		static ::System::Void LinkedTokenCancelDelegate(::System::Object* source)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_LINKEDTOKENCANCELDELEGATE_OFFSET))(source);
		}

		::System::Boolean get_IsCancellationRequested()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_GET_ISCANCELLATIONREQUESTED_OFFSET))(this);
		}

		::System::Boolean get_IsCancellationCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_GET_ISCANCELLATIONCOMPLETED_OFFSET))(this);
		}

		::System::Boolean get_IsDisposed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_GET_ISDISPOSED_OFFSET))(this);
		}

		::System::Void set_ThreadIDExecutingCallbacks(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_SET_THREADIDEXECUTINGCALLBACKS_OFFSET))(this, value);
		}

		::System::Int32 get_ThreadIDExecutingCallbacks()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_GET_THREADIDEXECUTINGCALLBACKS_OFFSET))(this);
		}

		::System::Threading::CancellationToken get_Token()
		{
			return ((::System::Threading::CancellationToken(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_GET_TOKEN_OFFSET))(this);
		}

		::System::Boolean get_CanBeCanceled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_GET_CANBECANCELED_OFFSET))(this);
		}

		::System::Threading::CancellationCallbackInfo* get_ExecutingCallback()
		{
			return ((::System::Threading::CancellationCallbackInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_GET_EXECUTINGCALLBACK_OFFSET))(this);
		}

		::System::Void Cancel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_CANCEL_OFFSET))(this);
		}

		::System::Void Cancel_1(::System::Boolean throwOnFirstException)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_CANCEL_1_OFFSET))(this, throwOnFirstException);
		}

		::System::Void CancelAfter(::System::TimeSpan delay)
		{
			return ((::System::Void(*)(::PVOID, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_CANCELAFTER_OFFSET))(this, delay);
		}

		::System::Void CancelAfter_1(::System::Int32 millisecondsDelay)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_CANCELAFTER_1_OFFSET))(this, millisecondsDelay);
		}

		static ::System::Void TimerCallbackLogic(::System::Object* obj)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_TIMERCALLBACKLOGIC_OFFSET))(obj);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_DISPOSE_1_OFFSET))(this, disposing);
		}

		::System::Void ThrowIfDisposed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_THROWIFDISPOSED_OFFSET))(this);
		}

		static ::System::Void ThrowObjectDisposedException()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_THROWOBJECTDISPOSEDEXCEPTION_OFFSET))();
		}

		static ::System::Threading::CancellationTokenSource* InternalGetStaticSource(::System::Boolean set)
		{
			return ((::System::Threading::CancellationTokenSource*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_INTERNALGETSTATICSOURCE_OFFSET))(set);
		}

		::System::Threading::CancellationTokenRegistration InternalRegister(::System::Action_1<::System::Object*>* callback, ::System::Object* stateForCallback, ::System::Threading::SynchronizationContext* targetSyncContext, ::System::Threading::ExecutionContext* executionContext)
		{
			return ((::System::Threading::CancellationTokenRegistration(*)(::PVOID, ::System::Action_1<::System::Object*>*, ::System::Object*, ::System::Threading::SynchronizationContext*, ::System::Threading::ExecutionContext*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_INTERNALREGISTER_OFFSET))(this, callback, stateForCallback, targetSyncContext, executionContext);
		}

		::System::Void NotifyCancellation(::System::Boolean throwOnFirstException)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_NOTIFYCANCELLATION_OFFSET))(this, throwOnFirstException);
		}

		::System::Void ExecuteCallbackHandlers(::System::Boolean throwOnFirstException)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_EXECUTECALLBACKHANDLERS_OFFSET))(this, throwOnFirstException);
		}

		::System::Void CancellationCallbackCoreWork_OnSyncContext(::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_CANCELLATIONCALLBACKCOREWORK_ONSYNCCONTEXT_OFFSET))(this, obj);
		}

		::System::Void CancellationCallbackCoreWork(::System::Threading::CancellationCallbackCoreWorkArguments args)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::CancellationCallbackCoreWorkArguments))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_CANCELLATIONCALLBACKCOREWORK_OFFSET))(this, args);
		}

		static ::System::Threading::CancellationTokenSource* CreateLinkedTokenSource(::System::Threading::CancellationToken token1, ::System::Threading::CancellationToken token2)
		{
			return ((::System::Threading::CancellationTokenSource*(*)(::System::Threading::CancellationToken, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_CREATELINKEDTOKENSOURCE_OFFSET))(token1, token2);
		}

		::System::Void WaitForCallbackToComplete(::System::Threading::CancellationCallbackInfo* callbackInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::CancellationCallbackInfo*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_WAITFORCALLBACKTOCOMPLETE_OFFSET))(this, callbackInfo);
		}
	};
}
