#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_SESSIONINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x72EF0)

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int EventProvider_SessionInfo_TypeDefinitionIndex = 1673;

	struct alignas(4) EventProvider_SessionInfo
	{
		::System::Int32 sessionIdBit; // 0x10
		::System::Int32 etwSessionId; // 0x14

		::System::Void _ctor(::System::Int32 sessionIdBit_, ::System::Int32 etwSessionId_)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_SESSIONINFO__CTOR_OFFSET))(this, sessionIdBit_, etwSessionId_);
		}
	};
}
