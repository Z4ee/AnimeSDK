#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITY_JOBS_JOBHANDLE_COMBINEDEPENDENCIESINTERNAL2_INJECTED_OFFSET UNITYSDK_OFFSET(0x189EA380)
#define UNITY_JOBS_JOBHANDLE_COMBINEDEPENDENCIESINTERNAL2_OFFSET UNITYSDK_OFFSET(0x189EA340)
#define UNITY_JOBS_JOBHANDLE_COMBINEDEPENDENCIES_OFFSET UNITYSDK_OFFSET(0x189EA300)
#define UNITY_JOBS_JOBHANDLE_COMPLETEINTERNAL_OFFSET UNITYSDK_OFFSET(0x189EA2C0)
#define UNITY_JOBS_JOBHANDLE_COMPLETE_OFFSET UNITYSDK_OFFSET(0x210EA00)
#define UNITY_JOBS_JOBHANDLE_GET_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x210EA20)
#define UNITY_JOBS_JOBHANDLE_ISCOMPLETEINTERNAL_OFFSET UNITYSDK_OFFSET(0x189EA2E0)
#define UNITY_JOBS_JOBHANDLE_SCHEDULEBATCHEDJOBS_OFFSET UNITYSDK_OFFSET(0x189EA2F0)

namespace Unity::Jobs
{
	inline static constexpr unsigned int JobHandle_TypeDefinitionIndex = 3773;

	struct alignas(8) JobHandle
	{
		::System::IntPtr jobGroup; // 0x10
		::System::Int32 version; // 0x18

		::System::Void Complete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_JOBS_JOBHANDLE_COMPLETE_OFFSET))(this);
		}

		::System::Boolean get_IsCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_JOBS_JOBHANDLE_GET_ISCOMPLETED_OFFSET))(this);
		}

		static ::System::Void ScheduleBatchedJobs()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITY_JOBS_JOBHANDLE_SCHEDULEBATCHEDJOBS_OFFSET))();
		}

		static ::System::Void CompleteInternal(::Unity::Jobs::JobHandle& job)
		{
			return ((::System::Void(*)(::Unity::Jobs::JobHandle&))((::PBYTE)hIl2Cpp + UNITY_JOBS_JOBHANDLE_COMPLETEINTERNAL_OFFSET))(job);
		}

		static ::System::Boolean IsCompleteInternal(::Unity::Jobs::JobHandle& job)
		{
			return ((::System::Boolean(*)(::Unity::Jobs::JobHandle&))((::PBYTE)hIl2Cpp + UNITY_JOBS_JOBHANDLE_ISCOMPLETEINTERNAL_OFFSET))(job);
		}

		static ::Unity::Jobs::JobHandle CombineDependencies(::Unity::Jobs::JobHandle job0, ::Unity::Jobs::JobHandle job1)
		{
			return ((::Unity::Jobs::JobHandle(*)(::Unity::Jobs::JobHandle, ::Unity::Jobs::JobHandle))((::PBYTE)hIl2Cpp + UNITY_JOBS_JOBHANDLE_COMBINEDEPENDENCIES_OFFSET))(job0, job1);
		}

		static ::Unity::Jobs::JobHandle CombineDependenciesInternal2(::Unity::Jobs::JobHandle& job0, ::Unity::Jobs::JobHandle& job1)
		{
			return ((::Unity::Jobs::JobHandle(*)(::Unity::Jobs::JobHandle&, ::Unity::Jobs::JobHandle&))((::PBYTE)hIl2Cpp + UNITY_JOBS_JOBHANDLE_COMBINEDEPENDENCIESINTERNAL2_OFFSET))(job0, job1);
		}

		static ::System::Void CombineDependenciesInternal2_Injected(::Unity::Jobs::JobHandle& job0, ::Unity::Jobs::JobHandle& job1, ::Unity::Jobs::JobHandle& ret)
		{
			return ((::System::Void(*)(::Unity::Jobs::JobHandle&, ::Unity::Jobs::JobHandle&, ::Unity::Jobs::JobHandle&))((::PBYTE)hIl2Cpp + UNITY_JOBS_JOBHANDLE_COMBINEDEPENDENCIESINTERNAL2_INJECTED_OFFSET))(job0, job1, ret);
		}
	};
}
