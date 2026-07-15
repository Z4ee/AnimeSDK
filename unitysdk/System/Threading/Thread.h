#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/ConstrainedExecution/CriticalFinalizerObject.h"
#include "unitysdk/System/Threading/ExecutionContext_Reader.h"
#include "unitysdk/System/Threading/StackCrawlMark.h"
#include "unitysdk/System/Threading/ThreadPriority.h"
#include "unitysdk/System/Threading/ThreadState.h"

namespace System { class Delegate; }
namespace System { class LocalDataStoreHolder; }
namespace System { class LocalDataStoreMgr; }
namespace System { class LocalDataStoreSlot; }
namespace System { class MulticastDelegate; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Globalization { class CultureInfo; }
namespace System::Runtime::Remoting::Contexts { class Context; }
namespace System::Security::Principal { class IPrincipal; }
namespace System::Threading { class ExecutionContext; }
namespace System::Threading { class InternalThread; }
namespace System::Threading { class ParameterizedThreadStart; }
namespace System::Threading { class ThreadStart; }
namespace System::Threading { template <typename T> class AsyncLocal_1; }

#define SYSTEM_THREADING_THREAD_ABORT_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1A738170)
#define SYSTEM_THREADING_THREAD_ABORT_OFFSET UNITYSDK_OFFSET(0x1A738180)
#define SYSTEM_THREADING_THREAD_ALLOCATEDATASLOT_OFFSET UNITYSDK_OFFSET(0x1A737570)
#define SYSTEM_THREADING_THREAD_BEGINCRITICALREGION_OFFSET UNITYSDK_OFFSET(0x1A738220)
#define SYSTEM_THREADING_THREAD_CLRSTATE_OFFSET UNITYSDK_OFFSET(0x1A7380C0)
#define SYSTEM_THREADING_THREAD_CONSTRUCTINTERNALTHREAD_OFFSET UNITYSDK_OFFSET(0x1A737D10)
#define SYSTEM_THREADING_THREAD_ENDCRITICALREGION_OFFSET UNITYSDK_OFFSET(0x1A7382C0)
#define SYSTEM_THREADING_THREAD_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A737E80)
#define SYSTEM_THREADING_THREAD_GETCURRENTCULTURENOAPPX_OFFSET UNITYSDK_OFFSET(0x1A737BE0)
#define SYSTEM_THREADING_THREAD_GETCURRENTTHREAD_OFFSET UNITYSDK_OFFSET(0x1A737D80)
#define SYSTEM_THREADING_THREAD_GETCURRENTUICULTURENOAPPX_OFFSET UNITYSDK_OFFSET(0x1A7379A0)
#define SYSTEM_THREADING_THREAD_GETDATA_OFFSET UNITYSDK_OFFSET(0x1A737640)
#define SYSTEM_THREADING_THREAD_GETDOMAINID_OFFSET UNITYSDK_OFFSET(0x1A737E30)
#define SYSTEM_THREADING_THREAD_GETEXECUTIONCONTEXTREADER_OFFSET UNITYSDK_OFFSET(0x1A7371B0)
#define SYSTEM_THREADING_THREAD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A738360)
#define SYSTEM_THREADING_THREAD_GETMUTABLEEXECUTIONCONTEXT_OFFSET UNITYSDK_OFFSET(0x1A7371E0)
#define SYSTEM_THREADING_THREAD_GETPROCESSDEFAULTSTACKSIZE_OFFSET UNITYSDK_OFFSET(0x1A7374E0)
#define SYSTEM_THREADING_THREAD_GETSTATE_OFFSET UNITYSDK_OFFSET(0x1A737F50)
#define SYSTEM_THREADING_THREAD_GET_CURRENTCONTEXT_OFFSET UNITYSDK_OFFSET(0x1A737D50)
#define SYSTEM_THREADING_THREAD_GET_CURRENTCULTURE_OFFSET UNITYSDK_OFFSET(0x1A737AC0)
#define SYSTEM_THREADING_THREAD_GET_CURRENTTHREADID_OFFSET UNITYSDK_OFFSET(0x1A737DB0)
#define SYSTEM_THREADING_THREAD_GET_CURRENTTHREAD_OFFSET UNITYSDK_OFFSET(0x1A72EE10)
#define SYSTEM_THREADING_THREAD_GET_CURRENTUICULTURE_OFFSET UNITYSDK_OFFSET(0x1A737880)
#define SYSTEM_THREADING_THREAD_GET_EXECUTIONCONTEXTBELONGSTOCURRENTSCOPE_OFFSET UNITYSDK_OFFSET(0x1A7371C0)
#define SYSTEM_THREADING_THREAD_GET_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1A737D20)
#define SYSTEM_THREADING_THREAD_GET_ISALIVE_OFFSET UNITYSDK_OFFSET(0x1A737ED0)
#define SYSTEM_THREADING_THREAD_GET_ISTHREADPOOLTHREADINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A737E90)
#define SYSTEM_THREADING_THREAD_GET_ISTHREADPOOLTHREAD_OFFSET UNITYSDK_OFFSET(0x1A736310)
#define SYSTEM_THREADING_THREAD_GET_LOCALDATASTOREMANAGER_OFFSET UNITYSDK_OFFSET(0x1A7375E0)
#define SYSTEM_THREADING_THREAD_GET_MANAGEDTHREADID_OFFSET UNITYSDK_OFFSET(0x1A7381E0)
#define SYSTEM_THREADING_THREAD_GET_THREADSTATE_OFFSET UNITYSDK_OFFSET(0x1A72EE80)
#define SYSTEM_THREADING_THREAD_JOININTERNAL_OFFSET UNITYSDK_OFFSET(0x1A7373C0)
#define SYSTEM_THREADING_THREAD_JOIN_1_OFFSET UNITYSDK_OFFSET(0x1A7373E0)
#define SYSTEM_THREADING_THREAD_JOIN_OFFSET UNITYSDK_OFFSET(0x1A7373D0)
#define SYSTEM_THREADING_THREAD_MEMORYBARRIER_OFFSET UNITYSDK_OFFSET(0x1A737D00)
#define SYSTEM_THREADING_THREAD_SETDATA_OFFSET UNITYSDK_OFFSET(0x1A737760)
#define SYSTEM_THREADING_THREAD_SETEXECUTIONCONTEXT_1_OFFSET UNITYSDK_OFFSET(0x1A737230)
#define SYSTEM_THREADING_THREAD_SETEXECUTIONCONTEXT_OFFSET UNITYSDK_OFFSET(0x1A737220)
#define SYSTEM_THREADING_THREAD_SETNAME_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1A738130)
#define SYSTEM_THREADING_THREAD_SETPRIORITYNATIVE_OFFSET UNITYSDK_OFFSET(0x1A737300)
#define SYSTEM_THREADING_THREAD_SETSTARTHELPER_OFFSET UNITYSDK_OFFSET(0x1A736F00)
#define SYSTEM_THREADING_THREAD_SETSTART_OFFSET UNITYSDK_OFFSET(0x1A737530)
#define SYSTEM_THREADING_THREAD_SETSTATE_OFFSET UNITYSDK_OFFSET(0x1A738060)
#define SYSTEM_THREADING_THREAD_SET_EXECUTIONCONTEXTBELONGSTOCURRENTSCOPE_OFFSET UNITYSDK_OFFSET(0x1A7371D0)
#define SYSTEM_THREADING_THREAD_SET_ISBACKGROUND_OFFSET UNITYSDK_OFFSET(0x1A736980)
#define SYSTEM_THREADING_THREAD_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1A738140)
#define SYSTEM_THREADING_THREAD_SET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x1A737240)
#define SYSTEM_THREADING_THREAD_SLEEPINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A737460)
#define SYSTEM_THREADING_THREAD_SLEEP_OFFSET UNITYSDK_OFFSET(0x1A737470)
#define SYSTEM_THREADING_THREAD_SPINWAIT_NOP_OFFSET UNITYSDK_OFFSET(0x1A7381C0)
#define SYSTEM_THREADING_THREAD_SPINWAIT_OFFSET UNITYSDK_OFFSET(0x1A72EC60)
#define SYSTEM_THREADING_THREAD_STARTINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A737150)
#define SYSTEM_THREADING_THREAD_START_1_OFFSET UNITYSDK_OFFSET(0x1A736AE0)
#define SYSTEM_THREADING_THREAD_START_2_OFFSET UNITYSDK_OFFSET(0x1A737060)
#define SYSTEM_THREADING_THREAD_START_OFFSET UNITYSDK_OFFSET(0x1A737040)
#define SYSTEM_THREADING_THREAD_SYSTEMMAXSTACKSTIZE_OFFSET UNITYSDK_OFFSET(0x1A7381D0)
#define SYSTEM_THREADING_THREAD_THREAD_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1A737E70)
#define SYSTEM_THREADING_THREAD_VALIDATETHREADSTATE_OFFSET UNITYSDK_OFFSET(0x1A737FB0)
#define SYSTEM_THREADING_THREAD_YIELDINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A7374C0)
#define SYSTEM_THREADING_THREAD_YIELD__OFFSET UNITYSDK_OFFSET(0x1A72EC40)
#define SYSTEM_THREADING_THREAD__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A736930)
#define SYSTEM_THREADING_THREAD__CTOR_OFFSET UNITYSDK_OFFSET(0x1A736EB0)

namespace System::Threading
{
	inline static constexpr unsigned int Thread_TypeDefinitionIndex = 846;

	class Thread : public ::System::Runtime::ConstrainedExecution::CriticalFinalizerObject
	{
	public:
		static ::System::Threading::AsyncLocal_1<::System::Globalization::CultureInfo*>** StaticGet_s_asyncLocalCurrentCulture()
		{
			return (::System::Threading::AsyncLocal_1<::System::Globalization::CultureInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Thread_TypeDefinitionIndex)->GetStaticField(0x219F0);
		}
		static ::System::Threading::AsyncLocal_1<::System::Globalization::CultureInfo*>** StaticGet_s_asyncLocalCurrentUICulture()
		{
			return (::System::Threading::AsyncLocal_1<::System::Globalization::CultureInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Thread_TypeDefinitionIndex)->GetStaticField(0x219F8);
		}
		static ::System::LocalDataStoreMgr** StaticGet_s_LocalDataStoreMgr()
		{
			return (::System::LocalDataStoreMgr**)Il2CppClass::FromTypeDefinitionIndex(Thread_TypeDefinitionIndex)->GetStaticField(0x21A00);
		}
		static ::System::LocalDataStoreHolder** StaticGet_s_LocalDataStore()
		{
			return (::System::LocalDataStoreHolder**)Il2CppClass::FromTypeDefinitionIndex(Thread_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Globalization::CultureInfo** StaticGet_m_CurrentCulture()
		{
			return (::System::Globalization::CultureInfo**)Il2CppClass::FromTypeDefinitionIndex(Thread_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Threading::Thread** StaticGet_current_thread()
		{
			return (::System::Threading::Thread**)Il2CppClass::FromTypeDefinitionIndex(Thread_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Globalization::CultureInfo** StaticGet_m_CurrentUICulture()
		{
			return (::System::Globalization::CultureInfo**)Il2CppClass::FromTypeDefinitionIndex(Thread_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::Threading::InternalThread* internal_thread; // 0x10
		::System::Object* m_ThreadStartArg; // 0x18
		::System::Object* pending_exception; // 0x20
		::System::Security::Principal::IPrincipal* principal; // 0x28
		::System::Int32 principal_version; // 0x30
		::System::MulticastDelegate* m_Delegate; // 0x38
		::System::Threading::ExecutionContext* m_ExecutionContext; // 0x40
		::System::Boolean m_ExecutionContextBelongsToOuterScope; // 0x48

		::System::Void _ctor(::System::Threading::ThreadStart* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::ThreadStart*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREAD__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::Threading::ParameterizedThreadStart* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::ParameterizedThreadStart*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREAD__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREAD_START_OFFSET))(this);
		}

		::System::Void Start_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREAD_START_1_OFFSET))(this, a1);
		}

		::System::Void Start_2(::System::Threading::StackCrawlMark& a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::StackCrawlMark&))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREAD_START_2_OFFSET))(this, a1);
		}

		::System::Threading::ExecutionContext_Reader GetExecutionContextReader()
		{
			return ((::System::Threading::ExecutionContext_Reader(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREAD_GETEXECUTIONCONTEXTREADER_OFFSET))(this);
		}

		::System::Boolean get_ExecutionContextBelongsToCurrentScope()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREAD_GET_EXECUTIONCONTEXTBELONGSTOCURRENTSCOPE_OFFSET))(this);
		}

		::System::Void set_ExecutionContextBelongsToCurrentScope(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREAD_SET_EXECUTIONCONTEXTBELONGSTOCURRENTSCOPE_OFFSET))(this, a1);
		}

		::System::Threading::ExecutionContext* GetMutableExecutionContext()
		{
			return ((::System::Threading::ExecutionContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREAD_GETMUTABLEEXECUTIONCONTEXT_OFFSET))(this);
		}

		::System::Void SetExecutionContext(::System::Threading::ExecutionContext* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::ExecutionContext*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREAD_SETEXECUTIONCONTEXT_OFFSET))(this, a1, a2);
		}

		::System::Void SetExecutionContext_1(::System::Threading::ExecutionContext_Reader a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::ExecutionContext_Reader, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREAD_SETEXECUTIONCONTEXT_1_OFFSET))(this, a1, a2);
		}

		::System::Void set_Priority(::System::Threading::ThreadPriority a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::ThreadPriority))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREAD_SET_PRIORITY_OFFSET))(this, a1);
		}

		::System::Void SetPriorityNative(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREAD_SETPRIORITYNATIVE_OFFSET))(this, a1);
		}

		::System::Boolean JoinInternal(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREAD_JOININTERNAL_OFFSET))(this, a1);
		}

		::System::Void Join()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREAD_JOIN_OFFSET))(this);
		}

		::System::Boolean Join_1(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREAD_JOIN_1_OFFSET))(this, a1);
		}

		static ::System::Void SleepInternal(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREAD_SLEEPINTERNAL_OFFSET))(a1);
		}

		static ::System::Void Sleep(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREAD_SLEEP_OFFSET))(a1);
		}

		static ::System::Boolean YieldInternal()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREAD_YIELDINTERNAL_OFFSET))();
		}

		static ::System::Boolean Yield_()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREAD_YIELD__OFFSET))();
		}

		::System::Void SetStartHelper(::System::Delegate* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Delegate*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREAD_SETSTARTHELPER_OFFSET))(this, a1, a2);
		}

		static ::System::LocalDataStoreSlot* AllocateDataSlot()
		{
			return ((::System::LocalDataStoreSlot*(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREAD_ALLOCATEDATASLOT_OFFSET))();
		}

		static ::System::Object* GetData(::System::LocalDataStoreSlot* a1)
		{
			return ((::System::Object*(*)(::System::LocalDataStoreSlot*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREAD_GETDATA_OFFSET))(a1);
		}

		static ::System::Void SetData(::System::LocalDataStoreSlot* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::System::LocalDataStoreSlot*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREAD_SETDATA_OFFSET))(a1, a2);
		}

		::System::Globalization::CultureInfo* get_CurrentUICulture()
		{
			return ((::System::Globalization::CultureInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREAD_GET_CURRENTUICULTURE_OFFSET))(this);
		}

		::System::Globalization::CultureInfo* GetCurrentUICultureNoAppX()
		{
			return ((::System::Globalization::CultureInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREAD_GETCURRENTUICULTURENOAPPX_OFFSET))(this);
		}

		::System::Globalization::CultureInfo* get_CurrentCulture()
		{
			return ((::System::Globalization::CultureInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREAD_GET_CURRENTCULTURE_OFFSET))(this);
		}

		::System::Globalization::CultureInfo* GetCurrentCultureNoAppX()
		{
			return ((::System::Globalization::CultureInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREAD_GETCURRENTCULTURENOAPPX_OFFSET))(this);
		}

		static ::System::Void MemoryBarrier()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREAD_MEMORYBARRIER_OFFSET))();
		}

		static ::System::LocalDataStoreMgr* get_LocalDataStoreManager()
		{
			return ((::System::LocalDataStoreMgr*(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREAD_GET_LOCALDATASTOREMANAGER_OFFSET))();
		}

		::System::Void ConstructInternalThread()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREAD_CONSTRUCTINTERNALTHREAD_OFFSET))(this);
		}

		::System::Threading::InternalThread* get_Internal()
		{
			return ((::System::Threading::InternalThread*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREAD_GET_INTERNAL_OFFSET))(this);
		}

		static ::System::Runtime::Remoting::Contexts::Context* get_CurrentContext()
		{
			return ((::System::Runtime::Remoting::Contexts::Context*(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREAD_GET_CURRENTCONTEXT_OFFSET))();
		}

		static ::System::Threading::Thread* GetCurrentThread()
		{
			return ((::System::Threading::Thread*(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREAD_GETCURRENTTHREAD_OFFSET))();
		}

		static ::System::Threading::Thread* get_CurrentThread()
		{
			return ((::System::Threading::Thread*(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREAD_GET_CURRENTTHREAD_OFFSET))();
		}

		static ::System::Int32 get_CurrentThreadId()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREAD_GET_CURRENTTHREADID_OFFSET))();
		}

		static ::System::Int32 GetDomainID()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREAD_GETDOMAINID_OFFSET))();
		}

		::System::IntPtr Thread_internal(::System::MulticastDelegate* a1)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::MulticastDelegate*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREAD_THREAD_INTERNAL_OFFSET))(this, a1);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREAD_FINALIZE_OFFSET))(this);
		}

		::System::Boolean get_IsThreadPoolThread()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREAD_GET_ISTHREADPOOLTHREAD_OFFSET))(this);
		}

		::System::Boolean get_IsThreadPoolThreadInternal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREAD_GET_ISTHREADPOOLTHREADINTERNAL_OFFSET))(this);
		}

		::System::Boolean get_IsAlive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREAD_GET_ISALIVE_OFFSET))(this);
		}

		::System::Void set_IsBackground(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREAD_SET_ISBACKGROUND_OFFSET))(this, a1);
		}

		static ::System::Void SetName_internal(::System::Threading::InternalThread* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Threading::InternalThread*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREAD_SETNAME_INTERNAL_OFFSET))(a1, a2);
		}

		::System::Void set_Name(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREAD_SET_NAME_OFFSET))(this, a1);
		}

		::System::Threading::ThreadState get_ThreadState()
		{
			return ((::System::Threading::ThreadState(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREAD_GET_THREADSTATE_OFFSET))(this);
		}

		static ::System::Void Abort_internal(::System::Threading::InternalThread* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::System::Threading::InternalThread*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREAD_ABORT_INTERNAL_OFFSET))(a1, a2);
		}

		::System::Void Abort()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREAD_ABORT_OFFSET))(this);
		}

		static ::System::Void SpinWait_nop()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREAD_SPINWAIT_NOP_OFFSET))();
		}

		static ::System::Void SpinWait(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREAD_SPINWAIT_OFFSET))(a1);
		}

		::System::Void StartInternal(::System::Security::Principal::IPrincipal* a1, ::System::Threading::StackCrawlMark& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Principal::IPrincipal*, ::System::Threading::StackCrawlMark&))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREAD_STARTINTERNAL_OFFSET))(this, a1, a2);
		}

		static ::System::Void SetState(::System::Threading::InternalThread* a1, ::System::Threading::ThreadState a2)
		{
			return ((::System::Void(*)(::System::Threading::InternalThread*, ::System::Threading::ThreadState))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREAD_SETSTATE_OFFSET))(a1, a2);
		}

		static ::System::Void ClrState(::System::Threading::InternalThread* a1, ::System::Threading::ThreadState a2)
		{
			return ((::System::Void(*)(::System::Threading::InternalThread*, ::System::Threading::ThreadState))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREAD_CLRSTATE_OFFSET))(a1, a2);
		}

		static ::System::Threading::ThreadState GetState(::System::Threading::InternalThread* a1)
		{
			return ((::System::Threading::ThreadState(*)(::System::Threading::InternalThread*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREAD_GETSTATE_OFFSET))(a1);
		}

		static ::System::Int32 SystemMaxStackStize()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREAD_SYSTEMMAXSTACKSTIZE_OFFSET))();
		}

		static ::System::Int32 GetProcessDefaultStackSize(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREAD_GETPROCESSDEFAULTSTACKSIZE_OFFSET))(a1);
		}

		::System::Void SetStart(::System::MulticastDelegate* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::MulticastDelegate*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREAD_SETSTART_OFFSET))(this, a1, a2);
		}

		::System::Int32 get_ManagedThreadId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREAD_GET_MANAGEDTHREADID_OFFSET))(this);
		}

		static ::System::Void BeginCriticalRegion()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREAD_BEGINCRITICALREGION_OFFSET))();
		}

		static ::System::Void EndCriticalRegion()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREAD_ENDCRITICALREGION_OFFSET))();
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREAD_GETHASHCODE_OFFSET))(this);
		}

		::System::Threading::ThreadState ValidateThreadState()
		{
			return ((::System::Threading::ThreadState(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREAD_VALIDATETHREADSTATE_OFFSET))(this);
		}
	};
}
