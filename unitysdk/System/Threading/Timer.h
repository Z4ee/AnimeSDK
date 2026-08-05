#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MarshalByRefObject.h"
#include "unitysdk/System/TimeSpan.h"

namespace System { class Object; }
namespace System::Threading { class TimerCallback; }
namespace System::Threading { class Timer_Scheduler; }

#define SYSTEM_THREADING_TIMER_CHANGE_1_OFFSET UNITYSDK_OFFSET(0x1DC112C0)
#define SYSTEM_THREADING_TIMER_CHANGE_2_OFFSET UNITYSDK_OFFSET(0x1DC11040)
#define SYSTEM_THREADING_TIMER_CHANGE_OFFSET UNITYSDK_OFFSET(0x1DC112A0)
#define SYSTEM_THREADING_TIMER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1DC11350)
#define SYSTEM_THREADING_TIMER_GETTIMEMONOTONIC_OFFSET UNITYSDK_OFFSET(0x1DC113E0)
#define SYSTEM_THREADING_TIMER_INIT_OFFSET UNITYSDK_OFFSET(0x1DC10DB0)
#define SYSTEM_THREADING_TIMER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DC11420)
#define SYSTEM_THREADING_TIMER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DC10E50)
#define SYSTEM_THREADING_TIMER__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1DC10F60)
#define SYSTEM_THREADING_TIMER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DC10D20)

namespace System::Threading
{
	inline static constexpr unsigned int Timer_TypeDefinitionIndex = 865;

	class Timer : public ::System::MarshalByRefObject
	{
	public:
		static ::System::Threading::Timer_Scheduler** StaticGet_scheduler()
		{
			return (::System::Threading::Timer_Scheduler**)Il2CppClass::FromTypeDefinitionIndex(Timer_TypeDefinitionIndex)->GetStaticField(0x3D0);
		}
		::System::Object* state; // 0x18
		::System::Threading::TimerCallback* callback; // 0x20
		::System::Int64 next_run; // 0x28
		::System::Boolean disposed; // 0x30
		::System::Int64 due_time_ms; // 0x38
		::System::Int64 period_ms; // 0x40

		::System::Void _ctor(::System::Threading::TimerCallback* callback, ::System::Object* state, ::System::Int32 dueTime, ::System::Int32 period)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::TimerCallback*, ::System::Object*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TIMER__CTOR_OFFSET))(this, callback, state, dueTime, period);
		}

		::System::Void _ctor_1(::System::Threading::TimerCallback* callback, ::System::Object* state, ::System::TimeSpan dueTime, ::System::TimeSpan period)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::TimerCallback*, ::System::Object*, ::System::TimeSpan, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TIMER__CTOR_1_OFFSET))(this, callback, state, dueTime, period);
		}

		::System::Void _ctor_2(::System::Threading::TimerCallback* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::TimerCallback*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TIMER__CTOR_2_OFFSET))(this, callback);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TIMER__CCTOR_OFFSET))();
		}

		::System::Void Init(::System::Threading::TimerCallback* callback, ::System::Object* state, ::System::Int64 dueTime, ::System::Int64 period)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::TimerCallback*, ::System::Object*, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TIMER_INIT_OFFSET))(this, callback, state, dueTime, period);
		}

		::System::Boolean Change(::System::Int32 dueTime, ::System::Int32 period)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TIMER_CHANGE_OFFSET))(this, dueTime, period);
		}

		::System::Boolean Change_1(::System::TimeSpan dueTime, ::System::TimeSpan period)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::TimeSpan, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TIMER_CHANGE_1_OFFSET))(this, dueTime, period);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TIMER_DISPOSE_OFFSET))(this);
		}

		::System::Boolean Change_2(::System::Int64 dueTime, ::System::Int64 period, ::System::Boolean first)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int64, ::System::Int64, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TIMER_CHANGE_2_OFFSET))(this, dueTime, period, first);
		}

		static ::System::Int64 GetTimeMonotonic()
		{
			return ((::System::Int64(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TIMER_GETTIMEMONOTONIC_OFFSET))();
		}
	};
}
