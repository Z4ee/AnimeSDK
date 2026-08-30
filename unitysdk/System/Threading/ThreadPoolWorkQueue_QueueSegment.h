#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Threading { class IThreadPoolWorkItem; }

#define SYSTEM_THREADING_THREADPOOLWORKQUEUE_QUEUESEGMENT_COMPAREEXCHANGEINDEXES_OFFSET UNITYSDK_OFFSET(0x1BC56960)
#define SYSTEM_THREADING_THREADPOOLWORKQUEUE_QUEUESEGMENT_GETINDEXES_OFFSET UNITYSDK_OFFSET(0x1BC56940)
#define SYSTEM_THREADING_THREADPOOLWORKQUEUE_QUEUESEGMENT_ISUSEDUP_OFFSET UNITYSDK_OFFSET(0x1BC561A0)
#define SYSTEM_THREADING_THREADPOOLWORKQUEUE_QUEUESEGMENT_TRYDEQUEUE_OFFSET UNITYSDK_OFFSET(0x1BC560C0)
#define SYSTEM_THREADING_THREADPOOLWORKQUEUE_QUEUESEGMENT_TRYENQUEUE_OFFSET UNITYSDK_OFFSET(0x1BC557B0)
#define SYSTEM_THREADING_THREADPOOLWORKQUEUE_QUEUESEGMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC54F50)

namespace System::Threading
{
	inline static constexpr unsigned int ThreadPoolWorkQueue_QueueSegment_TypeDefinitionIndex = 861;

	class ThreadPoolWorkQueue_QueueSegment : public ::System::Object
	{
	public:
		::System::Threading::ThreadPoolWorkQueue_QueueSegment* Next; // 0x10
		::Il2CppArray<::System::Threading::IThreadPoolWorkItem*>* nodes; // 0x18
		::System::Int32 indexes; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOLWORKQUEUE_QUEUESEGMENT__CTOR_OFFSET))(this);
		}

		::System::Void GetIndexes(::System::Int32& a1, ::System::Int32& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOLWORKQUEUE_QUEUESEGMENT_GETINDEXES_OFFSET))(this, a1, a2);
		}

		::System::Boolean CompareExchangeIndexes(::System::Int32& a1, ::System::Int32 a2, ::System::Int32& a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32&, ::System::Int32, ::System::Int32&, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOLWORKQUEUE_QUEUESEGMENT_COMPAREEXCHANGEINDEXES_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean IsUsedUp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOLWORKQUEUE_QUEUESEGMENT_ISUSEDUP_OFFSET))(this);
		}

		::System::Boolean TryEnqueue(::System::Threading::IThreadPoolWorkItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Threading::IThreadPoolWorkItem*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOLWORKQUEUE_QUEUESEGMENT_TRYENQUEUE_OFFSET))(this, a1);
		}

		::System::Boolean TryDequeue(::System::Threading::IThreadPoolWorkItem*& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Threading::IThreadPoolWorkItem*&))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOLWORKQUEUE_QUEUESEGMENT_TRYDEQUEUE_OFFSET))(this, a1);
		}
	};
}
