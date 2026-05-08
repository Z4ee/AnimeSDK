#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/Rendering/RenderQueueRange.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"
#include "unitysdk/UnityEngine/Rendering/StencilState.h"

namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_NAPRENDERPIPELINE0_DRAWOFFSCREENTRANSPARENTOBJECTSPASSNATIVESTATE_CREATENATIVE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B65DB10)
#define UNITYENGINE_NAPRENDERPIPELINE0_DRAWOFFSCREENTRANSPARENTOBJECTSPASSNATIVESTATE_CREATENATIVE_OFFSET UNITYSDK_OFFSET(0x1B65DA40)
#define UNITYENGINE_NAPRENDERPIPELINE0_DRAWOFFSCREENTRANSPARENTOBJECTSPASSNATIVESTATE_DESTROYNATIVE_OFFSET UNITYSDK_OFFSET(0x1B65DB00)
#define UNITYENGINE_NAPRENDERPIPELINE0_DRAWOFFSCREENTRANSPARENTOBJECTSPASSNATIVESTATE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B65DAE0)
#define UNITYENGINE_NAPRENDERPIPELINE0_DRAWOFFSCREENTRANSPARENTOBJECTSPASSNATIVESTATE_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1B65DB40)
#define UNITYENGINE_NAPRENDERPIPELINE0_DRAWOFFSCREENTRANSPARENTOBJECTSPASSNATIVESTATE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B65DA70)
#define UNITYENGINE_NAPRENDERPIPELINE0_DRAWOFFSCREENTRANSPARENTOBJECTSPASSNATIVESTATE_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x1B65DB50)
#define UNITYENGINE_NAPRENDERPIPELINE0_DRAWOFFSCREENTRANSPARENTOBJECTSPASSNATIVESTATE_SETUP_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B65DB30)
#define UNITYENGINE_NAPRENDERPIPELINE0_DRAWOFFSCREENTRANSPARENTOBJECTSPASSNATIVESTATE_SETUP_OFFSET UNITYSDK_OFFSET(0x1B65DB20)
#define UNITYENGINE_NAPRENDERPIPELINE0_DRAWOFFSCREENTRANSPARENTOBJECTSPASSNATIVESTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B65DA00)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int DrawOffScreenTransparentObjectsPassNativeState_TypeDefinitionIndex = 5771;

	class DrawOffScreenTransparentObjectsPassNativeState : public ::System::Object
	{
	public:
		::System::IntPtr m_Ptr; // 0x10

		::System::Void _ctor(::UnityEngine::Rendering::RenderQueueRange range, ::UnityEngine::LayerMask layerMask, ::UnityEngine::Rendering::StencilState& stencilState, ::System::Int32 stencilReference)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderQueueRange, ::UnityEngine::LayerMask, ::UnityEngine::Rendering::StencilState&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_DRAWOFFSCREENTRANSPARENTOBJECTSPASSNATIVESTATE__CTOR_OFFSET))(this, range, layerMask, stencilState, stencilReference);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_DRAWOFFSCREENTRANSPARENTOBJECTSPASSNATIVESTATE_FINALIZE_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_DRAWOFFSCREENTRANSPARENTOBJECTSPASSNATIVESTATE_DISPOSE_OFFSET))(this, disposing);
		}

		static ::System::IntPtr CreateNative(::UnityEngine::Rendering::RenderQueueRange range, ::UnityEngine::LayerMask layerMask, ::UnityEngine::Rendering::StencilState& stencilState, ::System::Int32 stencilReference)
		{
			return ((::System::IntPtr(*)(::UnityEngine::Rendering::RenderQueueRange, ::UnityEngine::LayerMask, ::UnityEngine::Rendering::StencilState&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_DRAWOFFSCREENTRANSPARENTOBJECTSPASSNATIVESTATE_CREATENATIVE_OFFSET))(range, layerMask, stencilState, stencilReference);
		}

		::System::Void DestroyNative()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_DRAWOFFSCREENTRANSPARENTOBJECTSPASSNATIVESTATE_DESTROYNATIVE_OFFSET))(this);
		}

		::System::Void Setup(::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::System::Boolean shouldRestoreRT, ::UnityEngine::Rendering::RenderTargetIdentifier activeColor, ::UnityEngine::Rendering::RenderTargetIdentifier activeDepth)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::System::Boolean, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_DRAWOFFSCREENTRANSPARENTOBJECTSPASSNATIVESTATE_SETUP_OFFSET))(this, renderingData, shouldRestoreRT, activeColor, activeDepth);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_DRAWOFFSCREENTRANSPARENTOBJECTSPASSNATIVESTATE_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}

		::System::Void FrameCleanup(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_DRAWOFFSCREENTRANSPARENTOBJECTSPASSNATIVESTATE_FRAMECLEANUP_OFFSET))(this, cmd);
		}

		static ::System::IntPtr CreateNative_Injected(::UnityEngine::Rendering::RenderQueueRange& range, ::UnityEngine::LayerMask& layerMask, ::UnityEngine::Rendering::StencilState& stencilState, ::System::Int32 stencilReference)
		{
			return ((::System::IntPtr(*)(::UnityEngine::Rendering::RenderQueueRange&, ::UnityEngine::LayerMask&, ::UnityEngine::Rendering::StencilState&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_DRAWOFFSCREENTRANSPARENTOBJECTSPASSNATIVESTATE_CREATENATIVE_INJECTED_OFFSET))(range, layerMask, stencilState, stencilReference);
		}

		::System::Void Setup_Injected(::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::System::Boolean shouldRestoreRT, ::UnityEngine::Rendering::RenderTargetIdentifier& activeColor, ::UnityEngine::Rendering::RenderTargetIdentifier& activeDepth)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::System::Boolean, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::UnityEngine::Rendering::RenderTargetIdentifier&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_DRAWOFFSCREENTRANSPARENTOBJECTSPASSNATIVESTATE_SETUP_INJECTED_OFFSET))(this, renderingData, shouldRestoreRT, activeColor, activeDepth);
		}
	};
}
