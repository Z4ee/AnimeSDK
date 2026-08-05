#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITY_JOBS_JOBHANDLE_COMBINEDEPENDENCIESINTERNAL2_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EA67D10)
#define UNITY_JOBS_JOBHANDLE_COMBINEDEPENDENCIESINTERNAL2_OFFSET UNITYSDK_OFFSET(0x1EA67C10)
#define UNITY_JOBS_JOBHANDLE_COMBINEDEPENDENCIESINTERNALPTR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EA67D20)
#define UNITY_JOBS_JOBHANDLE_COMBINEDEPENDENCIESINTERNALPTR_OFFSET UNITYSDK_OFFSET(0x1EA67C90)
#define UNITY_JOBS_JOBHANDLE_COMBINEDEPENDENCIES_1_OFFSET UNITYSDK_OFFSET(0x1EA67C50)
#define UNITY_JOBS_JOBHANDLE_COMBINEDEPENDENCIES_2_OFFSET UNITYSDK_OFFSET(0x1EA67CD0)
#define UNITY_JOBS_JOBHANDLE_COMBINEDEPENDENCIES_OFFSET UNITYSDK_OFFSET(0x1EA67BD0)
#define UNITY_JOBS_JOBHANDLE_COMPLETEALL_OFFSET UNITYSDK_OFFSET(0x1EA67B70)
#define UNITY_JOBS_JOBHANDLE_COMPLETE_OFFSET UNITYSDK_OFFSET(0xA552E0)
#define UNITY_JOBS_JOBHANDLE_GET_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0xA55300)
#define UNITY_JOBS_JOBHANDLE_SCHEDULEBATCHEDJOBSANDCOMPLETEALL_OFFSET UNITYSDK_OFFSET(0x1EA67B90)
#define UNITY_JOBS_JOBHANDLE_SCHEDULEBATCHEDJOBSANDCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1EA67B60)
#define UNITY_JOBS_JOBHANDLE_SCHEDULEBATCHEDJOBSANDISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1EA67BB0)
#define UNITY_JOBS_JOBHANDLE_SCHEDULEBATCHEDJOBS_OFFSET UNITYSDK_OFFSET(0x1EA67BC0)

namespace Unity::Jobs
{
	inline static constexpr unsigned int JobHandle_TypeDefinitionIndex = 5060;

	struct alignas(8) JobHandle
	{
		::System::IntPtr jobGroup; // 0x10
		::System::Int32 version; // 0x18

		::System::Void Complete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_JOBS_JOBHANDLE_COMPLETE_OFFSET))(this);
		}

		/*
		static ::System::Void CompleteAll(::Unity::Collections::NativeArray_1<::Unity::Jobs::JobHandle> jobs)
		{
			return ((::System::Void(*)(::Unity::Collections::NativeArray_1<::Unity::Jobs::JobHandle>))((::PBYTE)hIl2Cpp + UNITY_JOBS_JOBHANDLE_COMPLETEALL_OFFSET))(jobs);
		}
		*/

		::System::Boolean get_IsCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_JOBS_JOBHANDLE_GET_ISCOMPLETED_OFFSET))(this);
		}

		static ::System::Void ScheduleBatchedJobs()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITY_JOBS_JOBHANDLE_SCHEDULEBATCHEDJOBS_OFFSET))();
		}

		static ::System::Void ScheduleBatchedJobsAndComplete(::Unity::Jobs::JobHandle& job)
		{
			return ((::System::Void(*)(::Unity::Jobs::JobHandle&))((::PBYTE)hIl2Cpp + UNITY_JOBS_JOBHANDLE_SCHEDULEBATCHEDJOBSANDCOMPLETE_OFFSET))(job);
		}

		static ::System::Boolean ScheduleBatchedJobsAndIsCompleted(::Unity::Jobs::JobHandle& job)
		{
			return ((::System::Boolean(*)(::Unity::Jobs::JobHandle&))((::PBYTE)hIl2Cpp + UNITY_JOBS_JOBHANDLE_SCHEDULEBATCHEDJOBSANDISCOMPLETED_OFFSET))(job);
		}

		static ::System::Void ScheduleBatchedJobsAndCompleteAll(::System::Void* jobs, ::System::Int32 count)
		{
			return ((::System::Void(*)(::System::Void*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITY_JOBS_JOBHANDLE_SCHEDULEBATCHEDJOBSANDCOMPLETEALL_OFFSET))(jobs, count);
		}

		static ::Unity::Jobs::JobHandle CombineDependencies(::Unity::Jobs::JobHandle job0, ::Unity::Jobs::JobHandle job1)
		{
			return ((::Unity::Jobs::JobHandle(*)(::Unity::Jobs::JobHandle, ::Unity::Jobs::JobHandle))((::PBYTE)hIl2Cpp + UNITY_JOBS_JOBHANDLE_COMBINEDEPENDENCIES_OFFSET))(job0, job1);
		}

		/*
		static ::Unity::Jobs::JobHandle CombineDependencies_1(::Unity::Collections::NativeArray_1<::Unity::Jobs::JobHandle> jobs)
		{
			return ((::Unity::Jobs::JobHandle(*)(::Unity::Collections::NativeArray_1<::Unity::Jobs::JobHandle>))((::PBYTE)hIl2Cpp + UNITY_JOBS_JOBHANDLE_COMBINEDEPENDENCIES_1_OFFSET))(jobs);
		}
		*/

		/*
		static ::Unity::Jobs::JobHandle CombineDependencies_2(::Unity::Collections::NativeSlice_1<::Unity::Jobs::JobHandle> jobs)
		{
			return ((::Unity::Jobs::JobHandle(*)(::Unity::Collections::NativeSlice_1<::Unity::Jobs::JobHandle>))((::PBYTE)hIl2Cpp + UNITY_JOBS_JOBHANDLE_COMBINEDEPENDENCIES_2_OFFSET))(jobs);
		}
		*/

		static ::Unity::Jobs::JobHandle CombineDependenciesInternal2(::Unity::Jobs::JobHandle& job0, ::Unity::Jobs::JobHandle& job1)
		{
			return ((::Unity::Jobs::JobHandle(*)(::Unity::Jobs::JobHandle&, ::Unity::Jobs::JobHandle&))((::PBYTE)hIl2Cpp + UNITY_JOBS_JOBHANDLE_COMBINEDEPENDENCIESINTERNAL2_OFFSET))(job0, job1);
		}

		static ::Unity::Jobs::JobHandle CombineDependenciesInternalPtr(::System::Void* jobs, ::System::Int32 count)
		{
			return ((::Unity::Jobs::JobHandle(*)(::System::Void*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITY_JOBS_JOBHANDLE_COMBINEDEPENDENCIESINTERNALPTR_OFFSET))(jobs, count);
		}

		static ::System::Void CombineDependenciesInternal2_Injected(::Unity::Jobs::JobHandle& job0, ::Unity::Jobs::JobHandle& job1, ::Unity::Jobs::JobHandle& ret)
		{
			return ((::System::Void(*)(::Unity::Jobs::JobHandle&, ::Unity::Jobs::JobHandle&, ::Unity::Jobs::JobHandle&))((::PBYTE)hIl2Cpp + UNITY_JOBS_JOBHANDLE_COMBINEDEPENDENCIESINTERNAL2_INJECTED_OFFSET))(job0, job1, ret);
		}

		static ::System::Void CombineDependenciesInternalPtr_Injected(::System::Void* jobs, ::System::Int32 count, ::Unity::Jobs::JobHandle& ret)
		{
			return ((::System::Void(*)(::System::Void*, ::System::Int32, ::Unity::Jobs::JobHandle&))((::PBYTE)hIl2Cpp + UNITY_JOBS_JOBHANDLE_COMBINEDEPENDENCIESINTERNALPTR_INJECTED_OFFSET))(jobs, count, ret);
		}
	};
}
