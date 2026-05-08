#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ScreenSpaceReflection_NativeSRP.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_SCREENSPACEREFLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1914CC60)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ScreenSpaceReflection_TypeDefinitionIndex = 30171;

	class ScreenSpaceReflection : public ::UnityEngine::NAPRenderPipeline0::ScreenSpaceReflection_NativeSRP
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCREENSPACEREFLECTION__CTOR_OFFSET))(this);
		}
	};
}
