#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/VolumeComponent.h"

namespace UnityEngine::NAPRenderPipeline0 { class InterpolatedVolumeData; }
namespace UnityEngine::NAPRenderPipeline0 { class TextureCurve; }
namespace UnityEngine::NAPRenderPipeline0 { class TextureCurveParameter; }

#define UNITYENGINE_NAPRENDERPIPELINE0_COLORCURVES_NATIVESRP_INTERPOLATEVOLUMEDATA_OFFSET UNITYSDK_OFFSET(0x1D5848D0)
#define UNITYENGINE_NAPRENDERPIPELINE0_COLORCURVES_NATIVESRP_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1D583A00)
#define UNITYENGINE_NAPRENDERPIPELINE0_COLORCURVES_NATIVESRP_ISTILECOMPATIBLE_OFFSET UNITYSDK_OFFSET(0x1D583A10)
#define UNITYENGINE_NAPRENDERPIPELINE0_COLORCURVES_NATIVESRP__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D5847B0)
#define UNITYENGINE_NAPRENDERPIPELINE0_COLORCURVES_NATIVESRP__CTOR_OFFSET UNITYSDK_OFFSET(0x1D583A20)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int ColorCurves_NativeSRP_TypeDefinitionIndex = 6082;

	class ColorCurves_NativeSRP : public ::UnityEngine::NAPRenderPipeline0::VolumeComponent
	{
	public:
		static ::Il2CppArray<::UnityEngine::NAPRenderPipeline0::TextureCurve*>** StaticGet_tempCurves()
		{
			return (::Il2CppArray<::UnityEngine::NAPRenderPipeline0::TextureCurve*>**)Il2CppClass::FromTypeDefinitionIndex(ColorCurves_NativeSRP_TypeDefinitionIndex)->GetStaticField(0x5540);
		}
		::UnityEngine::NAPRenderPipeline0::TextureCurveParameter* master; // 0x38
		::UnityEngine::NAPRenderPipeline0::TextureCurveParameter* red; // 0x40
		::UnityEngine::NAPRenderPipeline0::TextureCurveParameter* green; // 0x48
		::UnityEngine::NAPRenderPipeline0::TextureCurveParameter* blue; // 0x50
		::UnityEngine::NAPRenderPipeline0::TextureCurveParameter* hueVsHue; // 0x58
		::UnityEngine::NAPRenderPipeline0::TextureCurveParameter* hueVsSat; // 0x60
		::UnityEngine::NAPRenderPipeline0::TextureCurveParameter* satVsSat; // 0x68
		::UnityEngine::NAPRenderPipeline0::TextureCurveParameter* lumVsSat; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_COLORCURVES_NATIVESRP__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_COLORCURVES_NATIVESRP__CCTOR_OFFSET))();
		}

		::System::Boolean IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_COLORCURVES_NATIVESRP_ISACTIVE_OFFSET))(this);
		}

		::System::Boolean IsTileCompatible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_COLORCURVES_NATIVESRP_ISTILECOMPATIBLE_OFFSET))(this);
		}

		static ::System::Void InterpolateVolumeData(::UnityEngine::NAPRenderPipeline0::InterpolatedVolumeData* cache, ::UnityEngine::NAPRenderPipeline0::VolumeComponent* defaultComp, ::Il2CppArray<::UnityEngine::NAPRenderPipeline0::VolumeComponent*>* comps, ::Il2CppArray<::System::Single>* weights, ::System::Int32 compCount)
		{
			return ((::System::Void(*)(::UnityEngine::NAPRenderPipeline0::InterpolatedVolumeData*, ::UnityEngine::NAPRenderPipeline0::VolumeComponent*, ::Il2CppArray<::UnityEngine::NAPRenderPipeline0::VolumeComponent*>*, ::Il2CppArray<::System::Single>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_COLORCURVES_NATIVESRP_INTERPOLATEVOLUMEDATA_OFFSET))(cache, defaultComp, comps, weights, compCount);
		}
	};
}
