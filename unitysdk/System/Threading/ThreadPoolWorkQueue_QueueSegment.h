#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Threading { class IThreadPoolWorkItem; }

#define SYSTEM_THREADING_THREADPOOLWORKQUEUE_QUEUESEGMENT_COMPAREEXCHANGEINDEXES_OFFSET UNITYSDK_OFFSET(0x1960CA10)
#define SYSTEM_THREADING_THREADPOOLWORKQUEUE_QUEUESEGMENT_GETINDEXES_OFFSET UNITYSDK_OFFSET(0x1960C9F0)
#define SYSTEM_THREADING_THREADPOOLWORKQUEUE_QUEUESEGMENT_ISUSEDUP_OFFSET UNITYSDK_OFFSET(0x1960CA90)
#define SYSTEM_THREADING_THREADPOOLWORKQUEUE_QUEUESEGMENT_TRYDEQUEUE_OFFSET UNITYSDK_OFFSET(0x1960CB70)
#define SYSTEM_THREADING_THREADPOOLWORKQUEUE_QUEUESEGMENT_TRYENQUEUE_OFFSET UNITYSDK_OFFSET(0x1960CAC0)
#define SYSTEM_THREADING_THREADPOOLWORKQUEUE_QUEUESEGMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1960CA50)

namespace System::Threading
{
	inline static constexpr unsigned int ThreadPoolWorkQueue_QueueSegment_TypeDefinitionIndex = 847;

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

		::System::Void GetIndexes(::System::Int32& upper, ::System::Int32& lower)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOLWORKQUEUE_QUEUESEGMENT_GETINDEXES_OFFSET))(this, upper, lower);
		}

		::System::Boolean CompareExchangeIndexes(::System::Int32& prevUpper, ::System::Int32 newUpper, ::System::Int32& prevLower, ::System::Int32 newLower)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32&, ::System::Int32, ::System::Int32&, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOLWORKQUEUE_QUEUESEGMENT_COMPAREEXCHANGEINDEXES_OFFSET))(this, prevUpper, newUpper, prevLower, newLower);
		}

		::System::Boolean IsUsedUp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOLWORKQUEUE_QUEUESEGMENT_ISUSEDUP_OFFSET))(this);
		}

		::System::Boolean TryEnqueue(::System::Threading::IThreadPoolWorkItem* node)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Threading::IThreadPoolWorkItem*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOLWORKQUEUE_QUEUESEGMENT_TRYENQUEUE_OFFSET))(this, node);
		}

		::System::Boolean TryDequeue(::System::Threading::IThreadPoolWorkItem*& node)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Threading::IThreadPoolWorkItem*&))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOLWORKQUEUE_QUEUESEGMENT_TRYDEQUEUE_OFFSET))(this, node);
		}
	};
}
