#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderPassEvent.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ScriptableRenderPass.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine::NAPRenderPipeline0 { class ProfilingSampler; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_GPUGRASSUPDATEPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1C99EE00)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_GPUGRASSUPDATEPASS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C99ECC0)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int GPUGrassUpdatePass_TypeDefinitionIndex = 27042;

	class GPUGrassUpdatePass : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
	{
	public:
		::UnityEngine::NAPRenderPipeline0::ProfilingSampler* m_ProfilingSampler; // 0xA8
		::System::String* m_ProfilerTag; // 0xB0
		::System::Boolean m_IsPreviewOrUIOrReflectionCamera; // 0xB8

		::System::Void _ctor(::System::String* profilerTag, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent>* renderPassEventsConfig)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_GPUGRASSUPDATEPASS__CTOR_OFFSET))(this, profilerTag, renderPassEventsConfig);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_GPUGRASSUPDATEPASS_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}
	};
}
