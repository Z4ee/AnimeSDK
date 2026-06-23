#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ComputeBufferMode.h"
#include "unitysdk/UnityEngine/ComputeBufferType.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/CameraData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderPassEvent.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ScriptableRenderPass.h"
#include "unitysdk/UnityEngine/Plane.h"
#include "unitysdk/UnityEngine/RenderTextureFormat.h"
#include "unitysdk/UnityEngine/Rendering/AsyncGPUReadbackRequest.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine::NAPRenderPipeline0 { class ProfilingSampler; }
namespace UnityEngine::NAPRenderPipeline0 { template <typename T> class ConsoleVariableT_1; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERGENPASS_ADDBUFFERTRANSITION_OFFSET UNITYSDK_OFFSET(0x1BC2B020)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERGENPASS_ALLOCATERESOURCE_OFFSET UNITYSDK_OFFSET(0x1BC28040)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERGENPASS_CALCULATELODDISTANCESCALEFACTOR_OFFSET UNITYSDK_OFFSET(0x1BC31580)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERGENPASS_CALCULATEWATERGENCENTER_OFFSET UNITYSDK_OFFSET(0x1BC31010)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERGENPASS_CHECKALLOCATEBUFFER_1_OFFSET UNITYSDK_OFFSET(0x1BC28DB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERGENPASS_CHECKALLOCATEBUFFER_OFFSET UNITYSDK_OFFSET(0x1BC319B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERGENPASS_CHECKALLOCATETEXTURE_1_OFFSET UNITYSDK_OFFSET(0x1BC31AC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERGENPASS_CHECKALLOCATETEXTURE_OFFSET UNITYSDK_OFFSET(0x1BC28E70)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERGENPASS_CHECKBUFFERVALID_OFFSET UNITYSDK_OFFSET(0x1BC2BAB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERGENPASS_CHECKTEXTUREVALID_OFFSET UNITYSDK_OFFSET(0x1BC31750)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERGENPASS_CLEANUP_OFFSET UNITYSDK_OFFSET(0x1BC2ADA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERGENPASS_CREATEPLANEMESH_OFFSET UNITYSDK_OFFSET(0x1BC26890)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERGENPASS_DRAWGENWATER_OFFSET UNITYSDK_OFFSET(0x1BC2B180)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERGENPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1BC2C740)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERGENPASS_GET_PATCHMESHFARLOD_OFFSET UNITYSDK_OFFSET(0x1BC26E20)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERGENPASS_GET_PATCHMESHNEARLOD_OFFSET UNITYSDK_OFFSET(0x1BC266F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERGENPASS_GET_PATCHMESHNORMALLOD_OFFSET UNITYSDK_OFFSET(0x1BC26FD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERGENPASS_INITDYPARAMS_OFFSET UNITYSDK_OFFSET(0x1BC27180)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERGENPASS_INITPARAMS_OFFSET UNITYSDK_OFFSET(0x1BC271C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERGENPASS_INITRESOURCE_OFFSET UNITYSDK_OFFSET(0x1BC292F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERGENPASS_ONBRANCHEDNUMREADBACK_OFFSET UNITYSDK_OFFSET(0x1BC2A1C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERGENPASS_ONCULLEDPATCHLISTNUMFARLODREADBACK_OFFSET UNITYSDK_OFFSET(0x1BC29890)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERGENPASS_ONCULLEDPATCHLISTNUMNEARLODREADBACK_OFFSET UNITYSDK_OFFSET(0x1BC29B00)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERGENPASS_ONCULLEDPATCHLISTNUMNORMALLODREADBACK_OFFSET UNITYSDK_OFFSET(0x1BC29330)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERGENPASS_ONFINALNODELISTNUMFARLODREADBACK_OFFSET UNITYSDK_OFFSET(0x1BC29EE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERGENPASS_ONFINALNODELISTNUMNEARLODREADBACK_OFFSET UNITYSDK_OFFSET(0x1BC2A050)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERGENPASS_ONFINALNODELISTNUMNORMALLODREADBACK_OFFSET UNITYSDK_OFFSET(0x1BC29D70)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERGENPASS_SAFERELEASEANDRESET_OFFSET UNITYSDK_OFFSET(0x1BC31910)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERGENPASS_SETUP_OFFSET UNITYSDK_OFFSET(0x1BC2A370)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERGENPASS_SET_PATCHMESHFARLOD_OFFSET UNITYSDK_OFFSET(0x1BC26FC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERGENPASS_SET_PATCHMESHNEARLOD_OFFSET UNITYSDK_OFFSET(0x1BC26E10)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERGENPASS_SET_PATCHMESHNORMALLOD_OFFSET UNITYSDK_OFFSET(0x1BC27170)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERGENPASS_UPDATETOTALSTATS_OFFSET UNITYSDK_OFFSET(0x1BC297D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERGENPASS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BC31BB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERGENPASS__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC27DE0)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int WaterGenPass_TypeDefinitionIndex = 26479;

	class WaterGenPass : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
	{
	public:
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_WaterGenGroundCullParam()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x21A40);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_ChangeRateFarLOD()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x21A48);
		}
		static ::Il2CppArray<::System::Single>** StaticGet_LODDistanceMedium()
		{
			return (::Il2CppArray<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x21A50);
		}
		static ::Il2CppArray<::System::Single>** StaticGet_PatchSizeSqrtNearLOD()
		{
			return (::Il2CppArray<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x21A58);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_WaterEnableByCamera()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x21A60);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_WaterGenLodDistanceScaleFactor()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x21A68);
		}
		static ::Il2CppArray<::System::Single>** StaticGet_PatchSizeSqrtNormalLOD()
		{
			return (::Il2CppArray<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x21A70);
		}
		static ::Il2CppArray<::System::Single>** StaticGet_LODDistance()
		{
			return (::Il2CppArray<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x21A78);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_PatchNumPerNodeFarLOD()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x21A80);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_PatchNumPerNodeNearLOD()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x21A88);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_NodeNumSqrtLOD()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x21A90);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_ChangeRateNearLOD()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x21A98);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_ChangeRateNormalLOD()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x21AA0);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_NodeNumLOD()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x21AA8);
		}
		static ::Il2CppArray<::System::Single>** StaticGet_GridSizeSqrtNormalLOD()
		{
			return (::Il2CppArray<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x21AB0);
		}
		static ::Il2CppArray<::System::Single>** StaticGet_LODDistanceLow()
		{
			return (::Il2CppArray<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x21AB8);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_WaterGenNodeEvalC()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x21AC0);
		}
		static ::Il2CppArray<::System::Single>** StaticGet_GridSizeSqrtNearLOD()
		{
			return (::Il2CppArray<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x21AC8);
		}
		static ::Il2CppArray<::System::Single>** StaticGet_GridSizeSqrtFarLOD()
		{
			return (::Il2CppArray<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x21AD0);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_s_waterGenParams()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x21AD8);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_PatchNumPerNodeNormalLOD()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x21AE0);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_NodeSizeSqrtLOD()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x21AE8);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_WaterGenCenterForwardDistance()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x21AF0);
		}
		static ::Il2CppArray<::System::Single>** StaticGet_LODDistanceHigh()
		{
			return (::Il2CppArray<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x21AF8);
		}
		static ::Il2CppArray<::System::Single>** StaticGet_PatchSizeSqrtFarLOD()
		{
			return (::Il2CppArray<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x21B00);
		}
		static ::System::Int32* StaticGet_PatchNumPerNodeMaxNormalLOD()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x6640);
		}
		static ::System::Int32* StaticGet_LODNodeTotalNum()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x6644);
		}
		static ::System::Int32* StaticGet_MaxFinalNodeListNumNearLOD()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x6648);
		}
		static ::System::Int32* StaticGet_PatchNumPerNodeSqrtMaxFarLOD()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x664C);
		}
		static ::System::Int32* StaticGet_WaterNearSizeSqrt()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x6650);
		}
		static ::System::Single* StaticGet_GridSizeSqrtMinFarLOD()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x6654);
		}
		static ::System::Int32* StaticGet_MaxFinalNodeListNumFarLOD()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x6658);
		}
		static ::System::Int32* StaticGet_NodeNumMaxNormalLOD()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x665C);
		}
		static ::System::Int32* StaticGet_MAX_FINAL_NODE_LIST_NUM_NORMAL_LOD()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x6660);
		}
		static ::System::Boolean* StaticGet_EnableDumpWaterGenInfo()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x6664);
		}
		static ::System::Int32* StaticGet_RenderPatchStripSize()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x6668);
		}
		static ::System::Int32* StaticGet_MAX_FINAL_NODE_LIST_NUM_NEAR_LOD()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x666C);
		}
		static ::System::Int32* StaticGet_GridNumSqrtMinFarLOD()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x6670);
		}
		static ::System::Int32* StaticGet_MaxFinalNodeListNumNormalLOD()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x6674);
		}
		static ::System::Int32* StaticGet_MAX_FINAL_NODE_LIST_NUM_FAR_LOD()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x6678);
		}
		static ::System::Int32* StaticGet_GridNumSqrtMinNearLOD()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x667C);
		}
		static ::System::Int32* StaticGet_PatchNumPerNodeSqrtMaxNormalLOD()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x6680);
		}
		static ::System::Int32* StaticGet_NodeNumMaxNearLOD()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x6684);
		}
		static ::System::Int32* StaticGet_PatchNumPerNodeMaxFarLOD()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x6688);
		}
		static ::System::Int32* StaticGet_BuildQuadDispatchThreadNum()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x668C);
		}
		static ::System::Int32* StaticGet_WaterTotalSizeSqrt()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x6690);
		}
		static ::System::Single* StaticGet_GridSizeSqrtMinNormalLOD()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x6694);
		}
		static ::System::Int32* StaticGet_MAX_BUILDTREE_DISPATCH_GROUP_NUM_NORMAL_LOD()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x6698);
		}
		static ::System::Int32* StaticGet_NodeNumSqrtMax()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x669C);
		}
		static ::System::Int32* StaticGet_WaterNormalSizeSqrt()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x66A0);
		}
		static ::System::Single* StaticGet_GridSizeSqrtMinNearLOD()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x66A4);
		}
		static ::System::Int32* StaticGet_PatchNumPerNodeMaxNearLOD()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x66A8);
		}
		static ::System::Int32* StaticGet_MAX_BUILDTREE_DISPATCH_GROUP_NUM_FAR_LOD()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x66AC);
		}
		static ::System::Int32* StaticGet_NodeNumMaxFarLOD()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x66B0);
		}
		static ::System::Int32* StaticGet_BuildPatchDispatchThreadNum()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x66B4);
		}
		static ::System::Int32* StaticGet_BuildPatchDispatchThreadGroupSizeSqrt()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x66B8);
		}
		static ::System::Int32* StaticGet_BuildQuadDispatchThreadGroupSizeSqrt()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x66BC);
		}
		static ::System::Int32* StaticGet_PatchNumPerNodeSqrtMaxNearLOD()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x66C0);
		}
		static ::System::Int32* StaticGet_MAX_BUILDTREE_DISPATCH_GROUP_NUM_NEAR_LOD()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x66C4);
		}
		static ::System::Int32* StaticGet_GridNumSqrtMinNormalLOD()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x66C8);
		}
		// static const ::System::Int32 ClearResourceID = 0x0; // 0x0
		// static const ::System::Int32 BuildQuadTreeID = 0x1; // 0x0
		// static const ::System::Int32 BuildLodMapID = 0x2; // 0x0
		// static const ::System::Int32 BuildRenderPatchID = 0x3; // 0x0
		// static const ::System::Int32 BuildQuadTreeNoGroundCullID = 0x4; // 0x0
		// static const ::System::Int32 BuildRenderPatchNoGroundCullID = 0x5; // 0x0
		// static const ::System::Int32 BuildLodMapFromNodesID = 0x6; // 0x0
		// static const ::System::Int32 LODTotalCount = 0x9; // 0x0
		// static const ::System::Int32 NearLODCount = 0x3; // 0x0
		// static const ::System::Int32 NormalLODCount = 0x3; // 0x0
		// static const ::System::Int32 FarLODCount = 0x3; // 0x0
		// static const ::System::Int32 MaxCulledPatchNumNormalLOD = 0x100; // 0x0
		// static const ::System::Int32 MaxCulledPatchNumNearLOD = 0x100; // 0x0
		// static const ::System::Int32 MaxCulledPatchNumFarLOD = 0x80; // 0x0
		::Il2CppArray<::UnityEngine::Vector4>* m_WaterParamsLOD; // 0xA8
		::Il2CppArray<::UnityEngine::Vector4>* m_WaterParams3LOD; // 0xB0
		::Il2CppArray<::System::Int32>* m_buildPatchParamsNear; // 0xB8
		::Il2CppArray<::System::Int32>* m_buildPatchParamsFar; // 0xC0
		::UnityEngine::ComputeBuffer* m_CulledPatchListNormalLOD; // 0xC8
		::UnityEngine::ComputeBuffer* m_BranchedNum; // 0xD0
		::UnityEngine::ComputeBuffer* m_CulledPatchListNumNormalLOD; // 0xD8
		::UnityEngine::ComputeBuffer* m_CulledPatchListNumFarLOD; // 0xE0
		::Il2CppArray<::UnityEngine::Plane>* m_CullingPlanes; // 0xE8
		::UnityEngine::ComputeBuffer* m_WaterFinalNodeListNormalLOD; // 0xF0
		::UnityEngine::ComputeBuffer* m_FinalNodeListNumFarLOD; // 0xF8
		::UnityEngine::Mesh* m_PatchMeshNormalLOD; // 0x100
		::UnityEngine::ComputeBuffer* m_WaterTempNodeList0; // 0x108
		::Il2CppArray<::UnityEngine::Vector4>* m_CullingPlanesParam; // 0x110
		::UnityEngine::Mesh* m_PatchMeshFarLOD; // 0x118
		::UnityEngine::ComputeShader* m_WaterGenCS; // 0x120
		::UnityEngine::NAPRenderPipeline0::ProfilingSampler* m_ProfilingSampler; // 0x128
		::UnityEngine::RenderTexture* m_LodMap; // 0x130
		::UnityEngine::ComputeBuffer* m_CulledPatchListNearLOD; // 0x138
		::UnityEngine::ComputeBuffer* m_WaterFinalNodeListFarLOD; // 0x140
		::UnityEngine::ComputeBuffer* m_CulledPatchListFarLOD; // 0x148
		::Il2CppArray<::UnityEngine::Vector4>* m_WaterParams5LOD; // 0x150
		::Il2CppArray<::System::Int32>* m_buildPatchParamsNormal; // 0x158
		::UnityEngine::ComputeBuffer* m_FinalNodeListNumNormalLOD; // 0x160
		::Il2CppArray<::UnityEngine::Vector4>* m_WaterParams2LOD; // 0x168
		::Il2CppArray<::System::Int32>* m_NodeIDOffsetLOD; // 0x170
		::Il2CppArray<::UnityEngine::Vector4>* m_WaterParams4LOD; // 0x178
		::UnityEngine::ComputeBuffer* m_CulledPatchListNumNearLOD; // 0x180
		::UnityEngine::ComputeBuffer* m_WaterFinalNodeListNearLOD; // 0x188
		::UnityEngine::ComputeBuffer* m_WaterTempNodeList1; // 0x190
		::UnityEngine::Mesh* m_PatchMeshNearLOD; // 0x198
		::Il2CppArray<::System::Int32>* m_patchMeshIndexCountParams; // 0x1A0
		::UnityEngine::ComputeBuffer* m_FinalNodeListNumNearLOD; // 0x1A8
		::System::String* m_ProfilerTag; // 0x1B0
		::System::Boolean isRenderWaterCamera; // 0x1B8
		::System::Boolean bAllocated; // 0x1B9

		::System::Void _ctor(::System::String* profilerTag, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent>* renderPassEventConfig, ::UnityEngine::ComputeShader* waterGenCS)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent>*, ::UnityEngine::ComputeShader*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERGENPASS__CTOR_OFFSET))(this, profilerTag, renderPassEventConfig, waterGenCS);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERGENPASS__CCTOR_OFFSET))();
		}

		::UnityEngine::Mesh* get_PatchMeshNearLOD()
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERGENPASS_GET_PATCHMESHNEARLOD_OFFSET))(this);
		}

		::System::Void set_PatchMeshNearLOD(::UnityEngine::Mesh* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERGENPASS_SET_PATCHMESHNEARLOD_OFFSET))(this, value);
		}

		::UnityEngine::Mesh* get_PatchMeshFarLOD()
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERGENPASS_GET_PATCHMESHFARLOD_OFFSET))(this);
		}

		::System::Void set_PatchMeshFarLOD(::UnityEngine::Mesh* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERGENPASS_SET_PATCHMESHFARLOD_OFFSET))(this, value);
		}

		::UnityEngine::Mesh* get_PatchMeshNormalLOD()
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERGENPASS_GET_PATCHMESHNORMALLOD_OFFSET))(this);
		}

		::System::Void set_PatchMeshNormalLOD(::UnityEngine::Mesh* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERGENPASS_SET_PATCHMESHNORMALLOD_OFFSET))(this, value);
		}

		::System::Void InitDyParams()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERGENPASS_INITDYPARAMS_OFFSET))(this);
		}

		::System::Void InitParams()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERGENPASS_INITPARAMS_OFFSET))(this);
		}

		::System::Void AllocateResource()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERGENPASS_ALLOCATERESOURCE_OFFSET))(this);
		}

		::System::Void InitResource()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERGENPASS_INITRESOURCE_OFFSET))(this);
		}

		::System::Void OnCulledPatchListNumNormalLODReadBack(::UnityEngine::Rendering::AsyncGPUReadbackRequest request)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::AsyncGPUReadbackRequest))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERGENPASS_ONCULLEDPATCHLISTNUMNORMALLODREADBACK_OFFSET))(this, request);
		}

		::System::Void OnCulledPatchListNumFarLODReadBack(::UnityEngine::Rendering::AsyncGPUReadbackRequest request)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::AsyncGPUReadbackRequest))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERGENPASS_ONCULLEDPATCHLISTNUMFARLODREADBACK_OFFSET))(this, request);
		}

		::System::Void OnCulledPatchListNumNearLODReadBack(::UnityEngine::Rendering::AsyncGPUReadbackRequest request)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::AsyncGPUReadbackRequest))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERGENPASS_ONCULLEDPATCHLISTNUMNEARLODREADBACK_OFFSET))(this, request);
		}

		::System::Void OnFinalNodeListNumNormalLODReadBack(::UnityEngine::Rendering::AsyncGPUReadbackRequest request)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::AsyncGPUReadbackRequest))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERGENPASS_ONFINALNODELISTNUMNORMALLODREADBACK_OFFSET))(this, request);
		}

		::System::Void OnFinalNodeListNumFarLODReadBack(::UnityEngine::Rendering::AsyncGPUReadbackRequest request)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::AsyncGPUReadbackRequest))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERGENPASS_ONFINALNODELISTNUMFARLODREADBACK_OFFSET))(this, request);
		}

		::System::Void OnFinalNodeListNumNearLODReadBack(::UnityEngine::Rendering::AsyncGPUReadbackRequest request)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::AsyncGPUReadbackRequest))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERGENPASS_ONFINALNODELISTNUMNEARLODREADBACK_OFFSET))(this, request);
		}

		::System::Void OnBranchedNumReadBack(::UnityEngine::Rendering::AsyncGPUReadbackRequest request)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::AsyncGPUReadbackRequest))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERGENPASS_ONBRANCHEDNUMREADBACK_OFFSET))(this, request);
		}

		::System::Void UpdateTotalStats()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERGENPASS_UPDATETOTALSTATS_OFFSET))(this);
		}

		::System::Void Setup(::UnityEngine::NAPRenderPipeline0::CameraData cameraData, ::System::Boolean isPreviewOrUIOrReflectionCamera)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CameraData, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERGENPASS_SETUP_OFFSET))(this, cameraData, isPreviewOrUIOrReflectionCamera);
		}

		::System::Void AddBufferTransition(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERGENPASS_ADDBUFFERTRANSITION_OFFSET))(this, context, cmd);
		}

		::System::Void DrawGenWater(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::Rendering::CommandBuffer* cmd, ::System::Int32 shaderPass)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::Rendering::CommandBuffer*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERGENPASS_DRAWGENWATER_OFFSET))(this, context, cmd, shaderPass);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERGENPASS_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}

		::System::Void SafeReleaseAndReset(::UnityEngine::ComputeBuffer*& computeBuffer)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeBuffer*&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERGENPASS_SAFERELEASEANDRESET_OFFSET))(this, computeBuffer);
		}

		::System::Void CleanUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERGENPASS_CLEANUP_OFFSET))(this);
		}

		static ::UnityEngine::Mesh* CreatePlaneMesh(::System::Int32 totalSize, ::System::Single unitSize)
		{
			return ((::UnityEngine::Mesh*(*)(::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERGENPASS_CREATEPLANEMESH_OFFSET))(totalSize, unitSize);
		}

		::System::Boolean CheckAllocateTexture(::UnityEngine::RenderTexture*& texture, ::System::Int32 height, ::System::Int32 width, ::UnityEngine::RenderTextureFormat format)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RenderTexture*&, ::System::Int32, ::System::Int32, ::UnityEngine::RenderTextureFormat))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERGENPASS_CHECKALLOCATETEXTURE_OFFSET))(this, texture, height, width, format);
		}

		::System::Boolean CheckAllocateBuffer(::UnityEngine::ComputeBuffer*& buffer, ::System::Int32 stride, ::System::Int32 count, ::UnityEngine::ComputeBufferType type, ::UnityEngine::ComputeBufferMode mode)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ComputeBuffer*&, ::System::Int32, ::System::Int32, ::UnityEngine::ComputeBufferType, ::UnityEngine::ComputeBufferMode))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERGENPASS_CHECKALLOCATEBUFFER_OFFSET))(this, buffer, stride, count, type, mode);
		}

		::System::Boolean CheckAllocateBuffer_1(::UnityEngine::ComputeBuffer*& buffer, ::System::Int32 stride, ::System::Int32 count, ::System::String* bufferName, ::UnityEngine::ComputeBufferType type, ::UnityEngine::ComputeBufferMode mode)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ComputeBuffer*&, ::System::Int32, ::System::Int32, ::System::String*, ::UnityEngine::ComputeBufferType, ::UnityEngine::ComputeBufferMode))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERGENPASS_CHECKALLOCATEBUFFER_1_OFFSET))(this, buffer, stride, count, bufferName, type, mode);
		}

		::System::Boolean CheckAllocateTexture_1(::UnityEngine::RenderTexture*& texture, ::System::Int32 height, ::System::Int32 width, ::System::String* textureName, ::UnityEngine::RenderTextureFormat format)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RenderTexture*&, ::System::Int32, ::System::Int32, ::System::String*, ::UnityEngine::RenderTextureFormat))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERGENPASS_CHECKALLOCATETEXTURE_1_OFFSET))(this, texture, height, width, textureName, format);
		}

		static ::System::Boolean CheckBufferValid(::UnityEngine::ComputeBuffer*& buffer)
		{
			return ((::System::Boolean(*)(::UnityEngine::ComputeBuffer*&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERGENPASS_CHECKBUFFERVALID_OFFSET))(buffer);
		}

		::System::Boolean CheckTextureValid(::UnityEngine::RenderTexture*& texture)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RenderTexture*&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERGENPASS_CHECKTEXTUREVALID_OFFSET))(this, texture);
		}

		::UnityEngine::Vector3 CalculateWaterGenCenter(::UnityEngine::Camera* camera)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERGENPASS_CALCULATEWATERGENCENTER_OFFSET))(this, camera);
		}

		::System::Single CalculateLodDistanceScaleFactor(::UnityEngine::Camera* camera)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERGENPASS_CALCULATELODDISTANCESCALEFACTOR_OFFSET))(this, camera);
		}
	};
}
