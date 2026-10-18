#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class SortedList; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Threading { class ManualResetEvent; }
namespace System::Threading { class Timer; }

#define SYSTEM_THREADING_TIMER_SCHEDULER_ADD_OFFSET UNITYSDK_OFFSET(0x1C135190)
#define SYSTEM_THREADING_TIMER_SCHEDULER_CHANGE_OFFSET UNITYSDK_OFFSET(0x1C134C70)
#define SYSTEM_THREADING_TIMER_SCHEDULER_FINDBYDUETIME_OFFSET UNITYSDK_OFFSET(0x1C1353E0)
#define SYSTEM_THREADING_TIMER_SCHEDULER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1C135030)
#define SYSTEM_THREADING_TIMER_SCHEDULER_INTERNALREMOVE_OFFSET UNITYSDK_OFFSET(0x1C135070)
#define SYSTEM_THREADING_TIMER_SCHEDULER_REMOVE_OFFSET UNITYSDK_OFFSET(0x1C134B60)
#define SYSTEM_THREADING_TIMER_SCHEDULER_SCHEDULERTHREAD_OFFSET UNITYSDK_OFFSET(0x1C1356C0)
#define SYSTEM_THREADING_TIMER_SCHEDULER_SHRINKIFNEEDED_OFFSET UNITYSDK_OFFSET(0x1C136EB0)
#define SYSTEM_THREADING_TIMER_SCHEDULER_TIMERCB_OFFSET UNITYSDK_OFFSET(0x1C135660)
#define SYSTEM_THREADING_TIMER_SCHEDULER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C134F20)
#define SYSTEM_THREADING_TIMER_SCHEDULER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C134F50)

namespace System::Threading
{
	inline static constexpr unsigned int Timer_Scheduler_TypeDefinitionIndex = 881;

	class Timer_Scheduler : public ::System::Object
	{
	public:
		static ::System::Threading::Timer_Scheduler** StaticGet_instance()
		{
			return (::System::Threading::Timer_Scheduler**)Il2CppClass::FromTypeDefinitionIndex(Timer_Scheduler_TypeDefinitionIndex)->GetStaticField(0x2AA80);
		}
		::System::Threading::ManualResetEvent* changed; // 0x10
		::System::Collections::SortedList* list; // 0x18

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TIMER_SCHEDULER__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TIMER_SCHEDULER__CTOR_OFFSET))(this);
		}

		static ::System::Threading::Timer_Scheduler* get_Instance()
		{
			return ((::System::Threading::Timer_Scheduler*(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TIMER_SCHEDULER_GET_INSTANCE_OFFSET))();
		}

		::System::Void Remove(::System::Threading::Timer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::Timer*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TIMER_SCHEDULER_REMOVE_OFFSET))(this, a1);
		}

		::System::Void Change(::System::Threading::Timer* a1, ::System::Int64 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::Timer*, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TIMER_SCHEDULER_CHANGE_OFFSET))(this, a1, a2);
		}

		::System::Int32 FindByDueTime(::System::Int64 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TIMER_SCHEDULER_FINDBYDUETIME_OFFSET))(this, a1);
		}

		::System::Void Add(::System::Threading::Timer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::Timer*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TIMER_SCHEDULER_ADD_OFFSET))(this, a1);
		}

		::System::Int32 InternalRemove(::System::Threading::Timer* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Threading::Timer*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TIMER_SCHEDULER_INTERNALREMOVE_OFFSET))(this, a1);
		}

		static ::System::Void TimerCB(::System::Object* a1)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TIMER_SCHEDULER_TIMERCB_OFFSET))(a1);
		}

		::System::Void SchedulerThread()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TIMER_SCHEDULER_SCHEDULERTHREAD_OFFSET))(this);
		}

		::System::Void ShrinkIfNeeded(::System::Collections::Generic::List_1<::System::Threading::Timer*>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Threading::Timer*>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TIMER_SCHEDULER_SHRINKIFNEEDED_OFFSET))(this, a1, a2);
		}
	};
}
