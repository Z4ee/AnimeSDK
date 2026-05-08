#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderPassEvent.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ScriptableRenderPass.h"
#include "unitysdk/UnityEngine/RenderTextureDescriptor.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"
#include "unitysdk/UnityEngine/Rendering/StencilState.h"

namespace UnityEngine::NAPRenderPipeline0 { class GaussianBlurPassNativeState; }

#define UNITYENGINE_NAPRENDERPIPELINE0_GAUSSIANBLURPASS_NATIVEIMPL_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1AE714D0)
#define UNITYENGINE_NAPRENDERPIPELINE0_GAUSSIANBLURPASS_NATIVEIMPL_SETUP_OFFSET UNITYSDK_OFFSET(0x1AE714A0)
#define UNITYENGINE_NAPRENDERPIPELINE0_GAUSSIANBLURPASS_NATIVEIMPL__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE713F0)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int GaussianBlurPass_NativeImpl_TypeDefinitionIndex = 5743;

	class GaussianBlurPass_NativeImpl : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
	{
	public:
		::UnityEngine::NAPRenderPipeline0::GaussianBlurPassNativeState* m_NativeState; // 0xA8

		::System::Void _ctor(::UnityEngine::NAPRenderPipeline0::RenderPassEvent evt, ::UnityEngine::LayerMask layerMask, ::UnityEngine::Rendering::StencilState& stencilState, ::System::Int32 stencilReference)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent, ::UnityEngine::LayerMask, ::UnityEngine::Rendering::StencilState&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GAUSSIANBLURPASS_NATIVEIMPL__CTOR_OFFSET))(this, evt, layerMask, stencilState, stencilReference);
		}

		::System::Void Setup(::UnityEngine::Rendering::RenderTargetIdentifier& activeCameraColorTexture, ::UnityEngine::RenderTextureDescriptor& descriptor)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::UnityEngine::RenderTextureDescriptor&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GAUSSIANBLURPASS_NATIVEIMPL_SETUP_OFFSET))(this, activeCameraColorTexture, descriptor);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GAUSSIANBLURPASS_NATIVEIMPL_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}
	};
}
