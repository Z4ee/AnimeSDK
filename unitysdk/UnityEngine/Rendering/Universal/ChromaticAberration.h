#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/VolumeComponent.h"

namespace UnityEngine::NAPRenderPipeline0 { class ClampedFloatParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class ColorParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class Vector2Parameter; }

#define UNITYENGINE_RENDERING_UNIVERSAL_CHROMATICABERRATION_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1D3D0D20)
#define UNITYENGINE_RENDERING_UNIVERSAL_CHROMATICABERRATION_ISTILECOMPATIBLE_OFFSET UNITYSDK_OFFSET(0x1D3D0D80)
#define UNITYENGINE_RENDERING_UNIVERSAL_CHROMATICABERRATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3D0DC0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ChromaticAberration_TypeDefinitionIndex = 26680;

	class ChromaticAberration : public ::UnityEngine::NAPRenderPipeline0::VolumeComponent
	{
	public:
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* intensity; // 0x38
		::UnityEngine::NAPRenderPipeline0::Vector2Parameter* center; // 0x40
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* power; // 0x48
		::UnityEngine::NAPRenderPipeline0::ColorParameter* ColorR; // 0x50
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* PowerR; // 0x58
		::UnityEngine::NAPRenderPipeline0::ColorParameter* ColorG; // 0x60
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* PowerG; // 0x68
		::UnityEngine::NAPRenderPipeline0::ColorParameter* ColorB; // 0x70
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* PowerB; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CHROMATICABERRATION__CTOR_OFFSET))(this);
		}

		::System::Boolean IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CHROMATICABERRATION_ISACTIVE_OFFSET))(this);
		}

		::System::Boolean IsTileCompatible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CHROMATICABERRATION_ISTILECOMPATIBLE_OFFSET))(this);
		}
	};
}
