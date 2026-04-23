#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Threading/EventWaitHandle.h"

#define SYSTEM_THREADING_AUTORESETEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1785BAF0)

namespace System::Threading
{
	inline static constexpr unsigned int AutoResetEvent_TypeDefinitionIndex = 823;

	class AutoResetEvent : public ::System::Threading::EventWaitHandle
	{
	public:
		::System::Void _ctor(::System::Boolean initialState)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_AUTORESETEVENT__CTOR_OFFSET))(this, initialState);
		}
	};
}
