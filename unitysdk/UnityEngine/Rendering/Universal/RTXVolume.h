#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RTX_NativeSRP.h"

namespace UnityEngine::NAPRenderPipeline0 { class BoolParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class FloatParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class IntParameter; }

#define UNITYENGINE_RENDERING_UNIVERSAL_RTXVOLUME__CTOR_OFFSET UNITYSDK_OFFSET(0x190CEB70)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int RTXVolume_TypeDefinitionIndex = 30152;

	class RTXVolume : public ::UnityEngine::NAPRenderPipeline0::RTX_NativeSRP
	{
	public:
		::UnityEngine::NAPRenderPipeline0::BoolParameter* enableRTXSubConfigs1; // 0xC0
		::UnityEngine::NAPRenderPipeline0::BoolParameter* areaLightEnabled; // 0xC8
		::UnityEngine::NAPRenderPipeline0::IntParameter* pvSubstepNum; // 0xD0
		::UnityEngine::NAPRenderPipeline0::IntParameter* qualityPreset; // 0xD8
		::UnityEngine::NAPRenderPipeline0::FloatParameter* rayBudget; // 0xE0
		::UnityEngine::NAPRenderPipeline0::FloatParameter* resolutionScale; // 0xE8
		::UnityEngine::NAPRenderPipeline0::FloatParameter* responseSpeed; // 0xF0
		::UnityEngine::NAPRenderPipeline0::FloatParameter* hueExcludeMin; // 0xF8
		::UnityEngine::NAPRenderPipeline0::FloatParameter* hueExcludeMax; // 0x100
		::UnityEngine::NAPRenderPipeline0::FloatParameter* hueExcludeFade; // 0x108
		::UnityEngine::NAPRenderPipeline0::FloatParameter* hitHueExcludeMin; // 0x110
		::UnityEngine::NAPRenderPipeline0::FloatParameter* hitHueExcludeMax; // 0x118
		::UnityEngine::NAPRenderPipeline0::FloatParameter* hitHueExcludeFade; // 0x120
		::UnityEngine::NAPRenderPipeline0::FloatParameter* colorBleedChromaBoost; // 0x128
		::UnityEngine::NAPRenderPipeline0::FloatParameter* colorBleedHueSimThreshold; // 0x130
		::UnityEngine::NAPRenderPipeline0::FloatParameter* colorBleedSatSimThreshold; // 0x138
		::UnityEngine::NAPRenderPipeline0::FloatParameter* colorBleedValSimThreshold; // 0x140
		::UnityEngine::NAPRenderPipeline0::FloatParameter* dirBiasStrength; // 0x148
		::UnityEngine::NAPRenderPipeline0::FloatParameter* bandBiasPower; // 0x150
		::UnityEngine::NAPRenderPipeline0::FloatParameter* upSuppressStrength; // 0x158
		::UnityEngine::NAPRenderPipeline0::BoolParameter* inverseBentBiasEnabled; // 0x160
		::UnityEngine::NAPRenderPipeline0::FloatParameter* inverseBentBiasStrength; // 0x168
		::UnityEngine::NAPRenderPipeline0::BoolParameter* screenSteerEnabled; // 0x170
		::UnityEngine::NAPRenderPipeline0::FloatParameter* screenSteerStrength; // 0x178
		::UnityEngine::NAPRenderPipeline0::BoolParameter* distWeightEnabled; // 0x180
		::UnityEngine::NAPRenderPipeline0::FloatParameter* distWeightExp; // 0x188
		::UnityEngine::NAPRenderPipeline0::FloatParameter* restirSatWeight; // 0x190
		::UnityEngine::NAPRenderPipeline0::FloatParameter* historySatWeight; // 0x198
		::UnityEngine::NAPRenderPipeline0::FloatParameter* cacheSatInjectScale; // 0x1A0
		::UnityEngine::NAPRenderPipeline0::FloatParameter* thresholdRelax; // 0x1A8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RTXVOLUME__CTOR_OFFSET))(this);
		}
	};
}
