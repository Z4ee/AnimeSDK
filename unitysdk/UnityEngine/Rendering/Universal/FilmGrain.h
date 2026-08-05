#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/VolumeComponent.h"

namespace UnityEngine::NAPRenderPipeline0 { class ClampedFloatParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class NoInterpTextureParameter; }
namespace UnityEngine::Rendering::Universal { class FilmGrainLookupParameter; }

#define UNITYENGINE_RENDERING_UNIVERSAL_FILMGRAIN_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1C5B1F80)
#define UNITYENGINE_RENDERING_UNIVERSAL_FILMGRAIN_ISTILECOMPATIBLE_OFFSET UNITYSDK_OFFSET(0x1C5B2120)
#define UNITYENGINE_RENDERING_UNIVERSAL_FILMGRAIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5B2160)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int FilmGrain_TypeDefinitionIndex = 27280;

	class FilmGrain : public ::UnityEngine::NAPRenderPipeline0::VolumeComponent
	{
	public:
		::UnityEngine::Rendering::Universal::FilmGrainLookupParameter* type; // 0x38
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* intensity; // 0x40
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* response; // 0x48
		::UnityEngine::NAPRenderPipeline0::NoInterpTextureParameter* texture; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FILMGRAIN__CTOR_OFFSET))(this);
		}

		::System::Boolean IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FILMGRAIN_ISACTIVE_OFFSET))(this);
		}

		::System::Boolean IsTileCompatible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FILMGRAIN_ISTILECOMPATIBLE_OFFSET))(this);
		}
	};
}
