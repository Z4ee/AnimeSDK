#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/Component.h"

namespace System { class Object; }
namespace System::ComponentModel { class ISite; }
namespace System::ComponentModel { class ISynchronizeInvoke; }
namespace System::Threading { class Timer; }
namespace System::Threading { class TimerCallback; }
namespace System::Timers { class ElapsedEventHandler; }

#define SYSTEM_TIMERS_TIMER_ADD_ELAPSED_OFFSET UNITYSDK_OFFSET(0x1DED0BA0)
#define SYSTEM_TIMERS_TIMER_BEGININIT_OFFSET UNITYSDK_OFFSET(0x1DED10A0)
#define SYSTEM_TIMERS_TIMER_CALCULATEROUNDEDINTERVAL_OFFSET UNITYSDK_OFFSET(0x1DED0400)
#define SYSTEM_TIMERS_TIMER_CLOSE_OFFSET UNITYSDK_OFFSET(0x1DED1150)
#define SYSTEM_TIMERS_TIMER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1DED1200)
#define SYSTEM_TIMERS_TIMER_ENDINIT_OFFSET UNITYSDK_OFFSET(0x1DED12C0)
#define SYSTEM_TIMERS_TIMER_GET_AUTORESET_OFFSET UNITYSDK_OFFSET(0x1DED05A0)
#define SYSTEM_TIMERS_TIMER_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x1DED0740)
#define SYSTEM_TIMERS_TIMER_GET_INTERVAL_OFFSET UNITYSDK_OFFSET(0x1DED0A30)
#define SYSTEM_TIMERS_TIMER_GET_SITE_OFFSET UNITYSDK_OFFSET(0x1DED0D60)
#define SYSTEM_TIMERS_TIMER_GET_SYNCHRONIZINGOBJECT_OFFSET UNITYSDK_OFFSET(0x1DED0D70)
#define SYSTEM_TIMERS_TIMER_MYTIMERCALLBACK_OFFSET UNITYSDK_OFFSET(0x1DED14A0)
#define SYSTEM_TIMERS_TIMER_REMOVE_ELAPSED_OFFSET UNITYSDK_OFFSET(0x1DED0C10)
#define SYSTEM_TIMERS_TIMER_SET_AUTORESET_OFFSET UNITYSDK_OFFSET(0x1DED05B0)
#define SYSTEM_TIMERS_TIMER_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x1DED0750)
#define SYSTEM_TIMERS_TIMER_SET_INTERVAL_OFFSET UNITYSDK_OFFSET(0x1DED0A40)
#define SYSTEM_TIMERS_TIMER_SET_SITE_OFFSET UNITYSDK_OFFSET(0x1DED0C80)
#define SYSTEM_TIMERS_TIMER_SET_SYNCHRONIZINGOBJECT_OFFSET UNITYSDK_OFFSET(0x1DED1090)
#define SYSTEM_TIMERS_TIMER_START_OFFSET UNITYSDK_OFFSET(0x1DED12D0)
#define SYSTEM_TIMERS_TIMER_STOP_OFFSET UNITYSDK_OFFSET(0x1DED12E0)
#define SYSTEM_TIMERS_TIMER_UPDATETIMER_OFFSET UNITYSDK_OFFSET(0x1DED06F0)
#define SYSTEM_TIMERS_TIMER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DED0250)
#define SYSTEM_TIMERS_TIMER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DED01B0)

namespace System::Timers
{
	inline static constexpr unsigned int Timer_TypeDefinitionIndex = 2714;

	class Timer : public ::System::ComponentModel::Component
	{
	public:
		::System::Timers::ElapsedEventHandler* onIntervalElapsed; // 0x28
		::System::Threading::Timer* timer; // 0x30
		::System::Threading::TimerCallback* callback; // 0x38
		::System::Object* cookie; // 0x40
		::System::ComponentModel::ISynchronizeInvoke* synchronizingObject; // 0x48
		::System::Double interval; // 0x50
		::System::Boolean delayedEnable; // 0x58
		::System::Boolean autoReset; // 0x59
		::System::Boolean initializing; // 0x5A
		::System::Boolean disposed; // 0x5B
		::System::Boolean enabled; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMERS_TIMER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Double interval)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_TIMERS_TIMER__CTOR_1_OFFSET))(this, interval);
		}

		::System::Boolean get_AutoReset()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMERS_TIMER_GET_AUTORESET_OFFSET))(this);
		}

		::System::Void set_AutoReset(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TIMERS_TIMER_SET_AUTORESET_OFFSET))(this, value);
		}

		::System::Boolean get_Enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMERS_TIMER_GET_ENABLED_OFFSET))(this);
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

		::System::Double get_Interval()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMERS_TIMER_GET_INTERVAL_OFFSET))(this);
		}

		::System::Void set_Interval(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_TIMERS_TIMER_SET_INTERVAL_OFFSET))(this, value);
		}

		::System::Void add_Elapsed(::System::Timers::ElapsedEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Timers::ElapsedEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_TIMERS_TIMER_ADD_ELAPSED_OFFSET))(this, value);
		}

		::System::Void remove_Elapsed(::System::Timers::ElapsedEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Timers::ElapsedEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_TIMERS_TIMER_REMOVE_ELAPSED_OFFSET))(this, value);
		}

		::System::Void set_Site(::System::ComponentModel::ISite* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::ISite*))((::PBYTE)hIl2Cpp + SYSTEM_TIMERS_TIMER_SET_SITE_OFFSET))(this, value);
		}

		::System::ComponentModel::ISite* get_Site()
		{
			return ((::System::ComponentModel::ISite*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMERS_TIMER_GET_SITE_OFFSET))(this);
		}

		::System::ComponentModel::ISynchronizeInvoke* get_SynchronizingObject()
		{
			return ((::System::ComponentModel::ISynchronizeInvoke*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMERS_TIMER_GET_SYNCHRONIZINGOBJECT_OFFSET))(this);
		}

		::System::Void set_SynchronizingObject(::System::ComponentModel::ISynchronizeInvoke* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::ISynchronizeInvoke*))((::PBYTE)hIl2Cpp + SYSTEM_TIMERS_TIMER_SET_SYNCHRONIZINGOBJECT_OFFSET))(this, value);
		}

		::System::Void BeginInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMERS_TIMER_BEGININIT_OFFSET))(this);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMERS_TIMER_CLOSE_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TIMERS_TIMER_DISPOSE_OFFSET))(this, disposing);
		}

		::System::Void EndInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMERS_TIMER_ENDINIT_OFFSET))(this);
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
