#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/GaussianBlur_NativeSRP.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_GAUSSIANBLUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6F02B0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int GaussianBlur_TypeDefinitionIndex = 30126;

	class GaussianBlur : public ::UnityEngine::NAPRenderPipeline0::GaussianBlur_NativeSRP
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GAUSSIANBLUR__CTOR_OFFSET))(this);
		}
	};
}
