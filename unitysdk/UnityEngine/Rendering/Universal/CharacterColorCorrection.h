#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/CharacterColorCorrection_NativeSRP.h"

namespace UnityEngine::NAPRenderPipeline0 { class BoolParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class ClampedFloatParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class ColorParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class FloatParameter; }

#define UNITYENGINE_RENDERING_UNIVERSAL_CHARACTERCOLORCORRECTION_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1CC7DAC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CHARACTERCOLORCORRECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC7E1E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CHARACTERCOLORCORRECTION__ONENABLE_G__COPYVALUEIFSKINVALUEISDEFAULT_8_0_OFFSET UNITYSDK_OFFSET(0x1CC7E100)
#define UNITYENGINE_RENDERING_UNIVERSAL_CHARACTERCOLORCORRECTION___BASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1CC7E450)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int CharacterColorCorrection_TypeDefinitionIndex = 26828;

	class CharacterColorCorrection : public ::UnityEngine::NAPRenderPipeline0::CharacterColorCorrection_NativeSRP
	{
	public:
		::UnityEngine::NAPRenderPipeline0::BoolParameter* weaponUseCustomLightProperty; // 0x2A0
		::UnityEngine::NAPRenderPipeline0::FloatParameter* rimGlowIntensityForChara; // 0x2A8
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* rimGlowWidthForCharacter; // 0x2B0
		::UnityEngine::NAPRenderPipeline0::ColorParameter* rimGlowColorForCharacter; // 0x2B8
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* rimGlowStyleForCharacter01; // 0x2C0
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* rimGlowStyleForCharacter02; // 0x2C8
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* rimGlowStyleForCharacter03; // 0x2D0
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* rimGlowStyleForCharacter04; // 0x2D8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CHARACTERCOLORCORRECTION__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CHARACTERCOLORCORRECTION_ONENABLE_OFFSET))(this);
		}

		static ::System::Void _OnEnable_g__CopyValueIfSkinValueIsDefault_8_0(::UnityEngine::NAPRenderPipeline0::ColorParameter* skin, ::UnityEngine::NAPRenderPipeline0::ColorParameter* other)
		{
			return ((::System::Void(*)(::UnityEngine::NAPRenderPipeline0::ColorParameter*, ::UnityEngine::NAPRenderPipeline0::ColorParameter*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CHARACTERCOLORCORRECTION__ONENABLE_G__COPYVALUEIFSKINVALUEISDEFAULT_8_0_OFFSET))(skin, other);
		}

		::System::Void __base_OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CHARACTERCOLORCORRECTION___BASE_ONENABLE_OFFSET))(this);
		}
	};
}
