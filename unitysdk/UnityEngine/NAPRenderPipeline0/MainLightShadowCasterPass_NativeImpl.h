#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderPassEvent.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ScriptableRenderPass.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

namespace UnityEngine::NAPRenderPipeline0 { class MainLightShadowCasterPassNativeState; }

#define UNITYENGINE_NAPRENDERPIPELINE0_MAINLIGHTSHADOWCASTERPASS_NATIVEIMPL_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1E8ABA20)
#define UNITYENGINE_NAPRENDERPIPELINE0_MAINLIGHTSHADOWCASTERPASS_NATIVEIMPL_SETUP_OFFSET UNITYSDK_OFFSET(0x1E8ABA50)
#define UNITYENGINE_NAPRENDERPIPELINE0_MAINLIGHTSHADOWCASTERPASS_NATIVEIMPL__CTOR_OFFSET UNITYSDK_OFFSET(0x1E8AB9A0)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int MainLightShadowCasterPass_NativeImpl_TypeDefinitionIndex = 5728;

	class MainLightShadowCasterPass_NativeImpl : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
	{
	public:
		::UnityEngine::NAPRenderPipeline0::MainLightShadowCasterPassNativeState* m_NativeState; // 0xA8

		::System::Void _ctor(::UnityEngine::NAPRenderPipeline0::RenderPassEvent evt)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_MAINLIGHTSHADOWCASTERPASS_NATIVEIMPL__CTOR_OFFSET))(this, evt);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_MAINLIGHTSHADOWCASTERPASS_NATIVEIMPL_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}

		::System::Boolean Setup(::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_MAINLIGHTSHADOWCASTERPASS_NATIVEIMPL_SETUP_OFFSET))(this, renderingData);
		}
	};
}
