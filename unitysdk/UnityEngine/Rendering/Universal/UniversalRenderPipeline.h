#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/CameraData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/LightData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PerObjectShadowConfig.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostProcessingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ShadowData.h"
#include "unitysdk/UnityEngine/RenderTextureDescriptor.h"
#include "unitysdk/UnityEngine/Rendering/CullingResults.h"
#include "unitysdk/UnityEngine/Rendering/PerObjectData.h"
#include "unitysdk/UnityEngine/Rendering/RenderPipeline.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"
#include "unitysdk/UnityEngine/Rendering/Universal/UniversalRenderPipeline_TempLightData.h"
#include "unitysdk/UnityEngine/Rendering/Universal/UniversalRenderPipeline___c__DisplayClass52_0.h"
#include "unitysdk/UnityEngine/Rendering/VisibleLight.h"
#include "unitysdk/UnityEngine/Vector4.h"

class CSharpPerObjectShadowSettings;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Light; }
namespace UnityEngine { class Material; }
namespace UnityEngine::Experimental::GlobalIllumination { class Lightmapping_RequestLightsDelegate; }
namespace UnityEngine::NAPRenderPipeline0 { class NativeAdditionalLightData_NativeSRP; }
namespace UnityEngine::NAPRenderPipeline0 { class VolumeComponent; }
namespace UnityEngine::NAPRenderPipeline0 { template <typename T> class DynamicArray_1; }
namespace UnityEngine::Profiling { class CustomSampler; }
namespace UnityEngine::Rendering::Universal { class Culling; }
namespace UnityEngine::Rendering::Universal { class ForwardRenderer; }
namespace UnityEngine::Rendering::Universal { class ForwardRendererData; }
namespace UnityEngine::Rendering::Universal { class UniversalAdditionalCameraData; }
namespace UnityEngine::Rendering::Universal { class UniversalRenderPipelineAsset; }
namespace UnityEngine::Rendering::Universal { class UniversalRenderPipeline_NapPerFrameState; }
namespace UnityEngine::Rendering::Unversal { class SRPHelperExecuteContext; }

#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_ADD_ONWILLRENDERCAMERA_OFFSET UNITYSDK_OFFSET(0x1DE00BA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_AFMEENABLEOFFSCREENUI_OFFSET UNITYSDK_OFFSET(0x1DE17AB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_AREPOSTPROCESSESENABLED_OFFSET UNITYSDK_OFFSET(0x1DE14890)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_CHECKHISTORYDATA_OFFSET UNITYSDK_OFFSET(0x1DE11340)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_CLEARNAPTIME_OFFSET UNITYSDK_OFFSET(0x1DE16E30)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_CREATEPEROBJECTSHADOWCONFIG_OFFSET UNITYSDK_OFFSET(0x1DE04C90)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_CREATERENDERTEXTUREDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE07A60)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1DE05600)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_GETBLITMATERIAL_OFFSET UNITYSDK_OFFSET(0x1DE17660)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_GETCAMERAPROFILERTAG_OFFSET UNITYSDK_OFFSET(0x1DE002C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_GETGPUQUERYRESULT_OFFSET UNITYSDK_OFFSET(0x1DE11840)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_GETINTERPOLATEDVOLUMESTACKCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1DE0E880)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_GETMAINLIGHTINDEXWITHLOCALSHADOWCACHE_OFFSET UNITYSDK_OFFSET(0x1DE165A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_GETPEROBJECTLIGHTFLAGS_OFFSET UNITYSDK_OFFSET(0x1DE15680)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_GET_ASSET_OFFSET UNITYSDK_OFFSET(0x1DDF9300)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_GET_ENABLEGPUQUERY_OFFSET UNITYSDK_OFFSET(0x1DE00D60)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_GET_MAINLIGHTOBJECT_OFFSET UNITYSDK_OFFSET(0x1DE00AA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_GET_MAXRENDERSCALE_OFFSET UNITYSDK_OFFSET(0x1DE00A80)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_GET_MAXSCRIPTABLERENDERERS_OFFSET UNITYSDK_OFFSET(0x1DE00A90)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_GET_MAXSHADOWBIAS_OFFSET UNITYSDK_OFFSET(0x1DE00A40)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_GET_MAXSHADOWKERNEL_OFFSET UNITYSDK_OFFSET(0x1DE00A60)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_GET_MINRENDERSCALE_OFFSET UNITYSDK_OFFSET(0x1DE00A70)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_GET_MINSHADOWKERNEL_OFFSET UNITYSDK_OFFSET(0x1DE00A50)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_GET_SEPARATEUIRT_OFFSET UNITYSDK_OFFSET(0x1DE17C20)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_GET_S_PUNCTUALSHADOWATLASSIZESCALE_OFFSET UNITYSDK_OFFSET(0x1DE00D80)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_INITDAMAGETEXTSYSTEM_OFFSET UNITYSDK_OFFSET(0x1DE04930)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_INITIALIZEADDITIONALCAMERADATA_OFFSET UNITYSDK_OFFSET(0x1DE11A10)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_INITIALIZECAMERADATA_OFFSET UNITYSDK_OFFSET(0x1DE0CFF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_INITIALIZELIGHTDATA_OFFSET UNITYSDK_OFFSET(0x1DE14CD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_INITIALIZENAPRENDERPIPELINE_OFFSET UNITYSDK_OFFSET(0x1DE03DD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_INITIALIZEPOSTCULLLIGHTDATA_OFFSET UNITYSDK_OFFSET(0x1DE169C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_INITIALIZEPOSTCULLRENDERINGDATA_NATIVED_OFFSET UNITYSDK_OFFSET(0x1DE10F90)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_INITIALIZEPOSTCULLRENDERINGDATA_OFFSET UNITYSDK_OFFSET(0x1DE156C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_INITIALIZEPOSTPROCESSINGDATA_OFFSET UNITYSDK_OFFSET(0x1DE15610)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_INITIALIZERENDERINGDATA_OFFSET UNITYSDK_OFFSET(0x1DE0EC50)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_INITIALIZESHADOWDATA_OFFSET UNITYSDK_OFFSET(0x1DE14E20)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_INITIALIZESTACKEDCAMERADATA_OFFSET UNITYSDK_OFFSET(0x1DE138D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_INIT_OFFSET UNITYSDK_OFFSET(0x1DE04C50)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_ISGAMECAMERA_OFFSET UNITYSDK_OFFSET(0x1DE0A210)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_ISMULTIPASSSTEREOENABLED_OFFSET UNITYSDK_OFFSET(0x1DE17C80)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_ISSTEREOENABLED_OFFSET UNITYSDK_OFFSET(0x1DE0E950)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_MARKCAMERAFINALTARGET_OFFSET UNITYSDK_OFFSET(0x1DE09C90)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_OVERRIDECAMERADATAWITHRENDERINGDATA_OFFSET UNITYSDK_OFFSET(0x1DE14C80)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_QUERYMAINLIGHTSLOW_OFFSET UNITYSDK_OFFSET(0x1DE148D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_REFRESHOPTOPTIONS_OFFSET UNITYSDK_OFFSET(0x1DE04A50)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_REGISTERDECALSIMPLE_OFFSET UNITYSDK_OFFSET(0x1DE176A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_REGISTERVOLUMETYPES_OFFSET UNITYSDK_OFFSET(0x1DE019A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_REMOVE_ONWILLRENDERCAMERA_OFFSET UNITYSDK_OFFSET(0x1DE00C80)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_RENDERCAMERASTACK_OFFSET UNITYSDK_OFFSET(0x1DE0A3A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_RENDERCUSTOMSINGLECAMERA_OFFSET UNITYSDK_OFFSET(0x1DE0CAE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_RENDERSINGLECAMERA_1_OFFSET UNITYSDK_OFFSET(0x1DE0D0E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_RENDERSINGLECAMERA_OFFSET UNITYSDK_OFFSET(0x1DE0C270)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_RENDER_OFFSET UNITYSDK_OFFSET(0x1DE05FC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_RESETDECALSIMPLERENDERQUEUE_OFFSET UNITYSDK_OFFSET(0x1DE179B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_SETSUPPORTEDRENDERINGFEATURES_OFFSET UNITYSDK_OFFSET(0x1DE048F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_SETUPNAPTIME_OFFSET UNITYSDK_OFFSET(0x1DE16ED0)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_SETUPPERFRAMECONSTANTS_OFFSET UNITYSDK_OFFSET(0x1DE08170)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_SETUPPERFRAMESHADERCONSTANTS_OFFSET UNITYSDK_OFFSET(0x1DE08A70)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_SETUPSHADERFEATUREMAPPINGS_OFFSET UNITYSDK_OFFSET(0x1DE05310)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_SET_ENABLEGPUQUERY_OFFSET UNITYSDK_OFFSET(0x1DE00D70)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_SET_MAINLIGHTOBJECT_OFFSET UNITYSDK_OFFSET(0x1DE00B40)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_SET_S_PUNCTUALSHADOWATLASSIZESCALE_OFFSET UNITYSDK_OFFSET(0x1DE010C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_SORTCAMERAS_OFFSET UNITYSDK_OFFSET(0x1DE09BF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_SORTOTHERLIGHT_OFFSET UNITYSDK_OFFSET(0x1DE16B90)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_TRIMUNUSEDCAMERAPROFILINGSAMPLERS_OFFSET UNITYSDK_OFFSET(0x1DE00610)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_TRYSCHEDULESRPHELPER_OFFSET UNITYSDK_OFFSET(0x1DE10EC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_UNREGISTERDECALSIMPLE_OFFSET UNITYSDK_OFFSET(0x1DE177C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_UPDATECAMERASHADERCOMPILERSTAMPS_OFFSET UNITYSDK_OFFSET(0x1DE09AC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_UPDATEVOLUMEFRAMEWORK_OFFSET UNITYSDK_OFFSET(0x1DE0CB90)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE01400)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE03690)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE__MARKCAMERAFINALTARGET_G__GETORADDADDITIONALCAMERADATA_52_1_OFFSET UNITYSDK_OFFSET(0x1DE0C5B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE__MARKCAMERAFINALTARGET_G__MARKUIBLURSTATES_52_0_OFFSET UNITYSDK_OFFSET(0x1DE0C7C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE___BASE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1DE17E00)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int UniversalRenderPipeline_TypeDefinitionIndex = 26993;

	class UniversalRenderPipeline : public ::UnityEngine::Rendering::RenderPipeline
	{
	public:
		static ::System::Collections::Generic::List_1<::UnityEngine::NAPRenderPipeline0::NativeAdditionalLightData_NativeSRP*>** StaticGet_s_DisabledLightData()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::NAPRenderPipeline0::NativeAdditionalLightData_NativeSRP*>**)Il2CppClass::FromTypeDefinitionIndex(UniversalRenderPipeline_TypeDefinitionIndex)->GetStaticField(0x22E70);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Material*>** StaticGet_s_DecalSimpleMaterialPool()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Material*>**)Il2CppClass::FromTypeDefinitionIndex(UniversalRenderPipeline_TypeDefinitionIndex)->GetStaticField(0x22E78);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::Camera*>** StaticGet_s_CamerasToDeleteFromSamplerCache()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Camera*>**)Il2CppClass::FromTypeDefinitionIndex(UniversalRenderPipeline_TypeDefinitionIndex)->GetStaticField(0x22E80);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_s_SampleRenderSingleCamera()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(UniversalRenderPipeline_TypeDefinitionIndex)->GetStaticField(0x22E88);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_s_SampleUpdateVolumeFramework()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(UniversalRenderPipeline_TypeDefinitionIndex)->GetStaticField(0x22E90);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_s_SampleGetMainLightIndexWithLocalShadowCache()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(UniversalRenderPipeline_TypeDefinitionIndex)->GetStaticField(0x22E98);
		}
		static ::UnityEngine::NAPRenderPipeline0::DynamicArray_1<::System::Int32>** StaticGet_CachedVisibleLightData()
		{
			return (::UnityEngine::NAPRenderPipeline0::DynamicArray_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UniversalRenderPipeline_TypeDefinitionIndex)->GetStaticField(0x22EA0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int64, ::UnityEngine::Rendering::Universal::UniversalRenderPipeline_TempLightData>** StaticGet_s_LightMapForOptimize()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int64, ::UnityEngine::Rendering::Universal::UniversalRenderPipeline_TempLightData>**)Il2CppClass::FromTypeDefinitionIndex(UniversalRenderPipeline_TypeDefinitionIndex)->GetStaticField(0x22EA8);
		}
		static ::System::Action_1<::UnityEngine::Camera*>** StaticGet_onWillRenderCamera()
		{
			return (::System::Action_1<::UnityEngine::Camera*>**)Il2CppClass::FromTypeDefinitionIndex(UniversalRenderPipeline_TypeDefinitionIndex)->GetStaticField(0x22EB0);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_s_SamplePerObjectShadowUpdateTargets()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(UniversalRenderPipeline_TypeDefinitionIndex)->GetStaticField(0x22EB8);
		}
		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::Camera*, ::UnityEngine::Profiling::CustomSampler*>** StaticGet_s_CameraProfilingSamplers()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::Camera*, ::UnityEngine::Profiling::CustomSampler*>**)Il2CppClass::FromTypeDefinitionIndex(UniversalRenderPipeline_TypeDefinitionIndex)->GetStaticField(0x22EC0);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_s_SampleInitializeCameraData()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(UniversalRenderPipeline_TypeDefinitionIndex)->GetStaticField(0x22EC8);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::Light*>** StaticGet_CachedMainLight()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Light*>**)Il2CppClass::FromTypeDefinitionIndex(UniversalRenderPipeline_TypeDefinitionIndex)->GetStaticField(0x22ED0);
		}
		static ::UnityEngine::Experimental::GlobalIllumination::Lightmapping_RequestLightsDelegate** StaticGet_lightsDelegate()
		{
			return (::UnityEngine::Experimental::GlobalIllumination::Lightmapping_RequestLightsDelegate**)Il2CppClass::FromTypeDefinitionIndex(UniversalRenderPipeline_TypeDefinitionIndex)->GetStaticField(0x22ED8);
		}
		static ::UnityEngine::NAPRenderPipeline0::DynamicArray_1<::System::Collections::Generic::KeyValuePair_2<::System::Single, ::System::Int32>>** StaticGet_sortedOtherLight()
		{
			return (::UnityEngine::NAPRenderPipeline0::DynamicArray_1<::System::Collections::Generic::KeyValuePair_2<::System::Single, ::System::Int32>>**)Il2CppClass::FromTypeDefinitionIndex(UniversalRenderPipeline_TypeDefinitionIndex)->GetStaticField(0x22EE0);
		}
		static ::UnityEngine::Rendering::Unversal::SRPHelperExecuteContext** StaticGet_helperExecuteContext()
		{
			return (::UnityEngine::Rendering::Unversal::SRPHelperExecuteContext**)Il2CppClass::FromTypeDefinitionIndex(UniversalRenderPipeline_TypeDefinitionIndex)->GetStaticField(0x22EE8);
		}
		static ::UnityEngine::Rendering::Universal::UniversalRenderPipeline_NapPerFrameState** StaticGet_s_CachedPerFrameState()
		{
			return (::UnityEngine::Rendering::Universal::UniversalRenderPipeline_NapPerFrameState**)Il2CppClass::FromTypeDefinitionIndex(UniversalRenderPipeline_TypeDefinitionIndex)->GetStaticField(0x22EF0);
		}
		static ::UnityEngine::Vector4* StaticGet__napTimeFaster()
		{
			return (::UnityEngine::Vector4*)Il2CppClass::FromTypeDefinitionIndex(UniversalRenderPipeline_TypeDefinitionIndex)->GetStaticField(0x62A0);
		}
		static ::System::Single* StaticGet_s_QueryResult()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(UniversalRenderPipeline_TypeDefinitionIndex)->GetStaticField(0x62B0);
		}
		static ::System::Int64* StaticGet_preFrameCount()
		{
			return (::System::Int64*)Il2CppClass::FromTypeDefinitionIndex(UniversalRenderPipeline_TypeDefinitionIndex)->GetStaticField(0x62B8);
		}
		static ::System::Boolean* StaticGet_requiresSRGBConversion()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UniversalRenderPipeline_TypeDefinitionIndex)->GetStaticField(0x62C0);
		}
		static ::System::Boolean* StaticGet_showOverdrawInfo()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UniversalRenderPipeline_TypeDefinitionIndex)->GetStaticField(0x62C1);
		}
		static ::System::Boolean* StaticGet_s_LastUseNativePerObjectShadow()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UniversalRenderPipeline_TypeDefinitionIndex)->GetStaticField(0x62C2);
		}
		static ::System::Boolean* StaticGet__SeparateUIRT_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UniversalRenderPipeline_TypeDefinitionIndex)->GetStaticField(0x62C3);
		}
		static ::System::Boolean* StaticGet_s_UseNativePerObjectShadowInitialized()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UniversalRenderPipeline_TypeDefinitionIndex)->GetStaticField(0x62C4);
		}
		static ::System::Int32* StaticGet_LaunchSRPHelperStage()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UniversalRenderPipeline_TypeDefinitionIndex)->GetStaticField(0x62C8);
		}
		static ::System::Int32* StaticGet_s_DecalSimpleRenderQueue()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UniversalRenderPipeline_TypeDefinitionIndex)->GetStaticField(0x62CC);
		}
		static ::UnityEngine::Vector4* StaticGet__napTime()
		{
			return (::UnityEngine::Vector4*)Il2CppClass::FromTypeDefinitionIndex(UniversalRenderPipeline_TypeDefinitionIndex)->GetStaticField(0x62D0);
		}
		static ::System::Int64* StaticGet_lastToonLightErrorTime()
		{
			return (::System::Int64*)Il2CppClass::FromTypeDefinitionIndex(UniversalRenderPipeline_TypeDefinitionIndex)->GetStaticField(0x62E0);
		}
		// static const ::System::String* k_ShaderTagName; // 0x0
		// static const ::System::Int32 MAX_VISIBLE_ADDITIONAL_LIGHT_COUNT_HIGH = 0x100; // 0x0
		// static const ::System::Int32 MAX_VISIBLE_ADDITIONAL_LIGHT_COUNT_LOW = 0x80; // 0x0
		// static const ::System::Single kRenderScaleThreshold; // 0x0
		::System::Comparison_1<::UnityEngine::Camera*>* cameraComparison; // 0x18

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE__CCTOR_OFFSET))();
		}

		::System::Void _ctor(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* asset)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE__CTOR_OFFSET))(this, asset);
		}

		static ::UnityEngine::Profiling::CustomSampler* GetCameraProfilerTag(::UnityEngine::Camera* camera)
		{
			return ((::UnityEngine::Profiling::CustomSampler*(*)(::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_GETCAMERAPROFILERTAG_OFFSET))(camera);
		}

		static ::System::Void TrimUnusedCameraProfilingSamplers()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_TRIMUNUSEDCAMERAPROFILINGSAMPLERS_OFFSET))();
		}

		static ::System::Single get_maxShadowBias()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_GET_MAXSHADOWBIAS_OFFSET))();
		}

		static ::System::Single get_minShadowKernel()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_GET_MINSHADOWKERNEL_OFFSET))();
		}

		static ::System::Single get_maxShadowKernel()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_GET_MAXSHADOWKERNEL_OFFSET))();
		}

		static ::System::Single get_minRenderScale()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_GET_MINRENDERSCALE_OFFSET))();
		}

		static ::System::Single get_maxRenderScale()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_GET_MAXRENDERSCALE_OFFSET))();
		}

		static ::System::Int32 get_maxScriptableRenderers()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_GET_MAXSCRIPTABLERENDERERS_OFFSET))();
		}

		static ::UnityEngine::Light* get_mainLightObject()
		{
			return ((::UnityEngine::Light*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_GET_MAINLIGHTOBJECT_OFFSET))();
		}

		static ::System::Void set_mainLightObject(::UnityEngine::Light* value)
		{
			return ((::System::Void(*)(::UnityEngine::Light*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_SET_MAINLIGHTOBJECT_OFFSET))(value);
		}

		static ::System::Void add_onWillRenderCamera(::System::Action_1<::UnityEngine::Camera*>* value)
		{
			return ((::System::Void(*)(::System::Action_1<::UnityEngine::Camera*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_ADD_ONWILLRENDERCAMERA_OFFSET))(value);
		}

		static ::System::Void remove_onWillRenderCamera(::System::Action_1<::UnityEngine::Camera*>* value)
		{
			return ((::System::Void(*)(::System::Action_1<::UnityEngine::Camera*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_REMOVE_ONWILLRENDERCAMERA_OFFSET))(value);
		}

		static ::System::Boolean get_enableGPUQuery()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_GET_ENABLEGPUQUERY_OFFSET))();
		}

		static ::System::Void set_enableGPUQuery(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_SET_ENABLEGPUQUERY_OFFSET))(value);
		}

		static ::System::Int32 get_s_PunctualShadowAtlasSizeScale()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_GET_S_PUNCTUALSHADOWATLASSIZESCALE_OFFSET))();
		}

		static ::System::Void set_s_PunctualShadowAtlasSizeScale(::System::Int32 value)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_SET_S_PUNCTUALSHADOWATLASSIZESCALE_OFFSET))(value);
		}

		static ::System::Void Init()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_INIT_OFFSET))();
		}

		static ::System::Void RegisterVolumeTypes()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_REGISTERVOLUMETYPES_OFFSET))();
		}

		static ::UnityEngine::NAPRenderPipeline0::PerObjectShadowConfig CreatePerObjectShadowConfig(::CSharpPerObjectShadowSettings* settings)
		{
			return ((::UnityEngine::NAPRenderPipeline0::PerObjectShadowConfig(*)(::CSharpPerObjectShadowSettings*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_CREATEPEROBJECTSHADOWCONFIG_OFFSET))(settings);
		}

		static ::System::Void SetupShaderFeatureMappings(::UnityEngine::Rendering::Universal::ForwardRendererData* rendererData)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::Universal::ForwardRendererData*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_SETUPSHADERFEATUREMAPPINGS_OFFSET))(rendererData);
		}

		::System::Void InitializeNAPRenderPipeline()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_INITIALIZENAPRENDERPIPELINE_OFFSET))(this);
		}

		::System::Void InitDamageTextSystem(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* asset)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_INITDAMAGETEXTSYSTEM_OFFSET))(this, asset);
		}

		::System::Void RefreshOptOptions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_REFRESHOPTOPTIONS_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_DISPOSE_OFFSET))(this, disposing);
		}

		::System::Void Render(::UnityEngine::Rendering::ScriptableRenderContext renderContext, ::Il2CppArray<::UnityEngine::Camera*>* cameras)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext, ::Il2CppArray<::UnityEngine::Camera*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_RENDER_OFFSET))(this, renderContext, cameras);
		}

		::System::Void MarkCameraFinalTarget(::Il2CppArray<::UnityEngine::Camera*>* cameras)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Camera*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_MARKCAMERAFINALTARGET_OFFSET))(this, cameras);
		}

		::System::Void SetupPerFrameConstants()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_SETUPPERFRAMECONSTANTS_OFFSET))(this);
		}

		static ::System::Void RenderCustomSingleCamera(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Camera* camera)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_RENDERCUSTOMSINGLECAMERA_OFFSET))(context, camera);
		}

		static ::System::Void RenderSingleCamera(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::Camera* camera)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_RENDERSINGLECAMERA_OFFSET))(context, camera);
		}

		static ::System::Void RenderSingleCamera_1(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::CameraData& cameraData, ::System::Boolean anyPostProcessingEnabled)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::CameraData&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_RENDERSINGLECAMERA_1_OFFSET))(context, cameraData, anyPostProcessingEnabled);
		}

		static ::System::Void CheckHistoryData(::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_CHECKHISTORYDATA_OFFSET))(renderingData, postCullRenderingData);
		}

		static ::System::Void TryScheduleSRPHelper(::System::Int32 currentStage, ::UnityEngine::Rendering::Universal::ForwardRenderer* renderer)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Rendering::Universal::ForwardRenderer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_TRYSCHEDULESRPHELPER_OFFSET))(currentStage, renderer);
		}

		static ::System::Void RenderCameraStack(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Camera* baseCamera)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_RENDERCAMERASTACK_OFFSET))(context, baseCamera);
		}

		static ::System::Void UpdateVolumeFramework(::UnityEngine::Camera* camera, ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData* additionalCameraData)
		{
			return ((::System::Void(*)(::UnityEngine::Camera*, ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_UPDATEVOLUMEFRAMEWORK_OFFSET))(camera, additionalCameraData);
		}

		static ::System::Void SetSupportedRenderingFeatures()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_SETSUPPORTEDRENDERINGFEATURES_OFFSET))();
		}

		static ::System::Void InitializeCameraData(::UnityEngine::Camera* camera, ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData* additionalCameraData, ::System::Boolean resolveFinalTarget, ::UnityEngine::NAPRenderPipeline0::CameraData& cameraData)
		{
			return ((::System::Void(*)(::UnityEngine::Camera*, ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*, ::System::Boolean, ::UnityEngine::NAPRenderPipeline0::CameraData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_INITIALIZECAMERADATA_OFFSET))(camera, additionalCameraData, resolveFinalTarget, cameraData);
		}

		static ::System::Void InitializeStackedCameraData(::UnityEngine::Camera* baseCamera, ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData* baseAdditionalCameraData, ::UnityEngine::NAPRenderPipeline0::CameraData& cameraData)
		{
			return ((::System::Void(*)(::UnityEngine::Camera*, ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*, ::UnityEngine::NAPRenderPipeline0::CameraData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_INITIALIZESTACKEDCAMERADATA_OFFSET))(baseCamera, baseAdditionalCameraData, cameraData);
		}

		static ::System::Boolean ArePostProcessesEnabled(::UnityEngine::Camera* camera)
		{
			return ((::System::Boolean(*)(::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_AREPOSTPROCESSESENABLED_OFFSET))(camera);
		}

		static ::System::Void InitializeAdditionalCameraData(::UnityEngine::Camera* camera, ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData* additionalCameraData, ::System::Boolean resolveFinalTarget, ::UnityEngine::NAPRenderPipeline0::CameraData& cameraData)
		{
			return ((::System::Void(*)(::UnityEngine::Camera*, ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*, ::System::Boolean, ::UnityEngine::NAPRenderPipeline0::CameraData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_INITIALIZEADDITIONALCAMERADATA_OFFSET))(camera, additionalCameraData, resolveFinalTarget, cameraData);
		}

		static ::UnityEngine::Light* QueryMainLightSlow(::System::UInt32 cullingMask)
		{
			return ((::UnityEngine::Light*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_QUERYMAINLIGHTSLOW_OFFSET))(cullingMask);
		}

		static ::System::Void OverrideCameraDataWithRenderingData(::UnityEngine::NAPRenderPipeline0::CameraData& cameraData, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::Rendering::Universal::Culling*& cullingConfig)
		{
			return ((::System::Void(*)(::UnityEngine::NAPRenderPipeline0::CameraData&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::Rendering::Universal::Culling*&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_OVERRIDECAMERADATAWITHRENDERINGDATA_OFFSET))(cameraData, renderingData, cullingConfig);
		}

		static ::System::Void InitializeRenderingData(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* settings, ::UnityEngine::NAPRenderPipeline0::CameraData& cameraData, ::System::Boolean anyPostProcessingEnabled, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::Rendering::Universal::Culling*& cullingConfig)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*, ::UnityEngine::NAPRenderPipeline0::CameraData&, ::System::Boolean, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::Rendering::Universal::Culling*&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_INITIALIZERENDERINGDATA_OFFSET))(settings, cameraData, anyPostProcessingEnabled, renderingData, cullingConfig);
		}

		static ::System::Void InitializeShadowData(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* settings, ::UnityEngine::NAPRenderPipeline0::CameraData& cameraData, ::UnityEngine::Light* mainLight, ::System::Boolean mainLightCastShadows, ::System::Boolean additionalLightsCastShadows, ::UnityEngine::NAPRenderPipeline0::ShadowData& shadowData)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*, ::UnityEngine::NAPRenderPipeline0::CameraData&, ::UnityEngine::Light*, ::System::Boolean, ::System::Boolean, ::UnityEngine::NAPRenderPipeline0::ShadowData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_INITIALIZESHADOWDATA_OFFSET))(settings, cameraData, mainLight, mainLightCastShadows, additionalLightsCastShadows, shadowData);
		}

		static ::System::Void InitializePostProcessingData(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* settings, ::UnityEngine::NAPRenderPipeline0::PostProcessingData& postProcessingData)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*, ::UnityEngine::NAPRenderPipeline0::PostProcessingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_INITIALIZEPOSTPROCESSINGDATA_OFFSET))(settings, postProcessingData);
		}

		static ::System::Void InitializeLightData(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* settings, ::UnityEngine::NAPRenderPipeline0::CameraData& cameraData, ::UnityEngine::NAPRenderPipeline0::LightData& lightData)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*, ::UnityEngine::NAPRenderPipeline0::CameraData&, ::UnityEngine::NAPRenderPipeline0::LightData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_INITIALIZELIGHTDATA_OFFSET))(settings, cameraData, lightData);
		}

		static ::System::Void InitializePostCullRenderingData(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* settings, ::UnityEngine::NAPRenderPipeline0::CameraData& cameraData, ::UnityEngine::Rendering::CullingResults& cullResults, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*, ::UnityEngine::NAPRenderPipeline0::CameraData&, ::UnityEngine::Rendering::CullingResults&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_INITIALIZEPOSTCULLRENDERINGDATA_OFFSET))(settings, cameraData, cullResults, postCullRenderingData);
		}

		static ::System::Void InitializePostCullRenderingData_Natived(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* settings, ::UnityEngine::NAPRenderPipeline0::CameraData& cameraData, ::UnityEngine::Rendering::CullingResults& cullResults, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*, ::UnityEngine::NAPRenderPipeline0::CameraData&, ::UnityEngine::Rendering::CullingResults&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_INITIALIZEPOSTCULLRENDERINGDATA_NATIVED_OFFSET))(settings, cameraData, cullResults, postCullRenderingData);
		}

		static ::System::Void InitializePostCullLightData(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* settings, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight> visibleLights, ::System::Int32 mainLightIndex, ::UnityEngine::NAPRenderPipeline0::DynamicArray_1<::System::Int32>* otherLightShadowData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullLightData)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight>, ::System::Int32, ::UnityEngine::NAPRenderPipeline0::DynamicArray_1<::System::Int32>*, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_INITIALIZEPOSTCULLLIGHTDATA_OFFSET))(settings, visibleLights, mainLightIndex, otherLightShadowData, postCullLightData);
		}

		static ::UnityEngine::Rendering::PerObjectData GetPerObjectLightFlags()
		{
			return ((::UnityEngine::Rendering::PerObjectData(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_GETPEROBJECTLIGHTFLAGS_OFFSET))();
		}

		static ::System::Void SortOtherLight()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_SORTOTHERLIGHT_OFFSET))();
		}

		static ::System::Int32 GetMainLightIndexWithLocalShadowCache(::UnityEngine::Rendering::CullingResults& cullResults, ::UnityEngine::NAPRenderPipeline0::CameraData& cameraData, ::UnityEngine::NAPRenderPipeline0::DynamicArray_1<::System::Int32>* visibleLightsPreData)
		{
			return ((::System::Int32(*)(::UnityEngine::Rendering::CullingResults&, ::UnityEngine::NAPRenderPipeline0::CameraData&, ::UnityEngine::NAPRenderPipeline0::DynamicArray_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_GETMAINLIGHTINDEXWITHLOCALSHADOWCACHE_OFFSET))(cullResults, cameraData, visibleLightsPreData);
		}

		static ::System::Void SetupPerFrameShaderConstants()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_SETUPPERFRAMESHADERCONSTANTS_OFFSET))();
		}

		static ::System::Void UpdateCameraShaderCompilerStamps(::Il2CppArray<::UnityEngine::Camera*>* cameras)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Camera*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_UPDATECAMERASHADERCOMPILERSTAMPS_OFFSET))(cameras);
		}

		static ::System::Void ClearNapTime()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_CLEARNAPTIME_OFFSET))();
		}

		static ::System::ValueTuple_2<::UnityEngine::Vector4, ::UnityEngine::Vector4> SetupNapTime()
		{
			return ((::System::ValueTuple_2<::UnityEngine::Vector4, ::UnityEngine::Vector4>(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_SETUPNAPTIME_OFFSET))();
		}

		::UnityEngine::Material* GetBlitMaterial()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_GETBLITMATERIAL_OFFSET))(this);
		}

		static ::UnityEngine::NAPRenderPipeline0::VolumeComponent* GetInterpolatedVolumeStackComponent(::System::Int32 tid)
		{
			return ((::UnityEngine::NAPRenderPipeline0::VolumeComponent*(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_GETINTERPOLATEDVOLUMESTACKCOMPONENT_OFFSET))(tid);
		}

		static ::System::Void RegisterDecalSimple(::UnityEngine::Material* material)
		{
			return ((::System::Void(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_REGISTERDECALSIMPLE_OFFSET))(material);
		}

		static ::System::Void UnRegisterDecalSimple(::System::Int32 renderQueue)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_UNREGISTERDECALSIMPLE_OFFSET))(renderQueue);
		}

		static ::System::Void ResetDecalSimpleRenderQueue()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_RESETDECALSIMPLERENDERQUEUE_OFFSET))();
		}

		static ::System::Boolean AfmeEnableOffScreenUI(::UnityEngine::NAPRenderPipeline0::CameraData& cameraData)
		{
			return ((::System::Boolean(*)(::UnityEngine::NAPRenderPipeline0::CameraData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_AFMEENABLEOFFSCREENUI_OFFSET))(cameraData);
		}

		static ::System::Boolean get_SeparateUIRT()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_GET_SEPARATEUIRT_OFFSET))();
		}

		static ::System::Boolean IsGameCamera(::UnityEngine::Camera* camera)
		{
			return ((::System::Boolean(*)(::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_ISGAMECAMERA_OFFSET))(camera);
		}

		static ::System::Boolean IsStereoEnabled(::UnityEngine::Camera* camera)
		{
			return ((::System::Boolean(*)(::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_ISSTEREOENABLED_OFFSET))(camera);
		}

		static ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* get_asset()
		{
			return ((::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_GET_ASSET_OFFSET))();
		}

		static ::System::Boolean IsMultiPassStereoEnabled(::UnityEngine::Camera* camera)
		{
			return ((::System::Boolean(*)(::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_ISMULTIPASSSTEREOENABLED_OFFSET))(camera);
		}

		::System::Void SortCameras(::Il2CppArray<::UnityEngine::Camera*>* cameras)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Camera*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_SORTCAMERAS_OFFSET))(this, cameras);
		}

		static ::UnityEngine::RenderTextureDescriptor CreateRenderTextureDescriptor(::UnityEngine::Camera* camera, ::System::Single renderScale, ::System::Boolean isHdrEnabled, ::System::Int32 msaaSamples, ::System::Boolean needsAlpha)
		{
			return ((::UnityEngine::RenderTextureDescriptor(*)(::UnityEngine::Camera*, ::System::Single, ::System::Boolean, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_CREATERENDERTEXTUREDESCRIPTOR_OFFSET))(camera, renderScale, isHdrEnabled, msaaSamples, needsAlpha);
		}

		static ::System::Void GetGPUQueryResult(::UnityEngine::NAPRenderPipeline0::CameraData& cameraData)
		{
			return ((::System::Void(*)(::UnityEngine::NAPRenderPipeline0::CameraData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_GETGPUQUERYRESULT_OFFSET))(cameraData);
		}

		static ::System::Void _MarkCameraFinalTarget_g__MarkUiBlurStates_52_0(::UnityEngine::Camera* c, ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData* d, ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData* prev, ::UnityEngine::Rendering::Universal::UniversalRenderPipeline___c__DisplayClass52_0& a4)
		{
			return ((::System::Void(*)(::UnityEngine::Camera*, ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*, ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*, ::UnityEngine::Rendering::Universal::UniversalRenderPipeline___c__DisplayClass52_0&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE__MARKCAMERAFINALTARGET_G__MARKUIBLURSTATES_52_0_OFFSET))(c, d, prev, a4);
		}

		static ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData* _MarkCameraFinalTarget_g__GetOrAddAdditionalCameraData_52_1(::UnityEngine::Camera* camera)
		{
			return ((::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*(*)(::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE__MARKCAMERAFINALTARGET_G__GETORADDADDITIONALCAMERADATA_52_1_OFFSET))(camera);
		}

		::System::Void __base_Dispose(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE___BASE_DISPOSE_OFFSET))(this, P0);
		}
	};
}
