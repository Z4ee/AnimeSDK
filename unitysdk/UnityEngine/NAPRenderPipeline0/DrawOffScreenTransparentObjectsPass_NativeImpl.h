#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderPassEvent.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ScriptableRenderPass.h"
#include "unitysdk/UnityEngine/Rendering/RenderQueueRange.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"
#include "unitysdk/UnityEngine/Rendering/StencilState.h"

namespace UnityEngine::NAPRenderPipeline0 { class DrawOffScreenTransparentObjectsPassNativeState; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_NAPRENDERPIPELINE0_DRAWOFFSCREENTRANSPARENTOBJECTSPASS_NATIVEIMPL_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1EA5F5A0)
#define UNITYENGINE_NAPRENDERPIPELINE0_DRAWOFFSCREENTRANSPARENTOBJECTSPASS_NATIVEIMPL_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x1EA5F5D0)
#define UNITYENGINE_NAPRENDERPIPELINE0_DRAWOFFSCREENTRANSPARENTOBJECTSPASS_NATIVEIMPL_SETUP_1_OFFSET UNITYSDK_OFFSET(0x1EA5F510)
#define UNITYENGINE_NAPRENDERPIPELINE0_DRAWOFFSCREENTRANSPARENTOBJECTSPASS_NATIVEIMPL_SETUP_OFFSET UNITYSDK_OFFSET(0x1EA5F490)
#define UNITYENGINE_NAPRENDERPIPELINE0_DRAWOFFSCREENTRANSPARENTOBJECTSPASS_NATIVEIMPL__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA5F3E0)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int DrawOffScreenTransparentObjectsPass_NativeImpl_TypeDefinitionIndex = 5778;

	class DrawOffScreenTransparentObjectsPass_NativeImpl : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
	{
	public:
		::UnityEngine::NAPRenderPipeline0::DrawOffScreenTransparentObjectsPassNativeState* m_NativeState; // 0xA8

		::System::Void _ctor(::UnityEngine::NAPRenderPipeline0::RenderPassEvent evt, ::UnityEngine::Rendering::RenderQueueRange range, ::UnityEngine::LayerMask layerMask, ::UnityEngine::Rendering::StencilState& stencilState, ::System::Int32 stencilReference)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent, ::UnityEngine::Rendering::RenderQueueRange, ::UnityEngine::LayerMask, ::UnityEngine::Rendering::StencilState&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_DRAWOFFSCREENTRANSPARENTOBJECTSPASS_NATIVEIMPL__CTOR_OFFSET))(this, evt, range, layerMask, stencilState, stencilReference);
		}

		::System::Void Setup(::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::System::Boolean shouldRestoreRT, ::UnityEngine::Rendering::RenderTargetIdentifier activeColor, ::UnityEngine::Rendering::RenderTargetIdentifier activeDepth)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::System::Boolean, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_DRAWOFFSCREENTRANSPARENTOBJECTSPASS_NATIVEIMPL_SETUP_OFFSET))(this, renderingData, shouldRestoreRT, activeColor, activeDepth);
		}

		::System::Void Setup_1(::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_DRAWOFFSCREENTRANSPARENTOBJECTSPASS_NATIVEIMPL_SETUP_1_OFFSET))(this, renderingData);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_DRAWOFFSCREENTRANSPARENTOBJECTSPASS_NATIVEIMPL_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}

		::System::Void FrameCleanup(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_DRAWOFFSCREENTRANSPARENTOBJECTSPASS_NATIVEIMPL_FRAMECLEANUP_OFFSET))(this, cmd);
		}
	};
}
