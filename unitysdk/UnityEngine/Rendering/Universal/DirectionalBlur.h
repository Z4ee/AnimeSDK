#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/VolumeComponent.h"

namespace UnityEngine::NAPRenderPipeline0 { class ClampedFloatParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class ClampedIntParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class Vector2Parameter; }
namespace UnityEngine::Rendering::Universal { class DownSampleParameter; }
namespace UnityEngine::Rendering::Universal { class SampleDistanceModeParameter; }

#define UNITYENGINE_RENDERING_UNIVERSAL_DIRECTIONALBLUR_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1C145480)
#define UNITYENGINE_RENDERING_UNIVERSAL_DIRECTIONALBLUR_ISTILECOMPATIBLE_OFFSET UNITYSDK_OFFSET(0x1C145540)
#define UNITYENGINE_RENDERING_UNIVERSAL_DIRECTIONALBLUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1C145580)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int DirectionalBlur_TypeDefinitionIndex = 26909;

	class DirectionalBlur : public ::UnityEngine::NAPRenderPipeline0::VolumeComponent
	{
	public:
		::UnityEngine::Rendering::Universal::DownSampleParameter* downSample; // 0x38
		::UnityEngine::Rendering::Universal::SampleDistanceModeParameter* sampleDistanceMode; // 0x40
		::UnityEngine::NAPRenderPipeline0::ClampedIntParameter* sampleCount; // 0x48
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* radius; // 0x50
		::UnityEngine::NAPRenderPipeline0::Vector2Parameter* direction; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DIRECTIONALBLUR__CTOR_OFFSET))(this);
		}

		::System::Boolean IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DIRECTIONALBLUR_ISACTIVE_OFFSET))(this);
		}

		::System::Boolean IsTileCompatible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DIRECTIONALBLUR_ISTILECOMPATIBLE_OFFSET))(this);
		}
	};
}
