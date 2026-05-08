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

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERGENPASS_ADDBUFFERTRANSITION_OFFSET UNITYSDK_OFFSET(0x19B96DF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERGENPASS_ALLOCATERESOURCE_OFFSET UNITYSDK_OFFSET(0x19B93E10)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERGENPASS_CALCULATELODDISTANCESCALEFACTOR_OFFSET UNITYSDK_OFFSET(0x19B9D390)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERGENPASS_CALCULATEWATERGENCENTER_OFFSET UNITYSDK_OFFSET(0x19B9CE20)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERGENPASS_CHECKALLOCATEBUFFER_1_OFFSET UNITYSDK_OFFSET(0x19B94B80)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERGENPASS_CHECKALLOCATEBUFFER_OFFSET UNITYSDK_OFFSET(0x19B9D7C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERGENPASS_CHECKALLOCATETEXTURE_1_OFFSET UNITYSDK_OFFSET(0x19B9D8D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERGENPASS_CHECKALLOCATETEXTURE_OFFSET UNITYSDK_OFFSET(0x19B94C40)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERGENPASS_CHECKBUFFERVALID_OFFSET UNITYSDK_OFFSET(0x19B97880)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERGENPASS_CHECKTEXTUREVALID_OFFSET UNITYSDK_OFFSET(0x19B9D560)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERGENPASS_CLEANUP_OFFSET UNITYSDK_OFFSET(0x19B96B70)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERGENPASS_CREATEPLANEMESH_OFFSET UNITYSDK_OFFSET(0x19B926C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERGENPASS_DRAWGENWATER_OFFSET UNITYSDK_OFFSET(0x19B96F50)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERGENPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0x19B98510)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERGENPASS_GET_PATCHMESHFARLOD_OFFSET UNITYSDK_OFFSET(0x19B92C50)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERGENPASS_GET_PATCHMESHNEARLOD_OFFSET UNITYSDK_OFFSET(0x19B92520)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERGENPASS_GET_PATCHMESHNORMALLOD_OFFSET UNITYSDK_OFFSET(0x19B92E00)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERGENPASS_INITDYPARAMS_OFFSET UNITYSDK_OFFSET(0x19B92FB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERGENPASS_INITPARAMS_OFFSET UNITYSDK_OFFSET(0x19B92FF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERGENPASS_INITRESOURCE_OFFSET UNITYSDK_OFFSET(0x19B950C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERGENPASS_ONBRANCHEDNUMREADBACK_OFFSET UNITYSDK_OFFSET(0x19B95F90)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERGENPASS_ONCULLEDPATCHLISTNUMFARLODREADBACK_OFFSET UNITYSDK_OFFSET(0x19B95660)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERGENPASS_ONCULLEDPATCHLISTNUMNEARLODREADBACK_OFFSET UNITYSDK_OFFSET(0x19B958D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERGENPASS_ONCULLEDPATCHLISTNUMNORMALLODREADBACK_OFFSET UNITYSDK_OFFSET(0x19B95100)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERGENPASS_ONFINALNODELISTNUMFARLODREADBACK_OFFSET UNITYSDK_OFFSET(0x19B95CB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERGENPASS_ONFINALNODELISTNUMNEARLODREADBACK_OFFSET UNITYSDK_OFFSET(0x19B95E20)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERGENPASS_ONFINALNODELISTNUMNORMALLODREADBACK_OFFSET UNITYSDK_OFFSET(0x19B95B40)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERGENPASS_SAFERELEASEANDRESET_OFFSET UNITYSDK_OFFSET(0x19B9D720)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERGENPASS_SETUP_OFFSET UNITYSDK_OFFSET(0x19B96140)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERGENPASS_SET_PATCHMESHFARLOD_OFFSET UNITYSDK_OFFSET(0x19B92DF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERGENPASS_SET_PATCHMESHNEARLOD_OFFSET UNITYSDK_OFFSET(0x19B92C40)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERGENPASS_SET_PATCHMESHNORMALLOD_OFFSET UNITYSDK_OFFSET(0x19B92FA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERGENPASS_UPDATETOTALSTATS_OFFSET UNITYSDK_OFFSET(0x19B955A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERGENPASS__CCTOR_OFFSET UNITYSDK_OFFSET(0x19B9D9C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERGENPASS__CTOR_OFFSET UNITYSDK_OFFSET(0x19B93C10)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int WaterGenPass_TypeDefinitionIndex = 30540;

	class WaterGenPass : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
	{
	public:
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_WaterGenCenterForwardDistance()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x24240);
		}
		static ::Il2CppArray<::System::Single>** StaticGet_LODDistanceHigh()
		{
			return (::Il2CppArray<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x24248);
		}
		static ::Il2CppArray<::System::Single>** StaticGet_PatchSizeSqrtNearLOD()
		{
			return (::Il2CppArray<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x24250);
		}
		static ::Il2CppArray<::System::Single>** StaticGet_LODDistance()
		{
			return (::Il2CppArray<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x24258);
		}
		static ::Il2CppArray<::System::Single>** StaticGet_GridSizeSqrtNormalLOD()
		{
			return (::Il2CppArray<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x24260);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_NodeNumSqrtLOD()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x24268);
		}
		static ::Il2CppArray<::System::Single>** StaticGet_GridSizeSqrtFarLOD()
		{
			return (::Il2CppArray<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x24270);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_PatchNumPerNodeNormalLOD()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x24278);
		}
		static ::Il2CppArray<::System::Single>** StaticGet_GridSizeSqrtNearLOD()
		{
			return (::Il2CppArray<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x24280);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_WaterGenLodDistanceScaleFactor()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x24288);
		}
		static ::Il2CppArray<::System::Single>** StaticGet_PatchSizeSqrtFarLOD()
		{
			return (::Il2CppArray<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x24290);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_ChangeRateFarLOD()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x24298);
		}
		static ::Il2CppArray<::System::Single>** StaticGet_PatchSizeSqrtNormalLOD()
		{
			return (::Il2CppArray<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x242A0);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_WaterGenNodeEvalC()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x242A8);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_ChangeRateNearLOD()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x242B0);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_PatchNumPerNodeFarLOD()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x242B8);
		}
		static ::Il2CppArray<::System::Single>** StaticGet_LODDistanceLow()
		{
			return (::Il2CppArray<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x242C0);
		}
		static ::Il2CppArray<::System::Single>** StaticGet_LODDistanceMedium()
		{
			return (::Il2CppArray<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x242C8);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_ChangeRateNormalLOD()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x242D0);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_WaterGenGroundCullParam()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x242D8);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_NodeNumLOD()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x242E0);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_NodeSizeSqrtLOD()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x242E8);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_WaterEnableByCamera()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x242F0);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_PatchNumPerNodeNearLOD()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x242F8);
		}
		static ::System::Int32* StaticGet_MaxFinalNodeListNumNearLOD()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x6A00);
		}
		static ::System::Int32* StaticGet_NodeNumMaxFarLOD()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x6A04);
		}
		static ::System::Int32* StaticGet_GridNumSqrtMinNormalLOD()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x6A08);
		}
		static ::System::Int32* StaticGet_MAX_BUILDTREE_DISPATCH_GROUP_NUM_FAR_LOD()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x6A0C);
		}
		static ::System::Int32* StaticGet_PatchNumPerNodeSqrtMaxFarLOD()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x6A10);
		}
		static ::System::Int32* StaticGet_WaterNearSizeSqrt()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x6A14);
		}
		static ::System::Single* StaticGet_GridSizeSqrtMinNearLOD()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x6A18);
		}
		static ::System::Int32* StaticGet_BuildPatchDispatchThreadGroupSizeSqrt()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x6A1C);
		}
		static ::System::Int32* StaticGet_NodeNumMaxNormalLOD()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x6A20);
		}
		static ::System::Single* StaticGet_GridSizeSqrtMinFarLOD()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x6A24);
		}
		static ::System::Int32* StaticGet_PatchNumPerNodeMaxNormalLOD()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x6A28);
		}
		static ::System::Int32* StaticGet_NodeNumMaxNearLOD()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x6A2C);
		}
		static ::System::Int32* StaticGet_MAX_FINAL_NODE_LIST_NUM_NEAR_LOD()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x6A30);
		}
		static ::System::Int32* StaticGet_PatchNumPerNodeMaxFarLOD()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x6A34);
		}
		static ::System::Int32* StaticGet_MaxFinalNodeListNumFarLOD()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x6A38);
		}
		static ::System::Int32* StaticGet_BuildQuadDispatchThreadGroupSizeSqrt()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x6A3C);
		}
		static ::System::Int32* StaticGet_GridNumSqrtMinNearLOD()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x6A40);
		}
		static ::System::Int32* StaticGet_LODNodeTotalNum()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x6A44);
		}
		static ::System::Int32* StaticGet_BuildQuadDispatchThreadNum()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x6A48);
		}
		static ::System::Boolean* StaticGet_EnableDumpWaterGenInfo()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x6A4C);
		}
		static ::System::Int32* StaticGet_MAX_BUILDTREE_DISPATCH_GROUP_NUM_NORMAL_LOD()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x6A50);
		}
		static ::System::Int32* StaticGet_MaxFinalNodeListNumNormalLOD()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x6A54);
		}
		static ::System::Int32* StaticGet_MAX_FINAL_NODE_LIST_NUM_FAR_LOD()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x6A58);
		}
		static ::System::Int32* StaticGet_NodeNumSqrtMax()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x6A5C);
		}
		static ::System::Int32* StaticGet_WaterNormalSizeSqrt()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x6A60);
		}
		static ::System::Int32* StaticGet_MAX_FINAL_NODE_LIST_NUM_NORMAL_LOD()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x6A64);
		}
		static ::System::Int32* StaticGet_PatchNumPerNodeSqrtMaxNearLOD()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x6A68);
		}
		static ::System::Single* StaticGet_GridSizeSqrtMinNormalLOD()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x6A6C);
		}
		static ::System::Int32* StaticGet_BuildPatchDispatchThreadNum()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x6A70);
		}
		static ::System::Int32* StaticGet_PatchNumPerNodeSqrtMaxNormalLOD()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x6A74);
		}
		static ::System::Int32* StaticGet_PatchNumPerNodeMaxNearLOD()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x6A78);
		}
		static ::System::Int32* StaticGet_WaterTotalSizeSqrt()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x6A7C);
		}
		static ::System::Int32* StaticGet_MAX_BUILDTREE_DISPATCH_GROUP_NUM_NEAR_LOD()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x6A80);
		}
		static ::System::Int32* StaticGet_GridNumSqrtMinFarLOD()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x6A84);
		}
		static ::System::Int32* StaticGet_RenderPatchStripSize()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterGenPass_TypeDefinitionIndex)->GetStaticField(0x6A88);
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
		::UnityEngine::ComputeBuffer* m_FinalNodeListNumNearLOD; // 0xA8
		::UnityEngine::ComputeBuffer* m_BranchedNum; // 0xB0
		::Il2CppArray<::UnityEngine::Plane>* m_CullingPlanes; // 0xB8
		::Il2CppArray<::UnityEngine::Vector4>* m_WaterParams4LOD; // 0xC0
		::UnityEngine::ComputeBuffer* m_CulledPatchListFarLOD; // 0xC8
		::Il2CppArray<::UnityEngine::Vector4>* m_WaterParams2LOD; // 0xD0
		::Il2CppArray<::UnityEngine::Vector4>* m_WaterParams3LOD; // 0xD8
		::UnityEngine::ComputeBuffer* m_CulledPatchListNumFarLOD; // 0xE0
		::System::String* m_ProfilerTag; // 0xE8
		::UnityEngine::Mesh* m_PatchMeshNearLOD; // 0xF0
		::UnityEngine::ComputeBuffer* m_WaterTempNodeList1; // 0xF8
		::UnityEngine::ComputeBuffer* m_FinalNodeListNumFarLOD; // 0x100
		::Il2CppArray<::UnityEngine::Vector4>* m_WaterParams5LOD; // 0x108
		::UnityEngine::ComputeBuffer* m_WaterTempNodeList0; // 0x110
		::Il2CppArray<::UnityEngine::Vector4>* m_CullingPlanesParam; // 0x118
		::UnityEngine::ComputeBuffer* m_CulledPatchListNumNearLOD; // 0x120
		::UnityEngine::ComputeBuffer* m_WaterFinalNodeListFarLOD; // 0x128
		::UnityEngine::ComputeShader* m_WaterGenCS; // 0x130
		::UnityEngine::ComputeBuffer* m_FinalNodeListNumNormalLOD; // 0x138
		::UnityEngine::ComputeBuffer* m_WaterFinalNodeListNearLOD; // 0x140
		::UnityEngine::ComputeBuffer* m_CulledPatchListNormalLOD; // 0x148
		::UnityEngine::ComputeBuffer* m_WaterFinalNodeListNormalLOD; // 0x150
		::UnityEngine::Mesh* m_PatchMeshNormalLOD; // 0x158
		::Il2CppArray<::System::Int32>* m_NodeIDOffsetLOD; // 0x160
		::UnityEngine::ComputeBuffer* m_CulledPatchListNumNormalLOD; // 0x168
		::UnityEngine::ComputeBuffer* m_CulledPatchListNearLOD; // 0x170
		::UnityEngine::NAPRenderPipeline0::ProfilingSampler* m_ProfilingSampler; // 0x178
		::UnityEngine::RenderTexture* m_LodMap; // 0x180
		::Il2CppArray<::UnityEngine::Vector4>* m_WaterParamsLOD; // 0x188
		::UnityEngine::Mesh* m_PatchMeshFarLOD; // 0x190
		::System::Boolean bAllocated; // 0x198
		::System::Boolean isRenderWaterCamera; // 0x199

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
