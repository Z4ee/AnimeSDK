#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderPassEvent.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ScriptableRenderPass.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_NAPRENDERPIPELINE0_PRESENTFROZENTEXTUREPASS_CONFIGURE_OFFSET UNITYSDK_OFFSET(0x1BC1FBD0)
#define UNITYENGINE_NAPRENDERPIPELINE0_PRESENTFROZENTEXTUREPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1BC1FC50)
#define UNITYENGINE_NAPRENDERPIPELINE0_PRESENTFROZENTEXTUREPASS__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC1FB70)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int PresentFrozenTexturePass_TypeDefinitionIndex = 5830;

	class PresentFrozenTexturePass : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
	{
	public:
		::UnityEngine::Rendering::RenderTargetIdentifier m_ColorBuffer; // 0xA8
		::UnityEngine::Rendering::RenderTargetIdentifier m_DepthBuffer; // 0xD0

		::System::Void _ctor(::UnityEngine::NAPRenderPipeline0::RenderPassEvent renderPassEvent)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PRESENTFROZENTEXTUREPASS__CTOR_OFFSET))(this, renderPassEvent);
		}

		::System::Void Configure(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::NAPRenderPipeline0::RenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PRESENTFROZENTEXTUREPASS_CONFIGURE_OFFSET))(this, cmd, renderingData);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PRESENTFROZENTEXTUREPASS_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}
	};
}
