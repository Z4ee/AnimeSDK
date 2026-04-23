#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"
#include "unitysdk/Unity/Jobs/LowLevel/Unsafe/JobRanges.h"
#include "unitysdk/Unity/Jobs/LowLevel/Unsafe/JobType.h"
#include "unitysdk/Unity/Jobs/LowLevel/Unsafe/JobsUtility_JobScheduleParameters.h"

namespace System { class Type; }

#define UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_CREATEJOBREFLECTIONDATA_1_OFFSET UNITYSDK_OFFSET(0x1A423D80)
#define UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_CREATEJOBREFLECTIONDATA_OFFSET UNITYSDK_OFFSET(0x1A423D70)
#define UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_GETBGJOBQUEUEWORKERTHREADCOUNT_OFFSET UNITYSDK_OFFSET(0x1A423DE0)
#define UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_GETJOBQUEUEWORKERTHREADCOUNT_OFFSET UNITYSDK_OFFSET(0x1A423DB0)
#define UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_GETJOBRANGE_OFFSET UNITYSDK_OFFSET(0x1A423C50)
#define UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_GETWORKSTEALINGRANGE_OFFSET UNITYSDK_OFFSET(0x1A423C70)
#define UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_GET_BGJOBWORKERCOUNT_OFFSET UNITYSDK_OFFSET(0x1A423E10)
#define UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_GET_BGJOBWORKERMAXIMUMCOUNT_OFFSET UNITYSDK_OFFSET(0x1A423E00)
#define UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_GET_JOBWORKERCOUNT_OFFSET UNITYSDK_OFFSET(0x1A423DD0)
#define UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_GET_JOBWORKERMAXIMUMCOUNT_OFFSET UNITYSDK_OFFSET(0x1A423DC0)
#define UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_SCHEDULEPARALLELFORTRANSFORM_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A423D60)
#define UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_SCHEDULEPARALLELFORTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1A423D20)
#define UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_SCHEDULEPARALLELFOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A423D10)
#define UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_SCHEDULEPARALLELFOR_OFFSET UNITYSDK_OFFSET(0x1A423CD0)
#define UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_SCHEDULE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A423CC0)
#define UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_SCHEDULE_OFFSET UNITYSDK_OFFSET(0x1A423C80)
#define UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_SETBGJOBQUEUEMAXIMUMACTIVETHREADCOUNT_OFFSET UNITYSDK_OFFSET(0x1A423DF0)
#define UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_SET_BGJOBWORKERCOUNT_OFFSET UNITYSDK_OFFSET(0x1A423E20)

namespace Unity::Jobs::LowLevel::Unsafe
{
	inline static constexpr unsigned int JobsUtility_TypeDefinitionIndex = 3780;

	class JobsUtility : public ::System::Object
	{
	public:
		static ::System::Void GetJobRange(::Unity::Jobs::LowLevel::Unsafe::JobRanges& ranges, ::System::Int32 jobIndex, ::System::Int32& beginIndex, ::System::Int32& endIndex)
		{
			return ((::System::Void(*)(::Unity::Jobs::LowLevel::Unsafe::JobRanges&, ::System::Int32, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_GETJOBRANGE_OFFSET))(ranges, jobIndex, beginIndex, endIndex);
		}

		static ::System::Boolean GetWorkStealingRange(::Unity::Jobs::LowLevel::Unsafe::JobRanges& ranges, ::System::Int32 jobIndex, ::System::Int32& beginIndex, ::System::Int32& endIndex)
		{
			return ((::System::Boolean(*)(::Unity::Jobs::LowLevel::Unsafe::JobRanges&, ::System::Int32, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_GETWORKSTEALINGRANGE_OFFSET))(ranges, jobIndex, beginIndex, endIndex);
		}

		static ::Unity::Jobs::JobHandle Schedule(::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters& parameters)
		{
			return ((::Unity::Jobs::JobHandle(*)(::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters&))((::PBYTE)hIl2Cpp + UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_SCHEDULE_OFFSET))(parameters);
		}

		static ::Unity::Jobs::JobHandle ScheduleParallelFor(::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters& parameters, ::System::Int32 arrayLength, ::System::Int32 innerloopBatchCount)
		{
			return ((::Unity::Jobs::JobHandle(*)(::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters&, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_SCHEDULEPARALLELFOR_OFFSET))(parameters, arrayLength, innerloopBatchCount);
		}

		static ::Unity::Jobs::JobHandle ScheduleParallelForTransform(::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters& parameters, ::System::IntPtr transfromAccesssArray)
		{
			return ((::Unity::Jobs::JobHandle(*)(::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters&, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_SCHEDULEPARALLELFORTRANSFORM_OFFSET))(parameters, transfromAccesssArray);
		}

		static ::System::IntPtr CreateJobReflectionData(::System::Type* wrapperJobType, ::System::Type* userJobType, ::Unity::Jobs::LowLevel::Unsafe::JobType jobType, ::System::Object* managedJobFunction0, ::System::Object* managedJobFunction1, ::System::Object* managedJobFunction2)
		{
			return ((::System::IntPtr(*)(::System::Type*, ::System::Type*, ::Unity::Jobs::LowLevel::Unsafe::JobType, ::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_CREATEJOBREFLECTIONDATA_OFFSET))(wrapperJobType, userJobType, jobType, managedJobFunction0, managedJobFunction1, managedJobFunction2);
		}

		static ::System::IntPtr CreateJobReflectionData_1(::System::Type* type, ::Unity::Jobs::LowLevel::Unsafe::JobType jobType, ::System::Object* managedJobFunction0, ::System::Object* managedJobFunction1, ::System::Object* managedJobFunction2)
		{
			return ((::System::IntPtr(*)(::System::Type*, ::Unity::Jobs::LowLevel::Unsafe::JobType, ::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_CREATEJOBREFLECTIONDATA_1_OFFSET))(type, jobType, managedJobFunction0, managedJobFunction1, managedJobFunction2);
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

		static ::System::Void SetBgJobQueueMaximumActiveThreadCount(::System::Int32 count)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_SETBGJOBQUEUEMAXIMUMACTIVETHREADCOUNT_OFFSET))(count);
		}

		static ::System::Int32 get_BgJobWorkerMaximumCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_GET_BGJOBWORKERMAXIMUMCOUNT_OFFSET))();
		}

		static ::System::Int32 get_BgJobWorkerCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_GET_BGJOBWORKERCOUNT_OFFSET))();
		}

		static ::System::Void set_BgJobWorkerCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_SET_BGJOBWORKERCOUNT_OFFSET))(value);
		}

		static ::System::Void Schedule_Injected(::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters& parameters, ::Unity::Jobs::JobHandle& ret)
		{
			return ((::System::Void(*)(::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters&, ::Unity::Jobs::JobHandle&))((::PBYTE)hIl2Cpp + UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_SCHEDULE_INJECTED_OFFSET))(parameters, ret);
		}

		static ::System::Void ScheduleParallelFor_Injected(::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters& parameters, ::System::Int32 arrayLength, ::System::Int32 innerloopBatchCount, ::Unity::Jobs::JobHandle& ret)
		{
			return ((::System::Void(*)(::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters&, ::System::Int32, ::System::Int32, ::Unity::Jobs::JobHandle&))((::PBYTE)hIl2Cpp + UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_SCHEDULEPARALLELFOR_INJECTED_OFFSET))(parameters, arrayLength, innerloopBatchCount, ret);
		}

		static ::System::Void ScheduleParallelForTransform_Injected(::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters& parameters, ::System::IntPtr transfromAccesssArray, ::Unity::Jobs::JobHandle& ret)
		{
			return ((::System::Void(*)(::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters&, ::System::IntPtr, ::Unity::Jobs::JobHandle&))((::PBYTE)hIl2Cpp + UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_SCHEDULEPARALLELFORTRANSFORM_INJECTED_OFFSET))(parameters, transfromAccesssArray, ret);
		}
	};
}
