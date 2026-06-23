#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/RenderTextureDescriptor.h"
#include "unitysdk/UnityEngine/Rendering/RenderQueueRange.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_NAPRENDERPIPELINE0_DRAWPARTIALBLURMASKPASSNATIVESTATE_CREATENATIVE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D72D9B0)
#define UNITYENGINE_NAPRENDERPIPELINE0_DRAWPARTIALBLURMASKPASSNATIVESTATE_CREATENATIVE_OFFSET UNITYSDK_OFFSET(0x1D72D8E0)
#define UNITYENGINE_NAPRENDERPIPELINE0_DRAWPARTIALBLURMASKPASSNATIVESTATE_DESTROYNATIVE_OFFSET UNITYSDK_OFFSET(0x1D72D9A0)
#define UNITYENGINE_NAPRENDERPIPELINE0_DRAWPARTIALBLURMASKPASSNATIVESTATE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D72D980)
#define UNITYENGINE_NAPRENDERPIPELINE0_DRAWPARTIALBLURMASKPASSNATIVESTATE_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1D72D9D0)
#define UNITYENGINE_NAPRENDERPIPELINE0_DRAWPARTIALBLURMASKPASSNATIVESTATE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1D72D910)
#define UNITYENGINE_NAPRENDERPIPELINE0_DRAWPARTIALBLURMASKPASSNATIVESTATE_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x1D72D9E0)
#define UNITYENGINE_NAPRENDERPIPELINE0_DRAWPARTIALBLURMASKPASSNATIVESTATE_SETUP_OFFSET UNITYSDK_OFFSET(0x1D72D9C0)
#define UNITYENGINE_NAPRENDERPIPELINE0_DRAWPARTIALBLURMASKPASSNATIVESTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D72D8B0)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int DrawPartialBlurMaskPassNativeState_TypeDefinitionIndex = 5753;

	class DrawPartialBlurMaskPassNativeState : public ::System::Object
	{
	public:
		::System::IntPtr m_Ptr; // 0x10

		::System::Void _ctor(::UnityEngine::Rendering::RenderQueueRange renderQueueRange, ::UnityEngine::LayerMask layerMask)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderQueueRange, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_DRAWPARTIALBLURMASKPASSNATIVESTATE__CTOR_OFFSET))(this, renderQueueRange, layerMask);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_DRAWPARTIALBLURMASKPASSNATIVESTATE_FINALIZE_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_DRAWPARTIALBLURMASKPASSNATIVESTATE_DISPOSE_OFFSET))(this, disposing);
		}

		static ::System::IntPtr CreateNative(::UnityEngine::Rendering::RenderQueueRange renderQueueRange, ::UnityEngine::LayerMask layerMask)
		{
			return ((::System::IntPtr(*)(::UnityEngine::Rendering::RenderQueueRange, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_DRAWPARTIALBLURMASKPASSNATIVESTATE_CREATENATIVE_OFFSET))(renderQueueRange, layerMask);
		}

		::System::Void DestroyNative()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_DRAWPARTIALBLURMASKPASSNATIVESTATE_DESTROYNATIVE_OFFSET))(this);
		}

		::System::Void Setup(::UnityEngine::RenderTextureDescriptor& baseDescriptor, ::System::Int32 inNormalAttachmentId)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTextureDescriptor&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_DRAWPARTIALBLURMASKPASSNATIVESTATE_SETUP_OFFSET))(this, baseDescriptor, inNormalAttachmentId);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_DRAWPARTIALBLURMASKPASSNATIVESTATE_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}

		::System::Void FrameCleanup(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_DRAWPARTIALBLURMASKPASSNATIVESTATE_FRAMECLEANUP_OFFSET))(this, cmd);
		}

		static ::System::IntPtr CreateNative_Injected(::UnityEngine::Rendering::RenderQueueRange& renderQueueRange, ::UnityEngine::LayerMask& layerMask)
		{
			return ((::System::IntPtr(*)(::UnityEngine::Rendering::RenderQueueRange&, ::UnityEngine::LayerMask&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_DRAWPARTIALBLURMASKPASSNATIVESTATE_CREATENATIVE_INJECTED_OFFSET))(renderQueueRange, layerMask);
		}
	};
}
