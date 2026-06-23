#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/Tasks/InternalTaskOptions.h"
#include "unitysdk/System/Threading/Tasks/TaskCreationOptions.h"

namespace System { template <typename T> class Action_1; }
namespace System::Threading::Tasks { class Task; }

#define SYSTEM_THREADING_TASKS_TASK___C__DISPLAYCLASS178_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0BF7F0)
#define SYSTEM_THREADING_TASKS_TASK___C__DISPLAYCLASS178_0__EXECUTESELFREPLICATING_B__0_OFFSET UNITYSDK_OFFSET(0x1D0BF800)

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int Task___c__DisplayClass178_0_TypeDefinitionIndex = 905;

	class Task___c__DisplayClass178_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::Object*>* taskReplicaDelegate; // 0x10
		::System::Threading::Tasks::Task* root; // 0x18
		::System::Threading::Tasks::TaskCreationOptions creationOptionsForReplicas; // 0x20
		::System::Boolean replicasAreQuitting; // 0x24
		::System::Threading::Tasks::InternalTaskOptions internalOptionsForReplicas; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK___C__DISPLAYCLASS178_0__CTOR_OFFSET))(this);
		}

		::System::Void _ExecuteSelfReplicating_b__0(::System::Object* _p0_)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK___C__DISPLAYCLASS178_0__EXECUTESELFREPLICATING_B__0_OFFSET))(this, _p0_);
		}
	};
}
