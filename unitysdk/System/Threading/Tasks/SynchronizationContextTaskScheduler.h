#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Threading/Tasks/TaskScheduler.h"

namespace System { class Object; }
namespace System::Threading { class SendOrPostCallback; }
namespace System::Threading { class SynchronizationContext; }
namespace System::Threading::Tasks { class Task; }

#define SYSTEM_THREADING_TASKS_SYNCHRONIZATIONCONTEXTTASKSCHEDULER_POSTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1BC44470)
#define SYSTEM_THREADING_TASKS_SYNCHRONIZATIONCONTEXTTASKSCHEDULER_QUEUETASK_OFFSET UNITYSDK_OFFSET(0x1BC44260)
#define SYSTEM_THREADING_TASKS_SYNCHRONIZATIONCONTEXTTASKSCHEDULER_TRYEXECUTETASKINLINE_OFFSET UNITYSDK_OFFSET(0x1BC44360)
#define SYSTEM_THREADING_TASKS_SYNCHRONIZATIONCONTEXTTASKSCHEDULER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BC44640)
#define SYSTEM_THREADING_TASKS_SYNCHRONIZATIONCONTEXTTASKSCHEDULER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC44120)

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int SynchronizationContextTaskScheduler_TypeDefinitionIndex = 931;

	class SynchronizationContextTaskScheduler : public ::System::Threading::Tasks::TaskScheduler
	{
	public:
		static ::System::Threading::SendOrPostCallback** StaticGet_s_postCallback()
		{
			return (::System::Threading::SendOrPostCallback**)Il2CppClass::FromTypeDefinitionIndex(SynchronizationContextTaskScheduler_TypeDefinitionIndex)->GetStaticField(0x13620);
		}
		::System::Threading::SynchronizationContext* m_synchronizationContext; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_SYNCHRONIZATIONCONTEXTTASKSCHEDULER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_SYNCHRONIZATIONCONTEXTTASKSCHEDULER__CCTOR_OFFSET))();
		}

		::System::Void QueueTask(::System::Threading::Tasks::Task* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::Tasks::Task*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_SYNCHRONIZATIONCONTEXTTASKSCHEDULER_QUEUETASK_OFFSET))(this, a1);
		}

		::System::Boolean TryExecuteTaskInline(::System::Threading::Tasks::Task* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Threading::Tasks::Task*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_SYNCHRONIZATIONCONTEXTTASKSCHEDULER_TRYEXECUTETASKINLINE_OFFSET))(this, a1, a2);
		}

		static ::System::Void PostCallback(::System::Object* a1)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_SYNCHRONIZATIONCONTEXTTASKSCHEDULER_POSTCALLBACK_OFFSET))(a1);
		}
	};
}
