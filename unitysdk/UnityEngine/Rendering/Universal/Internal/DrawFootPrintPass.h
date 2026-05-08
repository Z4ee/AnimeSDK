#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderPassEvent.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ScriptableRenderPass.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

namespace System { class String; }
namespace UnityEngine::NAPRenderPipeline0 { class ProfilingSampler; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWFOOTPRINTPASS_CONFIGURE_OFFSET UNITYSDK_OFFSET(0x18FE7B50)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWFOOTPRINTPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0x18FE7E70)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWFOOTPRINTPASS_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x18FE7E00)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWFOOTPRINTPASS__CTOR_OFFSET UNITYSDK_OFFSET(0x18FE7A30)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWFOOTPRINTPASS___BASE_CONFIGURE_OFFSET UNITYSDK_OFFSET(0x18FE83D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWFOOTPRINTPASS___BASE_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x18FE83E0)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int DrawFootPrintPass_TypeDefinitionIndex = 30489;

	class DrawFootPrintPass : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
	{
	public:
		::UnityEngine::NAPRenderPipeline0::ProfilingSampler* m_Sampler; // 0xA8
		::System::Int32 m_TargetFootPrintRTId; // 0xB0

		::System::Void _ctor(::UnityEngine::NAPRenderPipeline0::RenderPassEvent evt, ::System::String* profilerTag)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWFOOTPRINTPASS__CTOR_OFFSET))(this, evt, profilerTag);
		}

		::System::Void Configure(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::NAPRenderPipeline0::RenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWFOOTPRINTPASS_CONFIGURE_OFFSET))(this, cmd, renderingData);
		}

		::System::Void FrameCleanup(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWFOOTPRINTPASS_FRAMECLEANUP_OFFSET))(this, cmd);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWFOOTPRINTPASS_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}

		::System::Void __base_Configure(::UnityEngine::Rendering::CommandBuffer* P0, ::UnityEngine::NAPRenderPipeline0::RenderingData& P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::NAPRenderPipeline0::RenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWFOOTPRINTPASS___BASE_CONFIGURE_OFFSET))(this, P0, P1);
		}

		::System::Void __base_FrameCleanup(::UnityEngine::Rendering::CommandBuffer* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWFOOTPRINTPASS___BASE_FRAMECLEANUP_OFFSET))(this, P0);
		}
	};
}
