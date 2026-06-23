#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Shader; }
namespace UnityEngine::NAPRenderPipeline0 { class BaseCachedConstantBuffer; }
namespace UnityEngine::NAPRenderPipeline0 { class MaterialWrapper; }
namespace UnityEngine::Rendering::Universal { class PostProcessData; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_MATERIALLIBRARY_CLEANUP_OFFSET UNITYSDK_OFFSET(0x1C43F9F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_MATERIALLIBRARY_LOAD_OFFSET UNITYSDK_OFFSET(0x1C43F5D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_MATERIALLIBRARY__CTOR_OFFSET UNITYSDK_OFFSET(0x1C43DDD0)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int PostProcessPass_MaterialLibrary_TypeDefinitionIndex = 26703;

	class PostProcessPass_MaterialLibrary : public ::System::Object
	{
	public:
		::Il2CppArray<::UnityEngine::NAPRenderPipeline0::MaterialWrapper*>* MaterialsGaussV; // 0x10
		::UnityEngine::NAPRenderPipeline0::MaterialWrapper* bloom; // 0x18
		::UnityEngine::NAPRenderPipeline0::MaterialWrapper* FSR; // 0x20
		::UnityEngine::NAPRenderPipeline0::MaterialWrapper* RadialBlur; // 0x28
		::UnityEngine::NAPRenderPipeline0::MaterialWrapper* cameraMotionBlur; // 0x30
		::UnityEngine::NAPRenderPipeline0::MaterialWrapper* PostOutline; // 0x38
		::UnityEngine::NAPRenderPipeline0::MaterialWrapper* CharacterGhost; // 0x40
		::System::Collections::Generic::List_1<::UnityEngine::NAPRenderPipeline0::MaterialWrapper*>* m_CachedMaterialList; // 0x48
		::UnityEngine::NAPRenderPipeline0::MaterialWrapper* finalPass; // 0x50
		::UnityEngine::NAPRenderPipeline0::MaterialWrapper* VREffects; // 0x58
		::UnityEngine::NAPRenderPipeline0::MaterialWrapper* GSRMat; // 0x60
		::UnityEngine::NAPRenderPipeline0::MaterialWrapper* ComicDot; // 0x68
		::UnityEngine::NAPRenderPipeline0::MaterialWrapper* NapBloom; // 0x70
		::UnityEngine::NAPRenderPipeline0::MaterialWrapper* NapBloomGauss; // 0x78
		::UnityEngine::NAPRenderPipeline0::MaterialWrapper* temporalAntialiasing; // 0x80
		::UnityEngine::NAPRenderPipeline0::MaterialWrapper* uber; // 0x88
		::UnityEngine::NAPRenderPipeline0::MaterialWrapper* PartialBlur; // 0x90
		::UnityEngine::NAPRenderPipeline0::MaterialWrapper* UnsharpMask; // 0x98
		::UnityEngine::NAPRenderPipeline0::MaterialWrapper* subpixelMorphologicalAntialiasing; // 0xA0
		::Il2CppArray<::UnityEngine::NAPRenderPipeline0::MaterialWrapper*>* MaterialsGaussH; // 0xA8
		::UnityEngine::NAPRenderPipeline0::MaterialWrapper* bokehDepthOfField; // 0xB0
		::UnityEngine::NAPRenderPipeline0::MaterialWrapper* gaussianDepthOfField; // 0xB8
		::UnityEngine::NAPRenderPipeline0::MaterialWrapper* paniniProjection; // 0xC0
		::UnityEngine::NAPRenderPipeline0::MaterialWrapper* DistortionBlit; // 0xC8
		::UnityEngine::NAPRenderPipeline0::MaterialWrapper* Pixelation; // 0xD0
		::UnityEngine::NAPRenderPipeline0::MaterialWrapper* stopNaN; // 0xD8
		::System::Collections::Generic::List_1<::UnityEngine::NAPRenderPipeline0::BaseCachedConstantBuffer*>* m_CachedConstsantBuffers; // 0xE0

		::System::Void _ctor(::UnityEngine::Rendering::Universal::PostProcessData* data)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::PostProcessData*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_MATERIALLIBRARY__CTOR_OFFSET))(this, data);
		}

		::UnityEngine::NAPRenderPipeline0::MaterialWrapper* Load(::UnityEngine::Shader* shader, ::System::String* name, ::Il2CppArray<::UnityEngine::NAPRenderPipeline0::BaseCachedConstantBuffer*>* cbs)
		{
			return ((::UnityEngine::NAPRenderPipeline0::MaterialWrapper*(*)(::PVOID, ::UnityEngine::Shader*, ::System::String*, ::Il2CppArray<::UnityEngine::NAPRenderPipeline0::BaseCachedConstantBuffer*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_MATERIALLIBRARY_LOAD_OFFSET))(this, shader, name, cbs);
		}

		::System::Void Cleanup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_MATERIALLIBRARY_CLEANUP_OFFSET))(this);
		}
	};
}
