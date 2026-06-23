#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/TimerThread_Timer.h"

#define SYSTEM_NET_TIMERTHREAD_INFINITETIMER_CANCEL_OFFSET UNITYSDK_OFFSET(0x1B40CC60)
#define SYSTEM_NET_TIMERTHREAD_INFINITETIMER_GET_HASEXPIRED_OFFSET UNITYSDK_OFFSET(0x1B40CC50)
#define SYSTEM_NET_TIMERTHREAD_INFINITETIMER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B40CC00)

namespace System::Net
{
	inline static constexpr unsigned int TimerThread_InfiniteTimer_TypeDefinitionIndex = 3403;

	class TimerThread_InfiniteTimer : public ::System::Net::TimerThread_Timer
	{
	public:
		::System::Int32 cancelled; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_TIMERTHREAD_INFINITETIMER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_HasExpired()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_TIMERTHREAD_INFINITETIMER_GET_HASEXPIRED_OFFSET))(this);
		}

		::System::Boolean Cancel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_TIMERTHREAD_INFINITETIMER_CANCEL_OFFSET))(this);
		}
	};
}
