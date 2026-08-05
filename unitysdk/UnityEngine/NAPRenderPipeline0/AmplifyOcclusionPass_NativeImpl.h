#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderPassEvent.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ScriptableRenderPass.h"
#include "unitysdk/UnityEngine/RenderTextureDescriptor.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

namespace UnityEngine::NAPRenderPipeline0 { class AmplifyOcclusionPassNativeState; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_NAPRENDERPIPELINE0_AMPLIFYOCCLUSIONPASS_NATIVEIMPL_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1EE1E830)
#define UNITYENGINE_NAPRENDERPIPELINE0_AMPLIFYOCCLUSIONPASS_NATIVEIMPL_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x1EE1E860)
#define UNITYENGINE_NAPRENDERPIPELINE0_AMPLIFYOCCLUSIONPASS_NATIVEIMPL_SETUP_OFFSET UNITYSDK_OFFSET(0x1EE1E800)
#define UNITYENGINE_NAPRENDERPIPELINE0_AMPLIFYOCCLUSIONPASS_NATIVEIMPL__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE1E780)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int AmplifyOcclusionPass_NativeImpl_TypeDefinitionIndex = 5730;

	class AmplifyOcclusionPass_NativeImpl : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
	{
	public:
		::UnityEngine::NAPRenderPipeline0::AmplifyOcclusionPassNativeState* m_NativeState; // 0xA8

		::System::Void _ctor(::UnityEngine::NAPRenderPipeline0::RenderPassEvent evt)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_AMPLIFYOCCLUSIONPASS_NATIVEIMPL__CTOR_OFFSET))(this, evt);
		}

		::System::Void Setup(::UnityEngine::RenderTextureDescriptor& baseDescriptor)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTextureDescriptor&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_AMPLIFYOCCLUSIONPASS_NATIVEIMPL_SETUP_OFFSET))(this, baseDescriptor);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_AMPLIFYOCCLUSIONPASS_NATIVEIMPL_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}

		::System::Void FrameCleanup(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_AMPLIFYOCCLUSIONPASS_NATIVEIMPL_FRAMECLEANUP_OFFSET))(this, cmd);
		}
	};
}
