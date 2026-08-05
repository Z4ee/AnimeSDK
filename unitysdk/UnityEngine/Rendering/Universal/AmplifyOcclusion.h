#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/AmplifyOcclusion_NativeSRP.h"

namespace UnityEngine::NAPRenderPipeline0 { class BoolParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class ClampedFloatParameter; }

#define UNITYENGINE_RENDERING_UNIVERSAL_AMPLIFYOCCLUSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5AF900)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int AmplifyOcclusion_TypeDefinitionIndex = 27517;

	class AmplifyOcclusion : public ::UnityEngine::NAPRenderPipeline0::AmplifyOcclusion_NativeSRP
	{
	public:
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* intensityMultiOnMobile; // 0xA0
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* radiusMultiOnMobile; // 0xA8
		::UnityEngine::NAPRenderPipeline0::BoolParameter* lowSSAOQuality; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_AMPLIFYOCCLUSION__CTOR_OFFSET))(this);
		}
	};
}
