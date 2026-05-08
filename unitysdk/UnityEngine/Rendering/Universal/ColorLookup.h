#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/VolumeComponent.h"

namespace UnityEngine::NAPRenderPipeline0 { class ClampedFloatParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class TextureParameter; }

#define UNITYENGINE_RENDERING_UNIVERSAL_COLORLOOKUP_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x19280D90)
#define UNITYENGINE_RENDERING_UNIVERSAL_COLORLOOKUP_ISTILECOMPATIBLE_OFFSET UNITYSDK_OFFSET(0x19280FA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_COLORLOOKUP_VALIDATELUT_OFFSET UNITYSDK_OFFSET(0x19280E30)
#define UNITYENGINE_RENDERING_UNIVERSAL_COLORLOOKUP__CTOR_OFFSET UNITYSDK_OFFSET(0x19280FE0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ColorLookup_TypeDefinitionIndex = 30113;

	class ColorLookup : public ::UnityEngine::NAPRenderPipeline0::VolumeComponent
	{
	public:
		::UnityEngine::NAPRenderPipeline0::TextureParameter* texture; // 0x38
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* contribution; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_COLORLOOKUP__CTOR_OFFSET))(this);
		}

		::System::Boolean IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_COLORLOOKUP_ISACTIVE_OFFSET))(this);
		}

		::System::Boolean IsTileCompatible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_COLORLOOKUP_ISTILECOMPATIBLE_OFFSET))(this);
		}

		::System::Boolean ValidateLUT()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_COLORLOOKUP_VALIDATELUT_OFFSET))(this);
		}
	};
}
