#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/StackCrawlMark.h"
#include "unitysdk/System/TimeSpan.h"

namespace System::Threading { class IThreadPoolWorkItem; }
namespace System::Threading { class RegisteredWaitHandle; }
namespace System::Threading { class WaitCallback; }
namespace System::Threading { class WaitHandle; }
namespace System::Threading { class WaitOrTimerCallback; }

#define SYSTEM_THREADING_THREADPOOL_ENSUREVMINITIALIZED_OFFSET UNITYSDK_OFFSET(0x1A738ED0)
#define SYSTEM_THREADING_THREADPOOL_GETMINTHREADSNATIVE_OFFSET UNITYSDK_OFFSET(0x1A738880)
#define SYSTEM_THREADING_THREADPOOL_GETMINTHREADS_OFFSET UNITYSDK_OFFSET(0x1A738840)
#define SYSTEM_THREADING_THREADPOOL_INITIALIZEVMTP_OFFSET UNITYSDK_OFFSET(0x1A739190)
#define SYSTEM_THREADING_THREADPOOL_ISTHREADPOOLHOSTED_OFFSET UNITYSDK_OFFSET(0x1A739300)
#define SYSTEM_THREADING_THREADPOOL_NOTIFYWORKITEMCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1A7391A0)
#define SYSTEM_THREADING_THREADPOOL_NOTIFYWORKITEMPROGRESSNATIVE_OFFSET UNITYSDK_OFFSET(0x1A739270)
#define SYSTEM_THREADING_THREADPOOL_NOTIFYWORKITEMPROGRESS_OFFSET UNITYSDK_OFFSET(0x1A736D50)
#define SYSTEM_THREADING_THREADPOOL_QUEUEUSERWORKITEMHELPER_OFFSET UNITYSDK_OFFSET(0x1A738D70)
#define SYSTEM_THREADING_THREADPOOL_QUEUEUSERWORKITEM_1_OFFSET UNITYSDK_OFFSET(0x1A738EB0)
#define SYSTEM_THREADING_THREADPOOL_QUEUEUSERWORKITEM_OFFSET UNITYSDK_OFFSET(0x1A738B30)
#define SYSTEM_THREADING_THREADPOOL_REGISTERWAITFORSINGLEOBJECT_1_OFFSET UNITYSDK_OFFSET(0x1A738B70)
#define SYSTEM_THREADING_THREADPOOL_REGISTERWAITFORSINGLEOBJECT_2_OFFSET UNITYSDK_OFFSET(0x1A738C10)
#define SYSTEM_THREADING_THREADPOOL_REGISTERWAITFORSINGLEOBJECT_OFFSET UNITYSDK_OFFSET(0x1A7388C0)
#define SYSTEM_THREADING_THREADPOOL_REPORTTHREADSTATUS_OFFSET UNITYSDK_OFFSET(0x1A739260)
#define SYSTEM_THREADING_THREADPOOL_REQUESTWORKERTHREAD_OFFSET UNITYSDK_OFFSET(0x1A739180)
#define SYSTEM_THREADING_THREADPOOL_TRYPOPCUSTOMWORKITEM_OFFSET UNITYSDK_OFFSET(0x1A736B50)
#define SYSTEM_THREADING_THREADPOOL_UNSAFEQUEUECUSTOMWORKITEM_OFFSET UNITYSDK_OFFSET(0x1A72EF10)
#define SYSTEM_THREADING_THREADPOOL_UNSAFEQUEUEUSERWORKITEM_OFFSET UNITYSDK_OFFSET(0x1A738B50)

namespace System::Threading
{
	inline static constexpr unsigned int ThreadPool_TypeDefinitionIndex = 861;

	class ThreadPool : public ::System::Object
	{
	public:
		static ::System::Void GetMinThreads(::System::Int32& a1, ::System::Int32& a2)
		{
			return ((::System::Void(*)(::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOL_GETMINTHREADS_OFFSET))(a1, a2);
		}

		static ::System::Threading::RegisteredWaitHandle* RegisterWaitForSingleObject(::System::Threading::WaitHandle* a1, ::System::Threading::WaitOrTimerCallback* a2, ::System::Object* a3, ::System::UInt32 a4, ::System::Boolean a5, ::System::Threading::StackCrawlMark& a6, ::System::Boolean a7)
		{
			return ((::System::Threading::RegisteredWaitHandle*(*)(::System::Threading::WaitHandle*, ::System::Threading::WaitOrTimerCallback*, ::System::Object*, ::System::UInt32, ::System::Boolean, ::System::Threading::StackCrawlMark&, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOL_REGISTERWAITFORSINGLEOBJECT_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Threading::RegisteredWaitHandle* RegisterWaitForSingleObject_1(::System::Threading::WaitHandle* a1, ::System::Threading::WaitOrTimerCallback* a2, ::System::Object* a3, ::System::Int32 a4, ::System::Boolean a5)
		{
			return ((::System::Threading::RegisteredWaitHandle*(*)(::System::Threading::WaitHandle*, ::System::Threading::WaitOrTimerCallback*, ::System::Object*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOL_REGISTERWAITFORSINGLEOBJECT_1_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Threading::RegisteredWaitHandle* RegisterWaitForSingleObject_2(::System::Threading::WaitHandle* a1, ::System::Threading::WaitOrTimerCallback* a2, ::System::Object* a3, ::System::TimeSpan a4, ::System::Boolean a5)
		{
			return ((::System::Threading::RegisteredWaitHandle*(*)(::System::Threading::WaitHandle*, ::System::Threading::WaitOrTimerCallback*, ::System::Object*, ::System::TimeSpan, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOL_REGISTERWAITFORSINGLEOBJECT_2_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean QueueUserWorkItem(::System::Threading::WaitCallback* a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::System::Threading::WaitCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOL_QUEUEUSERWORKITEM_OFFSET))(a1, a2);
		}

		static ::System::Boolean QueueUserWorkItem_1(::System::Threading::WaitCallback* a1)
		{
			return ((::System::Boolean(*)(::System::Threading::WaitCallback*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOL_QUEUEUSERWORKITEM_1_OFFSET))(a1);
		}

		static ::System::Boolean UnsafeQueueUserWorkItem(::System::Threading::WaitCallback* a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::System::Threading::WaitCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOL_UNSAFEQUEUEUSERWORKITEM_OFFSET))(a1, a2);
		}

		static ::System::Boolean QueueUserWorkItemHelper(::System::Threading::WaitCallback* a1, ::System::Object* a2, ::System::Threading::StackCrawlMark& a3, ::System::Boolean a4)
		{
			return ((::System::Boolean(*)(::System::Threading::WaitCallback*, ::System::Object*, ::System::Threading::StackCrawlMark&, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOL_QUEUEUSERWORKITEMHELPER_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void UnsafeQueueCustomWorkItem(::System::Threading::IThreadPoolWorkItem* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::Threading::IThreadPoolWorkItem*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOL_UNSAFEQUEUECUSTOMWORKITEM_OFFSET))(a1, a2);
		}

		static ::System::Boolean TryPopCustomWorkItem(::System::Threading::IThreadPoolWorkItem* a1)
		{
			return ((::System::Boolean(*)(::System::Threading::IThreadPoolWorkItem*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOL_TRYPOPCUSTOMWORKITEM_OFFSET))(a1);
		}

		static ::System::Boolean RequestWorkerThread()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOL_REQUESTWORKERTHREAD_OFFSET))();
		}

		static ::System::Void EnsureVMInitialized()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOL_ENSUREVMINITIALIZED_OFFSET))();
		}

		static ::System::Void GetMinThreadsNative(::System::Int32& a1, ::System::Int32& a2)
		{
			return ((::System::Void(*)(::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOL_GETMINTHREADSNATIVE_OFFSET))(a1, a2);
		}

		static ::System::Boolean NotifyWorkItemComplete()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOL_NOTIFYWORKITEMCOMPLETE_OFFSET))();
		}

		static ::System::Void ReportThreadStatus(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOL_REPORTTHREADSTATUS_OFFSET))(a1);
		}

		static ::System::Void NotifyWorkItemProgress()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOL_NOTIFYWORKITEMPROGRESS_OFFSET))();
		}

		static ::System::Void NotifyWorkItemProgressNative()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOL_NOTIFYWORKITEMPROGRESSNATIVE_OFFSET))();
		}

		static ::System::Boolean IsThreadPoolHosted()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOL_ISTHREADPOOLHOSTED_OFFSET))();
		}

		static ::System::Void InitializeVMTp(::System::Boolean& a1)
		{
			return ((::System::Void(*)(::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOL_INITIALIZEVMTP_OFFSET))(a1);
		}
	};
}
