#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::NAPRenderPipeline0 { class TextureCurve; }

#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERCONFIGADDITIONALDATA_SPECULARTONEMAPPINGCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1ABA88F0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int WeatherConfigAdditionalData_SpecularTonemappingConfig_TypeDefinitionIndex = 29960;

	class WeatherConfigAdditionalData_SpecularTonemappingConfig : public ::System::Object
	{
	public:
		::System::Boolean enableSpecularTonemapping; // 0x10
		::UnityEngine::Texture2D* specularTonemappingLut; // 0x18
		::UnityEngine::NAPRenderPipeline0::TextureCurve* specularToneCurve_master; // 0x20
		::UnityEngine::NAPRenderPipeline0::TextureCurve* specularToneCurve_red; // 0x28
		::UnityEngine::NAPRenderPipeline0::TextureCurve* specularToneCurve_green; // 0x30
		::UnityEngine::NAPRenderPipeline0::TextureCurve* specularToneCurve_blue; // 0x38
		::UnityEngine::AnimationCurve* specularToneCurveRawMaster; // 0x40
		::UnityEngine::AnimationCurve* specularToneCurveRawRed; // 0x48
		::UnityEngine::AnimationCurve* specularToneCurveRawGreen; // 0x50
		::UnityEngine::AnimationCurve* specularToneCurveRawBlue; // 0x58
		::UnityEngine::Vector2 specularDistanceFade; // 0x60
		::UnityEngine::Vector2 specularDistanceFadeValue; // 0x68
		::UnityEngine::Vector2 specularAngleFade; // 0x70
		::UnityEngine::Vector2 specularAngleFadeValue; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERCONFIGADDITIONALDATA_SPECULARTONEMAPPINGCONFIG__CTOR_OFFSET))(this);
		}
	};
}
