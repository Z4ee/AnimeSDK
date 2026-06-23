#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class WeatherConfig;
namespace UnityEngine::Rendering::Universal { class AmplifyOcclusion; }
namespace UnityEngine::Rendering::Universal { class CharacterIgnisFatuus; }
namespace UnityEngine::Rendering::Universal { class ColorAdjustments; }
namespace UnityEngine::Rendering::Universal { class Distortion; }
namespace UnityEngine::Rendering::Universal { class FXColorCorrection; }
namespace UnityEngine::Rendering::Universal { class FXFog; }
namespace UnityEngine::Rendering::Universal { class MKGlow; }
namespace UnityEngine::Rendering::Universal { class MonsterIgnisFatuus; }
namespace UnityEngine::Rendering::Universal { class NapBloom; }
namespace UnityEngine::Rendering::Universal { class ScreenEffects; }
namespace UnityEngine::Rendering::Universal { class UniversalRenderPipelineAsset; }
namespace UnityEngine::Rendering::Universal { class VREffects; }

#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERCONTEXT_CURRENTFRAMERENDERCONFIGS_INITIALIZECONFIGS_OFFSET UNITYSDK_OFFSET(0x1C4152E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERCONTEXT_CURRENTFRAMERENDERCONFIGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4155C0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int NapRenderContext_CurrentFrameRenderConfigs_TypeDefinitionIndex = 27045;

	class NapRenderContext_CurrentFrameRenderConfigs : public ::System::Object
	{
	public:
		::UnityEngine::Rendering::Universal::Distortion* distortion; // 0x10
		::UnityEngine::Rendering::Universal::MonsterIgnisFatuus* monsterIgnisFatuus; // 0x18
		::UnityEngine::Rendering::Universal::FXFog* fxFog; // 0x20
		::WeatherConfig* weatherConfig; // 0x28
		::UnityEngine::Rendering::Universal::VREffects* vrEffects; // 0x30
		::UnityEngine::Rendering::Universal::AmplifyOcclusion* amplifyOcclusion; // 0x38
		::UnityEngine::Rendering::Universal::NapBloom* napBloom; // 0x40
		::UnityEngine::Rendering::Universal::CharacterIgnisFatuus* characterIgnisFatuus; // 0x48
		::UnityEngine::Rendering::Universal::ScreenEffects* screenEffects; // 0x50
		::UnityEngine::Rendering::Universal::ColorAdjustments* colorAdjustments; // 0x58
		::UnityEngine::Rendering::Universal::MKGlow* mkGlow; // 0x60
		::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* globalSettings; // 0x68
		::UnityEngine::Rendering::Universal::FXColorCorrection* fxColorCorrection; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERCONTEXT_CURRENTFRAMERENDERCONFIGS__CTOR_OFFSET))(this);
		}

		::System::Void InitializeConfigs(::WeatherConfig* weatherConfigData, ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* globalConfig)
		{
			return ((::System::Void(*)(::PVOID, ::WeatherConfig*, ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERCONTEXT_CURRENTFRAMERENDERCONFIGS_INITIALIZECONFIGS_OFFSET))(this, weatherConfigData, globalConfig);
		}
	};
}
