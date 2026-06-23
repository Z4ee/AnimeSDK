#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/EnumVolumeParameter_1.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/OtherLightShadowResolution.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_OTHERLIGHTSHADOWQUALITYPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC374E0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int OtherLightShadowQualityParameter_TypeDefinitionIndex = 26275;

	class OtherLightShadowQualityParameter : public ::UnityEngine::NAPRenderPipeline0::EnumVolumeParameter_1<::UnityEngine::NAPRenderPipeline0::OtherLightShadowResolution>
	{
	public:
		::System::Void _ctor(::UnityEngine::NAPRenderPipeline0::OtherLightShadowResolution value, ::System::Boolean overrideState)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::OtherLightShadowResolution, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_OTHERLIGHTSHADOWQUALITYPARAMETER__CTOR_OFFSET))(this, value, overrideState);
		}
	};
}
