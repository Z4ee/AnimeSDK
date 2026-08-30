#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_NET_TIMERTHREAD_QUEUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B975F80)

namespace System::Net
{
	inline static constexpr unsigned int TimerThread_Queue_TypeDefinitionIndex = 2785;

	class TimerThread_Queue : public ::System::Object
	{
	public:
		::System::Int32 m_DurationMilliseconds; // 0x10

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_TIMERTHREAD_QUEUE__CTOR_OFFSET))(this, a1);
		}
	};
}
