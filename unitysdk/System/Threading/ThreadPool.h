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

#define SYSTEM_THREADING_THREADPOOL_ENSUREVMINITIALIZED_OFFSET UNITYSDK_OFFSET(0x1624E190)
#define SYSTEM_THREADING_THREADPOOL_GETMINTHREADSNATIVE_OFFSET UNITYSDK_OFFSET(0x1624DB30)
#define SYSTEM_THREADING_THREADPOOL_GETMINTHREADS_OFFSET UNITYSDK_OFFSET(0x1624DAF0)
#define SYSTEM_THREADING_THREADPOOL_INITIALIZEVMTP_OFFSET UNITYSDK_OFFSET(0x1624E460)
#define SYSTEM_THREADING_THREADPOOL_ISTHREADPOOLHOSTED_OFFSET UNITYSDK_OFFSET(0x1624E5D0)
#define SYSTEM_THREADING_THREADPOOL_NOTIFYWORKITEMCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1624E470)
#define SYSTEM_THREADING_THREADPOOL_NOTIFYWORKITEMPROGRESSNATIVE_OFFSET UNITYSDK_OFFSET(0x1624E540)
#define SYSTEM_THREADING_THREADPOOL_NOTIFYWORKITEMPROGRESS_OFFSET UNITYSDK_OFFSET(0x1624BD10)
#define SYSTEM_THREADING_THREADPOOL_QUEUEUSERWORKITEMHELPER_OFFSET UNITYSDK_OFFSET(0x1624E030)
#define SYSTEM_THREADING_THREADPOOL_QUEUEUSERWORKITEM_1_OFFSET UNITYSDK_OFFSET(0x1624E170)
#define SYSTEM_THREADING_THREADPOOL_QUEUEUSERWORKITEM_OFFSET UNITYSDK_OFFSET(0x1624DDF0)
#define SYSTEM_THREADING_THREADPOOL_REGISTERWAITFORSINGLEOBJECT_1_OFFSET UNITYSDK_OFFSET(0x1624DE30)
#define SYSTEM_THREADING_THREADPOOL_REGISTERWAITFORSINGLEOBJECT_2_OFFSET UNITYSDK_OFFSET(0x1624DED0)
#define SYSTEM_THREADING_THREADPOOL_REGISTERWAITFORSINGLEOBJECT_OFFSET UNITYSDK_OFFSET(0x1624DB70)
#define SYSTEM_THREADING_THREADPOOL_REPORTTHREADSTATUS_OFFSET UNITYSDK_OFFSET(0x1624E530)
#define SYSTEM_THREADING_THREADPOOL_REQUESTWORKERTHREAD_OFFSET UNITYSDK_OFFSET(0x1624E450)
#define SYSTEM_THREADING_THREADPOOL_TRYPOPCUSTOMWORKITEM_OFFSET UNITYSDK_OFFSET(0x1624BB10)
#define SYSTEM_THREADING_THREADPOOL_UNSAFEQUEUECUSTOMWORKITEM_OFFSET UNITYSDK_OFFSET(0x162449D0)
#define SYSTEM_THREADING_THREADPOOL_UNSAFEQUEUEUSERWORKITEM_OFFSET UNITYSDK_OFFSET(0x1624DE10)

namespace System::Threading
{
	inline static constexpr unsigned int ThreadPool_TypeDefinitionIndex = 860;

	class ThreadPool : public ::System::Object
	{
	public:
		static ::System::Void GetMinThreads(::System::Int32& workerThreads, ::System::Int32& completionPortThreads)
		{
			return ((::System::Void(*)(::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOL_GETMINTHREADS_OFFSET))(workerThreads, completionPortThreads);
		}

		static ::System::Threading::RegisteredWaitHandle* RegisterWaitForSingleObject(::System::Threading::WaitHandle* waitObject, ::System::Threading::WaitOrTimerCallback* callBack, ::System::Object* state, ::System::UInt32 millisecondsTimeOutInterval, ::System::Boolean executeOnlyOnce, ::System::Threading::StackCrawlMark& stackMark, ::System::Boolean compressStack)
		{
			return ((::System::Threading::RegisteredWaitHandle*(*)(::System::Threading::WaitHandle*, ::System::Threading::WaitOrTimerCallback*, ::System::Object*, ::System::UInt32, ::System::Boolean, ::System::Threading::StackCrawlMark&, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOL_REGISTERWAITFORSINGLEOBJECT_OFFSET))(waitObject, callBack, state, millisecondsTimeOutInterval, executeOnlyOnce, stackMark, compressStack);
		}

		static ::System::Threading::RegisteredWaitHandle* RegisterWaitForSingleObject_1(::System::Threading::WaitHandle* waitObject, ::System::Threading::WaitOrTimerCallback* callBack, ::System::Object* state, ::System::Int32 millisecondsTimeOutInterval, ::System::Boolean executeOnlyOnce)
		{
			return ((::System::Threading::RegisteredWaitHandle*(*)(::System::Threading::WaitHandle*, ::System::Threading::WaitOrTimerCallback*, ::System::Object*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOL_REGISTERWAITFORSINGLEOBJECT_1_OFFSET))(waitObject, callBack, state, millisecondsTimeOutInterval, executeOnlyOnce);
		}

		static ::System::Threading::RegisteredWaitHandle* RegisterWaitForSingleObject_2(::System::Threading::WaitHandle* waitObject, ::System::Threading::WaitOrTimerCallback* callBack, ::System::Object* state, ::System::TimeSpan timeout, ::System::Boolean executeOnlyOnce)
		{
			return ((::System::Threading::RegisteredWaitHandle*(*)(::System::Threading::WaitHandle*, ::System::Threading::WaitOrTimerCallback*, ::System::Object*, ::System::TimeSpan, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOL_REGISTERWAITFORSINGLEOBJECT_2_OFFSET))(waitObject, callBack, state, timeout, executeOnlyOnce);
		}

		static ::System::Boolean QueueUserWorkItem(::System::Threading::WaitCallback* callBack, ::System::Object* state)
		{
			return ((::System::Boolean(*)(::System::Threading::WaitCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOL_QUEUEUSERWORKITEM_OFFSET))(callBack, state);
		}

		static ::System::Boolean QueueUserWorkItem_1(::System::Threading::WaitCallback* callBack)
		{
			return ((::System::Boolean(*)(::System::Threading::WaitCallback*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOL_QUEUEUSERWORKITEM_1_OFFSET))(callBack);
		}

		static ::System::Boolean UnsafeQueueUserWorkItem(::System::Threading::WaitCallback* callBack, ::System::Object* state)
		{
			return ((::System::Boolean(*)(::System::Threading::WaitCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOL_UNSAFEQUEUEUSERWORKITEM_OFFSET))(callBack, state);
		}

		static ::System::Boolean QueueUserWorkItemHelper(::System::Threading::WaitCallback* callBack, ::System::Object* state, ::System::Threading::StackCrawlMark& stackMark, ::System::Boolean compressStack)
		{
			return ((::System::Boolean(*)(::System::Threading::WaitCallback*, ::System::Object*, ::System::Threading::StackCrawlMark&, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOL_QUEUEUSERWORKITEMHELPER_OFFSET))(callBack, state, stackMark, compressStack);
		}

		static ::System::Void UnsafeQueueCustomWorkItem(::System::Threading::IThreadPoolWorkItem* workItem, ::System::Boolean forceGlobal)
		{
			return ((::System::Void(*)(::System::Threading::IThreadPoolWorkItem*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOL_UNSAFEQUEUECUSTOMWORKITEM_OFFSET))(workItem, forceGlobal);
		}

		static ::System::Boolean TryPopCustomWorkItem(::System::Threading::IThreadPoolWorkItem* workItem)
		{
			return ((::System::Boolean(*)(::System::Threading::IThreadPoolWorkItem*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOL_TRYPOPCUSTOMWORKITEM_OFFSET))(workItem);
		}

		static ::System::Boolean RequestWorkerThread()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOL_REQUESTWORKERTHREAD_OFFSET))();
		}

		static ::System::Void EnsureVMInitialized()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOL_ENSUREVMINITIALIZED_OFFSET))();
		}

		static ::System::Void GetMinThreadsNative(::System::Int32& workerThreads, ::System::Int32& completionPortThreads)
		{
			return ((::System::Void(*)(::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOL_GETMINTHREADSNATIVE_OFFSET))(workerThreads, completionPortThreads);
		}

		static ::System::Boolean NotifyWorkItemComplete()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOL_NOTIFYWORKITEMCOMPLETE_OFFSET))();
		}

		static ::System::Void ReportThreadStatus(::System::Boolean isWorking)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOL_REPORTTHREADSTATUS_OFFSET))(isWorking);
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

		static ::System::Void InitializeVMTp(::System::Boolean& enableWorkerTracking)
		{
			return ((::System::Void(*)(::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOL_INITIALIZEVMTP_OFFSET))(enableWorkerTracking);
		}
	};
}
