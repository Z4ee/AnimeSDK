#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderPassEvent.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ScriptableRenderPass.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine::NAPRenderPipeline0 { class ProfilingSampler; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_NAPRENDERPIPELINE0_GENERATELIGHTSHAFTPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1EA6BB20)
#define UNITYENGINE_NAPRENDERPIPELINE0_GENERATELIGHTSHAFTPASS_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x1EA6C8E0)
#define UNITYENGINE_NAPRENDERPIPELINE0_GENERATELIGHTSHAFTPASS__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA6B9C0)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int GenerateLightShaftPass_TypeDefinitionIndex = 5834;

	class GenerateLightShaftPass : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
	{
	public:
		::UnityEngine::NAPRenderPipeline0::ProfilingSampler* m_Sampler; // 0xA8
		::UnityEngine::MaterialPropertyBlock* m_BlockForBlur; // 0xB0
		::UnityEngine::MaterialPropertyBlock* m_BlockForOcclusion; // 0xB8
		::UnityEngine::MaterialPropertyBlock* m_BlockForRadiusBlur; // 0xC0

		::System::Void _ctor(::UnityEngine::NAPRenderPipeline0::RenderPassEvent evt)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GENERATELIGHTSHAFTPASS__CTOR_OFFSET))(this, evt);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GENERATELIGHTSHAFTPASS_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}

		::System::Void FrameCleanup(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GENERATELIGHTSHAFTPASS_FRAMECLEANUP_OFFSET))(this, cmd);
		}
	};
}
