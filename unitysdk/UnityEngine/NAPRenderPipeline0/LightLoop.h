#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/InteropServices/GCHandle.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/CameraData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/LightLoop_BuildGPULightListParameters.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/LightLoop_BuildGPULightListResources.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/LightLoop_LightLoopShaderResources.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/OtherLightShadowQuality.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/Rendering/CullingResults.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine::NAPRenderPipeline0 { class LightLoop_LightDataForCPU; }
namespace UnityEngine::NAPRenderPipeline0 { class LightLoop_TileAndClusterData; }
namespace UnityEngine::NAPRenderPipeline0 { class LightLoop_WorldLightGridData; }
namespace UnityEngine::NAPRenderPipeline0 { template <typename T> class ConsoleVariableT_1; }
namespace UnityEngine::NAPRenderPipeline0 { template <typename T> class DynamicArray_1; }
namespace UnityEngine::Profiling { class CustomSampler; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_NAPRENDERPIPELINE0_LIGHTLOOP_BUILDGPULIGHTLISTSCOMMON_OFFSET UNITYSDK_OFFSET(0x1D850C90)
#define UNITYENGINE_NAPRENDERPIPELINE0_LIGHTLOOP_BUILDGPULIGHTLISTS_OFFSET UNITYSDK_OFFSET(0x1D84EC60)
#define UNITYENGINE_NAPRENDERPIPELINE0_LIGHTLOOP_BUILDPERTILELIGHTLIST_OFFSET UNITYSDK_OFFSET(0x1D84EF70)
#define UNITYENGINE_NAPRENDERPIPELINE0_LIGHTLOOP_CLEANUPLIGHTLOOP_OFFSET UNITYSDK_OFFSET(0x1D84DB60)
#define UNITYENGINE_NAPRENDERPIPELINE0_LIGHTLOOP_CLEARLIGHTLIST_OFFSET UNITYSDK_OFFSET(0x1D8506F0)
#define UNITYENGINE_NAPRENDERPIPELINE0_LIGHTLOOP_DIVROUNDUP_OFFSET UNITYSDK_OFFSET(0x1D84D5C0)
#define UNITYENGINE_NAPRENDERPIPELINE0_LIGHTLOOP_GENERATELIGHTSSCREENSPACEAABBS_OFFSET UNITYSDK_OFFSET(0x1D84ED20)
#define UNITYENGINE_NAPRENDERPIPELINE0_LIGHTLOOP_GETWORLDTOVIEWMATRIX_OFFSET UNITYSDK_OFFSET(0x1D84D420)
#define UNITYENGINE_NAPRENDERPIPELINE0_LIGHTLOOP_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1D84D5D0)
#define UNITYENGINE_NAPRENDERPIPELINE0_LIGHTLOOP_GET_VISIBLEPUNCTUALLIGHTCOUNT_OFFSET UNITYSDK_OFFSET(0x1D84D280)
#define UNITYENGINE_NAPRENDERPIPELINE0_LIGHTLOOP_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1D84D770)
#define UNITYENGINE_NAPRENDERPIPELINE0_LIGHTLOOP_ISBUFFERINVALID_OFFSET UNITYSDK_OFFSET(0x1D84DD30)
#define UNITYENGINE_NAPRENDERPIPELINE0_LIGHTLOOP_ISPROJECTIONMATRIXOBLIQUE_OFFSET UNITYSDK_OFFSET(0x1D84F8F0)
#define UNITYENGINE_NAPRENDERPIPELINE0_LIGHTLOOP_LIGHTLOOPALLOCRESOLUTIONDEPENDENTBUFFERS_OFFSET UNITYSDK_OFFSET(0x1D84DF10)
#define UNITYENGINE_NAPRENDERPIPELINE0_LIGHTLOOP_LIGHTLOOPNEEDRESIZE_OFFSET UNITYSDK_OFFSET(0x1D84DD50)
#define UNITYENGINE_NAPRENDERPIPELINE0_LIGHTLOOP_NATIVEBUILDBINDLIGHTINGGPUBUFFERS_OFFSET UNITYSDK_OFFSET(0x1D84DF30)
#define UNITYENGINE_NAPRENDERPIPELINE0_LIGHTLOOP_PREPAREBUILDGPULIGHTLISTPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1D84F940)
#define UNITYENGINE_NAPRENDERPIPELINE0_LIGHTLOOP_PREPAREBUILDGPULIGHTLISTRESOURCES_OFFSET UNITYSDK_OFFSET(0x1D84ED00)
#define UNITYENGINE_NAPRENDERPIPELINE0_LIGHTLOOP_PUSHLIGHTLOOPGLOBALPARAMS_OFFSET UNITYSDK_OFFSET(0x1D850EE0)
#define UNITYENGINE_NAPRENDERPIPELINE0_LIGHTLOOP_SETGLOBALBUFFERFORWARMUP_OFFSET UNITYSDK_OFFSET(0x1D84D2A0)
#define UNITYENGINE_NAPRENDERPIPELINE0_LIGHTLOOP_UPDATE_OFFSET UNITYSDK_OFFSET(0x1D84DDB0)
#define UNITYENGINE_NAPRENDERPIPELINE0_LIGHTLOOP_VOXELLIGHTLISTGENERATION_OFFSET UNITYSDK_OFFSET(0x1D84F3C0)
#define UNITYENGINE_NAPRENDERPIPELINE0_LIGHTLOOP_WORLDLIGHTGRIDGENERATION_OFFSET UNITYSDK_OFFSET(0x1D8508A0)
#define UNITYENGINE_NAPRENDERPIPELINE0_LIGHTLOOP__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D851350)
#define UNITYENGINE_NAPRENDERPIPELINE0_LIGHTLOOP__CTOR_OFFSET UNITYSDK_OFFSET(0x1D84D6C0)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int LightLoop_TypeDefinitionIndex = 6001;

	class LightLoop : public ::System::Object
	{
	public:
		static ::UnityEngine::NAPRenderPipeline0::LightLoop** StaticGet__instance()
		{
			return (::UnityEngine::NAPRenderPipeline0::LightLoop**)Il2CppClass::FromTypeDefinitionIndex(LightLoop_TypeDefinitionIndex)->GetStaticField(0x5350);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_s_TempScreenDimArray()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(LightLoop_TypeDefinitionIndex)->GetStaticField(0x5358);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Int32>** StaticGet_s_RTXLocalLightTopKEnable()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(LightLoop_TypeDefinitionIndex)->GetStaticField(0x5360);
		}
		static ::System::Int32* StaticGet_s_GenListPerVoxelOpt16Kernel()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LightLoop_TypeDefinitionIndex)->GetStaticField(0x2C00);
		}
		static ::System::Int32* StaticGet_s_ClearLightListKernel()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LightLoop_TypeDefinitionIndex)->GetStaticField(0x2C04);
		}
		static ::System::Int32* StaticGet_s_GenAABBKernel()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LightLoop_TypeDefinitionIndex)->GetStaticField(0x2C08);
		}
		static ::System::Int32* StaticGet_s_GenListPerVoxelKernel()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LightLoop_TypeDefinitionIndex)->GetStaticField(0x2C0C);
		}
		static ::System::Int32* StaticGet_s_GenAABBKernel_Oblique()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LightLoop_TypeDefinitionIndex)->GetStaticField(0x2C10);
		}
		static ::System::Int32* StaticGet_s_GenListPerVoxelOpt8Kernel()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LightLoop_TypeDefinitionIndex)->GetStaticField(0x2C14);
		}
		static ::System::Int32* StaticGet_s_ClearVoxelAtomicKernel()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LightLoop_TypeDefinitionIndex)->GetStaticField(0x2C18);
		}
		static ::System::Int32* StaticGet_s_GenListPerTileKernel()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LightLoop_TypeDefinitionIndex)->GetStaticField(0x2C1C);
		}
		static ::UnityEngine::Matrix4x4* StaticGet_s_FlipMatrixLHSRHS()
		{
			return (::UnityEngine::Matrix4x4*)Il2CppClass::FromTypeDefinitionIndex(LightLoop_TypeDefinitionIndex)->GetStaticField(0x2C20);
		}
		static ::System::Int32* StaticGet_s_GenListPerVoxelOpt64Kernel()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LightLoop_TypeDefinitionIndex)->GetStaticField(0x2C60);
		}
		static ::System::Int32* StaticGet_SizeOfNapLightData()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LightLoop_TypeDefinitionIndex)->GetStaticField(0x2C64);
		}
		static ::System::Int32* StaticGet_s_GenListPerBigTileKernel()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LightLoop_TypeDefinitionIndex)->GetStaticField(0x2C68);
		}
		static ::System::Int32* StaticGet_s_GenListPerVoxelOpt32Kernel()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LightLoop_TypeDefinitionIndex)->GetStaticField(0x2C6C);
		}
		static ::System::Int32* StaticGet_SizeOfLightVolumeData()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LightLoop_TypeDefinitionIndex)->GetStaticField(0x2C70);
		}
		static ::System::Int32* StaticGet_SizeOfNapEnvLightData()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LightLoop_TypeDefinitionIndex)->GetStaticField(0x2C74);
		}
		::UnityEngine::ComputeBuffer* m_LightDataGPUBuffer; // 0x10
		::UnityEngine::ComputeBuffer* m_EnvLightDataGPUBuffer; // 0x18
		::UnityEngine::NAPRenderPipeline0::LightLoop_TileAndClusterData* m_TileAndClusterData; // 0x20
		::UnityEngine::NAPRenderPipeline0::LightLoop_WorldLightGridData* m_WorldLightGridData; // 0x28
		::System::Int32 m_PlatformMaxPunctualLightsOnScreen; // 0x30
		::System::Int32 m_PlatformMaxEnvLightsOnScreen; // 0x34
		::System::Int32 m_PlatformMaxLightsOnScreen; // 0x38
		::System::Int32 m_TotalLightCount; // 0x3C
		::System::Int32 m_TotalWorldLightCount; // 0x40
		::System::Single m_ClusterScale; // 0x44
		::UnityEngine::Vector2Int preScreenSize; // 0x48
		::UnityEngine::ComputeShader* buildScreenAABBShader; // 0x50
		::UnityEngine::ComputeShader* buildPerTileLightListShader; // 0x58
		::UnityEngine::ComputeShader* buildPerBigTileLightListShader; // 0x60
		::UnityEngine::ComputeShader* buildPerVoxelLightListShader; // 0x68
		::UnityEngine::ComputeShader* clearLightListShader; // 0x70
		::UnityEngine::ComputeShader* buildWorldGridLightListShader; // 0x78
		::UnityEngine::Profiling::CustomSampler* m_SamplerSetCharacterLightDataLight; // 0x80
		::System::Runtime::InteropServices::GCHandle m_LightsHandle; // 0x88
		::System::IntPtr m_LightsPtr; // 0x90
		::System::Runtime::InteropServices::GCHandle m_LightsForCharHandle; // 0x98
		::System::IntPtr m_LightsForCharPtr; // 0xA0
		::UnityEngine::NAPRenderPipeline0::LightLoop_LightDataForCPU* lightDataForCPU; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_LIGHTLOOP__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_LIGHTLOOP__CCTOR_OFFSET))();
		}

		::System::Int32 get_VisiblePunctualLightCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_LIGHTLOOP_GET_VISIBLEPUNCTUALLIGHTCOUNT_OFFSET))(this);
		}

		static ::System::Void SetGlobalBufferForWarmup()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_LIGHTLOOP_SETGLOBALBUFFERFORWARMUP_OFFSET))();
		}

		static ::UnityEngine::Matrix4x4 GetWorldToViewMatrix(::UnityEngine::Camera* camera, ::System::Int32 viewIndex)
		{
			return ((::UnityEngine::Matrix4x4(*)(::UnityEngine::Camera*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_LIGHTLOOP_GETWORLDTOVIEWMATRIX_OFFSET))(camera, viewIndex);
		}

		static ::System::Int32 DivRoundUp(::System::Int32 x, ::System::Int32 y)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_LIGHTLOOP_DIVROUNDUP_OFFSET))(x, y);
		}

		static ::UnityEngine::NAPRenderPipeline0::LightLoop* get_instance()
		{
			return ((::UnityEngine::NAPRenderPipeline0::LightLoop*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_LIGHTLOOP_GET_INSTANCE_OFFSET))();
		}

		::System::Void Initialize(::UnityEngine::NAPRenderPipeline0::LightLoop_LightLoopShaderResources csResources)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::LightLoop_LightLoopShaderResources))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_LIGHTLOOP_INITIALIZE_OFFSET))(this, csResources);
		}

		::System::Void CleanupLightLoop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_LIGHTLOOP_CLEANUPLIGHTLOOP_OFFSET))(this);
		}

		::System::Boolean IsBufferInValid(::UnityEngine::ComputeBuffer* computeBuffer)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ComputeBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_LIGHTLOOP_ISBUFFERINVALID_OFFSET))(this, computeBuffer);
		}

		::System::Boolean LightLoopNeedResize()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_LIGHTLOOP_LIGHTLOOPNEEDRESIZE_OFFSET))(this);
		}

		::System::Void Update(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier& rti, ::UnityEngine::Vector2Int screenSize, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::Rendering::CullingResults& cullingResults, ::UnityEngine::NAPRenderPipeline0::DynamicArray_1<::System::Int32>* visibleLightPreData, ::UnityEngine::NAPRenderPipeline0::OtherLightShadowQuality shadowQuality)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::UnityEngine::Vector2Int, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::Rendering::CullingResults&, ::UnityEngine::NAPRenderPipeline0::DynamicArray_1<::System::Int32>*, ::UnityEngine::NAPRenderPipeline0::OtherLightShadowQuality))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_LIGHTLOOP_UPDATE_OFFSET))(this, cmd, rti, screenSize, renderingData, cullingResults, visibleLightPreData, shadowQuality);
		}

		::System::Void LightLoopAllocResolutionDependentBuffers(::System::Int32 width, ::System::Int32 height)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_LIGHTLOOP_LIGHTLOOPALLOCRESOLUTIONDEPENDENTBUFFERS_OFFSET))(this, width, height);
		}

		::System::Void NativeBuildBindLightingGPUBuffers(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::Vector2Int screenSize, ::UnityEngine::Rendering::CullingResults& cullResults, ::UnityEngine::NAPRenderPipeline0::DynamicArray_1<::System::Int32>* visibleLightPreData, ::UnityEngine::NAPRenderPipeline0::OtherLightShadowQuality shadowQuality)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::Vector2Int, ::UnityEngine::Rendering::CullingResults&, ::UnityEngine::NAPRenderPipeline0::DynamicArray_1<::System::Int32>*, ::UnityEngine::NAPRenderPipeline0::OtherLightShadowQuality))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_LIGHTLOOP_NATIVEBUILDBINDLIGHTINGGPUBUFFERS_OFFSET))(this, cmd, renderingData, screenSize, cullResults, visibleLightPreData, shadowQuality);
		}

		::UnityEngine::NAPRenderPipeline0::LightLoop_BuildGPULightListResources PrepareBuildGPULightListResources(::UnityEngine::NAPRenderPipeline0::LightLoop_TileAndClusterData* tileAndClusterData, ::UnityEngine::Rendering::RenderTargetIdentifier depthBuffer)
		{
			return ((::UnityEngine::NAPRenderPipeline0::LightLoop_BuildGPULightListResources(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::LightLoop_TileAndClusterData*, ::UnityEngine::Rendering::RenderTargetIdentifier))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_LIGHTLOOP_PREPAREBUILDGPULIGHTLISTRESOURCES_OFFSET))(this, tileAndClusterData, depthBuffer);
		}

		static ::System::Void GenerateLightsScreenSpaceAABBs(::UnityEngine::NAPRenderPipeline0::LightLoop_BuildGPULightListParameters& parameters, ::UnityEngine::NAPRenderPipeline0::LightLoop_BuildGPULightListResources& resources, ::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::UnityEngine::NAPRenderPipeline0::LightLoop_BuildGPULightListParameters&, ::UnityEngine::NAPRenderPipeline0::LightLoop_BuildGPULightListResources&, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_LIGHTLOOP_GENERATELIGHTSSCREENSPACEAABBS_OFFSET))(parameters, resources, cmd);
		}

		static ::System::Void BuildPerTileLightList(::UnityEngine::NAPRenderPipeline0::LightLoop_BuildGPULightListParameters& parameters, ::UnityEngine::NAPRenderPipeline0::LightLoop_BuildGPULightListResources& resources, ::System::Boolean& tileFlagsWritten, ::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::UnityEngine::NAPRenderPipeline0::LightLoop_BuildGPULightListParameters&, ::UnityEngine::NAPRenderPipeline0::LightLoop_BuildGPULightListResources&, ::System::Boolean&, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_LIGHTLOOP_BUILDPERTILELIGHTLIST_OFFSET))(parameters, resources, tileFlagsWritten, cmd);
		}

		static ::System::Void VoxelLightListGeneration(::UnityEngine::NAPRenderPipeline0::LightLoop_BuildGPULightListParameters& parameters, ::UnityEngine::NAPRenderPipeline0::LightLoop_BuildGPULightListResources& resources, ::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::UnityEngine::NAPRenderPipeline0::LightLoop_BuildGPULightListParameters&, ::UnityEngine::NAPRenderPipeline0::LightLoop_BuildGPULightListResources&, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_LIGHTLOOP_VOXELLIGHTLISTGENERATION_OFFSET))(parameters, resources, cmd);
		}

		static ::System::Boolean IsProjectionMatrixOblique(::UnityEngine::Matrix4x4& projectionMatrix)
		{
			return ((::System::Boolean(*)(::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_LIGHTLOOP_ISPROJECTIONMATRIXOBLIQUE_OFFSET))(projectionMatrix);
		}

		::UnityEngine::NAPRenderPipeline0::LightLoop_BuildGPULightListParameters PrepareBuildGPULightListParameters(::UnityEngine::Camera* camera, ::UnityEngine::Vector2Int screenSize, ::System::Int32 screenHash)
		{
			return ((::UnityEngine::NAPRenderPipeline0::LightLoop_BuildGPULightListParameters(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::Vector2Int, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_LIGHTLOOP_PREPAREBUILDGPULIGHTLISTPARAMETERS_OFFSET))(this, camera, screenSize, screenHash);
		}

		::System::Void ClearLightList(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::ComputeBuffer* bufferToClear)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::ComputeBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_LIGHTLOOP_CLEARLIGHTLIST_OFFSET))(this, cmd, bufferToClear);
		}

		::System::Void WorldLightGridGeneration(::UnityEngine::NAPRenderPipeline0::LightLoop_BuildGPULightListParameters& parameters, ::UnityEngine::NAPRenderPipeline0::LightLoop_WorldLightGridData* worldLightGridData, ::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::LightLoop_BuildGPULightListParameters&, ::UnityEngine::NAPRenderPipeline0::LightLoop_WorldLightGridData*, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_LIGHTLOOP_WORLDLIGHTGRIDGENERATION_OFFSET))(this, parameters, worldLightGridData, cmd);
		}

		::System::Void BuildGPULightListsCommon(::UnityEngine::Camera* camera, ::UnityEngine::Vector2Int screenSize, ::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier depthStencilBuffer, ::System::Boolean fptlEnable, ::System::Boolean clusterEnable)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::Vector2Int, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_LIGHTLOOP_BUILDGPULIGHTLISTSCOMMON_OFFSET))(this, camera, screenSize, cmd, depthStencilBuffer, fptlEnable, clusterEnable);
		}

		::System::Void BuildGPULightLists(::UnityEngine::NAPRenderPipeline0::CameraData& cameraData, ::UnityEngine::Vector2Int screenSize, ::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier depthStencilBuffer)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CameraData&, ::UnityEngine::Vector2Int, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_LIGHTLOOP_BUILDGPULIGHTLISTS_OFFSET))(this, cameraData, screenSize, cmd, depthStencilBuffer);
		}

		::System::Void PushLightLoopGlobalParams(::UnityEngine::Camera* camera, ::UnityEngine::Vector2Int screenSize, ::UnityEngine::Rendering::CommandBuffer* cmd, ::System::Boolean fptlEnable, ::System::Boolean clusterEnable)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::Vector2Int, ::UnityEngine::Rendering::CommandBuffer*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_LIGHTLOOP_PUSHLIGHTLOOPGLOBALPARAMS_OFFSET))(this, camera, screenSize, cmd, fptlEnable, clusterEnable);
		}
	};
}
