#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/Component.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Diagnostics/ThreadPriorityLevel.h"
#include "unitysdk/System/Diagnostics/ThreadState.h"
#include "unitysdk/System/Diagnostics/ThreadWaitReason.h"
#include "unitysdk/System/TimeSpan.h"

#define SYSTEM_DIAGNOSTICS_PROCESSTHREAD_GET_BASEPRIORITY_OFFSET UNITYSDK_OFFSET(0x1DAB32D0)
#define SYSTEM_DIAGNOSTICS_PROCESSTHREAD_GET_CURRENTPRIORITY_OFFSET UNITYSDK_OFFSET(0x1DAB32E0)
#define SYSTEM_DIAGNOSTICS_PROCESSTHREAD_GET_ID_OFFSET UNITYSDK_OFFSET(0x1DAB32F0)
#define SYSTEM_DIAGNOSTICS_PROCESSTHREAD_GET_PRIORITYBOOSTENABLED_OFFSET UNITYSDK_OFFSET(0x1DAB3310)
#define SYSTEM_DIAGNOSTICS_PROCESSTHREAD_GET_PRIORITYLEVEL_OFFSET UNITYSDK_OFFSET(0x1DAB3330)
#define SYSTEM_DIAGNOSTICS_PROCESSTHREAD_GET_PRIVILEGEDPROCESSORTIME_OFFSET UNITYSDK_OFFSET(0x1DAB3350)
#define SYSTEM_DIAGNOSTICS_PROCESSTHREAD_GET_STARTADDRESS_OFFSET UNITYSDK_OFFSET(0x1DAB3370)
#define SYSTEM_DIAGNOSTICS_PROCESSTHREAD_GET_STARTTIME_OFFSET UNITYSDK_OFFSET(0x1DAB3380)
#define SYSTEM_DIAGNOSTICS_PROCESSTHREAD_GET_THREADSTATE_OFFSET UNITYSDK_OFFSET(0x1DAB33B0)
#define SYSTEM_DIAGNOSTICS_PROCESSTHREAD_GET_TOTALPROCESSORTIME_OFFSET UNITYSDK_OFFSET(0x1DAB33C0)
#define SYSTEM_DIAGNOSTICS_PROCESSTHREAD_GET_USERPROCESSORTIME_OFFSET UNITYSDK_OFFSET(0x1DAB33D0)
#define SYSTEM_DIAGNOSTICS_PROCESSTHREAD_GET_WAITREASON_OFFSET UNITYSDK_OFFSET(0x1DAB33E0)
#define SYSTEM_DIAGNOSTICS_PROCESSTHREAD_RESETIDEALPROCESSOR_OFFSET UNITYSDK_OFFSET(0x1DAB33F0)
#define SYSTEM_DIAGNOSTICS_PROCESSTHREAD_SET_IDEALPROCESSOR_OFFSET UNITYSDK_OFFSET(0x1DAB3300)
#define SYSTEM_DIAGNOSTICS_PROCESSTHREAD_SET_PRIORITYBOOSTENABLED_OFFSET UNITYSDK_OFFSET(0x1DAB3320)
#define SYSTEM_DIAGNOSTICS_PROCESSTHREAD_SET_PRIORITYLEVEL_OFFSET UNITYSDK_OFFSET(0x1DAB3340)
#define SYSTEM_DIAGNOSTICS_PROCESSTHREAD_SET_PROCESSORAFFINITY_OFFSET UNITYSDK_OFFSET(0x1DAB3360)
#define SYSTEM_DIAGNOSTICS_PROCESSTHREAD__CTOR_OFFSET UNITYSDK_OFFSET(0x1DAB3280)

namespace System::Diagnostics
{
	inline static constexpr unsigned int ProcessThread_TypeDefinitionIndex = 2798;

	class ProcessThread : public ::System::ComponentModel::Component
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSTHREAD__CTOR_OFFSET))(this);
		}

		::System::Int32 get_BasePriority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSTHREAD_GET_BASEPRIORITY_OFFSET))(this);
		}

		::System::Int32 get_CurrentPriority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSTHREAD_GET_CURRENTPRIORITY_OFFSET))(this);
		}

		::System::Int32 get_Id()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSTHREAD_GET_ID_OFFSET))(this);
		}

		::System::Void set_IdealProcessor(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSTHREAD_SET_IDEALPROCESSOR_OFFSET))(this, value);
		}

		::System::Boolean get_PriorityBoostEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSTHREAD_GET_PRIORITYBOOSTENABLED_OFFSET))(this);
		}

		::System::Void set_PriorityBoostEnabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSTHREAD_SET_PRIORITYBOOSTENABLED_OFFSET))(this, value);
		}

		::System::Diagnostics::ThreadPriorityLevel get_PriorityLevel()
		{
			return ((::System::Diagnostics::ThreadPriorityLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSTHREAD_GET_PRIORITYLEVEL_OFFSET))(this);
		}

		::System::Void set_PriorityLevel(::System::Diagnostics::ThreadPriorityLevel value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::ThreadPriorityLevel))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSTHREAD_SET_PRIORITYLEVEL_OFFSET))(this, value);
		}

		::System::TimeSpan get_PrivilegedProcessorTime()
		{
			return ((::System::TimeSpan(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSTHREAD_GET_PRIVILEGEDPROCESSORTIME_OFFSET))(this);
		}

		::System::Void set_ProcessorAffinity(::System::IntPtr value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSTHREAD_SET_PROCESSORAFFINITY_OFFSET))(this, value);
		}

		::System::IntPtr get_StartAddress()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSTHREAD_GET_STARTADDRESS_OFFSET))(this);
		}

		::System::DateTime get_StartTime()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSTHREAD_GET_STARTTIME_OFFSET))(this);
		}

		::System::Diagnostics::ThreadState get_ThreadState()
		{
			return ((::System::Diagnostics::ThreadState(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSTHREAD_GET_THREADSTATE_OFFSET))(this);
		}

		::System::TimeSpan get_TotalProcessorTime()
		{
			return ((::System::TimeSpan(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSTHREAD_GET_TOTALPROCESSORTIME_OFFSET))(this);
		}

		::System::TimeSpan get_UserProcessorTime()
		{
			return ((::System::TimeSpan(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSTHREAD_GET_USERPROCESSORTIME_OFFSET))(this);
		}

		::System::Diagnostics::ThreadWaitReason get_WaitReason()
		{
			return ((::System::Diagnostics::ThreadWaitReason(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSTHREAD_GET_WAITREASON_OFFSET))(this);
		}

		::System::Void ResetIdealProcessor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSTHREAD_RESETIDEALPROCESSOR_OFFSET))(this);
		}
	};
}
