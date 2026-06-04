#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define SYSTEM_THREADING_READERWRITERLOCKSLIM_TIMEOUTTRACKER_GET_ISEXPIRED_OFFSET UNITYSDK_OFFSET(0x3868A70)
#define SYSTEM_THREADING_READERWRITERLOCKSLIM_TIMEOUTTRACKER_GET_REMAININGMILLISECONDS_OFFSET UNITYSDK_OFFSET(0x3868A00)
#define SYSTEM_THREADING_READERWRITERLOCKSLIM_TIMEOUTTRACKER__CTOR_OFFSET UNITYSDK_OFFSET(0x3868950)

namespace System::Threading
{
	inline static constexpr unsigned int ReaderWriterLockSlim_TimeoutTracker_TypeDefinitionIndex = 3106;

	struct alignas(4) ReaderWriterLockSlim_TimeoutTracker
	{
		::System::Int32 m_total; // 0x10
		::System::Int32 m_start; // 0x14

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_READERWRITERLOCKSLIM_TIMEOUTTRACKER__CTOR_OFFSET))(this, a1);
		}

		::System::Int32 get_RemainingMilliseconds()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_READERWRITERLOCKSLIM_TIMEOUTTRACKER_GET_REMAININGMILLISECONDS_OFFSET))(this);
		}

		::System::Boolean get_IsExpired()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_READERWRITERLOCKSLIM_TIMEOUTTRACKER_GET_ISEXPIRED_OFFSET))(this);
		}
	};
}
