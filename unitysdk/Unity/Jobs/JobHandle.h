#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITY_JOBS_JOBHANDLE_COMBINEDEPENDENCIESINTERNAL2_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B3BF930)
#define UNITY_JOBS_JOBHANDLE_COMBINEDEPENDENCIESINTERNAL2_OFFSET UNITYSDK_OFFSET(0x1B3BF830)
#define UNITY_JOBS_JOBHANDLE_COMBINEDEPENDENCIESINTERNALPTR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B3BF940)
#define UNITY_JOBS_JOBHANDLE_COMBINEDEPENDENCIESINTERNALPTR_OFFSET UNITYSDK_OFFSET(0x1B3BF8B0)
#define UNITY_JOBS_JOBHANDLE_COMBINEDEPENDENCIES_1_OFFSET UNITYSDK_OFFSET(0x1B3BF870)
#define UNITY_JOBS_JOBHANDLE_COMBINEDEPENDENCIES_2_OFFSET UNITYSDK_OFFSET(0x1B3BF8F0)
#define UNITY_JOBS_JOBHANDLE_COMBINEDEPENDENCIES_OFFSET UNITYSDK_OFFSET(0x1B3BF7F0)
#define UNITY_JOBS_JOBHANDLE_COMPLETEALL_OFFSET UNITYSDK_OFFSET(0x1B3BF790)
#define UNITY_JOBS_JOBHANDLE_COMPLETE_OFFSET UNITYSDK_OFFSET(0x968200)
#define UNITY_JOBS_JOBHANDLE_GET_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x968220)
#define UNITY_JOBS_JOBHANDLE_SCHEDULEBATCHEDJOBSANDCOMPLETEALL_OFFSET UNITYSDK_OFFSET(0x1B3BF7B0)
#define UNITY_JOBS_JOBHANDLE_SCHEDULEBATCHEDJOBSANDCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1B3BF780)
#define UNITY_JOBS_JOBHANDLE_SCHEDULEBATCHEDJOBSANDISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1B3BF7D0)
#define UNITY_JOBS_JOBHANDLE_SCHEDULEBATCHEDJOBS_OFFSET UNITYSDK_OFFSET(0x1B3BF7E0)

namespace Unity::Jobs
{
	inline static constexpr unsigned int JobHandle_TypeDefinitionIndex = 5061;

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
