#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/TimerThread_Queue.h"

namespace System { class Object; }
namespace System::Net { class TimerThread_Callback; }
namespace System::Net { class TimerThread_Timer; }
namespace System::Net { class TimerThread_TimerNode; }

#define SYSTEM_NET_TIMERTHREAD_TIMERQUEUE_CREATETIMER_OFFSET UNITYSDK_OFFSET(0x1E97E4F0)
#define SYSTEM_NET_TIMERTHREAD_TIMERQUEUE_FIRE_OFFSET UNITYSDK_OFFSET(0x1E97E740)
#define SYSTEM_NET_TIMERTHREAD_TIMERQUEUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E97E460)

namespace System::Net
{
	inline static constexpr unsigned int TimerThread_TimerQueue_TypeDefinitionIndex = 3399;

	class TimerThread_TimerQueue : public ::System::Net::TimerThread_Queue
	{
	public:
		::System::Net::TimerThread_TimerNode* m_Timers; // 0x18
		::System::IntPtr m_ThisHandle; // 0x20

		::System::Void _ctor(::System::Int32 durationMilliseconds)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_TIMERTHREAD_TIMERQUEUE__CTOR_OFFSET))(this, durationMilliseconds);
		}

		::System::Net::TimerThread_Timer* CreateTimer(::System::Net::TimerThread_Callback* callback, ::System::Object* context)
		{
			return ((::System::Net::TimerThread_Timer*(*)(::PVOID, ::System::Net::TimerThread_Callback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_TIMERTHREAD_TIMERQUEUE_CREATETIMER_OFFSET))(this, callback, context);
		}

		::System::Boolean Fire(::System::Int32& nextExpiration)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_NET_TIMERTHREAD_TIMERQUEUE_FIRE_OFFSET))(this, nextExpiration);
		}
	};
}
