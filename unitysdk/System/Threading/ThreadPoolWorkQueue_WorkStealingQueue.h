#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/SpinLock.h"

namespace System::Threading { class IThreadPoolWorkItem; }

#define SYSTEM_THREADING_THREADPOOLWORKQUEUE_WORKSTEALINGQUEUE_LOCALFINDANDPOP_OFFSET UNITYSDK_OFFSET(0x1A739CE0)
#define SYSTEM_THREADING_THREADPOOLWORKQUEUE_WORKSTEALINGQUEUE_LOCALPOP_OFFSET UNITYSDK_OFFSET(0x1A73A260)
#define SYSTEM_THREADING_THREADPOOLWORKQUEUE_WORKSTEALINGQUEUE_LOCALPUSH_OFFSET UNITYSDK_OFFSET(0x1A7396E0)
#define SYSTEM_THREADING_THREADPOOLWORKQUEUE_WORKSTEALINGQUEUE_TRYSTEAL_1_OFFSET UNITYSDK_OFFSET(0x1A73AE70)
#define SYSTEM_THREADING_THREADPOOLWORKQUEUE_WORKSTEALINGQUEUE_TRYSTEAL_OFFSET UNITYSDK_OFFSET(0x1A73A660)
#define SYSTEM_THREADING_THREADPOOLWORKQUEUE_WORKSTEALINGQUEUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A73B120)

namespace System::Threading
{
	inline static constexpr unsigned int ThreadPoolWorkQueue_WorkStealingQueue_TypeDefinitionIndex = 856;

	class ThreadPoolWorkQueue_WorkStealingQueue : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Threading::IThreadPoolWorkItem*>* m_array; // 0x10
		::System::Int32 m_tailIndex; // 0x18
		::System::Threading::SpinLock m_foreignLock; // 0x1C
		::System::Int32 m_mask; // 0x20
		::System::Int32 m_headIndex; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOLWORKQUEUE_WORKSTEALINGQUEUE__CTOR_OFFSET))(this);
		}

		::System::Void LocalPush(::System::Threading::IThreadPoolWorkItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::IThreadPoolWorkItem*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOLWORKQUEUE_WORKSTEALINGQUEUE_LOCALPUSH_OFFSET))(this, a1);
		}

		::System::Boolean LocalFindAndPop(::System::Threading::IThreadPoolWorkItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Threading::IThreadPoolWorkItem*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOLWORKQUEUE_WORKSTEALINGQUEUE_LOCALFINDANDPOP_OFFSET))(this, a1);
		}

		::System::Boolean LocalPop(::System::Threading::IThreadPoolWorkItem*& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Threading::IThreadPoolWorkItem*&))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOLWORKQUEUE_WORKSTEALINGQUEUE_LOCALPOP_OFFSET))(this, a1);
		}

		::System::Boolean TrySteal(::System::Threading::IThreadPoolWorkItem*& a1, ::System::Boolean& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Threading::IThreadPoolWorkItem*&, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOLWORKQUEUE_WORKSTEALINGQUEUE_TRYSTEAL_OFFSET))(this, a1, a2);
		}

		::System::Boolean TrySteal_1(::System::Threading::IThreadPoolWorkItem*& a1, ::System::Boolean& a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Threading::IThreadPoolWorkItem*&, ::System::Boolean&, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOLWORKQUEUE_WORKSTEALINGQUEUE_TRYSTEAL_1_OFFSET))(this, a1, a2, a3);
		}
	};
}
