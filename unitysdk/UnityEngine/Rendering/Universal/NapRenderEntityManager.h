#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ExtractBoneInfo.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/NativeHashMap_2.h"
#include "unitysdk/Unity/Collections/NativeList_1.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/NapLightData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/Plane.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"
#include "unitysdk/UnityEngine/Rendering/Universal/LightFilter.h"
#include "unitysdk/UnityEngine/Rendering/Universal/NapCBProperty.h"
#include "unitysdk/UnityEngine/Rendering/Universal/NapRenderEntityManager_CachedCameraData.h"
#include "unitysdk/UnityEngine/Rendering/Universal/NapRenderEntityManager___c__DisplayClass118_0.h"
#include "unitysdk/UnityEngine/Rendering/Universal/NapRenderEntityManager___c__DisplayClass118_1.h"
#include "unitysdk/UnityEngine/Rendering/Universal/NapRenderEntityManager___c__DisplayClass118_2.h"
#include "unitysdk/UnityEngine/Rendering/Universal/NapRenderEntityPrepareInputCustom.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

class MonoRenderEntity;
class NapRenderEntity;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Light; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine::Profiling { class CustomSampler; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering::Universal { class MonoPerObjectShadow; }
namespace UnityEngine::Rendering::Universal { class UniversalAdditionalLightData; }
namespace UnityEngine::Rendering::Universal { class UniversalRenderPipelineAsset; }

#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_ADD_OFFSET UNITYSDK_OFFSET(0x1BC676E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_COLLECTVISIBLENATIVEENTITIES_OFFSET UNITYSDK_OFFSET(0x1BC68900)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_CONTAINS_1_OFFSET UNITYSDK_OFFSET(0x1BC68590)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1BC68530)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1BC66EF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_ENSUREMAPCAPACITY_OFFSET UNITYSDK_OFFSET(0x1BC70B00)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_ENSUREVISIBLENATIVEENTITYHANDLECAPACITY_OFFSET UNITYSDK_OFFSET(0x1BC68860)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_FINDENTITY_OFFSET UNITYSDK_OFFSET(0x1BC68400)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_GETBONEINFOMAP_OFFSET UNITYSDK_OFFSET(0x1BC709D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_GETCHARACTERGPUDATAPREPARED_OFFSET UNITYSDK_OFFSET(0x1BC66E20)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_GETDUMMYGPUDATASIZE_OFFSET UNITYSDK_OFFSET(0x1BC67670)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_GETENTITY_OFFSET UNITYSDK_OFFSET(0x1BC68620)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_GET_CHARACTERGPUDATAPREPARED_OFFSET UNITYSDK_OFFSET(0x1BC66D60)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1BC66D00)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_MARKPRIORITYDIRTY_OFFSET UNITYSDK_OFFSET(0x1BC686F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_NEEDSHEIGHTFADETRACKING_1_OFFSET UNITYSDK_OFFSET(0x1BC6B3E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_NEEDSHEIGHTFADETRACKING_OFFSET UNITYSDK_OFFSET(0x1BC6B260)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_PREPAREAFTERCULLING_OFFSET UNITYSDK_OFFSET(0x1BC6B8E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_PREPAREAFTERLIGHTLOOP_OFFSET UNITYSDK_OFFSET(0x1BC6CD50)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_REBUILDNATIVEENTITYMAP_OFFSET UNITYSDK_OFFSET(0x1BC68740)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_REGISTERNATIVEENTITY_OFFSET UNITYSDK_OFFSET(0x1BC67C00)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_REMOVE_1_OFFSET UNITYSDK_OFFSET(0x1BC68330)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_REMOVE_OFFSET UNITYSDK_OFFSET(0x1BC67E00)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_SETASSETS_OFFSET UNITYSDK_OFFSET(0x1BC67000)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_SETUPDUMMYDATA_OFFSET UNITYSDK_OFFSET(0x1BC67050)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_SET_CHARACTERGPUDATAPREPARED_OFFSET UNITYSDK_OFFSET(0x1BC66DC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_SYNCNAPCB_OFFSET UNITYSDK_OFFSET(0x1BC6FA20)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_TRACKHEIGHTFADEENTITY_OFFSET UNITYSDK_OFFSET(0x1BC6B060)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_TRACKMONOPEROBJECTSHADOWHEIGHTFADE_OFFSET UNITYSDK_OFFSET(0x1BC6B560)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_UNREGISTERNATIVEENTITY_OFFSET UNITYSDK_OFFSET(0x1BC682C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_UNTRACKMONOPEROBJECTSHADOWHEIGHTFADE_OFFSET UNITYSDK_OFFSET(0x1BC6B760)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_UPDATEBONETRANSFORMSFORNATIVE_OFFSET UNITYSDK_OFFSET(0x1BC6A410)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_UPDATELIGHTDATA_OFFSET UNITYSDK_OFFSET(0x1BC6CE20)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_UPDATEPERFRAME_OFFSET UNITYSDK_OFFSET(0x1BC68C00)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_UPDATEPEROBJECTSHADOWFADEWITHHEIGHTFORNATIVE_OFFSET UNITYSDK_OFFSET(0x1BC6A880)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BC712D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC70D90)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER__PREPAREAFTERCULLING_G__GETLIGHTDIRECTION_113_0_OFFSET UNITYSDK_OFFSET(0x1BC6CAA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER__UPDATELIGHTDATA_G__ANGLEATTENUATION_118_10_OFFSET UNITYSDK_OFFSET(0x1BC71C20)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER__UPDATELIGHTDATA_G__CALCULATELIGHTWEIGHT_118_3_OFFSET UNITYSDK_OFFSET(0x1BC71880)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER__UPDATELIGHTDATA_G__CHECKDISTANCEOFAXIS_118_7_OFFSET UNITYSDK_OFFSET(0x1BC6FDF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER__UPDATELIGHTDATA_G__DISTANCEATTENUATIONB_118_9_OFFSET UNITYSDK_OFFSET(0x1BC71B70)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER__UPDATELIGHTDATA_G__GETKERNEL_118_4_OFFSET UNITYSDK_OFFSET(0x1BC70740)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER__UPDATELIGHTDATA_G__GETPUNCTUALLIGHTDATAFROMCOMPONENT_118_2_OFFSET UNITYSDK_OFFSET(0x1BC6FE20)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER__UPDATELIGHTDATA_G__GETPUNCTUALLIGHTDATAFROMNAPLIGHTDATA_118_1_OFFSET UNITYSDK_OFFSET(0x1BC70660)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER__UPDATELIGHTDATA_G__ISBLACKCURTAIN_118_6_OFFSET UNITYSDK_OFFSET(0x1BC71870)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER__UPDATELIGHTDATA_G__SETPUNCTUALLIGHT_118_0_OFFSET UNITYSDK_OFFSET(0x1BC70120)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER__UPDATELIGHTDATA_G__SORTLIGHTSIFNEEDED_118_5_OFFSET UNITYSDK_OFFSET(0x1BC70210)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int NapRenderEntityManager_TypeDefinitionIndex = 27968;

	class NapRenderEntityManager : public ::System::Object
	{
	public:
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_CacheIsRendererAlive()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x21800);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_CollectInputs()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x21808);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_prepareAfterLightLoop()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x21810);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_CollectLightDataAndComputeInputs()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x21818);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_BatchUpdateVisibility_ResizeNativeList()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x21820);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_updateLightGradient()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x21828);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_GetHeadBoneTransform()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x21830);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_CacheCameraFields()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x21838);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_UpdatePerFrame()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x21840);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_UpdateVisibilities()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x21848);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_PrepareAfterCulling()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x21850);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_CopyLightDataToNapCB()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x21858);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_syncNapCB()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x21860);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_DispatchCompute()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x21868);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_LightFilterTileLights()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x21870);
		}
		static ::System::Collections::Generic::List_1<::NapRenderEntity*>** StaticGet_avatarParticleArray()
		{
			return (::System::Collections::Generic::List_1<::NapRenderEntity*>**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x21878);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_CollectLights()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x21880);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_CheckValidAndActive()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x21888);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_ResizeBoneInfoMap()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x21890);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_CollectVisEntities_MapHandles()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x21898);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_PrepareSharedVariables()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x218A0);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_GlobalKeywordAndFields()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x218A8);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_LightCulling()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x218B0);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_BatchQueryIsAlive0()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x218B8);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_BatchQueryIsAlive1()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x218C0);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_UpdateMainLightsData()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x218C8);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_BatchUpdateVisibility_CollectRenderers()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x218D0);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_FixShadowCoverageOutOfFrustum()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x218D8);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_SortEntitiesByPriority()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x218E0);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_AddIndicatedLightsForPreview()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x218E8);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_SetNapCBProperties()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x218F0);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_PrepareCharacterGiSampleData()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x218F8);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_CollectVisEntities()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x21900);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_CalculateCullingSphereCenter()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x21908);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_CharacterRendering()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x21910);
		}
		static ::UnityEngine::Rendering::Universal::NapRenderEntityManager** StaticGet__instance_k__BackingField()
		{
			return (::UnityEngine::Rendering::Universal::NapRenderEntityManager**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x21918);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_CullingResults_GetRenderVisibleInCurrentCam()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x21920);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_BatchUpdateVisibility()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x21928);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_UpdateStencil()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x21930);
		}
		static ::UnityEngine::Rendering::Universal::LightFilter* StaticGet_lightFilter()
		{
			return (::UnityEngine::Rendering::Universal::LightFilter*)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x21938);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_ReleaseTemp()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x219A0);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_UpdateRamp()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x219A8);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_SortLights()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x219B0);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_EditorRebindBuffers()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x219B8);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_CollectVisEntities_GetHandles()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x219C0);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_LightFilterCull()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x219C8);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_CacheLights()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x219D0);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_CollectVisEntities_RebuildMap()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x219D8);
		}
		static ::System::Int32* StaticGet__StencilShadowBlendDebugMode()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x52A0);
		}
		static ::System::Boolean* StaticGet_skipRenderLoopLogic()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x52A4);
		}
		static ::System::Boolean* StaticGet__CharacterGPUDataPrepared_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x52A5);
		}
		static ::System::Int32* StaticGet__StencilShadowBlendSrc()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x52A8);
		}
		static ::System::Int32* StaticGet__StencilShadowBlendDst()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_TypeDefinitionIndex)->GetStaticField(0x52AC);
		}
		::UnityEngine::ComputeBuffer* characterLights; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::IntPtr, ::NapRenderEntity*>* nativeHandleToEntity; // 0x18
		::UnityEngine::ComputeBuffer* blendLightBuffer; // 0x20
		::System::Collections::Generic::HashSet_1<::UnityEngine::Rendering::Universal::MonoPerObjectShadow*>* activeMonoShadowHeightFadeEntities; // 0x28
		::UnityEngine::ComputeBuffer* gpuLightDatasForChar; // 0x30
		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* visibilityQueryData; // 0x38
		::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::MonoPerObjectShadow*>* removeMonoShadowHeightFadeEntities; // 0x40
		::UnityEngine::ComputeShader* computeShader; // 0x48
		::UnityEngine::ComputeBuffer* entityGpuDataBuffer; // 0x50
		::System::Collections::Generic::List_1<::UnityEngine::Object*>* aliveQueryData; // 0x58
		::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::NapRenderEntityPrepareInputCustom>* prepareInput; // 0x60
		::System::Collections::Generic::List_1<::MonoRenderEntity*>* removeHeightFadeEntities; // 0x68
		::UnityEngine::ComputeBuffer* debugBlendLightsBuffer; // 0x70
		::System::Collections::Generic::List_1<::NapRenderEntity*>* visibleNativeEntities; // 0x78
		::UnityEngine::ComputeBuffer* dummyGpuDataBuffer; // 0x80
		::UnityEngine::ComputeBuffer* prepareInputBuffer; // 0x88
		::System::Collections::Generic::HashSet_1<::MonoRenderEntity*>* activeHeightFadeEntities; // 0x90
		::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::NapRenderEntityManager_CachedCameraData>* cachedCameraDatas; // 0x98
		::Il2CppArray<::UnityEngine::Plane>* frustumePlanes; // 0xA0
		::Il2CppArray<::UnityEngine::Vector4>* frustumePlaneVectors; // 0xA8
		::System::Collections::Generic::List_1<::NapRenderEntity*>* Entities; // 0xB0
		::Il2CppArray<::System::IntPtr>* visibleNativeEntityHandles; // 0xB8
		::Unity::Collections::NativeHashMap_2<::System::UInt32, ::ExtractBoneInfo> _boneInfoMap; // 0xC0
		::Unity::Collections::NativeList_1<::System::Boolean> queryResult1; // 0xD0
		::Unity::Collections::NativeList_1<::System::Boolean> queryResult0; // 0xE0
		::System::Int32 heightFadeProcessedFrame; // 0xF0
		::System::Int32 previousCheckVisibilityFrameIndex; // 0xF4
		::System::Boolean m_PreviousFrameGradientLightActive; // 0xF8
		::System::Boolean priorityDirty; // 0xF9

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER__CCTOR_OFFSET))();
		}

		static ::UnityEngine::Rendering::Universal::NapRenderEntityManager* get_instance()
		{
			return ((::UnityEngine::Rendering::Universal::NapRenderEntityManager*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_GET_INSTANCE_OFFSET))();
		}

		static ::System::Boolean get_CharacterGPUDataPrepared()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_GET_CHARACTERGPUDATAPREPARED_OFFSET))();
		}

		static ::System::Void set_CharacterGPUDataPrepared(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_SET_CHARACTERGPUDATAPREPARED_OFFSET))(value);
		}

		::System::Boolean GetCharacterGPUDataPrepared()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_GETCHARACTERGPUDATAPREPARED_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void SetAssets(::UnityEngine::ComputeShader* computeShader)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeShader*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_SETASSETS_OFFSET))(this, computeShader);
		}

		::System::Void SetupDummyData(::UnityEngine::Rendering::ScriptableRenderContext& context)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_SETUPDUMMYDATA_OFFSET))(this, context);
		}

		::System::Int32 GetDummyGPUDataSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_GETDUMMYGPUDATASIZE_OFFSET))(this);
		}

		::System::Void Add(::NapRenderEntity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::NapRenderEntity*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_ADD_OFFSET))(this, entity);
		}

		::System::Void Remove(::NapRenderEntity* entity, ::System::Boolean passiveRelease, ::System::Boolean doNotRelease)
		{
			return ((::System::Void(*)(::PVOID, ::NapRenderEntity*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_REMOVE_OFFSET))(this, entity, passiveRelease, doNotRelease);
		}

		::System::Void Remove_1(::UnityEngine::GameObject* go)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_REMOVE_1_OFFSET))(this, go);
		}

		::System::Boolean Contains(::UnityEngine::GameObject* go)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_CONTAINS_OFFSET))(this, go);
		}

		::System::Boolean Contains_1(::NapRenderEntity* napRenderEntity)
		{
			return ((::System::Boolean(*)(::PVOID, ::NapRenderEntity*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_CONTAINS_1_OFFSET))(this, napRenderEntity);
		}

		::System::Boolean FindEntity(::UnityEngine::GameObject* go, ::System::Int32& index)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Int32&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_FINDENTITY_OFFSET))(this, go, index);
		}

		::System::Boolean GetEntity(::UnityEngine::GameObject* root, ::NapRenderEntity*& entity)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*, ::NapRenderEntity*&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_GETENTITY_OFFSET))(this, root, entity);
		}

		::System::Void MarkPriorityDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_MARKPRIORITYDIRTY_OFFSET))(this);
		}

		::System::Void RegisterNativeEntity(::NapRenderEntity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::NapRenderEntity*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_REGISTERNATIVEENTITY_OFFSET))(this, entity);
		}

		::System::Void UnregisterNativeEntity(::System::IntPtr nativeHandle)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_UNREGISTERNATIVEENTITY_OFFSET))(this, nativeHandle);
		}

		::System::Void RebuildNativeEntityMap()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_REBUILDNATIVEENTITYMAP_OFFSET))(this);
		}

		::System::Void EnsureVisibleNativeEntityHandleCapacity(::System::Int32 visibleCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_ENSUREVISIBLENATIVEENTITYHANDLECAPACITY_OFFSET))(this, visibleCount);
		}

		::System::Collections::Generic::List_1<::NapRenderEntity*>* CollectVisibleNativeEntities()
		{
			return ((::System::Collections::Generic::List_1<::NapRenderEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_COLLECTVISIBLENATIVEENTITIES_OFFSET))(this);
		}

		::System::Void UpdatePerFrame(::UnityEngine::Rendering::ScriptableRenderContext renderContext, ::Il2CppArray<::UnityEngine::Camera*>* cameras)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext, ::Il2CppArray<::UnityEngine::Camera*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_UPDATEPERFRAME_OFFSET))(this, renderContext, cameras);
		}

		::System::Void UpdateBoneTransformsForNative(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* asset)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_UPDATEBONETRANSFORMSFORNATIVE_OFFSET))(this, asset);
		}

		::System::Void UpdatePerObjectShadowFadeWithHeightForNative()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_UPDATEPEROBJECTSHADOWFADEWITHHEIGHTFORNATIVE_OFFSET))(this);
		}

		::System::Void TrackHeightFadeEntity(::MonoRenderEntity* mono)
		{
			return ((::System::Void(*)(::PVOID, ::MonoRenderEntity*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_TRACKHEIGHTFADEENTITY_OFFSET))(this, mono);
		}

		static ::System::Boolean NeedsHeightFadeTracking(::MonoRenderEntity* mono)
		{
			return ((::System::Boolean(*)(::MonoRenderEntity*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_NEEDSHEIGHTFADETRACKING_OFFSET))(mono);
		}

		static ::System::Boolean NeedsHeightFadeTracking_1(::UnityEngine::Rendering::Universal::MonoPerObjectShadow* mono)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rendering::Universal::MonoPerObjectShadow*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_NEEDSHEIGHTFADETRACKING_1_OFFSET))(mono);
		}

		::System::Void TrackMonoPerObjectShadowHeightFade(::UnityEngine::Rendering::Universal::MonoPerObjectShadow* mono)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::MonoPerObjectShadow*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_TRACKMONOPEROBJECTSHADOWHEIGHTFADE_OFFSET))(this, mono);
		}

		::System::Void UntrackMonoPerObjectShadowHeightFade(::UnityEngine::Rendering::Universal::MonoPerObjectShadow* mono)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::MonoPerObjectShadow*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_UNTRACKMONOPEROBJECTSHADOWHEIGHTFADE_OFFSET))(this, mono);
		}

		::System::Void PrepareAfterCulling(::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingdata, ::System::Boolean isPlanarReflectionCamera)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_PREPAREAFTERCULLING_OFFSET))(this, postCullRenderingData, renderingdata, isPlanarReflectionCamera);
		}

		::System::Void PrepareAfterLightLoop(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRendering)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_PREPAREAFTERLIGHTLOOP_OFFSET))(this, cmd, renderingData, postCullRendering);
		}

		::System::Void SyncNapCB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_SYNCNAPCB_OFFSET))(this);
		}

		::System::Void UpdateLightData(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_UPDATELIGHTDATA_OFFSET))(this, cmd, renderingData, postCullRenderingData);
		}

		::Unity::Collections::NativeHashMap_2<::System::UInt32, ::ExtractBoneInfo> GetBoneInfoMap()
		{
			return ((::Unity::Collections::NativeHashMap_2<::System::UInt32, ::ExtractBoneInfo>(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_GETBONEINFOMAP_OFFSET))(this);
		}

		::System::Void EnsureMapCapacity(::System::Int32 size)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_ENSUREMAPCAPACITY_OFFSET))(this, size);
		}

		static ::System::Boolean _PrepareAfterCulling_g__GetLightDirection_113_0(::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& data, ::UnityEngine::Vector3& direction)
		{
			return ((::System::Boolean(*)(::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER__PREPAREAFTERCULLING_G__GETLIGHTDIRECTION_113_0_OFFSET))(data, direction);
		}

		static ::System::Boolean _UpdateLightData_g__IsBlackCurtain_118_6(::System::UInt32 renderingLayerMask)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER__UPDATELIGHTDATA_G__ISBLACKCURTAIN_118_6_OFFSET))(renderingLayerMask);
		}

		static ::System::Boolean _UpdateLightData_g__CheckDistanceOfAxis_118_7(::System::Single a, ::System::Single b, ::System::Single extent, ::UnityEngine::Rendering::Universal::NapRenderEntityManager___c__DisplayClass118_1& a4)
		{
			return ((::System::Boolean(*)(::System::Single, ::System::Single, ::System::Single, ::UnityEngine::Rendering::Universal::NapRenderEntityManager___c__DisplayClass118_1&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER__UPDATELIGHTDATA_G__CHECKDISTANCEOFAXIS_118_7_OFFSET))(a, b, extent, a4);
		}

		static ::System::Void _UpdateLightData_g__SortLightsIfNeeded_118_5(::System::Collections::Generic::List_1<::System::Int32>* lights, ::System::Int32 maxCount, ::UnityEngine::Rendering::Universal::NapRenderEntityManager___c__DisplayClass118_0& a3)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::Int32>*, ::System::Int32, ::UnityEngine::Rendering::Universal::NapRenderEntityManager___c__DisplayClass118_0&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER__UPDATELIGHTDATA_G__SORTLIGHTSIFNEEDED_118_5_OFFSET))(lights, maxCount, a3);
		}

		static ::System::Void _UpdateLightData_g__SetPunctualLight_118_0(::NapRenderEntity* entity, ::UnityEngine::Rendering::Universal::NapCBProperty& offset, ::UnityEngine::Vector4& positionWS_halfInvSmoothness, ::UnityEngine::Vector3& forward, ::UnityEngine::Vector4& distanceAndSpotAttenuation, ::UnityEngine::Color& colorForCharacter)
		{
			return ((::System::Void(*)(::NapRenderEntity*, ::UnityEngine::Rendering::Universal::NapCBProperty&, ::UnityEngine::Vector4&, ::UnityEngine::Vector3&, ::UnityEngine::Vector4&, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER__UPDATELIGHTDATA_G__SETPUNCTUALLIGHT_118_0_OFFSET))(entity, offset, positionWS_halfInvSmoothness, forward, distanceAndSpotAttenuation, colorForCharacter);
		}

		static ::UnityEngine::NAPRenderPipeline0::NapLightData& _UpdateLightData_g__GetPunctualLightDataFromNapLightData_118_1(::System::Int32 lightIndex, ::UnityEngine::Vector4& positionWS_halfInvSmoothness)
		{
			return ((::UnityEngine::NAPRenderPipeline0::NapLightData&(*)(::System::Int32, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER__UPDATELIGHTDATA_G__GETPUNCTUALLIGHTDATAFROMNAPLIGHTDATA_118_1_OFFSET))(lightIndex, positionWS_halfInvSmoothness);
		}

		static ::UnityEngine::Color _UpdateLightData_g__GetPunctualLightDataFromComponent_118_2(::UnityEngine::Rendering::Universal::UniversalAdditionalLightData* uald, ::UnityEngine::Light* light, ::System::Single punctualLightFade, ::UnityEngine::Vector4& positionWS_halfInvSmoothness, ::UnityEngine::Vector3& forward, ::UnityEngine::Vector4& distanceAndSpotAttenuation, ::UnityEngine::Color& colorForCharacter)
		{
			return ((::UnityEngine::Color(*)(::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*, ::UnityEngine::Light*, ::System::Single, ::UnityEngine::Vector4&, ::UnityEngine::Vector3&, ::UnityEngine::Vector4&, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER__UPDATELIGHTDATA_G__GETPUNCTUALLIGHTDATAFROMCOMPONENT_118_2_OFFSET))(uald, light, punctualLightFade, positionWS_halfInvSmoothness, forward, distanceAndSpotAttenuation, colorForCharacter);
		}

		static ::System::Single _UpdateLightData_g__CalculateLightWeight_118_3(::UnityEngine::NAPRenderPipeline0::NapLightData lightData, ::NapRenderEntity* entity)
		{
			return ((::System::Single(*)(::UnityEngine::NAPRenderPipeline0::NapLightData, ::NapRenderEntity*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER__UPDATELIGHTDATA_G__CALCULATELIGHTWEIGHT_118_3_OFFSET))(lightData, entity);
		}

		static ::System::Single _UpdateLightData_g__DistanceAttenuationB_118_9(::System::Single distanceSquare, ::UnityEngine::Rendering::Universal::NapRenderEntityManager___c__DisplayClass118_2& a2)
		{
			return ((::System::Single(*)(::System::Single, ::UnityEngine::Rendering::Universal::NapRenderEntityManager___c__DisplayClass118_2&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER__UPDATELIGHTDATA_G__DISTANCEATTENUATIONB_118_9_OFFSET))(distanceSquare, a2);
		}

		static ::System::Single _UpdateLightData_g__AngleAttenuation_118_10(::UnityEngine::Rendering::Universal::NapRenderEntityManager___c__DisplayClass118_2& a1)
		{
			return ((::System::Single(*)(::UnityEngine::Rendering::Universal::NapRenderEntityManager___c__DisplayClass118_2&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER__UPDATELIGHTDATA_G__ANGLEATTENUATION_118_10_OFFSET))(a1);
		}

		static ::System::Int32 _UpdateLightData_g__GetKernel_118_4()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER__UPDATELIGHTDATA_G__GETKERNEL_118_4_OFFSET))();
		}
	};
}
