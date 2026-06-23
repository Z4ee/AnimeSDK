#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ColorAdjustments_NativeSRP.h"

namespace UnityEngine { class Texture2D; }
namespace UnityEngine::NAPRenderPipeline0 { class BoolParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class FloatParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class TextureParameter; }

#define UNITYENGINE_RENDERING_UNIVERSAL_COLORADJUSTMENTS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C439900)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ColorAdjustments_TypeDefinitionIndex = 26329;

	class ColorAdjustments : public ::UnityEngine::NAPRenderPipeline0::ColorAdjustments_NativeSRP
	{
	public:
		static ::UnityEngine::Texture2D** StaticGet_FXLut()
		{
			return (::UnityEngine::Texture2D**)Il2CppClass::FromTypeDefinitionIndex(ColorAdjustments_TypeDefinitionIndex)->GetStaticField(0x4F3C0);
		}
		::UnityEngine::NAPRenderPipeline0::FloatParameter* sceneExposure; // 0x88
		::UnityEngine::NAPRenderPipeline0::FloatParameter* characterExposure; // 0x90
		::UnityEngine::NAPRenderPipeline0::FloatParameter* skyboxExposure; // 0x98
		::UnityEngine::NAPRenderPipeline0::TextureParameter* FXLutTexture; // 0xA0
		::UnityEngine::NAPRenderPipeline0::FloatParameter* FXExposure; // 0xA8
		::UnityEngine::NAPRenderPipeline0::BoolParameter* UseSceneDesaturateMask; // 0xB0
		::UnityEngine::NAPRenderPipeline0::BoolParameter* keepVolumetricFogBlitAfterFarTransparent; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_COLORADJUSTMENTS__CTOR_OFFSET))(this);
		}
	};
}
