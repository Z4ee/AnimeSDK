#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/EventArgs.h"

#define SYSTEM_TIMERS_ELAPSEDEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x167EE650)

namespace System::Timers
{
	inline static constexpr unsigned int ElapsedEventArgs_TypeDefinitionIndex = 2489;

	class ElapsedEventArgs : public ::System::EventArgs
	{
	public:
		::System::DateTime time; // 0x10

		::System::Void _ctor(::System::DateTime a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_TIMERS_ELAPSEDEVENTARGS__CTOR_OFFSET))(this, a1);
		}
	};
}
