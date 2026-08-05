#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/GaussianBlur_NativeSRP.h"

namespace UnityEngine::NAPRenderPipeline0 { class BoolParameter; }

#define UNITYENGINE_RENDERING_UNIVERSAL_GAUSSIANBLUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1DDF89F0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int GaussianBlur_TypeDefinitionIndex = 27828;

	class GaussianBlur : public ::UnityEngine::NAPRenderPipeline0::GaussianBlur_NativeSRP
	{
	public:
		::UnityEngine::NAPRenderPipeline0::BoolParameter* enableBlurWithMonsterMask; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GAUSSIANBLUR__CTOR_OFFSET))(this);
		}
	};
}
