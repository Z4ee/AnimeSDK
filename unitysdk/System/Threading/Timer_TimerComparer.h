#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_THREADING_TIMER_TIMERCOMPARER_COMPARE_OFFSET UNITYSDK_OFFSET(0x186377D0)
#define SYSTEM_THREADING_TIMER_TIMERCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x186366A0)

namespace System::Threading
{
	inline static constexpr unsigned int Timer_TimerComparer_TypeDefinitionIndex = 876;

	class Timer_TimerComparer : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TIMER_TIMERCOMPARER__CTOR_OFFSET))(this);
		}

		::System::Int32 Compare(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TIMER_TIMERCOMPARER_COMPARE_OFFSET))(this, a1, a2);
		}
	};
}
