#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/VolumeComponent.h"

namespace UnityEngine::NAPRenderPipeline0 { class BoolParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class ClampedFloatParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class InterpolatedVolumeData; }
namespace UnityEngine::NAPRenderPipeline0 { class TextureParameter; }

#define UNITYENGINE_NAPRENDERPIPELINE0_RTX_NATIVESRP_INTERPOLATEVOLUMEDATA_OFFSET UNITYSDK_OFFSET(0x1E31AD00)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTX_NATIVESRP_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1E31ABC0)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTX_NATIVESRP_ISTILECOMPATIBLE_OFFSET UNITYSDK_OFFSET(0x1E31ABF0)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTX_NATIVESRP__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E31AC00)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTX_NATIVESRP__CTOR_OFFSET UNITYSDK_OFFSET(0x1E31A700)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int RTX_NativeSRP_TypeDefinitionIndex = 6102;

	class RTX_NativeSRP : public ::UnityEngine::NAPRenderPipeline0::VolumeComponent
	{
	public:
		::UnityEngine::NAPRenderPipeline0::BoolParameter* enabled; // 0x38
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* boost; // 0x40
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* specularBoost; // 0x48
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* skyDiffuseScale; // 0x50
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* skySpecularScale; // 0x58
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* splitSpecThreshold; // 0x60
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* microAOStrength; // 0x68
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* multiBounceScale; // 0x70
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* multiBounceFarDistScale; // 0x78
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* multiBounceIndoorScale; // 0x80
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* multiBounceScaleMaxDist; // 0x88
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* lightmapBoost; // 0x90
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* aoLength; // 0x98
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* aoIntensity; // 0xA0
		::UnityEngine::NAPRenderPipeline0::TextureParameter* lut; // 0xA8
		::UnityEngine::NAPRenderPipeline0::TextureParameter* roughnessLut; // 0xB0
		::UnityEngine::NAPRenderPipeline0::TextureParameter* multiBounceAlbedoLut; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTX_NATIVESRP__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTX_NATIVESRP__CCTOR_OFFSET))();
		}

		::System::Boolean IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTX_NATIVESRP_ISACTIVE_OFFSET))(this);
		}

		::System::Boolean IsTileCompatible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTX_NATIVESRP_ISTILECOMPATIBLE_OFFSET))(this);
		}

		static ::System::Void InterpolateVolumeData(::UnityEngine::NAPRenderPipeline0::InterpolatedVolumeData* cache, ::UnityEngine::NAPRenderPipeline0::VolumeComponent* defaultComp, ::Il2CppArray<::UnityEngine::NAPRenderPipeline0::VolumeComponent*>* comps, ::Il2CppArray<::System::Single>* weights, ::System::Int32 compCount)
		{
			return ((::System::Void(*)(::UnityEngine::NAPRenderPipeline0::InterpolatedVolumeData*, ::UnityEngine::NAPRenderPipeline0::VolumeComponent*, ::Il2CppArray<::UnityEngine::NAPRenderPipeline0::VolumeComponent*>*, ::Il2CppArray<::System::Single>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTX_NATIVESRP_INTERPOLATEVOLUMEDATA_OFFSET))(cache, defaultComp, comps, weights, compCount);
		}
	};
}
