#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_NET_TIMERTHREAD_TIMER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AFB8E70)
#define SYSTEM_NET_TIMERTHREAD_TIMER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFB8E20)

namespace System::Net
{
	inline static constexpr unsigned int TimerThread_Timer_TypeDefinitionIndex = 2775;

	class TimerThread_Timer : public ::System::Object
	{
	public:
		::System::Int32 m_DurationMilliseconds; // 0x10
		::System::Int32 m_StartTimeMilliseconds; // 0x14

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_TIMERTHREAD_TIMER__CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_TIMERTHREAD_TIMER_DISPOSE_OFFSET))(this);
		}
	};
}
