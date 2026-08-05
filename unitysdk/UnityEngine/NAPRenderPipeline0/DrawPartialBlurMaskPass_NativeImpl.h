#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderPassEvent.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ScriptableRenderPass.h"
#include "unitysdk/UnityEngine/RenderTextureDescriptor.h"
#include "unitysdk/UnityEngine/Rendering/RenderQueueRange.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

namespace UnityEngine::NAPRenderPipeline0 { class DrawPartialBlurMaskPassNativeState; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_NAPRENDERPIPELINE0_DRAWPARTIALBLURMASKPASS_NATIVEIMPL_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1EA5F6D0)
#define UNITYENGINE_NAPRENDERPIPELINE0_DRAWPARTIALBLURMASKPASS_NATIVEIMPL_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x1EA5F700)
#define UNITYENGINE_NAPRENDERPIPELINE0_DRAWPARTIALBLURMASKPASS_NATIVEIMPL_SETUP_OFFSET UNITYSDK_OFFSET(0x1EA5F6A0)
#define UNITYENGINE_NAPRENDERPIPELINE0_DRAWPARTIALBLURMASKPASS_NATIVEIMPL__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA5F600)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int DrawPartialBlurMaskPass_NativeImpl_TypeDefinitionIndex = 5756;

	class DrawPartialBlurMaskPass_NativeImpl : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
	{
	public:
		::UnityEngine::NAPRenderPipeline0::DrawPartialBlurMaskPassNativeState* m_NativeState; // 0xA8

		::System::Void _ctor(::UnityEngine::NAPRenderPipeline0::RenderPassEvent evt, ::UnityEngine::Rendering::RenderQueueRange renderQueueRange, ::UnityEngine::LayerMask layerMask)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent, ::UnityEngine::Rendering::RenderQueueRange, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_DRAWPARTIALBLURMASKPASS_NATIVEIMPL__CTOR_OFFSET))(this, evt, renderQueueRange, layerMask);
		}

		::System::Void Setup(::UnityEngine::RenderTextureDescriptor& baseDescriptor, ::System::Int32 inNormalAttachmentId)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTextureDescriptor&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_DRAWPARTIALBLURMASKPASS_NATIVEIMPL_SETUP_OFFSET))(this, baseDescriptor, inNormalAttachmentId);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_DRAWPARTIALBLURMASKPASS_NATIVEIMPL_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}

		::System::Void FrameCleanup(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_DRAWPARTIALBLURMASKPASS_NATIVEIMPL_FRAMECLEANUP_OFFSET))(this, cmd);
		}
	};
}
