#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/VolumeComponent.h"

namespace UnityEngine::NAPRenderPipeline0 { class BoolParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class ClampedFloatParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class ColorParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class Vector2Parameter; }

#define UNITYENGINE_RENDERING_UNIVERSAL_VIGNETTE_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1C457650)
#define UNITYENGINE_RENDERING_UNIVERSAL_VIGNETTE_ISTILECOMPATIBLE_OFFSET UNITYSDK_OFFSET(0x1C4576B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VIGNETTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4576F0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int Vignette_TypeDefinitionIndex = 27369;

	class Vignette : public ::UnityEngine::NAPRenderPipeline0::VolumeComponent
	{
	public:
		::UnityEngine::NAPRenderPipeline0::ColorParameter* color; // 0x38
		::UnityEngine::NAPRenderPipeline0::Vector2Parameter* center; // 0x40
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* intensity; // 0x48
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* smoothness; // 0x50
		::UnityEngine::NAPRenderPipeline0::BoolParameter* rounded; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VIGNETTE__CTOR_OFFSET))(this);
		}

		::System::Boolean IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VIGNETTE_ISACTIVE_OFFSET))(this);
		}

		::System::Boolean IsTileCompatible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VIGNETTE_ISTILECOMPATIBLE_OFFSET))(this);
		}
	};
}
