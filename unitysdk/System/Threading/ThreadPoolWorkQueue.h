#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Threading { class IThreadPoolWorkItem; }
namespace System::Threading { class ThreadPoolWorkQueueThreadLocals; }
namespace System::Threading { class ThreadPoolWorkQueue_QueueSegment; }
namespace System::Threading { class ThreadPoolWorkQueue_WorkStealingQueue; }
namespace System::Threading { template <typename T> class ThreadPoolWorkQueue_SparseArray_1; }

#define SYSTEM_THREADING_THREADPOOLWORKQUEUE_DEQUEUE_OFFSET UNITYSDK_OFFSET(0x1787BC70)
#define SYSTEM_THREADING_THREADPOOLWORKQUEUE_DISPATCH_OFFSET UNITYSDK_OFFSET(0x1787C2F0)
#define SYSTEM_THREADING_THREADPOOLWORKQUEUE_ENQUEUE_OFFSET UNITYSDK_OFFSET(0x1787AA60)
#define SYSTEM_THREADING_THREADPOOLWORKQUEUE_ENSURECURRENTTHREADHASQUEUE_OFFSET UNITYSDK_OFFSET(0x1787AF40)
#define SYSTEM_THREADING_THREADPOOLWORKQUEUE_ENSURETHREADREQUESTED_OFFSET UNITYSDK_OFFSET(0x1787B180)
#define SYSTEM_THREADING_THREADPOOLWORKQUEUE_LOCALFINDANDPOP_OFFSET UNITYSDK_OFFSET(0x1787AC30)
#define SYSTEM_THREADING_THREADPOOLWORKQUEUE_MARKTHREADREQUESTSATISFIED_OFFSET UNITYSDK_OFFSET(0x1787B1E0)
#define SYSTEM_THREADING_THREADPOOLWORKQUEUE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1787C990)
#define SYSTEM_THREADING_THREADPOOLWORKQUEUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1787AEC0)

namespace System::Threading
{
	inline static constexpr unsigned int ThreadPoolWorkQueue_TypeDefinitionIndex = 855;

	class ThreadPoolWorkQueue : public ::System::Object
	{
	public:
		static ::System::Threading::ThreadPoolWorkQueue_SparseArray_1<::System::Threading::ThreadPoolWorkQueue_WorkStealingQueue*>** StaticGet_allThreadQueues()
		{
			return (::System::Threading::ThreadPoolWorkQueue_SparseArray_1<::System::Threading::ThreadPoolWorkQueue_WorkStealingQueue*>**)Il2CppClass::FromTypeDefinitionIndex(ThreadPoolWorkQueue_TypeDefinitionIndex)->GetStaticField(0xC710);
		}
		::System::Threading::ThreadPoolWorkQueue_QueueSegment* queueTail; // 0x10
		::System::Threading::ThreadPoolWorkQueue_QueueSegment* queueHead; // 0x18
		::System::Int32 numOutstandingThreadRequests; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOLWORKQUEUE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOLWORKQUEUE__CCTOR_OFFSET))();
		}

		::System::Threading::ThreadPoolWorkQueueThreadLocals* EnsureCurrentThreadHasQueue()
		{
			return ((::System::Threading::ThreadPoolWorkQueueThreadLocals*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOLWORKQUEUE_ENSURECURRENTTHREADHASQUEUE_OFFSET))(this);
		}

		::System::Void EnsureThreadRequested()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOLWORKQUEUE_ENSURETHREADREQUESTED_OFFSET))(this);
		}

		::System::Void MarkThreadRequestSatisfied()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOLWORKQUEUE_MARKTHREADREQUESTSATISFIED_OFFSET))(this);
		}

		::System::Void Enqueue(::System::Threading::IThreadPoolWorkItem* callback, ::System::Boolean forceGlobal)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::IThreadPoolWorkItem*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOLWORKQUEUE_ENQUEUE_OFFSET))(this, callback, forceGlobal);
		}

		::System::Boolean LocalFindAndPop(::System::Threading::IThreadPoolWorkItem* callback)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Threading::IThreadPoolWorkItem*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOLWORKQUEUE_LOCALFINDANDPOP_OFFSET))(this, callback);
		}

		::System::Void Dequeue(::System::Threading::ThreadPoolWorkQueueThreadLocals* tl, ::System::Threading::IThreadPoolWorkItem*& callback, ::System::Boolean& missedSteal)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::ThreadPoolWorkQueueThreadLocals*, ::System::Threading::IThreadPoolWorkItem*&, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOLWORKQUEUE_DEQUEUE_OFFSET))(this, tl, callback, missedSteal);
		}

		static ::System::Boolean Dispatch()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOLWORKQUEUE_DISPATCH_OFFSET))();
		}
	};
}
