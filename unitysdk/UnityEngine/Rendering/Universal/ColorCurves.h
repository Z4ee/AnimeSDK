#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ColorCurves_NativeSRP.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_COLORCURVES__CTOR_OFFSET UNITYSDK_OFFSET(0x19280D30)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ColorCurves_TypeDefinitionIndex = 30112;

	class ColorCurves : public ::UnityEngine::NAPRenderPipeline0::ColorCurves_NativeSRP
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_COLORCURVES__CTOR_OFFSET))(this);
		}
	};
}
