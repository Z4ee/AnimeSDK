#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderPassEvent.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ScriptableRenderPass.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

namespace UnityEngine::NAPRenderPipeline0 { class LateGbufferPassNativeState; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_NAPRENDERPIPELINE0_LATEGBUFFERPASS_NATIVEIMPL_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1E319B70)
#define UNITYENGINE_NAPRENDERPIPELINE0_LATEGBUFFERPASS_NATIVEIMPL_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x1E319BA0)
#define UNITYENGINE_NAPRENDERPIPELINE0_LATEGBUFFERPASS_NATIVEIMPL_SETUP_OFFSET UNITYSDK_OFFSET(0x1E319B40)
#define UNITYENGINE_NAPRENDERPIPELINE0_LATEGBUFFERPASS_NATIVEIMPL__CTOR_OFFSET UNITYSDK_OFFSET(0x1E319AB0)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int LateGbufferPass_NativeImpl_TypeDefinitionIndex = 5716;

	class LateGbufferPass_NativeImpl : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
	{
	public:
		::UnityEngine::NAPRenderPipeline0::LateGbufferPassNativeState* m_NativeState; // 0xA8

		::System::Void _ctor(::UnityEngine::NAPRenderPipeline0::RenderPassEvent evt, ::UnityEngine::LayerMask layerMask)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_LATEGBUFFERPASS_NATIVEIMPL__CTOR_OFFSET))(this, evt, layerMask);
		}

		::System::Void Setup(::System::Boolean needStoreHalfDepth)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_LATEGBUFFERPASS_NATIVEIMPL_SETUP_OFFSET))(this, needStoreHalfDepth);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_LATEGBUFFERPASS_NATIVEIMPL_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}

		::System::Void FrameCleanup(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_LATEGBUFFERPASS_NATIVEIMPL_FRAMECLEANUP_OFFSET))(this, cmd);
		}
	};
}
