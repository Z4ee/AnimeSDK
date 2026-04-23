#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_NET_TIMERTHREAD_QUEUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A155E60)

namespace System::Net
{
	inline static constexpr unsigned int TimerThread_Queue_TypeDefinitionIndex = 2774;

	class TimerThread_Queue : public ::System::Object
	{
	public:
		::System::Int32 m_DurationMilliseconds; // 0x10

		::System::Void _ctor(::System::Int32 durationMilliseconds)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_TIMERTHREAD_QUEUE__CTOR_OFFSET))(this, durationMilliseconds);
		}
	};
}
