#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/VolumeComponent.h"

namespace UnityEngine::NAPRenderPipeline0 { class ClampedFloatParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class FloatParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class Vector2Parameter; }

#define UNITYENGINE_RENDERING_UNIVERSAL_LENSDISTORTION_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1C502470)
#define UNITYENGINE_RENDERING_UNIVERSAL_LENSDISTORTION_ISTILECOMPATIBLE_OFFSET UNITYSDK_OFFSET(0x1C514D40)
#define UNITYENGINE_RENDERING_UNIVERSAL_LENSDISTORTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C514D80)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int LensDistortion_TypeDefinitionIndex = 26850;

	class LensDistortion : public ::UnityEngine::NAPRenderPipeline0::VolumeComponent
	{
	public:
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* intensity; // 0x38
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* xMultiplier; // 0x40
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* yMultiplier; // 0x48
		::UnityEngine::NAPRenderPipeline0::Vector2Parameter* center; // 0x50
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* scale; // 0x58
		::UnityEngine::NAPRenderPipeline0::FloatParameter* depthClip; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LENSDISTORTION__CTOR_OFFSET))(this);
		}

		::System::Boolean IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LENSDISTORTION_ISACTIVE_OFFSET))(this);
		}

		::System::Boolean IsTileCompatible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LENSDISTORTION_ISTILECOMPATIBLE_OFFSET))(this);
		}
	};
}
