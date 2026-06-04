#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Threading/EventWaitHandle.h"

#define SYSTEM_THREADING_AUTORESETEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x186156F0)

namespace System::Threading
{
	inline static constexpr unsigned int AutoResetEvent_TypeDefinitionIndex = 822;

	class AutoResetEvent : public ::System::Threading::EventWaitHandle
	{
	public:
		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_AUTORESETEVENT__CTOR_OFFSET))(this, a1);
		}
	};
}
