#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/TimerThread_Queue.h"

namespace System { class Object; }
namespace System::Net { class TimerThread_Callback; }
namespace System::Net { class TimerThread_Timer; }

#define SYSTEM_NET_TIMERTHREAD_INFINITETIMERQUEUE_CREATETIMER_OFFSET UNITYSDK_OFFSET(0x1C715E90)
#define SYSTEM_NET_TIMERTHREAD_INFINITETIMERQUEUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C715E80)

namespace System::Net
{
	inline static constexpr unsigned int TimerThread_InfiniteTimerQueue_TypeDefinitionIndex = 3400;

	class TimerThread_InfiniteTimerQueue : public ::System::Net::TimerThread_Queue
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_TIMERTHREAD_INFINITETIMERQUEUE__CTOR_OFFSET))(this);
		}

		::System::Net::TimerThread_Timer* CreateTimer(::System::Net::TimerThread_Callback* callback, ::System::Object* context)
		{
			return ((::System::Net::TimerThread_Timer*(*)(::PVOID, ::System::Net::TimerThread_Callback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_TIMERTHREAD_INFINITETIMERQUEUE_CREATETIMER_OFFSET))(this, callback, context);
		}
	};
}
