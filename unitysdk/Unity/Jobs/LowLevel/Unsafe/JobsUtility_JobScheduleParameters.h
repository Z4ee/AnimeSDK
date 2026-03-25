#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"
#include "unitysdk/Unity/Jobs/LowLevel/Unsafe/ScheduleMode.h"

#define UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_JOBSCHEDULEPARAMETERS__CTOR_OFFSET UNITYSDK_OFFSET(0x210EA30)

namespace Unity::Jobs::LowLevel::Unsafe
{
	inline static constexpr unsigned int JobsUtility_JobScheduleParameters_TypeDefinitionIndex = 3779;

	struct alignas(8) JobsUtility_JobScheduleParameters
	{
		::Unity::Jobs::JobHandle Dependency; // 0x10
		::System::Int32 ScheduleMode; // 0x20
		::System::IntPtr ReflectionData; // 0x28
		::System::IntPtr JobDataPtr; // 0x30

		::System::Void _ctor(::System::Void* i_jobData, ::System::IntPtr i_reflectionData, ::Unity::Jobs::JobHandle i_dependency, ::Unity::Jobs::LowLevel::Unsafe::ScheduleMode i_scheduleMode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Void*, ::System::IntPtr, ::Unity::Jobs::JobHandle, ::Unity::Jobs::LowLevel::Unsafe::ScheduleMode))((::PBYTE)hIl2Cpp + UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_JOBSCHEDULEPARAMETERS__CTOR_OFFSET))(this, i_jobData, i_reflectionData, i_dependency, i_scheduleMode);
		}
	};
}
