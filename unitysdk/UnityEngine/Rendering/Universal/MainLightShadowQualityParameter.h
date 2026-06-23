#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/EnumVolumeParameter_1.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ShadowResolution.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_MAINLIGHTSHADOWQUALITYPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF0A290)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int MainLightShadowQualityParameter_TypeDefinitionIndex = 26881;

	class MainLightShadowQualityParameter : public ::UnityEngine::NAPRenderPipeline0::EnumVolumeParameter_1<::UnityEngine::NAPRenderPipeline0::ShadowResolution>
	{
	public:
		::System::Void _ctor(::UnityEngine::NAPRenderPipeline0::ShadowResolution value, ::System::Boolean overrideState)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::ShadowResolution, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MAINLIGHTSHADOWQUALITYPARAMETER__CTOR_OFFSET))(this, value, overrideState);
		}
	};
}
