#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderPassEvent.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ScriptableRenderPass.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

namespace UnityEngine::Rendering::Universal { class UniversalRenderPipelineAsset; }

#define UNITYENGINE_NAPRENDERPIPELINE0_OFFSCREENPARTICLEUPDATEPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1CB103C0)
#define UNITYENGINE_NAPRENDERPIPELINE0_OFFSCREENPARTICLEUPDATEPASS_SETUP_OFFSET UNITYSDK_OFFSET(0x1CB10370)
#define UNITYENGINE_NAPRENDERPIPELINE0_OFFSCREENPARTICLEUPDATEPASS__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB10310)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int OffscreenParticleUpdatePass_TypeDefinitionIndex = 27813;

	class OffscreenParticleUpdatePass : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
	{
	public:
		::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* m_GlobalSettings; // 0xA8

		::System::Void _ctor(::UnityEngine::NAPRenderPipeline0::RenderPassEvent evt)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_OFFSCREENPARTICLEUPDATEPASS__CTOR_OFFSET))(this, evt);
		}

		::System::Void Setup(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* globalSetings)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_OFFSCREENPARTICLEUPDATEPASS_SETUP_OFFSET))(this, globalSetings);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_OFFSCREENPARTICLEUPDATEPASS_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}
	};
}
