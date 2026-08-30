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

#define SYSTEM_NET_TIMERTHREAD_CREATEQUEUE_OFFSET UNITYSDK_OFFSET(0x1B9759E0)
#define SYSTEM_NET_TIMERTHREAD_ONDOMAINUNLOAD_OFFSET UNITYSDK_OFFSET(0x1B975D30)
#define SYSTEM_NET_TIMERTHREAD_STOPTIMERTHREAD_OFFSET UNITYSDK_OFFSET(0x1B975CB0)
#define SYSTEM_NET_TIMERTHREAD__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B9756A0)

namespace System::Net
{
	inline static constexpr unsigned int TimerThread_TypeDefinitionIndex = 2784;

	class TimerThread : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::LinkedList_1<::System::WeakReference*>** StaticGet_s_Queues()
		{
			return (::System::Collections::Generic::LinkedList_1<::System::WeakReference*>**)Il2CppClass::FromTypeDefinitionIndex(TimerThread_TypeDefinitionIndex)->GetStaticField(0x1F910);
		}
		static ::System::Threading::ManualResetEvent** StaticGet_s_ThreadShutdownEvent()
		{
			return (::System::Threading::ManualResetEvent**)Il2CppClass::FromTypeDefinitionIndex(TimerThread_TypeDefinitionIndex)->GetStaticField(0x1F918);
		}
		static ::System::Collections::Generic::LinkedList_1<::System::WeakReference*>** StaticGet_s_NewQueues()
		{
			return (::System::Collections::Generic::LinkedList_1<::System::WeakReference*>**)Il2CppClass::FromTypeDefinitionIndex(TimerThread_TypeDefinitionIndex)->GetStaticField(0x1F920);
		}
		static ::System::Collections::Hashtable** StaticGet_s_QueuesCache()
		{
			return (::System::Collections::Hashtable**)Il2CppClass::FromTypeDefinitionIndex(TimerThread_TypeDefinitionIndex)->GetStaticField(0x1F928);
		}
		static ::System::Threading::AutoResetEvent** StaticGet_s_ThreadReadyEvent()
		{
			return (::System::Threading::AutoResetEvent**)Il2CppClass::FromTypeDefinitionIndex(TimerThread_TypeDefinitionIndex)->GetStaticField(0x1F930);
		}
		static ::Il2CppArray<::System::Threading::WaitHandle*>** StaticGet_s_ThreadEvents()
		{
			return (::Il2CppArray<::System::Threading::WaitHandle*>**)Il2CppClass::FromTypeDefinitionIndex(TimerThread_TypeDefinitionIndex)->GetStaticField(0x1F938);
		}
		static ::System::Int32* StaticGet_s_ThreadState()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TimerThread_TypeDefinitionIndex)->GetStaticField(0xA7B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_TIMERTHREAD__CCTOR_OFFSET))();
		}

		static ::System::Net::TimerThread_Queue* CreateQueue(::System::Int32 a1)
		{
			return ((::System::Net::TimerThread_Queue*(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_TIMERTHREAD_CREATEQUEUE_OFFSET))(a1);
		}

		static ::System::Void StopTimerThread()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_TIMERTHREAD_STOPTIMERTHREAD_OFFSET))();
		}

		static ::System::Void OnDomainUnload(::System::Object* a1, ::System::EventArgs* a2)
		{
			return ((::System::Void(*)(::System::Object*, ::System::EventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_NET_TIMERTHREAD_ONDOMAINUNLOAD_OFFSET))(a1, a2);
		}
	};
}
