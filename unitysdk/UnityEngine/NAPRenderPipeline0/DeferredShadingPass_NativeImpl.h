#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderPassEvent.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ScriptableRenderPass.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"
#include "unitysdk/UnityEngine/Rendering/StencilState.h"

namespace UnityEngine::NAPRenderPipeline0 { class DeferredShadingPassNativeState; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_NAPRENDERPIPELINE0_DEFERREDSHADINGPASS_NATIVEIMPL_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1B0C0950)
#define UNITYENGINE_NAPRENDERPIPELINE0_DEFERREDSHADINGPASS_NATIVEIMPL_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x1B0C0980)
#define UNITYENGINE_NAPRENDERPIPELINE0_DEFERREDSHADINGPASS_NATIVEIMPL_SETUP_OFFSET UNITYSDK_OFFSET(0x1B0C0920)
#define UNITYENGINE_NAPRENDERPIPELINE0_DEFERREDSHADINGPASS_NATIVEIMPL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0C0890)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int DeferredShadingPass_NativeImpl_TypeDefinitionIndex = 5760;

	class DeferredShadingPass_NativeImpl : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
	{
	public:
		::UnityEngine::NAPRenderPipeline0::DeferredShadingPassNativeState* m_NativeState; // 0xA8

		::System::Void _ctor(::UnityEngine::NAPRenderPipeline0::RenderPassEvent evt, ::UnityEngine::Rendering::StencilState& stencilState, ::System::Int32 stencilReference)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent, ::UnityEngine::Rendering::StencilState&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_DEFERREDSHADINGPASS_NATIVEIMPL__CTOR_OFFSET))(this, evt, stencilState, stencilReference);
		}

		::System::Void Setup(::UnityEngine::Rendering::RenderTargetIdentifier& colorBuffer, ::UnityEngine::Rendering::RenderTargetIdentifier& depthBuffer, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::System::Boolean justSetRenderTarget, ::System::Boolean UseFullResOffScreenParticlePass)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_DEFERREDSHADINGPASS_NATIVEIMPL_SETUP_OFFSET))(this, colorBuffer, depthBuffer, renderingData, justSetRenderTarget, UseFullResOffScreenParticlePass);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_DEFERREDSHADINGPASS_NATIVEIMPL_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}

		::System::Void FrameCleanup(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_DEFERREDSHADINGPASS_NATIVEIMPL_FRAMECLEANUP_OFFSET))(this, cmd);
		}
	};
}
