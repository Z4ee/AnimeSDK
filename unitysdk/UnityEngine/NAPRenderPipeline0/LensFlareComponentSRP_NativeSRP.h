#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/CachedLightData.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Light; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::NAPRenderPipeline0 { class LensFlareDataSRP_NativeSRP; }

#define UNITYENGINE_NAPRENDERPIPELINE0_LENSFLARECOMPONENTSRP_NATIVESRP_AWAKE_OFFSET UNITYSDK_OFFSET(0x1FC1B5A0)
#define UNITYENGINE_NAPRENDERPIPELINE0_LENSFLARECOMPONENTSRP_NATIVESRP_GET_LENSFLAREDATA_OFFSET UNITYSDK_OFFSET(0x1FC1B2F0)
#define UNITYENGINE_NAPRENDERPIPELINE0_LENSFLARECOMPONENTSRP_NATIVESRP_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1FC1B450)
#define UNITYENGINE_NAPRENDERPIPELINE0_LENSFLARECOMPONENTSRP_NATIVESRP_SET_LENSFLAREDATA_OFFSET UNITYSDK_OFFSET(0x1FC1B300)
#define UNITYENGINE_NAPRENDERPIPELINE0_LENSFLARECOMPONENTSRP_NATIVESRP__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC1B8F0)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int LensFlareComponentSRP_NativeSRP_TypeDefinitionIndex = 18895;

	class LensFlareComponentSRP_NativeSRP : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::NAPRenderPipeline0::LensFlareDataSRP_NativeSRP* m_LensFlareData; // 0x18
		::System::Single intensity; // 0x20
		::System::Single maxAttenuationDistance; // 0x24
		::System::Single maxAttenuationScale; // 0x28
		::UnityEngine::AnimationCurve* distanceAttenuationCurve; // 0x30
		::UnityEngine::AnimationCurve* scaleByDistanceCurve; // 0x38
		::System::Boolean attenuationByLightShape; // 0x40
		::UnityEngine::AnimationCurve* radialScreenAttenuationCurve; // 0x48
		::System::Boolean useOcclusion; // 0x50
		::System::Single occlusionRadius; // 0x54
		::System::UInt32 sampleCount; // 0x58
		::System::Single occlusionOffset; // 0x5C
		::System::Single scale; // 0x60
		::System::Boolean allowOffScreen; // 0x64
		::System::Single outOfScreenFadeLength; // 0x68
		::System::Single outOfScreenFadeDuration; // 0x6C
		::UnityEngine::Vector2 screenSpaceFocus; // 0x70
		::System::Boolean useWorldSpaceFocus; // 0x78
		::UnityEngine::Transform* worldSpaceFocus; // 0x80
		::UnityEngine::Light* lightComponent; // 0x88
		::UnityEngine::NAPRenderPipeline0::CachedLightData cachedLightData; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_LENSFLARECOMPONENTSRP_NATIVESRP__CTOR_OFFSET))(this);
		}

		::UnityEngine::NAPRenderPipeline0::LensFlareDataSRP_NativeSRP* get_lensFlareData()
		{
			return ((::UnityEngine::NAPRenderPipeline0::LensFlareDataSRP_NativeSRP*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_LENSFLARECOMPONENTSRP_NATIVESRP_GET_LENSFLAREDATA_OFFSET))(this);
		}

		::System::Void set_lensFlareData(::UnityEngine::NAPRenderPipeline0::LensFlareDataSRP_NativeSRP* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::LensFlareDataSRP_NativeSRP*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_LENSFLARECOMPONENTSRP_NATIVESRP_SET_LENSFLAREDATA_OFFSET))(this, value);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_LENSFLARECOMPONENTSRP_NATIVESRP_AWAKE_OFFSET))(this);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_LENSFLARECOMPONENTSRP_NATIVESRP_ONVALIDATE_OFFSET))(this);
		}
	};
}
