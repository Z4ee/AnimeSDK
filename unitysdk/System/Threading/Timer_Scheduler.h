#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class SortedList; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Threading { class ManualResetEvent; }
namespace System::Threading { class Timer; }

#define SYSTEM_THREADING_TIMER_SCHEDULER_ADD_OFFSET UNITYSDK_OFFSET(0x1ADD5CA0)
#define SYSTEM_THREADING_TIMER_SCHEDULER_CHANGE_OFFSET UNITYSDK_OFFSET(0x1ADD5A50)
#define SYSTEM_THREADING_TIMER_SCHEDULER_FINDBYDUETIME_OFFSET UNITYSDK_OFFSET(0x1ADD5E30)
#define SYSTEM_THREADING_TIMER_SCHEDULER_INTERNALREMOVE_OFFSET UNITYSDK_OFFSET(0x1ADD5A00)
#define SYSTEM_THREADING_TIMER_SCHEDULER_REMOVE_OFFSET UNITYSDK_OFFSET(0x1ADD58E0)
#define SYSTEM_THREADING_TIMER_SCHEDULER_SCHEDULERTHREAD_OFFSET UNITYSDK_OFFSET(0x1ADD6000)
#define SYSTEM_THREADING_TIMER_SCHEDULER_SHRINKIFNEEDED_OFFSET UNITYSDK_OFFSET(0x1ADD7000)
#define SYSTEM_THREADING_TIMER_SCHEDULER_TIMERCB_OFFSET UNITYSDK_OFFSET(0x1ADD5F90)
#define SYSTEM_THREADING_TIMER_SCHEDULER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ADD5700)
#define SYSTEM_THREADING_TIMER_SCHEDULER__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADD5750)

namespace System::Threading
{
	inline static constexpr unsigned int Timer_Scheduler_TypeDefinitionIndex = 867;

	class Timer_Scheduler : public ::System::Object
	{
	public:
		static ::System::Threading::Timer_Scheduler** StaticGet_instance()
		{
			return (::System::Threading::Timer_Scheduler**)Il2CppClass::FromTypeDefinitionIndex(Timer_Scheduler_TypeDefinitionIndex)->GetStaticField(0x3E0);
		}
		::System::Collections::SortedList* list; // 0x10
		::System::Threading::ManualResetEvent* changed; // 0x18

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TIMER_SCHEDULER__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TIMER_SCHEDULER__CTOR_OFFSET))(this);
		}

		::System::Void Remove(::System::Threading::Timer* timer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::Timer*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TIMER_SCHEDULER_REMOVE_OFFSET))(this, timer);
		}

		::System::Void Change(::System::Threading::Timer* timer, ::System::Int64 new_next_run)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::Timer*, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TIMER_SCHEDULER_CHANGE_OFFSET))(this, timer, new_next_run);
		}

		::System::Int32 FindByDueTime(::System::Int64 nr)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TIMER_SCHEDULER_FINDBYDUETIME_OFFSET))(this, nr);
		}

		::System::Void Add(::System::Threading::Timer* timer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::Timer*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TIMER_SCHEDULER_ADD_OFFSET))(this, timer);
		}

		::System::Int32 InternalRemove(::System::Threading::Timer* timer)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Threading::Timer*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TIMER_SCHEDULER_INTERNALREMOVE_OFFSET))(this, timer);
		}

		static ::System::Void TimerCB(::System::Object* o)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TIMER_SCHEDULER_TIMERCB_OFFSET))(o);
		}

		::System::Void SchedulerThread()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TIMER_SCHEDULER_SCHEDULERTHREAD_OFFSET))(this);
		}

		::System::Void ShrinkIfNeeded(::System::Collections::Generic::List_1<::System::Threading::Timer*>* list, ::System::Int32 initial)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Threading::Timer*>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TIMER_SCHEDULER_SHRINKIFNEEDED_OFFSET))(this, list, initial);
		}
	};
}
