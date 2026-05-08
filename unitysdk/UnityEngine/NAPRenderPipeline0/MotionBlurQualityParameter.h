#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/EnumVolumeParameter_1.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/MotionBlurQuality.h"

#define UNITYENGINE_NAPRENDERPIPELINE0_MOTIONBLURQUALITYPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3C42B0)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int MotionBlurQualityParameter_TypeDefinitionIndex = 6083;

	class MotionBlurQualityParameter : public ::UnityEngine::NAPRenderPipeline0::EnumVolumeParameter_1<::UnityEngine::NAPRenderPipeline0::MotionBlurQuality>
	{
	public:
		::System::Void _ctor(::UnityEngine::NAPRenderPipeline0::MotionBlurQuality value, ::System::Boolean overrideState)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::MotionBlurQuality, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_MOTIONBLURQUALITYPARAMETER__CTOR_OFFSET))(this, value, overrideState);
		}
	};
}
