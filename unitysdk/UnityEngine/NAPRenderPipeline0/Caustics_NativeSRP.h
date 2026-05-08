#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/VolumeComponent.h"

namespace UnityEngine::NAPRenderPipeline0 { class BoolParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class ClampedFloatParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class ColorParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class FloatParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class InterpolatedVolumeData; }
namespace UnityEngine::NAPRenderPipeline0 { class TextureParameter; }

#define UNITYENGINE_NAPRENDERPIPELINE0_CAUSTICS_NATIVESRP_INTERPOLATEVOLUMEDATA_OFFSET UNITYSDK_OFFSET(0x1AAD6340)
#define UNITYENGINE_NAPRENDERPIPELINE0_CAUSTICS_NATIVESRP_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1AAD5EA0)
#define UNITYENGINE_NAPRENDERPIPELINE0_CAUSTICS_NATIVESRP_ISTILECOMPATIBLE_OFFSET UNITYSDK_OFFSET(0x1AAD5EC0)
#define UNITYENGINE_NAPRENDERPIPELINE0_CAUSTICS_NATIVESRP__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AAD6240)
#define UNITYENGINE_NAPRENDERPIPELINE0_CAUSTICS_NATIVESRP__CTOR_OFFSET UNITYSDK_OFFSET(0x1AAD5ED0)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int Caustics_NativeSRP_TypeDefinitionIndex = 6093;

	class Caustics_NativeSRP : public ::UnityEngine::NAPRenderPipeline0::VolumeComponent
	{
	public:
		::UnityEngine::NAPRenderPipeline0::BoolParameter* Use_Caustics; // 0x38
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* Brightness; // 0x40
		::UnityEngine::NAPRenderPipeline0::FloatParameter* Speed; // 0x48
		::UnityEngine::NAPRenderPipeline0::FloatParameter* Range; // 0x50
		::UnityEngine::NAPRenderPipeline0::FloatParameter* HeightOffset; // 0x58
		::UnityEngine::NAPRenderPipeline0::FloatParameter* MainLightScale; // 0x60
		::UnityEngine::NAPRenderPipeline0::FloatParameter* LocalLightScale; // 0x68
		::UnityEngine::NAPRenderPipeline0::FloatParameter* IndirectScale; // 0x70
		::UnityEngine::NAPRenderPipeline0::FloatParameter* Tilling; // 0x78
		::UnityEngine::NAPRenderPipeline0::ColorParameter* Tint; // 0x80
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* Strength; // 0x88
		::UnityEngine::NAPRenderPipeline0::TextureParameter* Tex; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_CAUSTICS_NATIVESRP__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_CAUSTICS_NATIVESRP__CCTOR_OFFSET))();
		}

		::System::Boolean IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_CAUSTICS_NATIVESRP_ISACTIVE_OFFSET))(this);
		}

		::System::Boolean IsTileCompatible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_CAUSTICS_NATIVESRP_ISTILECOMPATIBLE_OFFSET))(this);
		}

		static ::System::Void InterpolateVolumeData(::UnityEngine::NAPRenderPipeline0::InterpolatedVolumeData* cache, ::UnityEngine::NAPRenderPipeline0::VolumeComponent* defaultComp, ::Il2CppArray<::UnityEngine::NAPRenderPipeline0::VolumeComponent*>* comps, ::Il2CppArray<::System::Single>* weights, ::System::Int32 compCount)
		{
			return ((::System::Void(*)(::UnityEngine::NAPRenderPipeline0::InterpolatedVolumeData*, ::UnityEngine::NAPRenderPipeline0::VolumeComponent*, ::Il2CppArray<::UnityEngine::NAPRenderPipeline0::VolumeComponent*>*, ::Il2CppArray<::System::Single>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_CAUSTICS_NATIVESRP_INTERPOLATEVOLUMEDATA_OFFSET))(cache, defaultComp, comps, weights, compCount);
		}
	};
}
