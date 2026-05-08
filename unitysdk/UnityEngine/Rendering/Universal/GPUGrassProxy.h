#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Plane.h"
#include "unitysdk/UnityEngine/Rendering/ShadowDrawingSettings.h"
#include "unitysdk/UnityEngine/Rendering/Universal/CachedGrassRenderItemData.h"
#include "unitysdk/UnityEngine/Rendering/Universal/GPUGrassInstanceData.h"
#include "unitysdk/UnityEngine/Rendering/Universal/GPUGrassProxy_GroupBaseData.h"
#include "unitysdk/UnityEngine/Rendering/Universal/GpuGrassShadowType.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering::Universal { class GPUGrassProxy_GroupData; }
namespace UnityEngine::Rendering::Universal { class GPUGrassSettings; }

#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_CHECKBUFFERVALID_OFFSET UNITYSDK_OFFSET(0x1A699260)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_CHECKINDIRECTDRAWDATA_OFFSET UNITYSDK_OFFSET(0x1A69D0E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_CHECKISVISIBLE_OFFSET UNITYSDK_OFFSET(0x1A69A0B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_DRAWGPUGRASSFORSOFTEDGE_OFFSET UNITYSDK_OFFSET(0x1A69CE30)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_DRAWGPUGRASSSHADOW_OFFSET UNITYSDK_OFFSET(0x1A69C1C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_DRAWGPUGRASS_OFFSET UNITYSDK_OFFSET(0x1A69CB40)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_DRAWMESHWITHINDIRECTDRAW_OFFSET UNITYSDK_OFFSET(0x1A69D930)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_DRAWWITHBATCH_OFFSET UNITYSDK_OFFSET(0x1A69C3B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_GETGROUPBASEDATA_OFFSET UNITYSDK_OFFSET(0x1A696F70)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_GET_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x1A6996A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1A69AB70)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1A6996C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_PREPAREGPUDRAWDATA_OFFSET UNITYSDK_OFFSET(0x1A69B780)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_PREPAREGROUPDATAFORCUSTOMGRASS_OFFSET UNITYSDK_OFFSET(0x1A6988F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_PREPAREGROUPDATAFORMASKGRASS_OFFSET UNITYSDK_OFFSET(0x1A698450)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_PREPAREGROUPDATA_OFFSET UNITYSDK_OFFSET(0x1A697140)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_REFRESHBOUNDINGBOX_OFFSET UNITYSDK_OFFSET(0x1A697A60)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_RESETGROUPDATA_OFFSET UNITYSDK_OFFSET(0x1A698230)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_RESETTEMPGROUPDATA_OFFSET UNITYSDK_OFFSET(0x1A698D90)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_REVERTDISABLEEDIT_OFFSET UNITYSDK_OFFSET(0x1A6992C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_SET_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x1A6996B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_SYNCCACHEDDATARENDERDATATOINSTANCEDATA_OFFSET UNITYSDK_OFFSET(0x1A699780)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_UPDATETEXTURESTREAMINGFAKER_OFFSET UNITYSDK_OFFSET(0x1A69B040)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_UPDATE_OFFSET UNITYSDK_OFFSET(0x1A69ACD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A69DFA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x1A69DD20)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int GPUGrassProxy_TypeDefinitionIndex = 30240;

	class GPUGrassProxy : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::Il2CppArray<::UnityEngine::Matrix4x4>** StaticGet_m_LocalToWorldMatrixArrayForGPUGrass()
		{
			return (::Il2CppArray<::UnityEngine::Matrix4x4>**)Il2CppClass::FromTypeDefinitionIndex(GPUGrassProxy_TypeDefinitionIndex)->GetStaticField(0x24520);
		}
		static ::Il2CppArray<::UnityEngine::Matrix4x4>** StaticGet_m_GPUGrassParams()
		{
			return (::Il2CppArray<::UnityEngine::Matrix4x4>**)Il2CppClass::FromTypeDefinitionIndex(GPUGrassProxy_TypeDefinitionIndex)->GetStaticField(0x24528);
		}
		static ::System::Int64* StaticGet_sumGrassMeshCount()
		{
			return (::System::Int64*)Il2CppClass::FromTypeDefinitionIndex(GPUGrassProxy_TypeDefinitionIndex)->GetStaticField(0x6E20);
		}
		static ::System::Int32* StaticGet__GrassInstanceBuffer()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GPUGrassProxy_TypeDefinitionIndex)->GetStaticField(0x6E28);
		}
		static ::System::Int32* StaticGet__GPUGrassParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GPUGrassProxy_TypeDefinitionIndex)->GetStaticField(0x6E2C);
		}
		// static const ::System::Boolean USE_INDIRECT_DRAW; // 0x0
		// static const ::System::Int32 kMaxGPUGrassBatchCount = 0xFA; // 0x0
		::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::GPUGrassProxy_GroupData*>* m_ValidGroupDataList; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::GPUGrassProxy_GroupData*>* m_ValidGroupDataListLevel2; // 0x20
		::System::Single m_GroupCeilSize; // 0x28
		::UnityEngine::Bounds m_BoundingBox; // 0x2C
		::Il2CppArray<::UnityEngine::Rendering::Universal::GPUGrassProxy_GroupData*>* _tempGroupDataList; // 0x48
		::Il2CppArray<::UnityEngine::Rendering::Universal::GPUGrassProxy_GroupData*>* _tempGroupDataListLevel2; // 0x50
		::System::Boolean disableEdit; // 0x58
		::UnityEngine::Rendering::Universal::GPUGrassSettings* m_GrassSettings; // 0x60
		::System::Int32 maxCount; // 0x68
		::UnityEngine::Rendering::Universal::GpuGrassShadowType grassShadowType; // 0x6C
		::Il2CppArray<::UnityEngine::Rendering::Universal::CachedGrassRenderItemData>* cachedGrassRenderItemData; // 0x70
		::Il2CppArray<::UnityEngine::Rendering::Universal::CachedGrassRenderItemData>* cachedCustomGrassRenderItemData; // 0x78
		::System::Single brushDensity; // 0x80
		::System::Int32 localLodBias; // 0x84
		::System::Single globalWindIntensity; // 0x88
		::System::String* grassMaskTextureName; // 0x90
		::UnityEngine::ComputeBuffer* m_IndirectDrawArgsForLod0; // 0x98
		::UnityEngine::ComputeBuffer* m_IndirectDrawArgsForLod1; // 0xA0
		::UnityEngine::ComputeBuffer* m_IndirectDrawArgsForLod2; // 0xA8
		::UnityEngine::ComputeBuffer* m_GPUGrassDataForLod0; // 0xB0
		::UnityEngine::ComputeBuffer* m_GPUGrassDataForLod1; // 0xB8
		::UnityEngine::ComputeBuffer* m_GPUGrassDataForLod2; // 0xC0
		::Il2CppArray<::System::UInt32>* m_IndirectDrawArgsData; // 0xC8
		::Il2CppArray<::System::UInt32>* m_IndirectDrawArgsDataForLod1; // 0xD0
		::Il2CppArray<::System::UInt32>* m_IndirectDrawArgsDataForLod2; // 0xD8
		::Il2CppArray<::UnityEngine::Rendering::Universal::GPUGrassInstanceData>* m_GrassInstanceData; // 0xE0
		::Il2CppArray<::UnityEngine::Rendering::Universal::GPUGrassInstanceData>* m_VisibleGrassInstanceDataForLod0; // 0xE8
		::Il2CppArray<::UnityEngine::Rendering::Universal::GPUGrassInstanceData>* m_VisibleGrassInstanceDataForLod1; // 0xF0
		::Il2CppArray<::UnityEngine::Rendering::Universal::GPUGrassInstanceData>* m_VisibleGrassInstanceDataForLod2; // 0xF8
		::System::Boolean _IsVisible_k__BackingField; // 0x100
		::UnityEngine::Camera* visibleCheckCamera; // 0x108
		::System::Int32 visibleGroupCount; // 0x110
		::UnityEngine::Matrix4x4 preLocalToWorldMatrix; // 0x114
		::System::Single preGroupCeilSize; // 0x154
		::System::Single m_TSTickTimes; // 0x158
		::System::Boolean m_TSFakerIsVisiable; // 0x15C
		::UnityEngine::Vector2 cachedBendValue; // 0x160
		::System::Int32 sumLod0Index; // 0x168
		::System::Int32 sumLod1Index; // 0x16C
		::System::Int32 sumLod2Index; // 0x170
		::System::Int64 grassMeshCountForDebug; // 0x178
		::UnityEngine::GameObject* m_TextureStreamingFaker; // 0x180
		::System::Collections::Generic::List_1<::UnityEngine::MaterialPropertyBlock*>* propertyBlocks; // 0x188

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY__CCTOR_OFFSET))();
		}

		::System::Void GetGroupBaseData(::UnityEngine::Rendering::Universal::GPUGrassProxy_GroupBaseData& groupBaseData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::GPUGrassProxy_GroupBaseData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_GETGROUPBASEDATA_OFFSET))(this, groupBaseData);
		}

		::System::Void PrepareGroupData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_PREPAREGROUPDATA_OFFSET))(this);
		}

		::System::Void ResetGroupData(::UnityEngine::Rendering::Universal::GPUGrassProxy_GroupBaseData groupBaseData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::GPUGrassProxy_GroupBaseData))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_RESETGROUPDATA_OFFSET))(this, groupBaseData);
		}

		::System::Void ResetTempGroupData(::Il2CppArray<::UnityEngine::Rendering::Universal::GPUGrassProxy_GroupData*>* tempDataList, ::System::Int32 xGridCount, ::System::Int32 yGridCount, ::UnityEngine::Vector3 groupSize, ::UnityEngine::Vector3 min)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Rendering::Universal::GPUGrassProxy_GroupData*>*, ::System::Int32, ::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_RESETTEMPGROUPDATA_OFFSET))(this, tempDataList, xGridCount, yGridCount, groupSize, min);
		}

		::System::Void PrepareGroupDataForMaskGrass()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_PREPAREGROUPDATAFORMASKGRASS_OFFSET))(this);
		}

		::System::Void PrepareGroupDataForCustomGrass()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_PREPAREGROUPDATAFORCUSTOMGRASS_OFFSET))(this);
		}

		static ::System::Boolean CheckBufferValid(::UnityEngine::ComputeBuffer*& buffer)
		{
			return ((::System::Boolean(*)(::UnityEngine::ComputeBuffer*&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_CHECKBUFFERVALID_OFFSET))(buffer);
		}

		::System::Void RevertDisableEdit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_REVERTDISABLEEDIT_OFFSET))(this);
		}

		::System::Boolean get_IsVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_GET_ISVISIBLE_OFFSET))(this);
		}

		::System::Void set_IsVisible(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_SET_ISVISIBLE_OFFSET))(this, value);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_ONENABLE_OFFSET))(this);
		}

		::System::Boolean CheckIsVisible(::UnityEngine::Camera* camera, ::UnityEngine::Vector3 cameraPosition, ::Il2CppArray<::UnityEngine::Plane>* planes, ::System::Single distanceCullingBias)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::Plane>*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_CHECKISVISIBLE_OFFSET))(this, camera, cameraPosition, planes, distanceCullingBias);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_ONDISABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_UPDATE_OFFSET))(this);
		}

		::System::Void PrepareGPUDrawData(::UnityEngine::Rendering::CommandBuffer* cmd, ::System::Int32 cachedGlobalLodBias)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_PREPAREGPUDRAWDATA_OFFSET))(this, cmd, cachedGlobalLodBias);
		}

		::System::Void DrawGPUGrassShadow(::UnityEngine::Rendering::ShadowDrawingSettings& settings, ::System::Int32 sliceIndex, ::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::Universal::GpuGrassShadowType globalShadowType)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ShadowDrawingSettings&, ::System::Int32, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::GpuGrassShadowType))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_DRAWGPUGRASSSHADOW_OFFSET))(this, settings, sliceIndex, cmd, globalShadowType);
		}

		::System::Void DrawGPUGrass(::UnityEngine::Rendering::CommandBuffer* cmd, ::System::Boolean enableDither)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_DRAWGPUGRASS_OFFSET))(this, cmd, enableDither);
		}

		::System::Void DrawGPUGrassForSoftEdge(::UnityEngine::Rendering::CommandBuffer* cmd, ::System::Boolean enableDither)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_DRAWGPUGRASSFORSOFTEDGE_OFFSET))(this, cmd, enableDither);
		}

		::System::Void UpdateTextureStreamingFaker(::UnityEngine::Material* material)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_UPDATETEXTURESTREAMINGFAKER_OFFSET))(this, material);
		}

		::System::Void CheckIndirectDrawData(::System::Int32 sumCount, ::UnityEngine::ComputeBuffer*& gpuGrassDta, ::Il2CppArray<::UnityEngine::Rendering::Universal::GPUGrassInstanceData>* cpuGrassData, ::System::Int32 inputStride, ::UnityEngine::ComputeBuffer*& gpuIndirectArgs, ::Il2CppArray<::System::UInt32>* cpuIndirectArgs, ::UnityEngine::Mesh* mesh, ::UnityEngine::Material* material)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::ComputeBuffer*&, ::Il2CppArray<::UnityEngine::Rendering::Universal::GPUGrassInstanceData>*, ::System::Int32, ::UnityEngine::ComputeBuffer*&, ::Il2CppArray<::System::UInt32>*, ::UnityEngine::Mesh*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_CHECKINDIRECTDRAWDATA_OFFSET))(this, sumCount, gpuGrassDta, cpuGrassData, inputStride, gpuIndirectArgs, cpuIndirectArgs, mesh, material);
		}

		::System::Void DrawMeshWithIndirectDraw(::UnityEngine::Rendering::CommandBuffer* cmd, ::System::Int32 sumCount, ::UnityEngine::ComputeBuffer* gpuGrassData, ::UnityEngine::ComputeBuffer* indirectDrawArgs, ::UnityEngine::Mesh* mesh, ::UnityEngine::Material* mat)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::System::Int32, ::UnityEngine::ComputeBuffer*, ::UnityEngine::ComputeBuffer*, ::UnityEngine::Mesh*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_DRAWMESHWITHINDIRECTDRAW_OFFSET))(this, cmd, sumCount, gpuGrassData, indirectDrawArgs, mesh, mat);
		}

		::System::Void DrawWithBatch(::UnityEngine::Rendering::CommandBuffer* cmd, ::System::Int32 sumCount, ::Il2CppArray<::UnityEngine::Rendering::Universal::GPUGrassInstanceData>* grassData, ::UnityEngine::Mesh* mesh, ::UnityEngine::Material* mat, ::System::Int32 passIndex)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::System::Int32, ::Il2CppArray<::UnityEngine::Rendering::Universal::GPUGrassInstanceData>*, ::UnityEngine::Mesh*, ::UnityEngine::Material*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_DRAWWITHBATCH_OFFSET))(this, cmd, sumCount, grassData, mesh, mat, passIndex);
		}

		::System::Void SyncCachedDataRenderDataToInstanceData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_SYNCCACHEDDATARENDERDATATOINSTANCEDATA_OFFSET))(this);
		}

		::System::Void RefreshBoundingBox(::UnityEngine::Vector3 extendBoundSize, ::UnityEngine::Vector3 extendBoundCenter)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSPROXY_REFRESHBOUNDINGBOX_OFFSET))(this, extendBoundSize, extendBoundCenter);
		}
	};
}
