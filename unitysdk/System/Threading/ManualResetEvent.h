#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Threading/EventWaitHandle.h"

#define SYSTEM_THREADING_MANUALRESETEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x17861AC0)

namespace System::Threading
{
	inline static constexpr unsigned int ManualResetEvent_TypeDefinitionIndex = 833;

	class ManualResetEvent : public ::System::Threading::EventWaitHandle
	{
	public:
		::System::Void _ctor(::System::Boolean initialState)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MANUALRESETEVENT__CTOR_OFFSET))(this, initialState);
		}
	};
}
