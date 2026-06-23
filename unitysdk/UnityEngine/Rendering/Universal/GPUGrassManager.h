#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/Plane.h"
#include "unitysdk/UnityEngine/Rendering/ShadowDrawingSettings.h"
#include "unitysdk/UnityEngine/Rendering/Universal/GpuGrassShadowType.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine::NAPRenderPipeline0 { class ProfilingSampler; }
namespace UnityEngine::Profiling { class CustomSampler; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering::Universal { class GPUGrassProxy; }
namespace UnityEngine::Rendering::Universal { class UniversalRenderPipelineAsset; }

#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSMANAGER_CHECKNEEDGPUGRASS_OFFSET UNITYSDK_OFFSET(0x1AEE6270)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSMANAGER_DRAWGRASSITEM_OFFSET UNITYSDK_OFFSET(0x1AECEB50)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSMANAGER_DRAWGRASSSHADOWCASTER_OFFSET UNITYSDK_OFFSET(0x1AECFF00)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSMANAGER_DRAWGRASSSOFTEDGE_OFFSET UNITYSDK_OFFSET(0x1AEEC100)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSMANAGER_GETENABLESOFTEDGE_OFFSET UNITYSDK_OFFSET(0x1AEEC050)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSMANAGER_ISSUPPORTEDGRASSCAMERA_OFFSET UNITYSDK_OFFSET(0x1AEEBC00)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSMANAGER_PREPAREGPUGRASSDRAWDATA_OFFSET UNITYSDK_OFFSET(0x1AEEBDB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSMANAGER_REGISTER_OFFSET UNITYSDK_OFFSET(0x1AEEBA70)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSMANAGER_UNREGISTER_OFFSET UNITYSDK_OFFSET(0x1AEEBB50)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AEEC4D0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int GPUGrassManager_TypeDefinitionIndex = 27018;

	class GPUGrassManager : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::HashSet_1<::UnityEngine::Rendering::Universal::GPUGrassProxy*>** StaticGet_proxyList()
		{
			return (::System::Collections::Generic::HashSet_1<::UnityEngine::Rendering::Universal::GPUGrassProxy*>**)Il2CppClass::FromTypeDefinitionIndex(GPUGrassManager_TypeDefinitionIndex)->GetStaticField(0x22440);
		}
		static ::Il2CppArray<::UnityEngine::Plane>** StaticGet_planes()
		{
			return (::Il2CppArray<::UnityEngine::Plane>**)Il2CppClass::FromTypeDefinitionIndex(GPUGrassManager_TypeDefinitionIndex)->GetStaticField(0x22448);
		}
		static ::UnityEngine::NAPRenderPipeline0::ProfilingSampler** StaticGet_m_SamplerForGBuffer()
		{
			return (::UnityEngine::NAPRenderPipeline0::ProfilingSampler**)Il2CppClass::FromTypeDefinitionIndex(GPUGrassManager_TypeDefinitionIndex)->GetStaticField(0x22450);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_m_SamplerForCulling()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(GPUGrassManager_TypeDefinitionIndex)->GetStaticField(0x22458);
		}
		static ::UnityEngine::NAPRenderPipeline0::ProfilingSampler** StaticGet_m_SamplerForShadow()
		{
			return (::UnityEngine::NAPRenderPipeline0::ProfilingSampler**)Il2CppClass::FromTypeDefinitionIndex(GPUGrassManager_TypeDefinitionIndex)->GetStaticField(0x22460);
		}
		static ::UnityEngine::NAPRenderPipeline0::ProfilingSampler** StaticGet_m_SamplerForSoftEdge()
		{
			return (::UnityEngine::NAPRenderPipeline0::ProfilingSampler**)Il2CppClass::FromTypeDefinitionIndex(GPUGrassManager_TypeDefinitionIndex)->GetStaticField(0x22468);
		}
		static ::UnityEngine::Rendering::Universal::GpuGrassShadowType* StaticGet_gpuGrassShadowType()
		{
			return (::UnityEngine::Rendering::Universal::GpuGrassShadowType*)Il2CppClass::FromTypeDefinitionIndex(GPUGrassManager_TypeDefinitionIndex)->GetStaticField(0x7720);
		}
		static ::System::Int32* StaticGet_m_GlobalMeshLodBias()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GPUGrassManager_TypeDefinitionIndex)->GetStaticField(0x7724);
		}
		static ::System::Boolean* StaticGet_needDrawGPUGrass()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GPUGrassManager_TypeDefinitionIndex)->GetStaticField(0x7728);
		}
		static ::System::Boolean* StaticGet_enableBakedDecal()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GPUGrassManager_TypeDefinitionIndex)->GetStaticField(0x7729);
		}
		// static const ::System::Boolean kEnableSoftEdge; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSMANAGER__CCTOR_OFFSET))();
		}

		static ::System::Void Register(::UnityEngine::Rendering::Universal::GPUGrassProxy* proxy)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::Universal::GPUGrassProxy*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSMANAGER_REGISTER_OFFSET))(proxy);
		}

		static ::System::Void UnRegister(::UnityEngine::Rendering::Universal::GPUGrassProxy* proxy)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::Universal::GPUGrassProxy*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSMANAGER_UNREGISTER_OFFSET))(proxy);
		}

		static ::System::Boolean IsSupportedGrassCamera(::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData)
		{
			return ((::System::Boolean(*)(::UnityEngine::NAPRenderPipeline0::RenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSMANAGER_ISSUPPORTEDGRASSCAMERA_OFFSET))(renderingData);
		}

		static ::System::Boolean CheckNeedGPUGrass(::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* globalSettings)
		{
			return ((::System::Boolean(*)(::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSMANAGER_CHECKNEEDGPUGRASS_OFFSET))(renderingData, globalSettings);
		}

		static ::System::Void PrepareGPUGrassDrawData(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::NAPRenderPipeline0::RenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSMANAGER_PREPAREGPUGRASSDRAWDATA_OFFSET))(cmd, renderingData);
		}

		static ::System::Void DrawGrassShadowCaster(::UnityEngine::Rendering::ShadowDrawingSettings& settings, ::System::Int32 sliceIndex, ::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ShadowDrawingSettings&, ::System::Int32, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSMANAGER_DRAWGRASSSHADOWCASTER_OFFSET))(settings, sliceIndex, cmd);
		}

		static ::System::Boolean GetEnableSoftEdge()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSMANAGER_GETENABLESOFTEDGE_OFFSET))();
		}

		static ::System::Void DrawGrassSoftEdge(::UnityEngine::Rendering::CommandBuffer* cmd, ::System::Boolean enableDither)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSMANAGER_DRAWGRASSSOFTEDGE_OFFSET))(cmd, enableDither);
		}

		static ::System::Void DrawGrassItem(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::NAPRenderPipeline0::RenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSMANAGER_DRAWGRASSITEM_OFFSET))(cmd, renderingData);
		}
	};
}
