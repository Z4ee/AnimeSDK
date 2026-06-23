#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/LightShadows.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/NativeAdditionalLightDataFogParams.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/NativeAdditionalLightData_NativeSRP.h"
#include "unitysdk/UnityEngine/Rendering/Universal/AddLightMode.h"
#include "unitysdk/UnityEngine/Rendering/Universal/CGAvatarLightType.h"
#include "unitysdk/UnityEngine/Rendering/Universal/LightLodJobData.h"
#include "unitysdk/UnityEngine/Rendering/Universal/LightLodQuality.h"
#include "unitysdk/UnityEngine/Rendering/Universal/LightOptimizeConfig_LightGroundDiscardType.h"
#include "unitysdk/UnityEngine/Rendering/Universal/LightOptimizeConfig_LightOptimizeType.h"
#include "unitysdk/UnityEngine/Rendering/Universal/UniversalAdditionalLightData_LightLodConfigData.h"
#include "unitysdk/UnityEngine/Rendering/Universal/UniversalAdditionalLightData_LightUsage.h"
#include "unitysdk/UnityEngine/Rendering/VisibleLight.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class Light; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Rendering::Universal { class LightOcclusionMask; }
namespace UnityEngine::Rendering::Universal { class LightOptimizeConfig; }
namespace UnityEngine::Rendering::Universal { class MonoCGAvatarPart; }
namespace UnityEngine::Rendering::Universal { class RedirectObject; }
namespace UnityEngine::Rendering::Universal { class UniversalAdditionalLightDataExtensionV1_2; }

#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA_AWAKE_OFFSET UNITYSDK_OFFSET(0x1B1ABF70)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA_CLEAROPTIMIZABLELIGHT_OFFSET UNITYSDK_OFFSET(0x1B1AC8F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA_GETFOGPARAMS_OFFSET UNITYSDK_OFFSET(0x1B1AD5F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA_GETHASHFORLIGHT_OFFSET UNITYSDK_OFFSET(0x1B1AC750)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA_GETSPOTBOUNDINGSPHERERADIUSANDCENTER_OFFSET UNITYSDK_OFFSET(0x1B1AC1F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA_GET_ADDLIGHTMODE_OFFSET UNITYSDK_OFFSET(0x1B1AB980)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA_GET_ISDYNAMICLIGHT_OFFSET UNITYSDK_OFFSET(0x1B1AB960)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA_GET_ISHIZCULLINGVALID_OFFSET UNITYSDK_OFFSET(0x1B1ABE30)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA_GET_LIGHTC_OFFSET UNITYSDK_OFFSET(0x1B1ABA90)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA_GET_LIGHTRANGE_OFFSET UNITYSDK_OFFSET(0x1B1ABDC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA_GET_LODNEEDFORCEUPDATE_OFFSET UNITYSDK_OFFSET(0x1B1ADBF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA_GET_OLDSHADOWTYPE_OFFSET UNITYSDK_OFFSET(0x1B1ABD90)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA_GET_USAGE_OFFSET UNITYSDK_OFFSET(0x1B1ABDA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA_GET_USESLOWATTENUATION_OFFSET UNITYSDK_OFFSET(0x1B1ABDF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA_GET_USEZEROATTENUATION_OFFSET UNITYSDK_OFFSET(0x1B1ABE10)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA_GET_VOLUMETRICFOG_SHADOWINTENSITY_OFFSET UNITYSDK_OFFSET(0x1B1AB970)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA_INITIALIZEV1_2EXTENSION_OFFSET UNITYSDK_OFFSET(0x1B1AC180)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA_LODNEEDCOMMONUPDATE_OFFSET UNITYSDK_OFFSET(0x1B1ADB10)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA_LODNEEDFORCEUPDATE_OFFSET UNITYSDK_OFFSET(0x1B1ADB80)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1B1AB440)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1B1AAD10)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA_ONLIGHTWEIGHTACTIVE_OFFSET UNITYSDK_OFFSET(0x1B1AB8A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA_ONLIGHTWEIGHTDEACTIVE_OFFSET UNITYSDK_OFFSET(0x1B1AB900)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA_ONREALDISABLE_OFFSET UNITYSDK_OFFSET(0x1B1AB500)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA_ONREALENABLE_OFFSET UNITYSDK_OFFSET(0x1B1AADD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA_REGISTEROPTIMIZABLELIGHT_OFFSET UNITYSDK_OFFSET(0x1B1ACB90)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA_SETHALFLAMBERTANDLIGHTOCCLUDERVALUE_OFFSET UNITYSDK_OFFSET(0x1B1AC310)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA_SETLIGHTENABLED_OFFSET UNITYSDK_OFFSET(0x1B1ABD30)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA_SETLIGHTSHADOWSTRENGTH_OFFSET UNITYSDK_OFFSET(0x1B1ABC60)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA_SETLIGHTSHADOWTYPE_OFFSET UNITYSDK_OFFSET(0x1B1ABCD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA_SETLIGHTWITHQUALITYCONFIG_1_OFFSET UNITYSDK_OFFSET(0x1B1ADC90)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA_SETLIGHTWITHQUALITYCONFIG_OFFSET UNITYSDK_OFFSET(0x1B1ADC10)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA_SET_ADDLIGHTMODE_OFFSET UNITYSDK_OFFSET(0x1B1AB990)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA_SET_LODNEEDFORCEUPDATE_OFFSET UNITYSDK_OFFSET(0x1B1ADC00)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA_SET_USAGE_OFFSET UNITYSDK_OFFSET(0x1B1ABDB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA_SET_USESLOWATTENUATION_OFFSET UNITYSDK_OFFSET(0x1B1ABE00)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA_SET_USEZEROATTENUATION_OFFSET UNITYSDK_OFFSET(0x1B1ABE20)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA_START_OFFSET UNITYSDK_OFFSET(0x1B1ABE90)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA_UPDATEDYNAMICLIGHT_OFFSET UNITYSDK_OFFSET(0x1B1AD660)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B1AEAF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1AE900)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA___BASE_GETFOGPARAMS_OFFSET UNITYSDK_OFFSET(0x1B1AECC0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int UniversalAdditionalLightData_TypeDefinitionIndex = 26423;

	class UniversalAdditionalLightData : public ::UnityEngine::NAPRenderPipeline0::NativeAdditionalLightData_NativeSRP
	{
	public:
		static ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::LightOcclusionMask*>** StaticGet_s_OcclusionMaskList()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::LightOcclusionMask*>**)Il2CppClass::FromTypeDefinitionIndex(UniversalAdditionalLightData_TypeDefinitionIndex)->GetStaticField(0x20930);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int64, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::VisibleLight>*>** StaticGet_s_OptimizableLights()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int64, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::VisibleLight>*>**)Il2CppClass::FromTypeDefinitionIndex(UniversalAdditionalLightData_TypeDefinitionIndex)->GetStaticField(0x20938);
		}
		static ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*, ::System::Boolean>>** StaticGet_all()
		{
			return (::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*, ::System::Boolean>>**)Il2CppClass::FromTypeDefinitionIndex(UniversalAdditionalLightData_TypeDefinitionIndex)->GetStaticField(0x20940);
		}
		static ::System::Collections::Generic::Queue_1<::System::Collections::Generic::List_1<::UnityEngine::Rendering::VisibleLight>*>** StaticGet_s_CachedList()
		{
			return (::System::Collections::Generic::Queue_1<::System::Collections::Generic::List_1<::UnityEngine::Rendering::VisibleLight>*>**)Il2CppClass::FromTypeDefinitionIndex(UniversalAdditionalLightData_TypeDefinitionIndex)->GetStaticField(0x20948);
		}
		static ::System::Int32* StaticGet_toonLightCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UniversalAdditionalLightData_TypeDefinitionIndex)->GetStaticField(0x5450);
		}
		// static const ::System::Single diffuseFadeStartDistance; // 0x0
		// static const ::System::Single specularFadeStartDistance; // 0x0
		// static const ::System::Single specularFadeDistanceMultiplier; // 0x0
		// static const ::System::Single shadowFadeStartDistance; // 0x0
		// static const ::System::Single shadowFadeDistanceMultiplier; // 0x0
		// static const ::System::Boolean DebugShowBound; // 0x0
		// static const ::System::Int32 kMaxSplitCount = 0x8; // 0x0
		::System::Single fakeFogRange; // 0x188
		::System::Single fakeFogZOffset; // 0x18C
		::System::Single m_LightLodBiasMultiply; // 0x190
		::UnityEngine::Rendering::Universal::LightOptimizeConfig_LightGroundDiscardType lightGroundDiscardType; // 0x194
		::System::Single fakeFogIntensityMultiply; // 0x198
		::System::Single avatarShadowMultiplier; // 0x19C
		::System::Boolean syncLightColor; // 0x1A0
		::System::Boolean isDynamicLight; // 0x1A1
		::UnityEngine::Rendering::Universal::LightLodQuality qualityMask; // 0x1A4
		::UnityEngine::Rendering::Universal::LightOptimizeConfig_LightOptimizeType lightOptimizeType; // 0x1A8
		::System::Boolean isRTXOnlyLight; // 0x1AC
		::Il2CppArray<::UnityEngine::Rendering::Universal::LightOptimizeConfig*>* qualityConfig; // 0x1B0
		::System::Boolean qualityConfigInitialized; // 0x1B8
		::System::Boolean overrideMainLightSpecular; // 0x1B9
		::UnityEngine::Color mainLightSpecularColor; // 0x1BC
		::UnityEngine::Vector3 mainLightSpecularDirection; // 0x1CC
		::System::Boolean overrideGlobalVolumetricFogParams; // 0x1D8
		::System::Boolean volumetricFog_UsePhysicalBasedCalculation; // 0x1D9
		::System::Int32 volumetricFog_MaxStepCount; // 0x1DC
		::System::Single volumetricFog_PunctualLightMultiplier; // 0x1E0
		::System::Single volumetricFog_PunctualLightFadePower; // 0x1E4
		::System::Single volumetricFog_IntensityTowardLight; // 0x1E8
		::System::Single volumetricFog_DustIntensity; // 0x1EC
		::System::Single volumetricFog_Step; // 0x1F0
		::System::Single volumetricFog_MaxIntensity; // 0x1F4
		::System::Single volumetricFog_Jittering; // 0x1F8
		::System::Single volumetricFog_Dithering; // 0x1FC
		::System::Boolean cgUnlockDirLightCompletely; // 0x200
		::UnityEngine::Rendering::Universal::CGAvatarLightType avatarLightType; // 0x204
		::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::RedirectObject*>* avatars; // 0x208
		::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::MonoCGAvatarPart*>* avatarRenderers; // 0x210
		::System::Single avatarSpecularIntensity; // 0x218
		::System::Boolean useCustomGradient; // 0x21C
		::UnityEngine::Color postShallowTint; // 0x220
		::UnityEngine::Color postShallowFadeTint; // 0x230
		::UnityEngine::Color postShadowTint; // 0x240
		::UnityEngine::Color postFrontTint; // 0x250
		::UnityEngine::Color postSssTint; // 0x260
		::UnityEngine::Color postShadowFadeTint; // 0x270
		::System::Boolean outlineIntensityEnabled; // 0x280
		::System::Single lightOccluderMaskAttenuation; // 0x284
		::System::Single halfLambertPow; // 0x288
		::System::Boolean useHalfLambert; // 0x28C
		::System::Single outlineIntensity; // 0x290
		::System::Int32 MaxSplitCount; // 0x294
		::System::Single MaxBoundDimLength; // 0x298
		::System::Single SpoltAngleLerp; // 0x29C
		::Il2CppArray<::UnityEngine::Bounds>* m_Bounds; // 0x2A0
		::System::UInt64 m_LightHash; // 0x2A8
		::System::Single DepthTestNearClip; // 0x2B0
		::System::Boolean disableHizCulling; // 0x2B4
		::System::Boolean isLightMask; // 0x2B5
		::System::Single halfLambertIntensity; // 0x2B8
		::System::Boolean enableHalfLambert; // 0x2BC
		::System::Boolean useIndependentGIColor; // 0x2BD
		::UnityEngine::Color independentGIColor; // 0x2C0
		::System::Single volumetricFog_ShadowIntensity; // 0x2D0
		::UnityEngine::LightShadows oldShadowConfig; // 0x2D4
		::UnityEngine::Light* lightC; // 0x2D8
		::System::Boolean isFirstTimeEnable; // 0x2E0
		::UnityEngine::Vector3 preDynamicLightPositon; // 0x2E4
		::UnityEngine::Vector3 preDynamicLightEulerAngle; // 0x2F0
		::System::Int32 preUpdateFrame; // 0x2FC
		::System::Boolean _lodNeedForceUpdate_k__BackingField; // 0x300
		::System::Single lightLodBaseFadeDistance; // 0x304
		::System::Single diffuseFadeEndDistance; // 0x308
		::System::Single specularFadeEndDistance; // 0x30C
		::System::Single shadowFadeEndDistance; // 0x310

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA__CCTOR_OFFSET))();
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnLightweightActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA_ONLIGHTWEIGHTACTIVE_OFFSET))(this);
		}

		::System::Void OnLightweightDeactive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA_ONLIGHTWEIGHTDEACTIVE_OFFSET))(this);
		}

		::System::Boolean get_IsDynamicLight()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA_GET_ISDYNAMICLIGHT_OFFSET))(this);
		}

		::System::Single get_VolumetricFog_ShadowIntensity()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA_GET_VOLUMETRICFOG_SHADOWINTENSITY_OFFSET))(this);
		}

		::UnityEngine::Rendering::Universal::AddLightMode get_addLightMode()
		{
			return ((::UnityEngine::Rendering::Universal::AddLightMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA_GET_ADDLIGHTMODE_OFFSET))(this);
		}

		::System::Void set_addLightMode(::UnityEngine::Rendering::Universal::AddLightMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::AddLightMode))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA_SET_ADDLIGHTMODE_OFFSET))(this, value);
		}

		::UnityEngine::Light* get_LightC()
		{
			return ((::UnityEngine::Light*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA_GET_LIGHTC_OFFSET))(this);
		}

		::System::Void SetLightShadowStrength(::System::Single shadowStrength)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA_SETLIGHTSHADOWSTRENGTH_OFFSET))(this, shadowStrength);
		}

		::System::Void SetLightShadowType(::UnityEngine::LightShadows shadowType)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::LightShadows))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA_SETLIGHTSHADOWTYPE_OFFSET))(this, shadowType);
		}

		::System::Void SetLightEnabled(::System::Boolean enabled)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA_SETLIGHTENABLED_OFFSET))(this, enabled);
		}

		::UnityEngine::LightShadows get_OldShadowType()
		{
			return ((::UnityEngine::LightShadows(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA_GET_OLDSHADOWTYPE_OFFSET))(this);
		}

		::UnityEngine::Rendering::Universal::UniversalAdditionalLightData_LightUsage get_Usage()
		{
			return ((::UnityEngine::Rendering::Universal::UniversalAdditionalLightData_LightUsage(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA_GET_USAGE_OFFSET))(this);
		}

		::System::Void set_Usage(::UnityEngine::Rendering::Universal::UniversalAdditionalLightData_LightUsage value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::UniversalAdditionalLightData_LightUsage))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA_SET_USAGE_OFFSET))(this, value);
		}

		::System::Single get_LightRange()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA_GET_LIGHTRANGE_OFFSET))(this);
		}

		::System::Boolean get_UseSlowAttenuation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA_GET_USESLOWATTENUATION_OFFSET))(this);
		}

		::System::Void set_UseSlowAttenuation(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA_SET_USESLOWATTENUATION_OFFSET))(this, value);
		}

		::System::Boolean get_UseZeroAttenuation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA_GET_USEZEROATTENUATION_OFFSET))(this);
		}

		::System::Void set_UseZeroAttenuation(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA_SET_USEZEROATTENUATION_OFFSET))(this, value);
		}

		::System::Boolean get_IsHizCullingValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA_GET_ISHIZCULLINGVALID_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA_START_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA_AWAKE_OFFSET))(this);
		}

		::System::Void OnRealEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA_ONREALENABLE_OFFSET))(this);
		}

		::System::Void OnRealDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA_ONREALDISABLE_OFFSET))(this);
		}

		::System::Void InitializeV1_2Extension(::UnityEngine::Rendering::Universal::UniversalAdditionalLightDataExtensionV1_2* v12Extension)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::UniversalAdditionalLightDataExtensionV1_2*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA_INITIALIZEV1_2EXTENSION_OFFSET))(this, v12Extension);
		}

		static ::System::UInt64 GetHashForLight(::UnityEngine::Light* light)
		{
			return ((::System::UInt64(*)(::UnityEngine::Light*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA_GETHASHFORLIGHT_OFFSET))(light);
		}

		static ::System::Void ClearOptimizableLight()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA_CLEAROPTIMIZABLELIGHT_OFFSET))();
		}

		static ::System::Boolean RegisterOptimizableLight(::System::Int64 seed, ::UnityEngine::Rendering::VisibleLight targetLight, ::System::Single radius)
		{
			return ((::System::Boolean(*)(::System::Int64, ::UnityEngine::Rendering::VisibleLight, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA_REGISTEROPTIMIZABLELIGHT_OFFSET))(seed, targetLight, radius);
		}

		::UnityEngine::Vector4 GetSpotBoundingSphereRadiusAndCenter()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA_GETSPOTBOUNDINGSPHERERADIUSANDCENTER_OFFSET))(this);
		}

		::System::Void GetFogParams(::UnityEngine::NAPRenderPipeline0::NativeAdditionalLightDataFogParams& p)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::NativeAdditionalLightDataFogParams&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA_GETFOGPARAMS_OFFSET))(this, p);
		}

		::System::Void UpdateDynamicLight(::UnityEngine::Transform* mainCamera)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA_UPDATEDYNAMICLIGHT_OFFSET))(this, mainCamera);
		}

		::System::Void SetHalfLambertAndLightOccluderValue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA_SETHALFLAMBERTANDLIGHTOCCLUDERVALUE_OFFSET))(this);
		}

		::System::Boolean LodNeedCommonUpdate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA_LODNEEDCOMMONUPDATE_OFFSET))(this);
		}

		::System::Boolean LodNeedForceUpdate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA_LODNEEDFORCEUPDATE_OFFSET))(this);
		}

		::System::Boolean get_lodNeedForceUpdate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA_GET_LODNEEDFORCEUPDATE_OFFSET))(this);
		}

		::System::Void set_lodNeedForceUpdate(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA_SET_LODNEEDFORCEUPDATE_OFFSET))(this, value);
		}

		::System::Void SetLightWithQualityConfig(::UnityEngine::Rendering::Universal::UniversalAdditionalLightData_LightLodConfigData& config)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::UniversalAdditionalLightData_LightLodConfigData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA_SETLIGHTWITHQUALITYCONFIG_OFFSET))(this, config);
		}

		::System::Void SetLightWithQualityConfig_1(::UnityEngine::Rendering::Universal::UniversalAdditionalLightData_LightLodConfigData& config, ::UnityEngine::Rendering::Universal::LightLodJobData& jobData, ::System::Int32 jobIndex)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::UniversalAdditionalLightData_LightLodConfigData&, ::UnityEngine::Rendering::Universal::LightLodJobData&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA_SETLIGHTWITHQUALITYCONFIG_1_OFFSET))(this, config, jobData, jobIndex);
		}

		::System::Void __base_GetFogParams(::UnityEngine::NAPRenderPipeline0::NativeAdditionalLightDataFogParams& P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::NativeAdditionalLightDataFogParams&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA___BASE_GETFOGPARAMS_OFFSET))(this, P0);
		}
	};
}
