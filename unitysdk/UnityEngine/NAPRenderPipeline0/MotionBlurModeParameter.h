#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/EnumVolumeParameter_1.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/MotionBlurMode.h"

#define UNITYENGINE_NAPRENDERPIPELINE0_MOTIONBLURMODEPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EDE58A0)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int MotionBlurModeParameter_TypeDefinitionIndex = 6095;

	class MotionBlurModeParameter : public ::UnityEngine::NAPRenderPipeline0::EnumVolumeParameter_1<::UnityEngine::NAPRenderPipeline0::MotionBlurMode>
	{
	public:
		::System::Void _ctor(::UnityEngine::NAPRenderPipeline0::MotionBlurMode value, ::System::Boolean overrideState)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::MotionBlurMode, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_MOTIONBLURMODEPARAMETER__CTOR_OFFSET))(this, value, overrideState);
		}
	};
}
