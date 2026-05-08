#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/EventArgs.h"

#define SYSTEM_TIMERS_ELAPSEDEVENTARGS_GET_SIGNALTIME_OFFSET UNITYSDK_OFFSET(0x1A118040)
#define SYSTEM_TIMERS_ELAPSEDEVENTARGS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A118050)
#define SYSTEM_TIMERS_ELAPSEDEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1A117FE0)

namespace System::Timers
{
	inline static constexpr unsigned int ElapsedEventArgs_TypeDefinitionIndex = 2717;

	class ElapsedEventArgs : public ::System::EventArgs
	{
	public:
		::System::DateTime time; // 0x10

		::System::Void _ctor(::System::DateTime time)
		{
			return ((::System::Void(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_TIMERS_ELAPSEDEVENTARGS__CTOR_OFFSET))(this, time);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMERS_ELAPSEDEVENTARGS__CTOR_1_OFFSET))(this);
		}

		::System::DateTime get_SignalTime()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMERS_ELAPSEDEVENTARGS_GET_SIGNALTIME_OFFSET))(this);
		}
	};
}
