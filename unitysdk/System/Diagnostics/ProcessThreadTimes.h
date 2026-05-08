#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TimeSpan.h"

#define SYSTEM_DIAGNOSTICS_PROCESSTHREADTIMES_GET_EXITTIME_OFFSET UNITYSDK_OFFSET(0x193A7B40)
#define SYSTEM_DIAGNOSTICS_PROCESSTHREADTIMES_GET_PRIVILEGEDPROCESSORTIME_OFFSET UNITYSDK_OFFSET(0x193A7B50)
#define SYSTEM_DIAGNOSTICS_PROCESSTHREADTIMES_GET_STARTTIME_OFFSET UNITYSDK_OFFSET(0x193A7B30)
#define SYSTEM_DIAGNOSTICS_PROCESSTHREADTIMES_GET_TOTALPROCESSORTIME_OFFSET UNITYSDK_OFFSET(0x193A7B70)
#define SYSTEM_DIAGNOSTICS_PROCESSTHREADTIMES_GET_USERPROCESSORTIME_OFFSET UNITYSDK_OFFSET(0x193A7B60)
#define SYSTEM_DIAGNOSTICS_PROCESSTHREADTIMES__CTOR_OFFSET UNITYSDK_OFFSET(0x193A7B80)

namespace System::Diagnostics
{
	inline static constexpr unsigned int ProcessThreadTimes_TypeDefinitionIndex = 2786;

	class ProcessThreadTimes : public ::System::Object
	{
	public:
		::System::Int64 kernel; // 0x10
		::System::Int64 user; // 0x18
		::System::Int64 create; // 0x20
		::System::Int64 exit; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSTHREADTIMES__CTOR_OFFSET))(this);
		}

		::System::DateTime get_StartTime()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSTHREADTIMES_GET_STARTTIME_OFFSET))(this);
		}

		::System::DateTime get_ExitTime()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSTHREADTIMES_GET_EXITTIME_OFFSET))(this);
		}

		::System::TimeSpan get_PrivilegedProcessorTime()
		{
			return ((::System::TimeSpan(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSTHREADTIMES_GET_PRIVILEGEDPROCESSORTIME_OFFSET))(this);
		}

		::System::TimeSpan get_UserProcessorTime()
		{
			return ((::System::TimeSpan(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSTHREADTIMES_GET_USERPROCESSORTIME_OFFSET))(this);
		}

		::System::TimeSpan get_TotalProcessorTime()
		{
			return ((::System::TimeSpan(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSTHREADTIMES_GET_TOTALPROCESSORTIME_OFFSET))(this);
		}
	};
}
