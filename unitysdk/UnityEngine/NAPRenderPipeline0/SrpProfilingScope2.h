#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::Profiling { class CustomSampler; }

#define UNITYENGINE_NAPRENDERPIPELINE0_SRPPROFILINGSCOPE2_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9EE1B0)
#define UNITYENGINE_NAPRENDERPIPELINE0_SRPPROFILINGSCOPE2__CTOR_OFFSET UNITYSDK_OFFSET(0x9EE190)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int SrpProfilingScope2_TypeDefinitionIndex = 5949;

	struct alignas(8) SrpProfilingScope2
	{
		::UnityEngine::Profiling::CustomSampler* m_Sampler; // 0x10

		::System::Void _ctor(::UnityEngine::Profiling::CustomSampler* sampler)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Profiling::CustomSampler*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SRPPROFILINGSCOPE2__CTOR_OFFSET))(this, sampler);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SRPPROFILINGSCOPE2_DISPOSE_OFFSET))(this);
		}
	};
}
