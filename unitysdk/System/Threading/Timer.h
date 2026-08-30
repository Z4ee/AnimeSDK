#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MarshalByRefObject.h"
#include "unitysdk/System/TimeSpan.h"

namespace System { class Object; }
namespace System::Threading { class TimerCallback; }
namespace System::Threading { class Timer_Scheduler; }

#define SYSTEM_THREADING_TIMER_CHANGE_1_OFFSET UNITYSDK_OFFSET(0x1BC57460)
#define SYSTEM_THREADING_TIMER_CHANGE_2_OFFSET UNITYSDK_OFFSET(0x1BC57220)
#define SYSTEM_THREADING_TIMER_CHANGE_OFFSET UNITYSDK_OFFSET(0x1BC57440)
#define SYSTEM_THREADING_TIMER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1BC4F010)
#define SYSTEM_THREADING_TIMER_GETTIMEMONOTONIC_OFFSET UNITYSDK_OFFSET(0x1BC575C0)
#define SYSTEM_THREADING_TIMER_INIT_OFFSET UNITYSDK_OFFSET(0x1BC570F0)
#define SYSTEM_THREADING_TIMER_KEEPROOTEDWHILESCHEDULED_OFFSET UNITYSDK_OFFSET(0x1BC4DAC0)
#define SYSTEM_THREADING_TIMER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BC57860)
#define SYSTEM_THREADING_TIMER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BC57150)
#define SYSTEM_THREADING_TIMER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC4DA60)

namespace System::Threading
{
	inline static constexpr unsigned int Timer_TypeDefinitionIndex = 879;

	class Timer : public ::System::MarshalByRefObject
	{
	public:
		static ::System::Threading::Timer_Scheduler** StaticGet_scheduler()
		{
			return (::System::Threading::Timer_Scheduler**)Il2CppClass::FromTypeDefinitionIndex(Timer_TypeDefinitionIndex)->GetStaticField(0x14070);
		}
		::System::Object* state; // 0x18
		::System::Threading::TimerCallback* callback; // 0x20
		::System::Int64 next_run; // 0x28
		::System::Boolean disposed; // 0x30
		::System::Int64 period_ms; // 0x38
		::System::Int64 due_time_ms; // 0x40

		::System::Void _ctor(::System::Threading::TimerCallback* a1, ::System::Object* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::TimerCallback*, ::System::Object*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TIMER__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_1(::System::Threading::TimerCallback* a1, ::System::Object* a2, ::System::TimeSpan a3, ::System::TimeSpan a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::TimerCallback*, ::System::Object*, ::System::TimeSpan, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TIMER__CTOR_1_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TIMER__CCTOR_OFFSET))();
		}

		::System::Void Init(::System::Threading::TimerCallback* a1, ::System::Object* a2, ::System::Int64 a3, ::System::Int64 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::TimerCallback*, ::System::Object*, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TIMER_INIT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean Change(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TIMER_CHANGE_OFFSET))(this, a1, a2);
		}

		::System::Boolean Change_1(::System::TimeSpan a1, ::System::TimeSpan a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::TimeSpan, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TIMER_CHANGE_1_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TIMER_DISPOSE_OFFSET))(this);
		}

		::System::Boolean Change_2(::System::Int64 a1, ::System::Int64 a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int64, ::System::Int64, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TIMER_CHANGE_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Void KeepRootedWhileScheduled()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TIMER_KEEPROOTEDWHILESCHEDULED_OFFSET))(this);
		}

		static ::System::Int64 GetTimeMonotonic()
		{
			return ((::System::Int64(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TIMER_GETTIMEMONOTONIC_OFFSET))();
		}
	};
}
