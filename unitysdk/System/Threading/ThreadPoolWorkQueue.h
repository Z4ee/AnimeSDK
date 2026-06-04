#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Threading { class IThreadPoolWorkItem; }
namespace System::Threading { class ThreadPoolWorkQueueThreadLocals; }
namespace System::Threading { class ThreadPoolWorkQueue_QueueSegment; }
namespace System::Threading { class ThreadPoolWorkQueue_WorkStealingQueue; }
namespace System::Threading { template <typename T> class ThreadPoolWorkQueue_SparseArray_1; }

#define SYSTEM_THREADING_THREADPOOLWORKQUEUE_DEQUEUE_OFFSET UNITYSDK_OFFSET(0x18634900)
#define SYSTEM_THREADING_THREADPOOLWORKQUEUE_DISPATCH_OFFSET UNITYSDK_OFFSET(0x18634ED0)
#define SYSTEM_THREADING_THREADPOOLWORKQUEUE_ENQUEUE_OFFSET UNITYSDK_OFFSET(0x18633810)
#define SYSTEM_THREADING_THREADPOOLWORKQUEUE_ENSURECURRENTTHREADHASQUEUE_OFFSET UNITYSDK_OFFSET(0x18633CE0)
#define SYSTEM_THREADING_THREADPOOLWORKQUEUE_ENSURETHREADREQUESTED_OFFSET UNITYSDK_OFFSET(0x18633F20)
#define SYSTEM_THREADING_THREADPOOLWORKQUEUE_LOCALFINDANDPOP_OFFSET UNITYSDK_OFFSET(0x186339D0)
#define SYSTEM_THREADING_THREADPOOLWORKQUEUE_MARKTHREADREQUESTSATISFIED_OFFSET UNITYSDK_OFFSET(0x18633F80)
#define SYSTEM_THREADING_THREADPOOLWORKQUEUE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18635540)
#define SYSTEM_THREADING_THREADPOOLWORKQUEUE__CTOR_OFFSET UNITYSDK_OFFSET(0x18633C60)

namespace System::Threading
{
	inline static constexpr unsigned int ThreadPoolWorkQueue_TypeDefinitionIndex = 854;

	class ThreadPoolWorkQueue : public ::System::Object
	{
	public:
		static ::System::Threading::ThreadPoolWorkQueue_SparseArray_1<::System::Threading::ThreadPoolWorkQueue_WorkStealingQueue*>** StaticGet_allThreadQueues()
		{
			return (::System::Threading::ThreadPoolWorkQueue_SparseArray_1<::System::Threading::ThreadPoolWorkQueue_WorkStealingQueue*>**)Il2CppClass::FromTypeDefinitionIndex(ThreadPoolWorkQueue_TypeDefinitionIndex)->GetStaticField(0x128C0);
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

		::System::Void Enqueue(::System::Threading::IThreadPoolWorkItem* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::IThreadPoolWorkItem*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOLWORKQUEUE_ENQUEUE_OFFSET))(this, a1, a2);
		}

		::System::Boolean LocalFindAndPop(::System::Threading::IThreadPoolWorkItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Threading::IThreadPoolWorkItem*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOLWORKQUEUE_LOCALFINDANDPOP_OFFSET))(this, a1);
		}

		::System::Void Dequeue(::System::Threading::ThreadPoolWorkQueueThreadLocals* a1, ::System::Threading::IThreadPoolWorkItem*& a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::ThreadPoolWorkQueueThreadLocals*, ::System::Threading::IThreadPoolWorkItem*&, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOLWORKQUEUE_DEQUEUE_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Boolean Dispatch()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOLWORKQUEUE_DISPATCH_OFFSET))();
		}
	};
}
