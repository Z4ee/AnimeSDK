#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define SYSTEM_THREADING_TASKS_TASKSCHEDULERAWAITTASKCONTINUATION___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF47EA0)
#define SYSTEM_THREADING_TASKS_TASKSCHEDULERAWAITTASKCONTINUATION___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF47EE0)
#define SYSTEM_THREADING_TASKS_TASKSCHEDULERAWAITTASKCONTINUATION___C__RUN_B__2_0_OFFSET UNITYSDK_OFFSET(0x1DF47EF0)

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int TaskSchedulerAwaitTaskContinuation___c_TypeDefinitionIndex = 927;

	class TaskSchedulerAwaitTaskContinuation___c : public ::System::Object
	{
	public:
		static ::System::Threading::Tasks::TaskSchedulerAwaitTaskContinuation___c** StaticGet___9()
		{
			return (::System::Threading::Tasks::TaskSchedulerAwaitTaskContinuation___c**)Il2CppClass::FromTypeDefinitionIndex(TaskSchedulerAwaitTaskContinuation___c_TypeDefinitionIndex)->GetStaticField(0xCD0);
		}
		static ::System::Action_1<::System::Object*>** StaticGet___9__2_0()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(TaskSchedulerAwaitTaskContinuation___c_TypeDefinitionIndex)->GetStaticField(0xCD8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKSCHEDULERAWAITTASKCONTINUATION___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKSCHEDULERAWAITTASKCONTINUATION___C__CTOR_OFFSET))(this);
		}

		::System::Void _Run_b__2_0(::System::Object* state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKSCHEDULERAWAITTASKCONTINUATION___C__RUN_B__2_0_OFFSET))(this, state);
		}
	};
}
