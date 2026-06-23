#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Net { class TimerThread_Callback; }
namespace System::Net { class TimerThread_Timer; }

#define SYSTEM_NET_TIMERTHREAD_QUEUE_CREATETIMER_OFFSET UNITYSDK_OFFSET(0x1B767E50)
#define SYSTEM_NET_TIMERTHREAD_QUEUE_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x1B767E40)
#define SYSTEM_NET_TIMERTHREAD_QUEUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B767E30)

namespace System::Net
{
	inline static constexpr unsigned int TimerThread_Queue_TypeDefinitionIndex = 3395;

	class TimerThread_Queue : public ::System::Object
	{
	public:
		::System::Int32 m_DurationMilliseconds; // 0x10

		::System::Void _ctor(::System::Int32 durationMilliseconds)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_TIMERTHREAD_QUEUE__CTOR_OFFSET))(this, durationMilliseconds);
		}

		::System::Int32 get_Duration()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_TIMERTHREAD_QUEUE_GET_DURATION_OFFSET))(this);
		}

		::System::Net::TimerThread_Timer* CreateTimer()
		{
			return ((::System::Net::TimerThread_Timer*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_TIMERTHREAD_QUEUE_CREATETIMER_OFFSET))(this);
		}
	};
}
