#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define SYSTEM_THREADING_READERWRITERLOCKSLIM_TIMEOUTTRACKER_GET_ISEXPIRED_OFFSET UNITYSDK_OFFSET(0xA61B20)
#define SYSTEM_THREADING_READERWRITERLOCKSLIM_TIMEOUTTRACKER_GET_REMAININGMILLISECONDS_OFFSET UNITYSDK_OFFSET(0xA61AB0)
#define SYSTEM_THREADING_READERWRITERLOCKSLIM_TIMEOUTTRACKER__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA61A00)
#define SYSTEM_THREADING_READERWRITERLOCKSLIM_TIMEOUTTRACKER__CTOR_OFFSET UNITYSDK_OFFSET(0xA619F0)

namespace System::Threading
{
	inline static constexpr unsigned int ReaderWriterLockSlim_TimeoutTracker_TypeDefinitionIndex = 4336;

	struct alignas(4) ReaderWriterLockSlim_TimeoutTracker
	{
		::System::Int32 m_total; // 0x10
		::System::Int32 m_start; // 0x14

		/*
		::System::Void _ctor(::System::TimeSpan timeout)
		{
			return ((::System::Void(*)(::PVOID, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_READERWRITERLOCKSLIM_TIMEOUTTRACKER__CTOR_OFFSET))(this, timeout);
		}
		*/

		::System::Void _ctor_1(::System::Int32 millisecondsTimeout)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_READERWRITERLOCKSLIM_TIMEOUTTRACKER__CTOR_1_OFFSET))(this, millisecondsTimeout);
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
