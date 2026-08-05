#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/EnumVolumeParameter_1.h"
#include "unitysdk/UnityEngine/Rendering/Universal/DistanceDistortionBlendMode.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_DISTANCEDISTORTIONBLENDMODEPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEF1960)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int DistanceDistortionBlendModeParameter_TypeDefinitionIndex = 27409;

	class DistanceDistortionBlendModeParameter : public ::UnityEngine::NAPRenderPipeline0::EnumVolumeParameter_1<::UnityEngine::Rendering::Universal::DistanceDistortionBlendMode>
	{
	public:
		::System::Void _ctor(::UnityEngine::Rendering::Universal::DistanceDistortionBlendMode value, ::System::Boolean overrideState)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::DistanceDistortionBlendMode, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DISTANCEDISTORTIONBLENDMODEPARAMETER__CTOR_OFFSET))(this, value, overrideState);
		}
	};
}
