#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Threading/Tasks/Task_1.h"

namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Threading::Tasks { class Task; }

#define SYSTEM_THREADING_TASKS_TASKFACTORY_COMPLETEONINVOKEPROMISE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C666990)
#define SYSTEM_THREADING_TASKS_TASKFACTORY_COMPLETEONINVOKEPROMISE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6668B0)

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int TaskFactory_CompleteOnInvokePromise_TypeDefinitionIndex = 929;

	class TaskFactory_CompleteOnInvokePromise : public ::System::Threading::Tasks::Task_1<::System::Threading::Tasks::Task*>
	{
	public:
		::System::Collections::Generic::IList_1<::System::Threading::Tasks::Task*>* _tasks; // 0x50
		::System::Int32 m_firstTaskAlreadyCompleted; // 0x58

		::System::Void _ctor(::System::Collections::Generic::IList_1<::System::Threading::Tasks::Task*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::Threading::Tasks::Task*>*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKFACTORY_COMPLETEONINVOKEPROMISE__CTOR_OFFSET))(this, a1);
		}

		::System::Void Invoke(::System::Threading::Tasks::Task* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::Tasks::Task*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKFACTORY_COMPLETEONINVOKEPROMISE_INVOKE_OFFSET))(this, a1);
		}
	};
}
