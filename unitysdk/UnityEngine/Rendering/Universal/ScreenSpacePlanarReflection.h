#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ScreenSpacePlanarReflection_NativeSRP.h"

namespace UnityEngine::NAPRenderPipeline0 { class BoolParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class ClampedFloatParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class LayerMaskParameter; }
namespace UnityEngine::Rendering::Universal { class ScreenSpacePlanarReflection_RenderLayerMaskParameter; }

#define UNITYENGINE_RENDERING_UNIVERSAL_SCREENSPACEPLANARREFLECTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x190CF4F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCREENSPACEPLANARREFLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x190CF250)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ScreenSpacePlanarReflection_TypeDefinitionIndex = 30167;

	class ScreenSpacePlanarReflection : public ::UnityEngine::NAPRenderPipeline0::ScreenSpacePlanarReflection_NativeSRP
	{
	public:
		static ::UnityEngine::LayerMask* StaticGet_s_DisablePlanarReflectionMask()
		{
			return (::UnityEngine::LayerMask*)Il2CppClass::FromTypeDefinitionIndex(ScreenSpacePlanarReflection_TypeDefinitionIndex)->GetStaticField(0x67A0);
		}
		::UnityEngine::NAPRenderPipeline0::BoolParameter* mirrorReflectionOverride; // 0x58
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* planarReflectionBlurAmount; // 0x60
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* planarReflectionLodSteps; // 0x68
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* planarReflectionMinSmoothness; // 0x70
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* planarReflectionSmoothnessFadeStart; // 0x78
		::UnityEngine::NAPRenderPipeline0::LayerMaskParameter* planarReflectionCameraDisabledLayerMask; // 0x80
		::UnityEngine::NAPRenderPipeline0::LayerMaskParameter* planarReflectionCameraDisabledLayerMaskForSpecialSceneAndDevice; // 0x88
		::UnityEngine::Rendering::Universal::ScreenSpacePlanarReflection_RenderLayerMaskParameter* planarReflectionCameraDisabledRenderLayerMask; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCREENSPACEPLANARREFLECTION__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCREENSPACEPLANARREFLECTION__CCTOR_OFFSET))();
		}
	};
}
