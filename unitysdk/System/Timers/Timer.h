#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/Component.h"

namespace System { class Object; }
namespace System::ComponentModel { class ISite; }
namespace System::ComponentModel { class ISynchronizeInvoke; }
namespace System::Threading { class Timer; }
namespace System::Threading { class TimerCallback; }
namespace System::Timers { class ElapsedEventHandler; }

#define SYSTEM_TIMERS_TIMER_ADD_ELAPSED_OFFSET UNITYSDK_OFFSET(0x18762D40)
#define SYSTEM_TIMERS_TIMER_CALCULATEROUNDEDINTERVAL_OFFSET UNITYSDK_OFFSET(0x187627B0)
#define SYSTEM_TIMERS_TIMER_CLOSE_OFFSET UNITYSDK_OFFSET(0x187630E0)
#define SYSTEM_TIMERS_TIMER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18763160)
#define SYSTEM_TIMERS_TIMER_GET_SITE_OFFSET UNITYSDK_OFFSET(0x18762E00)
#define SYSTEM_TIMERS_TIMER_GET_SYNCHRONIZINGOBJECT_OFFSET UNITYSDK_OFFSET(0x18762E10)
#define SYSTEM_TIMERS_TIMER_MYTIMERCALLBACK_OFFSET UNITYSDK_OFFSET(0x18763360)
#define SYSTEM_TIMERS_TIMER_REMOVE_ELAPSED_OFFSET UNITYSDK_OFFSET(0x18762DA0)
#define SYSTEM_TIMERS_TIMER_SET_AUTORESET_OFFSET UNITYSDK_OFFSET(0x18762950)
#define SYSTEM_TIMERS_TIMER_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x18762AB0)
#define SYSTEM_TIMERS_TIMER_START_OFFSET UNITYSDK_OFFSET(0x187631F0)
#define SYSTEM_TIMERS_TIMER_STOP_OFFSET UNITYSDK_OFFSET(0x18763200)
#define SYSTEM_TIMERS_TIMER_UPDATETIMER_OFFSET UNITYSDK_OFFSET(0x18762A60)
#define SYSTEM_TIMERS_TIMER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18762600)
#define SYSTEM_TIMERS_TIMER__CTOR_OFFSET UNITYSDK_OFFSET(0x18762570)

namespace System::Timers
{
	inline static constexpr unsigned int Timer_TypeDefinitionIndex = 2482;

	class Timer : public ::System::ComponentModel::Component
	{
	public:
		::System::Threading::TimerCallback* callback; // 0x28
		::System::ComponentModel::ISynchronizeInvoke* synchronizingObject; // 0x30
		::System::Object* cookie; // 0x38
		::System::Timers::ElapsedEventHandler* onIntervalElapsed; // 0x40
		::System::Threading::Timer* timer; // 0x48
		::System::Boolean disposed; // 0x50
		::System::Boolean initializing; // 0x51
		::System::Boolean enabled; // 0x52
		::System::Boolean autoReset; // 0x53
		::System::Boolean delayedEnable; // 0x54
		::System::Double interval; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMERS_TIMER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Double interval)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_TIMERS_TIMER__CTOR_1_OFFSET))(this, interval);
		}

		::System::Void set_AutoReset(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TIMERS_TIMER_SET_AUTORESET_OFFSET))(this, value);
		}

		::System::Void set_Enabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TIMERS_TIMER_SET_ENABLED_OFFSET))(this, value);
		}

		static ::System::Int32 CalculateRoundedInterval(::System::Double interval, ::System::Boolean argumentCheck)
		{
			return ((::System::Int32(*)(::System::Double, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TIMERS_TIMER_CALCULATEROUNDEDINTERVAL_OFFSET))(interval, argumentCheck);
		}

		::System::Void UpdateTimer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMERS_TIMER_UPDATETIMER_OFFSET))(this);
		}

		::System::Void add_Elapsed(::System::Timers::ElapsedEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Timers::ElapsedEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_TIMERS_TIMER_ADD_ELAPSED_OFFSET))(this, value);
		}

		::System::Void remove_Elapsed(::System::Timers::ElapsedEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Timers::ElapsedEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_TIMERS_TIMER_REMOVE_ELAPSED_OFFSET))(this, value);
		}

		::System::ComponentModel::ISite* get_Site()
		{
			return ((::System::ComponentModel::ISite*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMERS_TIMER_GET_SITE_OFFSET))(this);
		}

		::System::ComponentModel::ISynchronizeInvoke* get_SynchronizingObject()
		{
			return ((::System::ComponentModel::ISynchronizeInvoke*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMERS_TIMER_GET_SYNCHRONIZINGOBJECT_OFFSET))(this);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMERS_TIMER_CLOSE_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TIMERS_TIMER_DISPOSE_OFFSET))(this, disposing);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMERS_TIMER_START_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMERS_TIMER_STOP_OFFSET))(this);
		}

		::System::Void MyTimerCallback(::System::Object* state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_TIMERS_TIMER_MYTIMERCALLBACK_OFFSET))(this, state);
		}
	};
}
