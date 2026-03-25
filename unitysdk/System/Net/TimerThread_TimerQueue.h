#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/TimerThread_Queue.h"

namespace System::Net { class TimerThread_TimerNode; }

#define SYSTEM_NET_TIMERTHREAD_TIMERQUEUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1871AE10)

namespace System::Net
{
	inline static constexpr unsigned int TimerThread_TimerQueue_TypeDefinitionIndex = 2776;

	class TimerThread_TimerQueue : public ::System::Net::TimerThread_Queue
	{
	public:
		::System::Net::TimerThread_TimerNode* m_Timers; // 0x18

		::System::Void _ctor(::System::Int32 durationMilliseconds)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_TIMERTHREAD_TIMERQUEUE__CTOR_OFFSET))(this, durationMilliseconds);
		}
	};
}
