#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderPassEvent.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ScriptableRenderPass.h"
#include "unitysdk/UnityEngine/Rendering/FilteringSettings.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FXMONSTERFOGMASKPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1C5B78E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FXMONSTERFOGMASKPASS_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x1C5B8670)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FXMONSTERFOGMASKPASS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5B7800)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FXMONSTERFOGMASKPASS___BASE_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x1C5B8720)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int FxMonsterFogMaskPass_TypeDefinitionIndex = 26969;

	class FxMonsterFogMaskPass : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
	{
	public:
		::UnityEngine::Rendering::FilteringSettings m_FilteringSettings; // 0xA8

		::System::Void _ctor(::UnityEngine::NAPRenderPipeline0::RenderPassEvent eve)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FXMONSTERFOGMASKPASS__CTOR_OFFSET))(this, eve);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FXMONSTERFOGMASKPASS_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}

		::System::Void FrameCleanup(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FXMONSTERFOGMASKPASS_FRAMECLEANUP_OFFSET))(this, cmd);
		}

		::System::Void __base_FrameCleanup(::UnityEngine::Rendering::CommandBuffer* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FXMONSTERFOGMASKPASS___BASE_FRAMECLEANUP_OFFSET))(this, P0);
		}
	};
}
