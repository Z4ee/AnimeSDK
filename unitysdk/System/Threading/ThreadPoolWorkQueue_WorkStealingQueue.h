#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/SpinLock.h"

namespace System::Threading { class IThreadPoolWorkItem; }

#define SYSTEM_THREADING_THREADPOOLWORKQUEUE_WORKSTEALINGQUEUE_LOCALFINDANDPOP_OFFSET UNITYSDK_OFFSET(0x1CD9F5C0)
#define SYSTEM_THREADING_THREADPOOLWORKQUEUE_WORKSTEALINGQUEUE_LOCALPOP_OFFSET UNITYSDK_OFFSET(0x1CD9F9C0)
#define SYSTEM_THREADING_THREADPOOLWORKQUEUE_WORKSTEALINGQUEUE_LOCALPUSH_OFFSET UNITYSDK_OFFSET(0x1CD9EF40)
#define SYSTEM_THREADING_THREADPOOLWORKQUEUE_WORKSTEALINGQUEUE_TRYSTEAL_1_OFFSET UNITYSDK_OFFSET(0x1CD9FD70)
#define SYSTEM_THREADING_THREADPOOLWORKQUEUE_WORKSTEALINGQUEUE_TRYSTEAL_OFFSET UNITYSDK_OFFSET(0x1CD9FD60)
#define SYSTEM_THREADING_THREADPOOLWORKQUEUE_WORKSTEALINGQUEUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDA00B0)

namespace System::Threading
{
	inline static constexpr unsigned int ThreadPoolWorkQueue_WorkStealingQueue_TypeDefinitionIndex = 846;

	class ThreadPoolWorkQueue_WorkStealingQueue : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Threading::IThreadPoolWorkItem*>* m_array; // 0x10
		::System::Threading::SpinLock m_foreignLock; // 0x18
		::System::Int32 m_tailIndex; // 0x1C
		::System::Int32 m_mask; // 0x20
		::System::Int32 m_headIndex; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOLWORKQUEUE_WORKSTEALINGQUEUE__CTOR_OFFSET))(this);
		}

		::System::Void LocalPush(::System::Threading::IThreadPoolWorkItem* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::IThreadPoolWorkItem*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOLWORKQUEUE_WORKSTEALINGQUEUE_LOCALPUSH_OFFSET))(this, obj);
		}

		::System::Boolean LocalFindAndPop(::System::Threading::IThreadPoolWorkItem* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Threading::IThreadPoolWorkItem*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOLWORKQUEUE_WORKSTEALINGQUEUE_LOCALFINDANDPOP_OFFSET))(this, obj);
		}

		::System::Boolean LocalPop(::System::Threading::IThreadPoolWorkItem*& obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Threading::IThreadPoolWorkItem*&))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOLWORKQUEUE_WORKSTEALINGQUEUE_LOCALPOP_OFFSET))(this, obj);
		}

		::System::Boolean TrySteal(::System::Threading::IThreadPoolWorkItem*& obj, ::System::Boolean& missedSteal)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Threading::IThreadPoolWorkItem*&, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOLWORKQUEUE_WORKSTEALINGQUEUE_TRYSTEAL_OFFSET))(this, obj, missedSteal);
		}

		::System::Boolean TrySteal_1(::System::Threading::IThreadPoolWorkItem*& obj, ::System::Boolean& missedSteal, ::System::Int32 millisecondsTimeout)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Threading::IThreadPoolWorkItem*&, ::System::Boolean&, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOLWORKQUEUE_WORKSTEALINGQUEUE_TRYSTEAL_1_OFFSET))(this, obj, missedSteal, millisecondsTimeout);
		}
	};
}
