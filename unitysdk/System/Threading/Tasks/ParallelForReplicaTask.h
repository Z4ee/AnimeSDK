#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Threading/Tasks/InternalTaskOptions.h"
#include "unitysdk/System/Threading/Tasks/Task.h"
#include "unitysdk/System/Threading/Tasks/TaskCreationOptions.h"

namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Threading::Tasks { class TaskScheduler; }

#define SYSTEM_THREADING_TASKS_PARALLELFORREPLICATASK_GET_HANDEDOVERCHILDREPLICA_OFFSET UNITYSDK_OFFSET(0x1C1B8780)
#define SYSTEM_THREADING_TASKS_PARALLELFORREPLICATASK_GET_SAVEDSTATEFORNEXTREPLICA_OFFSET UNITYSDK_OFFSET(0x1C1B8740)
#define SYSTEM_THREADING_TASKS_PARALLELFORREPLICATASK_GET_SAVEDSTATEFROMPREVIOUSREPLICA_OFFSET UNITYSDK_OFFSET(0x1C1B8760)
#define SYSTEM_THREADING_TASKS_PARALLELFORREPLICATASK_SET_HANDEDOVERCHILDREPLICA_OFFSET UNITYSDK_OFFSET(0x1C1B8790)
#define SYSTEM_THREADING_TASKS_PARALLELFORREPLICATASK_SET_SAVEDSTATEFORNEXTREPLICA_OFFSET UNITYSDK_OFFSET(0x1C1B8750)
#define SYSTEM_THREADING_TASKS_PARALLELFORREPLICATASK_SET_SAVEDSTATEFROMPREVIOUSREPLICA_OFFSET UNITYSDK_OFFSET(0x1C1B8770)
#define SYSTEM_THREADING_TASKS_PARALLELFORREPLICATASK__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1B8610)

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int ParallelForReplicaTask_TypeDefinitionIndex = 909;

	class ParallelForReplicaTask : public ::System::Threading::Tasks::Task
	{
	public:
		::System::Object* m_stateFromPreviousReplica; // 0x48
		::System::Threading::Tasks::Task* m_handedOverChildReplica; // 0x50
		::System::Object* m_stateForNextReplica; // 0x58

		::System::Void _ctor(::System::Action_1<::System::Object*>* taskReplicaDelegate, ::System::Object* stateObject, ::System::Threading::Tasks::Task* parentTask, ::System::Threading::Tasks::TaskScheduler* taskScheduler, ::System::Threading::Tasks::TaskCreationOptions creationOptionsForReplica, ::System::Threading::Tasks::InternalTaskOptions internalOptionsForReplica)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*, ::System::Object*, ::System::Threading::Tasks::Task*, ::System::Threading::Tasks::TaskScheduler*, ::System::Threading::Tasks::TaskCreationOptions, ::System::Threading::Tasks::InternalTaskOptions))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_PARALLELFORREPLICATASK__CTOR_OFFSET))(this, taskReplicaDelegate, stateObject, parentTask, taskScheduler, creationOptionsForReplica, internalOptionsForReplica);
		}

		::System::Object* get_SavedStateForNextReplica()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_PARALLELFORREPLICATASK_GET_SAVEDSTATEFORNEXTREPLICA_OFFSET))(this);
		}

		::System::Void set_SavedStateForNextReplica(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_PARALLELFORREPLICATASK_SET_SAVEDSTATEFORNEXTREPLICA_OFFSET))(this, value);
		}

		::System::Object* get_SavedStateFromPreviousReplica()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_PARALLELFORREPLICATASK_GET_SAVEDSTATEFROMPREVIOUSREPLICA_OFFSET))(this);
		}

		::System::Void set_SavedStateFromPreviousReplica(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_PARALLELFORREPLICATASK_SET_SAVEDSTATEFROMPREVIOUSREPLICA_OFFSET))(this, value);
		}

		::System::Threading::Tasks::Task* get_HandedOverChildReplica()
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_PARALLELFORREPLICATASK_GET_HANDEDOVERCHILDREPLICA_OFFSET))(this);
		}

		::System::Void set_HandedOverChildReplica(::System::Threading::Tasks::Task* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::Tasks::Task*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_PARALLELFORREPLICATASK_SET_HANDEDOVERCHILDREPLICA_OFFSET))(this, value);
		}
	};
}
