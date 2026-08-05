#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ColorCurves_NativeSRP.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_COLORCURVES__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5AFA50)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ColorCurves_TypeDefinitionIndex = 27830;

	class ColorCurves : public ::UnityEngine::NAPRenderPipeline0::ColorCurves_NativeSRP
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_COLORCURVES__CTOR_OFFSET))(this);
		}
	};
}
