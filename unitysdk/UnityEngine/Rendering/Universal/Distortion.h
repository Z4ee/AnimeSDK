#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/Distortion_NativeSRP.h"

namespace UnityEngine::NAPRenderPipeline0 { class BoolParameter; }

#define UNITYENGINE_RENDERING_UNIVERSAL_DISTORTION_ISACTIVEV2_OFFSET UNITYSDK_OFFSET(0x1BC1FB60)
#define UNITYENGINE_RENDERING_UNIVERSAL_DISTORTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC1FC30)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int Distortion_TypeDefinitionIndex = 26818;

	class Distortion : public ::UnityEngine::NAPRenderPipeline0::Distortion_NativeSRP
	{
	public:
		::UnityEngine::NAPRenderPipeline0::BoolParameter* DoDistortionAfterDof; // 0x68
		::UnityEngine::NAPRenderPipeline0::BoolParameter* forceDistortionOnLowPlatform; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DISTORTION__CTOR_OFFSET))(this);
		}

		::System::Boolean IsActiveV2()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DISTORTION_ISACTIVEV2_OFFSET))(this);
		}
	};
}
