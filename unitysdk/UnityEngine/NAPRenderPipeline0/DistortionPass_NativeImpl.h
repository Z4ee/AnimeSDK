#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderPassEvent.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ScriptableRenderPass.h"
#include "unitysdk/UnityEngine/RenderTextureDescriptor.h"
#include "unitysdk/UnityEngine/Rendering/CullingResults.h"
#include "unitysdk/UnityEngine/Rendering/RenderQueueRange.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

namespace UnityEngine::NAPRenderPipeline0 { class DistortionPassNativeState; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_NAPRENDERPIPELINE0_DISTORTIONPASS_NATIVEIMPL_AFTERCULLSETUP_OFFSET UNITYSDK_OFFSET(0x1EE1EF30)
#define UNITYENGINE_NAPRENDERPIPELINE0_DISTORTIONPASS_NATIVEIMPL_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1EE1EE60)
#define UNITYENGINE_NAPRENDERPIPELINE0_DISTORTIONPASS_NATIVEIMPL_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x1EE1EE90)
#define UNITYENGINE_NAPRENDERPIPELINE0_DISTORTIONPASS_NATIVEIMPL_SETUP_OFFSET UNITYSDK_OFFSET(0x1EE1EE30)
#define UNITYENGINE_NAPRENDERPIPELINE0_DISTORTIONPASS_NATIVEIMPL__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE1ED90)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int DistortionPass_NativeImpl_TypeDefinitionIndex = 5733;

	class DistortionPass_NativeImpl : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
	{
	public:
		::UnityEngine::NAPRenderPipeline0::DistortionPassNativeState* m_NativeState; // 0xA8

		::System::Void _ctor(::UnityEngine::NAPRenderPipeline0::RenderPassEvent evt, ::UnityEngine::Rendering::RenderQueueRange renderQueueRange, ::UnityEngine::LayerMask layerMask)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent, ::UnityEngine::Rendering::RenderQueueRange, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_DISTORTIONPASS_NATIVEIMPL__CTOR_OFFSET))(this, evt, renderQueueRange, layerMask);
		}

		::System::Void Setup(::UnityEngine::RenderTextureDescriptor& baseDescriptor)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTextureDescriptor&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_DISTORTIONPASS_NATIVEIMPL_SETUP_OFFSET))(this, baseDescriptor);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_DISTORTIONPASS_NATIVEIMPL_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}

		::System::Void FrameCleanup(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_DISTORTIONPASS_NATIVEIMPL_FRAMECLEANUP_OFFSET))(this, cmd);
		}

		::System::Void AfterCullSetup(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::Rendering::CullingResults& cullingResults)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::Rendering::CullingResults&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_DISTORTIONPASS_NATIVEIMPL_AFTERCULLSETUP_OFFSET))(this, context, renderingData, cullingResults);
		}
	};
}
