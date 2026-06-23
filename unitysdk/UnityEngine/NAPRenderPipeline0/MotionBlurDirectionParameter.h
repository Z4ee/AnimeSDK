#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/EnumVolumeParameter_1.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/MotionBlurDirection.h"

#define UNITYENGINE_NAPRENDERPIPELINE0_MOTIONBLURDIRECTIONPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D586270)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int MotionBlurDirectionParameter_TypeDefinitionIndex = 6095;

	class MotionBlurDirectionParameter : public ::UnityEngine::NAPRenderPipeline0::EnumVolumeParameter_1<::UnityEngine::NAPRenderPipeline0::MotionBlurDirection>
	{
	public:
		::System::Void _ctor(::UnityEngine::NAPRenderPipeline0::MotionBlurDirection value, ::System::Boolean overrideState)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::MotionBlurDirection, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_MOTIONBLURDIRECTIONPARAMETER__CTOR_OFFSET))(this, value, overrideState);
		}
	};
}
