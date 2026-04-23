#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/TimerThread_Queue.h"

#define SYSTEM_NET_TIMERTHREAD_INFINITETIMERQUEUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A155610)

namespace System::Net
{
	inline static constexpr unsigned int TimerThread_InfiniteTimerQueue_TypeDefinitionIndex = 2778;

	class TimerThread_InfiniteTimerQueue : public ::System::Net::TimerThread_Queue
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_TIMERTHREAD_INFINITETIMERQUEUE__CTOR_OFFSET))(this);
		}
	};
}
