#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderPassEvent.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderTargetHandle.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ScriptableRenderPass.h"
#include "unitysdk/UnityEngine/RenderTextureDescriptor.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine::NAPRenderPipeline0 { class ProfilingSampler; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_NAPRENDERPIPELINE0_NAPSECONDARYBLOOMPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1AD49AC0)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPSECONDARYBLOOMPASS_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x1AD4ABE0)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPSECONDARYBLOOMPASS_NAPSECONDARYBLOOMPASSBLUR_OFFSET UNITYSDK_OFFSET(0x1AD4A7F0)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPSECONDARYBLOOMPASS__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD49990)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int NapSecondaryBloomPass_TypeDefinitionIndex = 5828;

	class NapSecondaryBloomPass : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
	{
	public:
		::UnityEngine::NAPRenderPipeline0::ProfilingSampler* m_Sampler; // 0xA8
		::UnityEngine::RenderTextureDescriptor m_Desc; // 0xB0
		::UnityEngine::NAPRenderPipeline0::RenderTargetHandle _source; // 0xE8
		::UnityEngine::NAPRenderPipeline0::RenderTargetHandle _depth; // 0xEC
		::UnityEngine::NAPRenderPipeline0::RenderTargetHandle m_InitSecondaryDownSampleBuffer; // 0xF0
		::UnityEngine::NAPRenderPipeline0::RenderTargetHandle m_SecondaryDownSampleBuffer; // 0xF4

		::System::Void _ctor(::System::String* profilerTag, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent evt)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPSECONDARYBLOOMPASS__CTOR_OFFSET))(this, profilerTag, evt);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPSECONDARYBLOOMPASS_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}

		::System::Void FrameCleanup(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPSECONDARYBLOOMPASS_FRAMECLEANUP_OFFSET))(this, cmd);
		}

		::System::Void NapSecondaryBloomPassBlur(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier src, ::UnityEngine::Rendering::RenderTargetIdentifier dst, ::System::Int32 width, ::System::Int32 height, ::UnityEngine::Material* materialH, ::UnityEngine::Material* materialV, ::System::Int32 gaussWidth)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier, ::System::Int32, ::System::Int32, ::UnityEngine::Material*, ::UnityEngine::Material*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPSECONDARYBLOOMPASS_NAPSECONDARYBLOOMPASSBLUR_OFFSET))(this, cmd, src, dst, width, height, materialH, materialV, gaussWidth);
		}
	};
}
