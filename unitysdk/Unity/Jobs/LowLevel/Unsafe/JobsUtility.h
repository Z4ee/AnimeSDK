#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"
#include "unitysdk/Unity/Jobs/LowLevel/Unsafe/JobRanges.h"
#include "unitysdk/Unity/Jobs/LowLevel/Unsafe/JobThreadDelegate.h"
#include "unitysdk/Unity/Jobs/LowLevel/Unsafe/JobThreadDelegateHandleArray.h"
#include "unitysdk/Unity/Jobs/LowLevel/Unsafe/JobThreadDelegatePriority.h"
#include "unitysdk/Unity/Jobs/LowLevel/Unsafe/JobType.h"
#include "unitysdk/Unity/Jobs/LowLevel/Unsafe/JobsUtility_JobScheduleParameters.h"

namespace System { class Delegate; }
namespace System { class String; }
namespace System { class Type; }

#define UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_COMBINEJOBSWITHHANDLEINFO_OFFSET UNITYSDK_OFFSET(0x1D80E120)
#define UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_COMBINEJOBSWITHJOBID_OFFSET UNITYSDK_OFFSET(0x1D80E130)
#define UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_COMPLETE_OFFSET UNITYSDK_OFFSET(0x1D80E140)
#define UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_CREATEJOBREFLECTIONDATA_1_OFFSET UNITYSDK_OFFSET(0x1D80E020)
#define UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_CREATEJOBREFLECTIONDATA_2_OFFSET UNITYSDK_OFFSET(0x1D80E050)
#define UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_CREATEJOBREFLECTIONDATA_OFFSET UNITYSDK_OFFSET(0x1D80E010)
#define UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_GETJOBQUEUEWORKERTHREADCOUNT_OFFSET UNITYSDK_OFFSET(0x1D80E0C0)
#define UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_GETJOBRANGE_OFFSET UNITYSDK_OFFSET(0x1D80DE30)
#define UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_GETWORKSTEALINGRANGE_OFFSET UNITYSDK_OFFSET(0x1D80DE50)
#define UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_GET_ISEXECUTINGJOB_OFFSET UNITYSDK_OFFSET(0x1D80E070)
#define UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_GET_JOBCOMPILERENABLED_OFFSET UNITYSDK_OFFSET(0x1D80E0A0)
#define UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_GET_JOBDEBUGGERENABLED_OFFSET UNITYSDK_OFFSET(0x1D80E080)
#define UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_GET_JOBWORKERCOUNT_OFFSET UNITYSDK_OFFSET(0x1D80E190)
#define UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_GET_JOBWORKERMAXIMUMCOUNT_OFFSET UNITYSDK_OFFSET(0x1D80E170)
#define UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1D80E150)
#define UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_PATCHBUFFERMINMAXRANGES_OFFSET UNITYSDK_OFFSET(0x1D80E000)
#define UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_REGISTERFOREACHTHREADDELEGATE_OFFSET UNITYSDK_OFFSET(0x1D80E0F0)
#define UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_REGISTERTHREADDELEGATES_OFFSET UNITYSDK_OFFSET(0x1D80E100)
#define UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_REGISTERTHREADDELEGATE_OFFSET UNITYSDK_OFFSET(0x1D80E0E0)
#define UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_REGISTERTHREADFUNCTIONPTR_OFFSET UNITYSDK_OFFSET(0x1D80E0D0)
#define UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_RESETJOBWORKERCOUNT_OFFSET UNITYSDK_OFFSET(0x1D80E180)
#define UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_SCHEDULEPARALLELFORDEFERARRAYSIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D80DF50)
#define UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_SCHEDULEPARALLELFORDEFERARRAYSIZE_OFFSET UNITYSDK_OFFSET(0x1D80DF00)
#define UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_SCHEDULEPARALLELFORTRANSFORMREADONLY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D80DFF0)
#define UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_SCHEDULEPARALLELFORTRANSFORMREADONLY_OFFSET UNITYSDK_OFFSET(0x1D80DFB0)
#define UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_SCHEDULEPARALLELFORTRANSFORM_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D80DFA0)
#define UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_SCHEDULEPARALLELFORTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1D80DF60)
#define UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_SCHEDULEPARALLELFOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D80DEF0)
#define UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_SCHEDULEPARALLELFOR_OFFSET UNITYSDK_OFFSET(0x1D80DEB0)
#define UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_SCHEDULE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D80DEA0)
#define UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_SCHEDULE_OFFSET UNITYSDK_OFFSET(0x1D80DE60)
#define UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_SETJOBQUEUEMAXIMUMACTIVETHREADCOUNT_OFFSET UNITYSDK_OFFSET(0x1D80E160)
#define UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_SET_JOBCOMPILERENABLED_OFFSET UNITYSDK_OFFSET(0x1D80E0B0)
#define UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_SET_JOBDEBUGGERENABLED_OFFSET UNITYSDK_OFFSET(0x1D80E090)
#define UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_SET_JOBWORKERCOUNT_OFFSET UNITYSDK_OFFSET(0x1D80E1A0)
#define UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_UNREGISTERLOWPRIORITYFUNCPTRS_OFFSET UNITYSDK_OFFSET(0x1D80E110)

namespace Unity::Jobs::LowLevel::Unsafe
{
	inline static constexpr unsigned int JobsUtility_TypeDefinitionIndex = 5074;

	class JobsUtility : public ::System::Object
	{
	public:
		// static const ::System::Int32 InValidScheduleJobID = 0x0; // 0x0
		// static const ::System::Int32 InValidScheduleJobDataID = 0xFFFFFFFF; // 0x0
		// static const ::System::String* DefaultJobProfile; // 0x0
		// static const ::System::Int32 MaxJobThreadCount = 0x80; // 0x0
		// static const ::System::Int32 CacheLineSize = 0x40; // 0x0

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

		static ::Unity::Jobs::JobHandle ScheduleParallelForDeferArraySize(::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters& parameters, ::System::Int32 innerloopBatchCount, ::System::Void* listData, ::System::Void* listDataAtomicSafetyHandle)
		{
			return ((::Unity::Jobs::JobHandle(*)(::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters&, ::System::Int32, ::System::Void*, ::System::Void*))((::PBYTE)hIl2Cpp + UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_SCHEDULEPARALLELFORDEFERARRAYSIZE_OFFSET))(parameters, innerloopBatchCount, listData, listDataAtomicSafetyHandle);
		}

		static ::Unity::Jobs::JobHandle ScheduleParallelForTransform(::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters& parameters, ::System::IntPtr transfromAccesssArray)
		{
			return ((::Unity::Jobs::JobHandle(*)(::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters&, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_SCHEDULEPARALLELFORTRANSFORM_OFFSET))(parameters, transfromAccesssArray);
		}

		static ::Unity::Jobs::JobHandle ScheduleParallelForTransformReadOnly(::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters& parameters, ::System::IntPtr transfromAccesssArray, ::System::Int32 innerloopBatchCount)
		{
			return ((::Unity::Jobs::JobHandle(*)(::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters&, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_SCHEDULEPARALLELFORTRANSFORMREADONLY_OFFSET))(parameters, transfromAccesssArray, innerloopBatchCount);
		}

		static ::System::Void PatchBufferMinMaxRanges(::System::IntPtr bufferRangePatchData, ::System::Void* jobdata, ::System::Int32 startIndex, ::System::Int32 rangeSize)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Void*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_PATCHBUFFERMINMAXRANGES_OFFSET))(bufferRangePatchData, jobdata, startIndex, rangeSize);
		}

		static ::System::IntPtr CreateJobReflectionData(::System::Type* wrapperJobType, ::System::Type* userJobType, ::Unity::Jobs::LowLevel::Unsafe::JobType jobType, ::System::Object* managedJobFunction0, ::System::Object* managedJobFunction1, ::System::Object* managedJobFunction2)
		{
			return ((::System::IntPtr(*)(::System::Type*, ::System::Type*, ::Unity::Jobs::LowLevel::Unsafe::JobType, ::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_CREATEJOBREFLECTIONDATA_OFFSET))(wrapperJobType, userJobType, jobType, managedJobFunction0, managedJobFunction1, managedJobFunction2);
		}

		static ::System::IntPtr CreateJobReflectionData_1(::System::Type* type, ::Unity::Jobs::LowLevel::Unsafe::JobType jobType, ::System::Object* managedJobFunction0, ::System::Object* managedJobFunction1, ::System::Object* managedJobFunction2)
		{
			return ((::System::IntPtr(*)(::System::Type*, ::Unity::Jobs::LowLevel::Unsafe::JobType, ::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_CREATEJOBREFLECTIONDATA_1_OFFSET))(type, jobType, managedJobFunction0, managedJobFunction1, managedJobFunction2);
		}

		static ::System::IntPtr CreateJobReflectionData_2(::System::Type* wrapperJobType, ::System::Type* userJobType, ::Unity::Jobs::LowLevel::Unsafe::JobType jobType, ::System::Object* managedJobFunction0)
		{
			return ((::System::IntPtr(*)(::System::Type*, ::System::Type*, ::Unity::Jobs::LowLevel::Unsafe::JobType, ::System::Object*))((::PBYTE)hIl2Cpp + UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_CREATEJOBREFLECTIONDATA_2_OFFSET))(wrapperJobType, userJobType, jobType, managedJobFunction0);
		}

		static ::System::Boolean get_IsExecutingJob()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_GET_ISEXECUTINGJOB_OFFSET))();
		}

		static ::System::Boolean get_JobDebuggerEnabled()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_GET_JOBDEBUGGERENABLED_OFFSET))();
		}

		static ::System::Void set_JobDebuggerEnabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_SET_JOBDEBUGGERENABLED_OFFSET))(value);
		}

		static ::System::Boolean get_JobCompilerEnabled()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_GET_JOBCOMPILERENABLED_OFFSET))();
		}

		static ::System::Void set_JobCompilerEnabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_SET_JOBCOMPILERENABLED_OFFSET))(value);
		}

		static ::System::Int32 GetJobQueueWorkerThreadCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_GETJOBQUEUEWORKERTHREADCOUNT_OFFSET))();
		}

		static ::System::UInt64 RegisterThreadFunctionPtr(::System::IntPtr ptr, ::System::Int32 dataID, ::System::UInt64 depends, ::Unity::Jobs::LowLevel::Unsafe::JobThreadDelegatePriority jobPriority, ::System::String* profileName)
		{
			return ((::System::UInt64(*)(::System::IntPtr, ::System::Int32, ::System::UInt64, ::Unity::Jobs::LowLevel::Unsafe::JobThreadDelegatePriority, ::System::String*))((::PBYTE)hIl2Cpp + UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_REGISTERTHREADFUNCTIONPTR_OFFSET))(ptr, dataID, depends, jobPriority, profileName);
		}

		static ::System::UInt64 RegisterThreadDelegate(::System::Delegate* ptr, ::System::Int32 dataID, ::System::UInt64 depends, ::Unity::Jobs::LowLevel::Unsafe::JobThreadDelegatePriority jobPriority, ::System::String* profileName)
		{
			return ((::System::UInt64(*)(::System::Delegate*, ::System::Int32, ::System::UInt64, ::Unity::Jobs::LowLevel::Unsafe::JobThreadDelegatePriority, ::System::String*))((::PBYTE)hIl2Cpp + UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_REGISTERTHREADDELEGATE_OFFSET))(ptr, dataID, depends, jobPriority, profileName);
		}

		static ::System::UInt64 RegisterForeachThreadDelegate(::System::Delegate* ptr, ::System::Int32 dataID, ::System::UInt32 foreachCount, ::System::UInt32 jobCount, ::System::UInt64 depends, ::Unity::Jobs::LowLevel::Unsafe::JobThreadDelegatePriority jobPriority, ::System::String* profileName)
		{
			return ((::System::UInt64(*)(::System::Delegate*, ::System::Int32, ::System::UInt32, ::System::UInt32, ::System::UInt64, ::Unity::Jobs::LowLevel::Unsafe::JobThreadDelegatePriority, ::System::String*))((::PBYTE)hIl2Cpp + UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_REGISTERFOREACHTHREADDELEGATE_OFFSET))(ptr, dataID, foreachCount, jobCount, depends, jobPriority, profileName);
		}

		static ::System::UInt64 RegisterThreadDelegates(::Unity::Jobs::LowLevel::Unsafe::JobThreadDelegate& jobsData, ::System::String* profileName)
		{
			return ((::System::UInt64(*)(::Unity::Jobs::LowLevel::Unsafe::JobThreadDelegate&, ::System::String*))((::PBYTE)hIl2Cpp + UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_REGISTERTHREADDELEGATES_OFFSET))(jobsData, profileName);
		}

		static ::System::Void UnRegisterLowPriorityFuncPtrs()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_UNREGISTERLOWPRIORITYFUNCPTRS_OFFSET))();
		}

		static ::System::UInt64 CombineJobsWithHandleInfo(::Unity::Jobs::LowLevel::Unsafe::JobThreadDelegateHandleArray& jobs)
		{
			return ((::System::UInt64(*)(::Unity::Jobs::LowLevel::Unsafe::JobThreadDelegateHandleArray&))((::PBYTE)hIl2Cpp + UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_COMBINEJOBSWITHHANDLEINFO_OFFSET))(jobs);
		}

		static ::System::UInt64 CombineJobsWithJobId(::Il2CppArray<::System::UInt64>* jobHandles)
		{
			return ((::System::UInt64(*)(::Il2CppArray<::System::UInt64>*))((::PBYTE)hIl2Cpp + UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_COMBINEJOBSWITHJOBID_OFFSET))(jobHandles);
		}

		static ::System::Void Complete(::System::UInt64 jobID)
		{
			return ((::System::Void(*)(::System::UInt64))((::PBYTE)hIl2Cpp + UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_COMPLETE_OFFSET))(jobID);
		}

		static ::System::Boolean IsCompleted(::System::UInt64 jobID)
		{
			return ((::System::Boolean(*)(::System::UInt64))((::PBYTE)hIl2Cpp + UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_ISCOMPLETED_OFFSET))(jobID);
		}

		static ::System::Void SetJobQueueMaximumActiveThreadCount(::System::Int32 count)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_SETJOBQUEUEMAXIMUMACTIVETHREADCOUNT_OFFSET))(count);
		}

		static ::System::Int32 get_JobWorkerMaximumCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_GET_JOBWORKERMAXIMUMCOUNT_OFFSET))();
		}

		static ::System::Void ResetJobWorkerCount()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_RESETJOBWORKERCOUNT_OFFSET))();
		}

		static ::System::Int32 get_JobWorkerCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_GET_JOBWORKERCOUNT_OFFSET))();
		}

		static ::System::Void set_JobWorkerCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_SET_JOBWORKERCOUNT_OFFSET))(value);
		}

		static ::System::Void Schedule_Injected(::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters& parameters, ::Unity::Jobs::JobHandle& ret)
		{
			return ((::System::Void(*)(::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters&, ::Unity::Jobs::JobHandle&))((::PBYTE)hIl2Cpp + UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_SCHEDULE_INJECTED_OFFSET))(parameters, ret);
		}

		static ::System::Void ScheduleParallelFor_Injected(::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters& parameters, ::System::Int32 arrayLength, ::System::Int32 innerloopBatchCount, ::Unity::Jobs::JobHandle& ret)
		{
			return ((::System::Void(*)(::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters&, ::System::Int32, ::System::Int32, ::Unity::Jobs::JobHandle&))((::PBYTE)hIl2Cpp + UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_SCHEDULEPARALLELFOR_INJECTED_OFFSET))(parameters, arrayLength, innerloopBatchCount, ret);
		}

		static ::System::Void ScheduleParallelForDeferArraySize_Injected(::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters& parameters, ::System::Int32 innerloopBatchCount, ::System::Void* listData, ::System::Void* listDataAtomicSafetyHandle, ::Unity::Jobs::JobHandle& ret)
		{
			return ((::System::Void(*)(::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters&, ::System::Int32, ::System::Void*, ::System::Void*, ::Unity::Jobs::JobHandle&))((::PBYTE)hIl2Cpp + UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_SCHEDULEPARALLELFORDEFERARRAYSIZE_INJECTED_OFFSET))(parameters, innerloopBatchCount, listData, listDataAtomicSafetyHandle, ret);
		}

		static ::System::Void ScheduleParallelForTransform_Injected(::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters& parameters, ::System::IntPtr transfromAccesssArray, ::Unity::Jobs::JobHandle& ret)
		{
			return ((::System::Void(*)(::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters&, ::System::IntPtr, ::Unity::Jobs::JobHandle&))((::PBYTE)hIl2Cpp + UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_SCHEDULEPARALLELFORTRANSFORM_INJECTED_OFFSET))(parameters, transfromAccesssArray, ret);
		}

		static ::System::Void ScheduleParallelForTransformReadOnly_Injected(::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters& parameters, ::System::IntPtr transfromAccesssArray, ::System::Int32 innerloopBatchCount, ::Unity::Jobs::JobHandle& ret)
		{
			return ((::System::Void(*)(::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters&, ::System::IntPtr, ::System::Int32, ::Unity::Jobs::JobHandle&))((::PBYTE)hIl2Cpp + UNITY_JOBS_LOWLEVEL_UNSAFE_JOBSUTILITY_SCHEDULEPARALLELFORTRANSFORMREADONLY_INJECTED_OFFSET))(parameters, transfromAccesssArray, innerloopBatchCount, ret);
		}
	};
}
