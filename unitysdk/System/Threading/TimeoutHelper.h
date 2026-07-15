#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_THREADING_TIMEOUTHELPER_GETTIME_OFFSET UNITYSDK_OFFSET(0x1A73B4C0)
#define SYSTEM_THREADING_TIMEOUTHELPER_UPDATETIMEOUT_OFFSET UNITYSDK_OFFSET(0x1A73B500)

namespace System::Threading
{
	inline static constexpr unsigned int TimeoutHelper_TypeDefinitionIndex = 812;

	class TimeoutHelper : public ::System::Object
	{
	public:
		static ::System::UInt32 GetTime()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TIMEOUTHELPER_GETTIME_OFFSET))();
		}

		static ::System::Int32 UpdateTimeOut(::System::UInt32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TIMEOUTHELPER_UPDATETIMEOUT_OFFSET))(a1, a2);
		}
	};
}
