#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_THREADING_TIMEOUTHELPER_GETTIME_OFFSET UNITYSDK_OFFSET(0x1AE760D0)
#define SYSTEM_THREADING_TIMEOUTHELPER_UPDATETIMEOUT_OFFSET UNITYSDK_OFFSET(0x1AE76110)

namespace System::Threading
{
	inline static constexpr unsigned int TimeoutHelper_TypeDefinitionIndex = 801;

	class TimeoutHelper : public ::System::Object
	{
	public:
		static ::System::UInt32 GetTime()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TIMEOUTHELPER_GETTIME_OFFSET))();
		}

		static ::System::Int32 UpdateTimeOut(::System::UInt32 startTime, ::System::Int32 originalWaitMillisecondsTimeout)
		{
			return ((::System::Int32(*)(::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TIMEOUTHELPER_UPDATETIMEOUT_OFFSET))(startTime, originalWaitMillisecondsTimeout);
		}
	};
}
