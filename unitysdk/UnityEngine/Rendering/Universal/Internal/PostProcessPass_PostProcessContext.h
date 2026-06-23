#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"

namespace UnityEngine::Rendering::Universal::Internal { class PostProcessPass; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_POSTPROCESSCONTEXT_CREATETEMPTARGET3_OFFSET UNITYSDK_OFFSET(0x9F1050)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_POSTPROCESSCONTEXT_DISPOSECONTEXT_OFFSET UNITYSDK_OFFSET(0x9F1020)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_POSTPROCESSCONTEXT_GETCURRENTSOURCE_OFFSET UNITYSDK_OFFSET(0x9F0EC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_POSTPROCESSCONTEXT_GETDESTINATION_OFFSET UNITYSDK_OFFSET(0x9F12E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_POSTPROCESSCONTEXT_GETREADONLYPREFULLRESOLUTIONDESTINATION_OFFSET UNITYSDK_OFFSET(0x9F1260)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_POSTPROCESSCONTEXT_GETSOURCE_OFFSET UNITYSDK_OFFSET(0x9F0F30)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_POSTPROCESSCONTEXT_INITCONTEXT_OFFSET UNITYSDK_OFFSET(0x9F0E70)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_POSTPROCESSCONTEXT_RELEASERENDERTEXTURE_OFFSET UNITYSDK_OFFSET(0x9F0FF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_POSTPROCESSCONTEXT_SETTAARESULT_OFFSET UNITYSDK_OFFSET(0x9F11B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_POSTPROCESSCONTEXT_SWAP_OFFSET UNITYSDK_OFFSET(0x9F1080)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int PostProcessPass_PostProcessContext_TypeDefinitionIndex = 26701;

	struct alignas(8) PostProcessPass_PostProcessContext
	{
		::System::Boolean tempTarget1Used; // 0x10
		::System::Boolean tempTarget2Used; // 0x11
		::System::Boolean tempTarget3Used; // 0x12
		::System::Boolean tempUIAvatarShadowDepthUsed; // 0x13
		::UnityEngine::Rendering::RenderTargetIdentifier source; // 0x18
		::UnityEngine::Rendering::RenderTargetIdentifier destination; // 0x40
		::System::Boolean hasTaaResult; // 0x68
		::UnityEngine::Rendering::RenderTargetIdentifier taaDestination; // 0x70
		::UnityEngine::Rendering::RenderTargetIdentifier currentSource; // 0x98
		::System::Boolean rainDropIsFinished; // 0xC0
		::System::Boolean enableMetalFX; // 0xC1
		::System::Boolean needAddCollectTextureTransition; // 0xC2

		/*
		::System::Void InitContext(::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper cmdWrapper, ::UnityEngine::Rendering::RenderTargetIdentifier sourceIdentifier, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass* pass)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_POSTPROCESSCONTEXT_INITCONTEXT_OFFSET))(this, cmdWrapper, sourceIdentifier, renderingData, pass);
		}
		*/

		::UnityEngine::Rendering::RenderTargetIdentifier GetCurrentSource()
		{
			return ((::UnityEngine::Rendering::RenderTargetIdentifier(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_POSTPROCESSCONTEXT_GETCURRENTSOURCE_OFFSET))(this);
		}

		::UnityEngine::Rendering::RenderTargetIdentifier GetSource(::System::Boolean clearHasTaaResultFlag)
		{
			return ((::UnityEngine::Rendering::RenderTargetIdentifier(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_POSTPROCESSCONTEXT_GETSOURCE_OFFSET))(this, clearHasTaaResultFlag);
		}

		/*
		::System::Void ReleaseRenderTexture(::System::Boolean doNapCapture, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper cmdWrapper, ::System::Int32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_POSTPROCESSCONTEXT_RELEASERENDERTEXTURE_OFFSET))(this, doNapCapture, cmdWrapper, id);
		}
		*/

		/*
		::System::Void DisposeContext(::System::Boolean doNapCapture, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper cmdWrapper, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass* pass)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_POSTPROCESSCONTEXT_DISPOSECONTEXT_OFFSET))(this, doNapCapture, cmdWrapper, pass);
		}
		*/

		/*
		::System::Void CreateTempTarget3(::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper cmdWrapper, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass* pass, ::System::Boolean useHDRFormat, ::System::Boolean needSetLifeTime)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_POSTPROCESSCONTEXT_CREATETEMPTARGET3_OFFSET))(this, cmdWrapper, pass, useHDRFormat, needSetLifeTime);
		}
		*/

		::System::Void Swap()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_POSTPROCESSCONTEXT_SWAP_OFFSET))(this);
		}

		::System::Void SetTaaResult(::UnityEngine::Rendering::RenderTargetIdentifier taaResult)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetIdentifier))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_POSTPROCESSCONTEXT_SETTAARESULT_OFFSET))(this, taaResult);
		}

		::UnityEngine::Rendering::RenderTargetIdentifier GetReadonlyPreFullResolutionDestination()
		{
			return ((::UnityEngine::Rendering::RenderTargetIdentifier(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_POSTPROCESSCONTEXT_GETREADONLYPREFULLRESOLUTIONDESTINATION_OFFSET))(this);
		}

		/*
		::UnityEngine::Rendering::RenderTargetIdentifier GetDestination(::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper cmdWrapper, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass* pass)
		{
			return ((::UnityEngine::Rendering::RenderTargetIdentifier(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper, ::UnityEngine::Rendering::Universal::Internal::PostProcessPass*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_POSTPROCESSCONTEXT_GETDESTINATION_OFFSET))(this, cmdWrapper, pass);
		}
		*/
	};
}
