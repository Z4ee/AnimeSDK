#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/CameraData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderPassEvent.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ScriptableRenderPass.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine::NAPRenderPipeline0 { class ProfilingSampler; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_GPUBOIDUPDATEPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1AF54F80)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_GPUBOIDUPDATEPASS_SETUP_OFFSET UNITYSDK_OFFSET(0x1AF54D30)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_GPUBOIDUPDATEPASS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AF55040)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_GPUBOIDUPDATEPASS__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF54BE0)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int GpuBoidUpdatePass_TypeDefinitionIndex = 26326;

	class GpuBoidUpdatePass : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
	{
	public:
		static ::System::Boolean* StaticGet_s_GPUBoidActive()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GpuBoidUpdatePass_TypeDefinitionIndex)->GetStaticField(0x5250);
		}
		::UnityEngine::ComputeShader* m_GpuBoidCS; // 0xA8
		::System::String* m_ProfilerTag; // 0xB0
		::UnityEngine::NAPRenderPipeline0::ProfilingSampler* m_ProfilingSampler; // 0xB8
		::System::Boolean m_IsPreviewOrUIOrReflectionCamera; // 0xC0

		::System::Void _ctor(::System::String* profilerTag, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent>* renderPassEventsConfig, ::UnityEngine::ComputeShader* gpuBoidCS)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent>*, ::UnityEngine::ComputeShader*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_GPUBOIDUPDATEPASS__CTOR_OFFSET))(this, profilerTag, renderPassEventsConfig, gpuBoidCS);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_GPUBOIDUPDATEPASS__CCTOR_OFFSET))();
		}

		::System::Boolean Setup(::UnityEngine::NAPRenderPipeline0::CameraData& cameraData, ::System::Boolean isPreviewOrUIOrReflectionCamera)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CameraData&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_GPUBOIDUPDATEPASS_SETUP_OFFSET))(this, cameraData, isPreviewOrUIOrReflectionCamera);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_GPUBOIDUPDATEPASS_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}
	};
}
