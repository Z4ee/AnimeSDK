#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/RenderTextureDescriptor.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"
#include "unitysdk/UnityEngine/Rendering/StencilState.h"

#define UNITYENGINE_NAPRENDERPIPELINE0_GAUSSIANBLURPASSNATIVESTATE_CREATENATIVE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E7CB220)
#define UNITYENGINE_NAPRENDERPIPELINE0_GAUSSIANBLURPASSNATIVESTATE_CREATENATIVE_OFFSET UNITYSDK_OFFSET(0x1E7CB160)
#define UNITYENGINE_NAPRENDERPIPELINE0_GAUSSIANBLURPASSNATIVESTATE_DESTROYNATIVE_OFFSET UNITYSDK_OFFSET(0x1E7CB210)
#define UNITYENGINE_NAPRENDERPIPELINE0_GAUSSIANBLURPASSNATIVESTATE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E7CB1F0)
#define UNITYENGINE_NAPRENDERPIPELINE0_GAUSSIANBLURPASSNATIVESTATE_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1E7CB240)
#define UNITYENGINE_NAPRENDERPIPELINE0_GAUSSIANBLURPASSNATIVESTATE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1E7CB180)
#define UNITYENGINE_NAPRENDERPIPELINE0_GAUSSIANBLURPASSNATIVESTATE_SETUP_OFFSET UNITYSDK_OFFSET(0x1E7CB230)
#define UNITYENGINE_NAPRENDERPIPELINE0_GAUSSIANBLURPASSNATIVESTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7CB130)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int GaussianBlurPassNativeState_TypeDefinitionIndex = 5746;

	class GaussianBlurPassNativeState : public ::System::Object
	{
	public:
		::System::IntPtr m_Ptr; // 0x10

		::System::Void _ctor(::UnityEngine::LayerMask layerMask, ::UnityEngine::Rendering::StencilState& stencilState, ::System::Int32 stencilReference)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::LayerMask, ::UnityEngine::Rendering::StencilState&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GAUSSIANBLURPASSNATIVESTATE__CTOR_OFFSET))(this, layerMask, stencilState, stencilReference);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GAUSSIANBLURPASSNATIVESTATE_FINALIZE_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GAUSSIANBLURPASSNATIVESTATE_DISPOSE_OFFSET))(this, disposing);
		}

		static ::System::IntPtr CreateNative(::UnityEngine::LayerMask layerMask, ::UnityEngine::Rendering::StencilState& stencilState, ::System::Int32 stencilReference)
		{
			return ((::System::IntPtr(*)(::UnityEngine::LayerMask, ::UnityEngine::Rendering::StencilState&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GAUSSIANBLURPASSNATIVESTATE_CREATENATIVE_OFFSET))(layerMask, stencilState, stencilReference);
		}

		::System::Void DestroyNative()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GAUSSIANBLURPASSNATIVESTATE_DESTROYNATIVE_OFFSET))(this);
		}

		::System::Void Setup(::UnityEngine::Rendering::RenderTargetIdentifier& activeCameraColorTexture, ::UnityEngine::RenderTextureDescriptor& descriptor)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::UnityEngine::RenderTextureDescriptor&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GAUSSIANBLURPASSNATIVESTATE_SETUP_OFFSET))(this, activeCameraColorTexture, descriptor);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GAUSSIANBLURPASSNATIVESTATE_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}

		static ::System::IntPtr CreateNative_Injected(::UnityEngine::LayerMask& layerMask, ::UnityEngine::Rendering::StencilState& stencilState, ::System::Int32 stencilReference)
		{
			return ((::System::IntPtr(*)(::UnityEngine::LayerMask&, ::UnityEngine::Rendering::StencilState&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GAUSSIANBLURPASSNATIVESTATE_CREATENATIVE_INJECTED_OFFSET))(layerMask, stencilState, stencilReference);
		}
	};
}
