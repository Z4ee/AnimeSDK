#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_THREADING_TIMER_TIMERCOMPARER_COMPARE_OFFSET UNITYSDK_OFFSET(0x1ADD7080)
#define SYSTEM_THREADING_TIMER_TIMERCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADD58D0)

namespace System::Threading
{
	inline static constexpr unsigned int Timer_TimerComparer_TypeDefinitionIndex = 866;

	class Timer_TimerComparer : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TIMER_TIMERCOMPARER__CTOR_OFFSET))(this);
		}

		::System::Int32 Compare(::System::Object* x, ::System::Object* y)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TIMER_TIMERCOMPARER_COMPARE_OFFSET))(this, x, y);
		}
	};
}
