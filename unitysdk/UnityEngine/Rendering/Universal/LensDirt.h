#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/LensDirt_NativeSRP.h"

namespace UnityEngine::NAPRenderPipeline0 { class FloatParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class TextureParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class Vector4Parameter; }

#define UNITYENGINE_RENDERING_UNIVERSAL_LENSDIRT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D30E7C0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int LensDirt_TypeDefinitionIndex = 27242;

	class LensDirt : public ::UnityEngine::NAPRenderPipeline0::LensDirt_NativeSRP
	{
	public:
		::UnityEngine::NAPRenderPipeline0::TextureParameter* dirtTexture; // 0x48
		::UnityEngine::NAPRenderPipeline0::Vector4Parameter* dirtTextureScaleOffset; // 0x50
		::UnityEngine::NAPRenderPipeline0::TextureParameter* dirtTextureOverlay; // 0x58
		::UnityEngine::NAPRenderPipeline0::Vector4Parameter* dirtTextureOverlayScaleOffset; // 0x60
		::UnityEngine::NAPRenderPipeline0::FloatParameter* dirtFlickFrequency; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LENSDIRT__CTOR_OFFSET))(this);
		}
	};
}
