#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::NAPRenderPipeline0 { class TextureCurve; }

#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_SCENEPOSTPROCESSINGCONFIG_COLORCURVES__CTOR_OFFSET UNITYSDK_OFFSET(0x19BA57A0)

namespace UnityEngine::Rendering::Universal::WeatherSystem
{
	inline static constexpr unsigned int ScenePostProcessingConfig_ColorCurves_TypeDefinitionIndex = 30316;

	class ScenePostProcessingConfig_ColorCurves : public ::System::Object
	{
	public:
		::UnityEngine::NAPRenderPipeline0::TextureCurve* ColorCurve_master; // 0x10
		::UnityEngine::NAPRenderPipeline0::TextureCurve* ColorCurve_red; // 0x18
		::UnityEngine::NAPRenderPipeline0::TextureCurve* ColorCurve_green; // 0x20
		::UnityEngine::NAPRenderPipeline0::TextureCurve* ColorCurve_blue; // 0x28
		::UnityEngine::NAPRenderPipeline0::TextureCurve* ColorCurve_hueVsHue; // 0x30
		::UnityEngine::NAPRenderPipeline0::TextureCurve* ColorCurve_hueVsSat; // 0x38
		::UnityEngine::NAPRenderPipeline0::TextureCurve* ColorCurve_satVsSat; // 0x40
		::UnityEngine::NAPRenderPipeline0::TextureCurve* ColorCurve_lumVsSat; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_SCENEPOSTPROCESSINGCONFIG_COLORCURVES__CTOR_OFFSET))(this);
		}
	};
}
