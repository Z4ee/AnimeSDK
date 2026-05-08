#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/EnumVolumeParameter_1.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/NapBloomQuality.h"

#define UNITYENGINE_NAPRENDERPIPELINE0_NAPBLOOMQUALITYPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B661270)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int NapBloomQualityParameter_TypeDefinitionIndex = 6096;

	class NapBloomQualityParameter : public ::UnityEngine::NAPRenderPipeline0::EnumVolumeParameter_1<::UnityEngine::NAPRenderPipeline0::NapBloomQuality>
	{
	public:
		::System::Void _ctor(::UnityEngine::NAPRenderPipeline0::NapBloomQuality value, ::System::Boolean overrideState)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::NapBloomQuality, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPBLOOMQUALITYPARAMETER__CTOR_OFFSET))(this, value, overrideState);
		}
	};
}
