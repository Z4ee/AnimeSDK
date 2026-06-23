#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_NET_TIMERTHREAD_TIMER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C8A5840)
#define SYSTEM_NET_TIMERTHREAD_TIMER_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x1C8A5720)
#define SYSTEM_NET_TIMERTHREAD_TIMER_GET_EXPIRATION_OFFSET UNITYSDK_OFFSET(0x1C8A5740)
#define SYSTEM_NET_TIMERTHREAD_TIMER_GET_STARTTIME_OFFSET UNITYSDK_OFFSET(0x1C8A5730)
#define SYSTEM_NET_TIMERTHREAD_TIMER_GET_TIMEREMAINING_OFFSET UNITYSDK_OFFSET(0x1C8A5750)
#define SYSTEM_NET_TIMERTHREAD_TIMER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C8A56D0)

namespace System::Net
{
	inline static constexpr unsigned int TimerThread_Timer_TypeDefinitionIndex = 3396;

	class TimerThread_Timer : public ::System::Object
	{
	public:
		::System::Int32 m_DurationMilliseconds; // 0x10
		::System::Int32 m_StartTimeMilliseconds; // 0x14

		::System::Void _ctor(::System::Int32 durationMilliseconds)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_TIMERTHREAD_TIMER__CTOR_OFFSET))(this, durationMilliseconds);
		}

		::System::Int32 get_Duration()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_TIMERTHREAD_TIMER_GET_DURATION_OFFSET))(this);
		}

		::System::Int32 get_StartTime()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_TIMERTHREAD_TIMER_GET_STARTTIME_OFFSET))(this);
		}

		::System::Int32 get_Expiration()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_TIMERTHREAD_TIMER_GET_EXPIRATION_OFFSET))(this);
		}

		::System::Int32 get_TimeRemaining()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_TIMERTHREAD_TIMER_GET_TIMEREMAINING_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_TIMERTHREAD_TIMER_DISPOSE_OFFSET))(this);
		}
	};
}
