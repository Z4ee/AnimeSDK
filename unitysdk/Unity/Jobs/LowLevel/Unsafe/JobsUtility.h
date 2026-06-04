#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"
#include "unitysdk/Unity/Jobs/LowLevel/Unsafe/JobRanges.h"
#include "unitysdk/Unity/Jobs/LowLevel/Unsafe/JobType.h"
#include "unitysdk/Unity/Jobs/LowLevel/Unsafe/JobsUtility_JobScheduleParameters.h"

namespace System { class Type; }

#define UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_CREATEJOBREFLECTIONDATA_1_OFFSET UNITYSDK_OFFSET(0x1B276FD0)
#define UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_CREATEJOBREFLECTIONDATA_OFFSET UNITYSDK_OFFSET(0x1B276FC0)
#define UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_GETBGJOBQUEUEWORKERTHREADCOUNT_OFFSET UNITYSDK_OFFSET(0x1B277030)
#define UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_GETJOBQUEUEWORKERTHREADCOUNT_OFFSET UNITYSDK_OFFSET(0x1B277000)
#define UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_GETJOBRANGE_OFFSET UNITYSDK_OFFSET(0x1B276EA0)
#define UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_GETWORKSTEALINGRANGE_OFFSET UNITYSDK_OFFSET(0x1B276EC0)
#define UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_GET_BGJOBWORKERCOUNT_OFFSET UNITYSDK_OFFSET(0x1B277060)
#define UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_GET_BGJOBWORKERMAXIMUMCOUNT_OFFSET UNITYSDK_OFFSET(0x1B277050)
#define UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_GET_JOBWORKERCOUNT_OFFSET UNITYSDK_OFFSET(0x1B277020)
#define UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_GET_JOBWORKERMAXIMUMCOUNT_OFFSET UNITYSDK_OFFSET(0x1B277010)
#define UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_SCHEDULEPARALLELFORTRANSFORM_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B276FB0)
#define UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_SCHEDULEPARALLELFORTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1B276F70)
#define UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_SCHEDULEPARALLELFOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B276F60)
#define UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_SCHEDULEPARALLELFOR_OFFSET UNITYSDK_OFFSET(0x1B276F20)
#define UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_SCHEDULE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B276F10)
#define UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_SCHEDULE_OFFSET UNITYSDK_OFFSET(0x1B276ED0)
#define UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_SETBGJOBQUEUEMAXIMUMACTIVETHREADCOUNT_OFFSET UNITYSDK_OFFSET(0x1B277040)
#define UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_SET_BGJOBWORKERCOUNT_OFFSET UNITYSDK_OFFSET(0x1B277070)

namespace Unity::Jobs::LowLevel::Unsafe
{
	inline static constexpr unsigned int JobsUtility_TypeDefinitionIndex = 3954;

	class JobsUtility : public ::System::Object
	{
	public:
		static ::System::Void GetJobRange(::Unity::Jobs::LowLevel::Unsafe::JobRanges& a1, ::System::Int32 a2, ::System::Int32& a3, ::System::Int32& a4)
		{
			return ((::System::Void(*)(::Unity::Jobs::LowLevel::Unsafe::JobRanges&, ::System::Int32, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_GETJOBRANGE_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean GetWorkStealingRange(::Unity::Jobs::LowLevel::Unsafe::JobRanges& a1, ::System::Int32 a2, ::System::Int32& a3, ::System::Int32& a4)
		{
			return ((::System::Boolean(*)(::Unity::Jobs::LowLevel::Unsafe::JobRanges&, ::System::Int32, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_GETWORKSTEALINGRANGE_OFFSET))(a1, a2, a3, a4);
		}

		static ::Unity::Jobs::JobHandle Schedule(::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters& a1)
		{
			return ((::Unity::Jobs::JobHandle(*)(::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters&))((::PBYTE)hIl2Cpp + UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_SCHEDULE_OFFSET))(a1);
		}

		static ::Unity::Jobs::JobHandle ScheduleParallelFor(::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters& a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::Unity::Jobs::JobHandle(*)(::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters&, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_SCHEDULEPARALLELFOR_OFFSET))(a1, a2, a3);
		}

		static ::Unity::Jobs::JobHandle ScheduleParallelForTransform(::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters& a1, ::System::IntPtr a2)
		{
			return ((::Unity::Jobs::JobHandle(*)(::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters&, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_SCHEDULEPARALLELFORTRANSFORM_OFFSET))(a1, a2);
		}

		static ::System::IntPtr CreateJobReflectionData(::System::Type* a1, ::System::Type* a2, ::Unity::Jobs::LowLevel::Unsafe::JobType a3, ::System::Object* a4, ::System::Object* a5, ::System::Object* a6)
		{
			return ((::System::IntPtr(*)(::System::Type*, ::System::Type*, ::Unity::Jobs::LowLevel::Unsafe::JobType, ::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_CREATEJOBREFLECTIONDATA_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::IntPtr CreateJobReflectionData_1(::System::Type* a1, ::Unity::Jobs::LowLevel::Unsafe::JobType a2, ::System::Object* a3, ::System::Object* a4, ::System::Object* a5)
		{
			return ((::System::IntPtr(*)(::System::Type*, ::Unity::Jobs::LowLevel::Unsafe::JobType, ::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_CREATEJOBREFLECTIONDATA_1_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Int32 GetJobQueueWorkerThreadCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_GETJOBQUEUEWORKERTHREADCOUNT_OFFSET))();
		}

		static ::System::Int32 get_JobWorkerMaximumCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_GET_JOBWORKERMAXIMUMCOUNT_OFFSET))();
		}

		static ::System::Int32 get_JobWorkerCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_GET_JOBWORKERCOUNT_OFFSET))();
		}

		static ::System::Int32 GetBgJobQueueWorkerThreadCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_GETBGJOBQUEUEWORKERTHREADCOUNT_OFFSET))();
		}

		static ::System::Void SetBgJobQueueMaximumActiveThreadCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_SETBGJOBQUEUEMAXIMUMACTIVETHREADCOUNT_OFFSET))(a1);
		}

		static ::System::Int32 get_BgJobWorkerMaximumCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_GET_BGJOBWORKERMAXIMUMCOUNT_OFFSET))();
		}

		static ::System::Int32 get_BgJobWorkerCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_GET_BGJOBWORKERCOUNT_OFFSET))();
		}

		static ::System::Void set_BgJobWorkerCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_SET_BGJOBWORKERCOUNT_OFFSET))(a1);
		}

		static ::System::Void Schedule_Injected(::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters& a1, ::Unity::Jobs::JobHandle& a2)
		{
			return ((::System::Void(*)(::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters&, ::Unity::Jobs::JobHandle&))((::PBYTE)hIl2Cpp + UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_SCHEDULE_INJECTED_OFFSET))(a1, a2);
		}

		static ::System::Void ScheduleParallelFor_Injected(::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters& a1, ::System::Int32 a2, ::System::Int32 a3, ::Unity::Jobs::JobHandle& a4)
		{
			return ((::System::Void(*)(::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters&, ::System::Int32, ::System::Int32, ::Unity::Jobs::JobHandle&))((::PBYTE)hIl2Cpp + UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_SCHEDULEPARALLELFOR_INJECTED_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void ScheduleParallelForTransform_Injected(::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters& a1, ::System::IntPtr a2, ::Unity::Jobs::JobHandle& a3)
		{
			return ((::System::Void(*)(::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters&, ::System::IntPtr, ::Unity::Jobs::JobHandle&))((::PBYTE)hIl2Cpp + UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_SCHEDULEPARALLELFORTRANSFORM_INJECTED_OFFSET))(a1, a2, a3);
		}
	};
}
