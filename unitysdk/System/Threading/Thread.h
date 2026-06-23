#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/ConstrainedExecution/CriticalFinalizerObject.h"
#include "unitysdk/System/Threading/AsyncLocalValueChangedArgs_1.h"
#include "unitysdk/System/Threading/ExecutionContext_Reader.h"
#include "unitysdk/System/Threading/StackCrawlMark.h"
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

#define SYSTEM_THREADING_THREAD_ABORT_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1C2D9090)
#define SYSTEM_THREADING_THREAD_ABORT_OFFSET UNITYSDK_OFFSET(0x1C2D90A0)
#define SYSTEM_THREADING_THREAD_ALLOCATEDATASLOT_OFFSET UNITYSDK_OFFSET(0x1C2D7960)
#define SYSTEM_THREADING_THREAD_ASYNCLOCALSETCURRENTCULTURE_OFFSET UNITYSDK_OFFSET(0x1C2D7160)
#define SYSTEM_THREADING_THREAD_ASYNCLOCALSETCURRENTUICULTURE_OFFSET UNITYSDK_OFFSET(0x1C2D71F0)
#define SYSTEM_THREADING_THREAD_BEGINCRITICALREGION_OFFSET UNITYSDK_OFFSET(0x1C2D9170)
#define SYSTEM_THREADING_THREAD_CLRSTATE_OFFSET UNITYSDK_OFFSET(0x1C2D8F60)
#define SYSTEM_THREADING_THREAD_CONSTRUCTINTERNALTHREAD_OFFSET UNITYSDK_OFFSET(0x1C2D89B0)
#define SYSTEM_THREADING_THREAD_ENDCRITICALREGION_OFFSET UNITYSDK_OFFSET(0x1C2D9240)
#define SYSTEM_THREADING_THREAD_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1C2D8BD0)
#define SYSTEM_THREADING_THREAD_GETCURRENTCULTURENOAPPX_OFFSET UNITYSDK_OFFSET(0x1C2D8600)
#define SYSTEM_THREADING_THREAD_GETCURRENTTHREAD_OFFSET UNITYSDK_OFFSET(0x1C2D8A20)
#define SYSTEM_THREADING_THREAD_GETCURRENTUICULTURENOAPPX_OFFSET UNITYSDK_OFFSET(0x1C2D7F00)
#define SYSTEM_THREADING_THREAD_GETDATA_OFFSET UNITYSDK_OFFSET(0x1C2D7A90)
#define SYSTEM_THREADING_THREAD_GETDOMAINID_OFFSET UNITYSDK_OFFSET(0x1C2D8B80)
#define SYSTEM_THREADING_THREAD_GETEXECUTIONCONTEXTREADER_OFFSET UNITYSDK_OFFSET(0x1C2D7740)
#define SYSTEM_THREADING_THREAD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C2D9310)
#define SYSTEM_THREADING_THREAD_GETMUTABLEEXECUTIONCONTEXT_OFFSET UNITYSDK_OFFSET(0x1C2D7770)
#define SYSTEM_THREADING_THREAD_GETPROCESSDEFAULTSTACKSIZE_OFFSET UNITYSDK_OFFSET(0x1C2D78E0)
#define SYSTEM_THREADING_THREAD_GETSTATE_OFFSET UNITYSDK_OFFSET(0x1C2D8CE0)
#define SYSTEM_THREADING_THREAD_GET_CURRENTCONTEXT_OFFSET UNITYSDK_OFFSET(0x1C2D89F0)
#define SYSTEM_THREADING_THREAD_GET_CURRENTCULTURE_OFFSET UNITYSDK_OFFSET(0x1C2D84C0)
#define SYSTEM_THREADING_THREAD_GET_CURRENTTHREADID_OFFSET UNITYSDK_OFFSET(0x1C2D8AE0)
#define SYSTEM_THREADING_THREAD_GET_CURRENTTHREAD_OFFSET UNITYSDK_OFFSET(0x1C2D8A50)
#define SYSTEM_THREADING_THREAD_GET_CURRENTUICULTURE_OFFSET UNITYSDK_OFFSET(0x1C2D7DC0)
#define SYSTEM_THREADING_THREAD_GET_EXECUTIONCONTEXTBELONGSTOCURRENTSCOPE_OFFSET UNITYSDK_OFFSET(0x1C2D7750)
#define SYSTEM_THREADING_THREAD_GET_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1C2D89C0)
#define SYSTEM_THREADING_THREAD_GET_ISALIVE_OFFSET UNITYSDK_OFFSET(0x1C2D8C60)
#define SYSTEM_THREADING_THREAD_GET_ISBACKGROUND_OFFSET UNITYSDK_OFFSET(0x1C2D8D40)
#define SYSTEM_THREADING_THREAD_GET_ISTHREADPOOLTHREADINTERNAL_OFFSET UNITYSDK_OFFSET(0x1C2D8C20)
#define SYSTEM_THREADING_THREAD_GET_ISTHREADPOOLTHREAD_OFFSET UNITYSDK_OFFSET(0x1C2D8BE0)
#define SYSTEM_THREADING_THREAD_GET_LOCALDATASTOREMANAGER_OFFSET UNITYSDK_OFFSET(0x1C2D7A00)
#define SYSTEM_THREADING_THREAD_GET_MANAGEDTHREADID_OFFSET UNITYSDK_OFFSET(0x1C2D9130)
#define SYSTEM_THREADING_THREAD_GET_THREADSTATE_OFFSET UNITYSDK_OFFSET(0x1C2D9010)
#define SYSTEM_THREADING_THREAD_JOININTERNAL_OFFSET UNITYSDK_OFFSET(0x1C2D77F0)
#define SYSTEM_THREADING_THREAD_JOIN_OFFSET UNITYSDK_OFFSET(0x1C2D7800)
#define SYSTEM_THREADING_THREAD_MEMORYBARRIER_OFFSET UNITYSDK_OFFSET(0x1C2D89A0)
#define SYSTEM_THREADING_THREAD_NATIVEINITCULTUREACCESSORS_OFFSET UNITYSDK_OFFSET(0x1C2D82B0)
#define SYSTEM_THREADING_THREAD_SETDATA_OFFSET UNITYSDK_OFFSET(0x1C2D7C20)
#define SYSTEM_THREADING_THREAD_SETEXECUTIONCONTEXT_1_OFFSET UNITYSDK_OFFSET(0x1C2D77E0)
#define SYSTEM_THREADING_THREAD_SETEXECUTIONCONTEXT_OFFSET UNITYSDK_OFFSET(0x1C2D77D0)
#define SYSTEM_THREADING_THREAD_SETNAME_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1C2D8FD0)
#define SYSTEM_THREADING_THREAD_SETSTARTHELPER_OFFSET UNITYSDK_OFFSET(0x1C2D7300)
#define SYSTEM_THREADING_THREAD_SETSTART_OFFSET UNITYSDK_OFFSET(0x1C2D7920)
#define SYSTEM_THREADING_THREAD_SETSTATE_OFFSET UNITYSDK_OFFSET(0x1C2D8F00)
#define SYSTEM_THREADING_THREAD_SET_CURRENTCULTURE_OFFSET UNITYSDK_OFFSET(0x1C2D8740)
#define SYSTEM_THREADING_THREAD_SET_CURRENTUICULTURE_OFFSET UNITYSDK_OFFSET(0x1C2D8040)
#define SYSTEM_THREADING_THREAD_SET_EXECUTIONCONTEXTBELONGSTOCURRENTSCOPE_OFFSET UNITYSDK_OFFSET(0x1C2D7760)
#define SYSTEM_THREADING_THREAD_SET_ISBACKGROUND_OFFSET UNITYSDK_OFFSET(0x1C2D8E30)
#define SYSTEM_THREADING_THREAD_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1C2D8FE0)
#define SYSTEM_THREADING_THREAD_SLEEPINTERNAL_OFFSET UNITYSDK_OFFSET(0x1C2D7810)
#define SYSTEM_THREADING_THREAD_SLEEP_OFFSET UNITYSDK_OFFSET(0x1C2D7820)
#define SYSTEM_THREADING_THREAD_SPINWAIT_NOP_OFFSET UNITYSDK_OFFSET(0x1C2D90E0)
#define SYSTEM_THREADING_THREAD_SPINWAIT_OFFSET UNITYSDK_OFFSET(0x1C2D90F0)
#define SYSTEM_THREADING_THREAD_STARTINTERNAL_OFFSET UNITYSDK_OFFSET(0x1C2D76C0)
#define SYSTEM_THREADING_THREAD_START_1_OFFSET UNITYSDK_OFFSET(0x1C2D7620)
#define SYSTEM_THREADING_THREAD_START_2_OFFSET UNITYSDK_OFFSET(0x1C2D74D0)
#define SYSTEM_THREADING_THREAD_START_OFFSET UNITYSDK_OFFSET(0x1C2D74B0)
#define SYSTEM_THREADING_THREAD_SYSTEMMAXSTACKSTIZE_OFFSET UNITYSDK_OFFSET(0x1C2D9120)
#define SYSTEM_THREADING_THREAD_THREAD_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1C2D8BC0)
#define SYSTEM_THREADING_THREAD_VALIDATETHREADSTATE_OFFSET UNITYSDK_OFFSET(0x1C2D8D60)
#define SYSTEM_THREADING_THREAD_VOLATILEREAD_OFFSET UNITYSDK_OFFSET(0x1C2D9100)
#define SYSTEM_THREADING_THREAD_VOLATILEWRITE_OFFSET UNITYSDK_OFFSET(0x1C2D9110)
#define SYSTEM_THREADING_THREAD_YIELDINTERNAL_OFFSET UNITYSDK_OFFSET(0x1C2D78A0)
#define SYSTEM_THREADING_THREAD_YIELD__OFFSET UNITYSDK_OFFSET(0x1C2D78C0)
#define SYSTEM_THREADING_THREAD__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C2D7430)
#define SYSTEM_THREADING_THREAD__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2D7280)

namespace System::Threading
{
	inline static constexpr unsigned int Thread_TypeDefinitionIndex = 836;

	class Thread : public ::System::Runtime::ConstrainedExecution::CriticalFinalizerObject
	{
	public:
		static ::System::Threading::AsyncLocal_1<::System::Globalization::CultureInfo*>** StaticGet_s_asyncLocalCurrentCulture()
		{
			return (::System::Threading::AsyncLocal_1<::System::Globalization::CultureInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Thread_TypeDefinitionIndex)->GetStaticField(0x960);
		}
		static ::System::Threading::AsyncLocal_1<::System::Globalization::CultureInfo*>** StaticGet_s_asyncLocalCurrentUICulture()
		{
			return (::System::Threading::AsyncLocal_1<::System::Globalization::CultureInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Thread_TypeDefinitionIndex)->GetStaticField(0x968);
		}
		static ::System::LocalDataStoreMgr** StaticGet_s_LocalDataStoreMgr()
		{
			return (::System::LocalDataStoreMgr**)Il2CppClass::FromTypeDefinitionIndex(Thread_TypeDefinitionIndex)->GetStaticField(0x970);
		}
		static ::System::Globalization::CultureInfo** StaticGet_m_CurrentUICulture()
		{
			return (::System::Globalization::CultureInfo**)Il2CppClass::FromTypeDefinitionIndex(Thread_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::LocalDataStoreHolder** StaticGet_s_LocalDataStore()
		{
			return (::System::LocalDataStoreHolder**)Il2CppClass::FromTypeDefinitionIndex(Thread_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Threading::Thread** StaticGet_current_thread()
		{
			return (::System::Threading::Thread**)Il2CppClass::FromTypeDefinitionIndex(Thread_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Globalization::CultureInfo** StaticGet_m_CurrentCulture()
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

		::System::Void _ctor(::System::Threading::ThreadStart* start)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::ThreadStart*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREAD__CTOR_OFFSET))(this, start);
		}

		::System::Void _ctor_1(::System::Threading::ParameterizedThreadStart* start)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::ParameterizedThreadStart*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREAD__CTOR_1_OFFSET))(this, start);
		}

		static ::System::Void AsyncLocalSetCurrentCulture(::System::Threading::AsyncLocalValueChangedArgs_1<::System::Globalization::CultureInfo*> args)
		{
			return ((::System::Void(*)(::System::Threading::AsyncLocalValueChangedArgs_1<::System::Globalization::CultureInfo*>))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREAD_ASYNCLOCALSETCURRENTCULTURE_OFFSET))(args);
		}

		static ::System::Void AsyncLocalSetCurrentUICulture(::System::Threading::AsyncLocalValueChangedArgs_1<::System::Globalization::CultureInfo*> args)
		{
			return ((::System::Void(*)(::System::Threading::AsyncLocalValueChangedArgs_1<::System::Globalization::CultureInfo*>))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREAD_ASYNCLOCALSETCURRENTUICULTURE_OFFSET))(args);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREAD_START_OFFSET))(this);
		}

		::System::Void Start_1(::System::Object* parameter)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREAD_START_1_OFFSET))(this, parameter);
		}

		::System::Void Start_2(::System::Threading::StackCrawlMark& stackMark)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::StackCrawlMark&))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREAD_START_2_OFFSET))(this, stackMark);
		}

		::System::Threading::ExecutionContext_Reader GetExecutionContextReader()
		{
			return ((::System::Threading::ExecutionContext_Reader(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREAD_GETEXECUTIONCONTEXTREADER_OFFSET))(this);
		}

		::System::Boolean get_ExecutionContextBelongsToCurrentScope()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREAD_GET_EXECUTIONCONTEXTBELONGSTOCURRENTSCOPE_OFFSET))(this);
		}

		::System::Void set_ExecutionContextBelongsToCurrentScope(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREAD_SET_EXECUTIONCONTEXTBELONGSTOCURRENTSCOPE_OFFSET))(this, value);
		}

		::System::Threading::ExecutionContext* GetMutableExecutionContext()
		{
			return ((::System::Threading::ExecutionContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREAD_GETMUTABLEEXECUTIONCONTEXT_OFFSET))(this);
		}

		::System::Void SetExecutionContext(::System::Threading::ExecutionContext* value, ::System::Boolean belongsToCurrentScope)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::ExecutionContext*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREAD_SETEXECUTIONCONTEXT_OFFSET))(this, value, belongsToCurrentScope);
		}

		::System::Void SetExecutionContext_1(::System::Threading::ExecutionContext_Reader value, ::System::Boolean belongsToCurrentScope)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::ExecutionContext_Reader, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREAD_SETEXECUTIONCONTEXT_1_OFFSET))(this, value, belongsToCurrentScope);
		}

		::System::Boolean JoinInternal(::System::Int32 millisecondsTimeout)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREAD_JOININTERNAL_OFFSET))(this, millisecondsTimeout);
		}

		::System::Void Join()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREAD_JOIN_OFFSET))(this);
		}

		static ::System::Void SleepInternal(::System::Int32 millisecondsTimeout)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREAD_SLEEPINTERNAL_OFFSET))(millisecondsTimeout);
		}

		static ::System::Void Sleep(::System::Int32 millisecondsTimeout)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREAD_SLEEP_OFFSET))(millisecondsTimeout);
		}

		static ::System::Boolean YieldInternal()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREAD_YIELDINTERNAL_OFFSET))();
		}

		static ::System::Boolean Yield_()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREAD_YIELD__OFFSET))();
		}

		::System::Void SetStartHelper(::System::Delegate* start, ::System::Int32 maxStackSize)
		{
			return ((::System::Void(*)(::PVOID, ::System::Delegate*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREAD_SETSTARTHELPER_OFFSET))(this, start, maxStackSize);
		}

		static ::System::LocalDataStoreSlot* AllocateDataSlot()
		{
			return ((::System::LocalDataStoreSlot*(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREAD_ALLOCATEDATASLOT_OFFSET))();
		}

		static ::System::Object* GetData(::System::LocalDataStoreSlot* slot)
		{
			return ((::System::Object*(*)(::System::LocalDataStoreSlot*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREAD_GETDATA_OFFSET))(slot);
		}

		static ::System::Void SetData(::System::LocalDataStoreSlot* slot, ::System::Object* data)
		{
			return ((::System::Void(*)(::System::LocalDataStoreSlot*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREAD_SETDATA_OFFSET))(slot, data);
		}

		::System::Globalization::CultureInfo* get_CurrentUICulture()
		{
			return ((::System::Globalization::CultureInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREAD_GET_CURRENTUICULTURE_OFFSET))(this);
		}

		::System::Void set_CurrentUICulture(::System::Globalization::CultureInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREAD_SET_CURRENTUICULTURE_OFFSET))(this, value);
		}

		::System::Globalization::CultureInfo* GetCurrentUICultureNoAppX()
		{
			return ((::System::Globalization::CultureInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREAD_GETCURRENTUICULTURENOAPPX_OFFSET))(this);
		}

		::System::Globalization::CultureInfo* get_CurrentCulture()
		{
			return ((::System::Globalization::CultureInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREAD_GET_CURRENTCULTURE_OFFSET))(this);
		}

		::System::Void set_CurrentCulture(::System::Globalization::CultureInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREAD_SET_CURRENTCULTURE_OFFSET))(this, value);
		}

		::System::Globalization::CultureInfo* GetCurrentCultureNoAppX()
		{
			return ((::System::Globalization::CultureInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREAD_GETCURRENTCULTURENOAPPX_OFFSET))(this);
		}

		static ::System::Void nativeInitCultureAccessors()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREAD_NATIVEINITCULTUREACCESSORS_OFFSET))();
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

		::System::IntPtr Thread_internal(::System::MulticastDelegate* start)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::MulticastDelegate*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREAD_THREAD_INTERNAL_OFFSET))(this, start);
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

		::System::Boolean get_IsBackground()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREAD_GET_ISBACKGROUND_OFFSET))(this);
		}

		::System::Void set_IsBackground(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREAD_SET_ISBACKGROUND_OFFSET))(this, value);
		}

		static ::System::Void SetName_internal(::System::Threading::InternalThread* thread, ::System::String* name)
		{
			return ((::System::Void(*)(::System::Threading::InternalThread*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREAD_SETNAME_INTERNAL_OFFSET))(thread, name);
		}

		::System::Void set_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREAD_SET_NAME_OFFSET))(this, value);
		}

		::System::Threading::ThreadState get_ThreadState()
		{
			return ((::System::Threading::ThreadState(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREAD_GET_THREADSTATE_OFFSET))(this);
		}

		static ::System::Void Abort_internal(::System::Threading::InternalThread* thread, ::System::Object* stateInfo)
		{
			return ((::System::Void(*)(::System::Threading::InternalThread*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREAD_ABORT_INTERNAL_OFFSET))(thread, stateInfo);
		}

		::System::Void Abort()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREAD_ABORT_OFFSET))(this);
		}

		static ::System::Void SpinWait_nop()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREAD_SPINWAIT_NOP_OFFSET))();
		}

		static ::System::Void SpinWait(::System::Int32 iterations)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREAD_SPINWAIT_OFFSET))(iterations);
		}

		::System::Void StartInternal(::System::Security::Principal::IPrincipal* principal, ::System::Threading::StackCrawlMark& stackMark)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Principal::IPrincipal*, ::System::Threading::StackCrawlMark&))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREAD_STARTINTERNAL_OFFSET))(this, principal, stackMark);
		}

		static ::System::Void SetState(::System::Threading::InternalThread* thread, ::System::Threading::ThreadState set)
		{
			return ((::System::Void(*)(::System::Threading::InternalThread*, ::System::Threading::ThreadState))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREAD_SETSTATE_OFFSET))(thread, set);
		}

		static ::System::Void ClrState(::System::Threading::InternalThread* thread, ::System::Threading::ThreadState clr)
		{
			return ((::System::Void(*)(::System::Threading::InternalThread*, ::System::Threading::ThreadState))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREAD_CLRSTATE_OFFSET))(thread, clr);
		}

		static ::System::Threading::ThreadState GetState(::System::Threading::InternalThread* thread)
		{
			return ((::System::Threading::ThreadState(*)(::System::Threading::InternalThread*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREAD_GETSTATE_OFFSET))(thread);
		}

		static ::System::Object* VolatileRead(::System::Object*& address)
		{
			return ((::System::Object*(*)(::System::Object*&))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREAD_VOLATILEREAD_OFFSET))(address);
		}

		static ::System::Void VolatileWrite(::System::Int32& address, ::System::Int32 value)
		{
			return ((::System::Void(*)(::System::Int32&, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREAD_VOLATILEWRITE_OFFSET))(address, value);
		}

		static ::System::Int32 SystemMaxStackStize()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREAD_SYSTEMMAXSTACKSTIZE_OFFSET))();
		}

		static ::System::Int32 GetProcessDefaultStackSize(::System::Int32 maxStackSize)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREAD_GETPROCESSDEFAULTSTACKSIZE_OFFSET))(maxStackSize);
		}

		::System::Void SetStart(::System::MulticastDelegate* start, ::System::Int32 maxStackSize)
		{
			return ((::System::Void(*)(::PVOID, ::System::MulticastDelegate*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREAD_SETSTART_OFFSET))(this, start, maxStackSize);
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
