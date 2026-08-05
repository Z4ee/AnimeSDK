#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Threading/Tasks/InternalTaskOptions.h"
#include "unitysdk/System/Threading/Tasks/Task.h"
#include "unitysdk/System/Threading/Tasks/TaskCreationOptions.h"

namespace System { class Action; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Threading::Tasks { class ParallelOptions; }
namespace System::Threading::Tasks { class TaskScheduler; }

#define SYSTEM_THREADING_TASKS_PARALLELFORREPLICATINGTASK_CREATEREPLICATASK_OFFSET UNITYSDK_OFFSET(0x1E418E10)
#define SYSTEM_THREADING_TASKS_PARALLELFORREPLICATINGTASK_SHOULDREPLICATE_OFFSET UNITYSDK_OFFSET(0x1E418DF0)
#define SYSTEM_THREADING_TASKS_PARALLELFORREPLICATINGTASK__CTOR_OFFSET UNITYSDK_OFFSET(0x1E418C40)

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int ParallelForReplicatingTask_TypeDefinitionIndex = 908;

	class ParallelForReplicatingTask : public ::System::Threading::Tasks::Task
	{
	public:
		::System::Int32 m_replicationDownCount; // 0x48

		::System::Void _ctor(::System::Threading::Tasks::ParallelOptions* parallelOptions, ::System::Action* action, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::Tasks::ParallelOptions*, ::System::Action*, ::System::Threading::Tasks::TaskCreationOptions, ::System::Threading::Tasks::InternalTaskOptions))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_PARALLELFORREPLICATINGTASK__CTOR_OFFSET))(this, parallelOptions, action, creationOptions, internalOptions);
		}

		::System::Boolean ShouldReplicate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_PARALLELFORREPLICATINGTASK_SHOULDREPLICATE_OFFSET))(this);
		}

		::System::Threading::Tasks::Task* CreateReplicaTask(::System::Action_1<::System::Object*>* taskReplicaDelegate, ::System::Object* stateObject, ::System::Threading::Tasks::Task* parentTask, ::System::Threading::Tasks::TaskScheduler* taskScheduler, ::System::Threading::Tasks::TaskCreationOptions creationOptionsForReplica, ::System::Threading::Tasks::InternalTaskOptions internalOptionsForReplica)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::Action_1<::System::Object*>*, ::System::Object*, ::System::Threading::Tasks::Task*, ::System::Threading::Tasks::TaskScheduler*, ::System::Threading::Tasks::TaskCreationOptions, ::System::Threading::Tasks::InternalTaskOptions))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_PARALLELFORREPLICATINGTASK_CREATEREPLICATASK_OFFSET))(this, taskReplicaDelegate, stateObject, parentTask, taskScheduler, creationOptionsForReplica, internalOptionsForReplica);
		}
	};
}
