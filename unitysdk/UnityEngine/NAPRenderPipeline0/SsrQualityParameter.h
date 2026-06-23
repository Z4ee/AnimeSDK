#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/EnumVolumeParameter_1.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/SsrQuality.h"

#define UNITYENGINE_NAPRENDERPIPELINE0_SSRQUALITYPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7B5F70)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int SsrQualityParameter_TypeDefinitionIndex = 6098;

	class SsrQualityParameter : public ::UnityEngine::NAPRenderPipeline0::EnumVolumeParameter_1<::UnityEngine::NAPRenderPipeline0::SsrQuality>
	{
	public:
		::System::Void _ctor(::UnityEngine::NAPRenderPipeline0::SsrQuality value, ::System::Boolean overrideState)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::SsrQuality, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SSRQUALITYPARAMETER__CTOR_OFFSET))(this, value, overrideState);
		}
	};
}
