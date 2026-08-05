#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Texture; }
namespace UnityEngine::NAPRenderPipeline0 { class TextureCurveParameter; }

#define UNITYENGINE_RENDERING_UNIVERSAL_RTXGIROUGHNESSCONFIG_MARKTEXTURECURVEASDIRTY_OFFSET UNITYSDK_OFFSET(0x1E66F8F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_RTXGIROUGHNESSCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E66FA60)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int RTXGIRoughnessConfig_TypeDefinitionIndex = 27650;

	class RTXGIRoughnessConfig : public ::System::Object
	{
	public:
		::System::Single roughnesslift; // 0x10
		::System::Single roughnessgamma; // 0x14
		::System::Single roughnessgain; // 0x18
		::System::Single roughnessOffset; // 0x1C
		::System::Single roughnessMultiply; // 0x20
		::UnityEngine::NAPRenderPipeline0::TextureCurveParameter* master; // 0x28
		::UnityEngine::NAPRenderPipeline0::TextureCurveParameter* red; // 0x30
		::UnityEngine::NAPRenderPipeline0::TextureCurveParameter* green; // 0x38
		::UnityEngine::NAPRenderPipeline0::TextureCurveParameter* blue; // 0x40
		::UnityEngine::NAPRenderPipeline0::TextureCurveParameter* hueVsHue; // 0x48
		::UnityEngine::NAPRenderPipeline0::TextureCurveParameter* hueVsSat; // 0x50
		::UnityEngine::NAPRenderPipeline0::TextureCurveParameter* satVsSat; // 0x58
		::UnityEngine::NAPRenderPipeline0::TextureCurveParameter* lumVsSat; // 0x60
		::UnityEngine::Texture* Lut; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RTXGIROUGHNESSCONFIG__CTOR_OFFSET))(this);
		}

		::System::Void MarkTextureCurveAsDirty(::System::Int32 curveId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RTXGIROUGHNESSCONFIG_MARKTEXTURECURVEASDIRTY_OFFSET))(this, curveId);
		}
	};
}
