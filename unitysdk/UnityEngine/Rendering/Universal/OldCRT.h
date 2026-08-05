#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/VolumeComponent.h"

namespace UnityEngine::NAPRenderPipeline0 { class ClampedFloatParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class TextureParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class Vector2Parameter; }

#define UNITYENGINE_RENDERING_UNIVERSAL_OLDCRT_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1BC71C70)
#define UNITYENGINE_RENDERING_UNIVERSAL_OLDCRT_ISTILECOMPATIBLE_OFFSET UNITYSDK_OFFSET(0x1BC71CF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_OLDCRT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC71D30)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int OldCRT_TypeDefinitionIndex = 27385;

	class OldCRT : public ::UnityEngine::NAPRenderPipeline0::VolumeComponent
	{
	public:
		::UnityEngine::NAPRenderPipeline0::TextureParameter* pattern; // 0x38
		::UnityEngine::NAPRenderPipeline0::Vector2Parameter* tiling; // 0x40
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* scanlineBrightness; // 0x48
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* fade; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_OLDCRT__CTOR_OFFSET))(this);
		}

		::System::Boolean IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_OLDCRT_ISACTIVE_OFFSET))(this);
		}

		::System::Boolean IsTileCompatible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_OLDCRT_ISTILECOMPATIBLE_OFFSET))(this);
		}
	};
}
