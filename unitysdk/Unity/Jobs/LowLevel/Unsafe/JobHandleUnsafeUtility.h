#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"

#define UNITY_JOBS_LOWLEVEL_UNSAFE_JOBHANDLEUNSAFEUTILITY_COMBINEDEPENDENCIES_OFFSET UNITYSDK_OFFSET(0x1D29B9F0)

namespace Unity::Jobs::LowLevel::Unsafe
{
	inline static constexpr unsigned int JobHandleUnsafeUtility_TypeDefinitionIndex = 5063;

	class JobHandleUnsafeUtility : public ::System::Object
	{
	public:
		static ::Unity::Jobs::JobHandle CombineDependencies(::Unity::Jobs::JobHandle* jobs, ::System::Int32 count)
		{
			return ((::Unity::Jobs::JobHandle(*)(::Unity::Jobs::JobHandle*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITY_JOBS_LOWLEVEL_UNSAFE_JOBHANDLEUNSAFEUTILITY_COMBINEDEPENDENCIES_OFFSET))(jobs, count);
		}
	};
}
