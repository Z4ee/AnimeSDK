#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderPassEvent.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ScriptableRenderPass.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

namespace UnityEngine::NAPRenderPipeline0 { class ScreenSpaceShadowResolvePassNativeState; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_NAPRENDERPIPELINE0_SCREENSPACESHADOWRESOLVEPASS_NATIVEIMPL_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1E7D3370)
#define UNITYENGINE_NAPRENDERPIPELINE0_SCREENSPACESHADOWRESOLVEPASS_NATIVEIMPL_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x1E7D33A0)
#define UNITYENGINE_NAPRENDERPIPELINE0_SCREENSPACESHADOWRESOLVEPASS_NATIVEIMPL_SETUP_OFFSET UNITYSDK_OFFSET(0x1E7D3340)
#define UNITYENGINE_NAPRENDERPIPELINE0_SCREENSPACESHADOWRESOLVEPASS_NATIVEIMPL__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7D32C0)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int ScreenSpaceShadowResolvePass_NativeImpl_TypeDefinitionIndex = 5776;

	class ScreenSpaceShadowResolvePass_NativeImpl : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
	{
	public:
		::UnityEngine::NAPRenderPipeline0::ScreenSpaceShadowResolvePassNativeState* m_NativeState; // 0xA8

		::System::Void _ctor(::UnityEngine::NAPRenderPipeline0::RenderPassEvent evt)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SCREENSPACESHADOWRESOLVEPASS_NATIVEIMPL__CTOR_OFFSET))(this, evt);
		}

		::System::Void Setup(::System::Boolean requirePerObjectShadowPass)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SCREENSPACESHADOWRESOLVEPASS_NATIVEIMPL_SETUP_OFFSET))(this, requirePerObjectShadowPass);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SCREENSPACESHADOWRESOLVEPASS_NATIVEIMPL_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}

		::System::Void FrameCleanup(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SCREENSPACESHADOWRESOLVEPASS_NATIVEIMPL_FRAMECLEANUP_OFFSET))(this, cmd);
		}
	};
}
