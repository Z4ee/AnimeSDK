#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class EventArgs; }
namespace System { class WeakReference; }
namespace System::Collections { class Hashtable; }
namespace System::Collections::Generic { template <typename T> class LinkedList_1; }
namespace System::Net { class TimerThread_Queue; }
namespace System::Threading { class AutoResetEvent; }
namespace System::Threading { class ManualResetEvent; }
namespace System::Threading { class WaitHandle; }

#define SYSTEM_NET_TIMERTHREAD_CREATEQUEUE_OFFSET UNITYSDK_OFFSET(0x192245B0)
#define SYSTEM_NET_TIMERTHREAD_GETORCREATEQUEUE_OFFSET UNITYSDK_OFFSET(0x19224850)
#define SYSTEM_NET_TIMERTHREAD_ISTICKBETWEEN_OFFSET UNITYSDK_OFFSET(0x192268A0)
#define SYSTEM_NET_TIMERTHREAD_ONDOMAINUNLOAD_OFFSET UNITYSDK_OFFSET(0x19226990)
#define SYSTEM_NET_TIMERTHREAD_PROD_OFFSET UNITYSDK_OFFSET(0x19225380)
#define SYSTEM_NET_TIMERTHREAD_STOPTIMERTHREAD_OFFSET UNITYSDK_OFFSET(0x192268C0)
#define SYSTEM_NET_TIMERTHREAD_THREADPROC_OFFSET UNITYSDK_OFFSET(0x19225500)
#define SYSTEM_NET_TIMERTHREAD__CCTOR_OFFSET UNITYSDK_OFFSET(0x19224200)

namespace System::Net
{
	inline static constexpr unsigned int TimerThread_TypeDefinitionIndex = 3395;

	class TimerThread : public ::System::Object
	{
	public:
		static ::System::Collections::Hashtable** StaticGet_s_QueuesCache()
		{
			return (::System::Collections::Hashtable**)Il2CppClass::FromTypeDefinitionIndex(TimerThread_TypeDefinitionIndex)->GetStaticField(0x37B0);
		}
		static ::System::Collections::Generic::LinkedList_1<::System::WeakReference*>** StaticGet_s_NewQueues()
		{
			return (::System::Collections::Generic::LinkedList_1<::System::WeakReference*>**)Il2CppClass::FromTypeDefinitionIndex(TimerThread_TypeDefinitionIndex)->GetStaticField(0x37B8);
		}
		static ::System::Threading::AutoResetEvent** StaticGet_s_ThreadReadyEvent()
		{
			return (::System::Threading::AutoResetEvent**)Il2CppClass::FromTypeDefinitionIndex(TimerThread_TypeDefinitionIndex)->GetStaticField(0x37C0);
		}
		static ::System::Collections::Generic::LinkedList_1<::System::WeakReference*>** StaticGet_s_Queues()
		{
			return (::System::Collections::Generic::LinkedList_1<::System::WeakReference*>**)Il2CppClass::FromTypeDefinitionIndex(TimerThread_TypeDefinitionIndex)->GetStaticField(0x37C8);
		}
		static ::Il2CppArray<::System::Threading::WaitHandle*>** StaticGet_s_ThreadEvents()
		{
			return (::Il2CppArray<::System::Threading::WaitHandle*>**)Il2CppClass::FromTypeDefinitionIndex(TimerThread_TypeDefinitionIndex)->GetStaticField(0x37D0);
		}
		static ::System::Threading::ManualResetEvent** StaticGet_s_ThreadShutdownEvent()
		{
			return (::System::Threading::ManualResetEvent**)Il2CppClass::FromTypeDefinitionIndex(TimerThread_TypeDefinitionIndex)->GetStaticField(0x37D8);
		}
		static ::System::Int32* StaticGet_s_CacheScanIteration()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TimerThread_TypeDefinitionIndex)->GetStaticField(0x1420);
		}
		static ::System::Int32* StaticGet_s_ThreadState()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TimerThread_TypeDefinitionIndex)->GetStaticField(0x1424);
		}
		// static const ::System::Int32 c_ThreadIdleTimeoutMilliseconds = 0x7530; // 0x0
		// static const ::System::Int32 c_CacheScanPerIterations = 0x20; // 0x0
		// static const ::System::Int32 c_TickCountResolution = 0xF; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_TIMERTHREAD__CCTOR_OFFSET))();
		}

		static ::System::Net::TimerThread_Queue* CreateQueue(::System::Int32 durationMilliseconds)
		{
			return ((::System::Net::TimerThread_Queue*(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_TIMERTHREAD_CREATEQUEUE_OFFSET))(durationMilliseconds);
		}

		static ::System::Net::TimerThread_Queue* GetOrCreateQueue(::System::Int32 durationMilliseconds)
		{
			return ((::System::Net::TimerThread_Queue*(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_TIMERTHREAD_GETORCREATEQUEUE_OFFSET))(durationMilliseconds);
		}

		static ::System::Void Prod()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_TIMERTHREAD_PROD_OFFSET))();
		}

		static ::System::Void ThreadProc()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_TIMERTHREAD_THREADPROC_OFFSET))();
		}

		static ::System::Void StopTimerThread()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_TIMERTHREAD_STOPTIMERTHREAD_OFFSET))();
		}

		static ::System::Boolean IsTickBetween(::System::Int32 start, ::System::Int32 end, ::System::Int32 comparand)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_TIMERTHREAD_ISTICKBETWEEN_OFFSET))(start, end, comparand);
		}

		static ::System::Void OnDomainUnload(::System::Object* sender, ::System::EventArgs* e)
		{
			return ((::System::Void(*)(::System::Object*, ::System::EventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_NET_TIMERTHREAD_ONDOMAINUNLOAD_OFFSET))(sender, e);
		}
	};
}
