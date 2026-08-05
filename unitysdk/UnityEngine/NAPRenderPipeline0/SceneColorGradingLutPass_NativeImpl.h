#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderPassEvent.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ScriptableRenderPass.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

namespace UnityEngine::NAPRenderPipeline0 { class SceneColorGradingLutPassNativeState; }

#define UNITYENGINE_NAPRENDERPIPELINE0_SCENECOLORGRADINGLUTPASS_NATIVEIMPL_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1EE25930)
#define UNITYENGINE_NAPRENDERPIPELINE0_SCENECOLORGRADINGLUTPASS_NATIVEIMPL__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE258B0)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int SceneColorGradingLutPass_NativeImpl_TypeDefinitionIndex = 5724;

	class SceneColorGradingLutPass_NativeImpl : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
	{
	public:
		::UnityEngine::NAPRenderPipeline0::SceneColorGradingLutPassNativeState* m_NativeState; // 0xA8

		::System::Void _ctor(::UnityEngine::NAPRenderPipeline0::RenderPassEvent evt)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SCENECOLORGRADINGLUTPASS_NATIVEIMPL__CTOR_OFFSET))(this, evt);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SCENECOLORGRADINGLUTPASS_NATIVEIMPL_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}
	};
}
