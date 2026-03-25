#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Random; }
namespace System::Threading { class ThreadPoolWorkQueue; }
namespace System::Threading { class ThreadPoolWorkQueue_WorkStealingQueue; }

#define SYSTEM_THREADING_THREADPOOLWORKQUEUETHREADLOCALS_CLEANUP_OFFSET UNITYSDK_OFFSET(0x16250540)
#define SYSTEM_THREADING_THREADPOOLWORKQUEUETHREADLOCALS_FINALIZE_OFFSET UNITYSDK_OFFSET(0x16250640)
#define SYSTEM_THREADING_THREADPOOLWORKQUEUETHREADLOCALS__CTOR_OFFSET UNITYSDK_OFFSET(0x1624E7C0)

namespace System::Threading
{
	inline static constexpr unsigned int ThreadPoolWorkQueueThreadLocals_TypeDefinitionIndex = 857;

	class ThreadPoolWorkQueueThreadLocals : public ::System::Object
	{
	public:
		static ::System::Threading::ThreadPoolWorkQueueThreadLocals** StaticGet_threadLocals()
		{
			return (::System::Threading::ThreadPoolWorkQueueThreadLocals**)Il2CppClass::FromTypeDefinitionIndex(ThreadPoolWorkQueueThreadLocals_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::Random* random; // 0x10
		::System::Threading::ThreadPoolWorkQueue_WorkStealingQueue* workStealingQueue; // 0x18
		::System::Threading::ThreadPoolWorkQueue* workQueue; // 0x20

		::System::Void _ctor(::System::Threading::ThreadPoolWorkQueue* tpq)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::ThreadPoolWorkQueue*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOLWORKQUEUETHREADLOCALS__CTOR_OFFSET))(this, tpq);
		}

		::System::Void CleanUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOLWORKQUEUETHREADLOCALS_CLEANUP_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOLWORKQUEUETHREADLOCALS_FINALIZE_OFFSET))(this);
		}
	};
}
