#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"
#include "unitysdk/UnityEngine/Rendering/StencilState.h"

namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_NAPRENDERPIPELINE0_DEFERREDSHADINGPASSNATIVESTATE_CREATENATIVE_OFFSET UNITYSDK_OFFSET(0x1B2EFD60)
#define UNITYENGINE_NAPRENDERPIPELINE0_DEFERREDSHADINGPASSNATIVESTATE_DESTROYNATIVE_OFFSET UNITYSDK_OFFSET(0x1B2EFE00)
#define UNITYENGINE_NAPRENDERPIPELINE0_DEFERREDSHADINGPASSNATIVESTATE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B2EFDE0)
#define UNITYENGINE_NAPRENDERPIPELINE0_DEFERREDSHADINGPASSNATIVESTATE_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1B2EFE20)
#define UNITYENGINE_NAPRENDERPIPELINE0_DEFERREDSHADINGPASSNATIVESTATE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B2EFD70)
#define UNITYENGINE_NAPRENDERPIPELINE0_DEFERREDSHADINGPASSNATIVESTATE_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x1B2EFE30)
#define UNITYENGINE_NAPRENDERPIPELINE0_DEFERREDSHADINGPASSNATIVESTATE_SETUP_OFFSET UNITYSDK_OFFSET(0x1B2EFE10)
#define UNITYENGINE_NAPRENDERPIPELINE0_DEFERREDSHADINGPASSNATIVESTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2EFD40)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int DeferredShadingPassNativeState_TypeDefinitionIndex = 5759;

	class DeferredShadingPassNativeState : public ::System::Object
	{
	public:
		::System::IntPtr m_Ptr; // 0x10

		::System::Void _ctor(::UnityEngine::Rendering::StencilState& stencilState, ::System::Int32 stencilReference)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::StencilState&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_DEFERREDSHADINGPASSNATIVESTATE__CTOR_OFFSET))(this, stencilState, stencilReference);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_DEFERREDSHADINGPASSNATIVESTATE_FINALIZE_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_DEFERREDSHADINGPASSNATIVESTATE_DISPOSE_OFFSET))(this, disposing);
		}

		static ::System::IntPtr CreateNative(::UnityEngine::Rendering::StencilState& stencilState, ::System::Int32 stencilReference)
		{
			return ((::System::IntPtr(*)(::UnityEngine::Rendering::StencilState&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_DEFERREDSHADINGPASSNATIVESTATE_CREATENATIVE_OFFSET))(stencilState, stencilReference);
		}

		::System::Void DestroyNative()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_DEFERREDSHADINGPASSNATIVESTATE_DESTROYNATIVE_OFFSET))(this);
		}

		::System::Void Setup(::UnityEngine::Rendering::RenderTargetIdentifier& colorBuffer, ::UnityEngine::Rendering::RenderTargetIdentifier& depthBuffer, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::System::Boolean justSetRenderTarget, ::System::Boolean UseFullResOffScreenParticlePass)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_DEFERREDSHADINGPASSNATIVESTATE_SETUP_OFFSET))(this, colorBuffer, depthBuffer, renderingData, justSetRenderTarget, UseFullResOffScreenParticlePass);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_DEFERREDSHADINGPASSNATIVESTATE_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}

		::System::Void FrameCleanup(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_DEFERREDSHADINGPASSNATIVESTATE_FRAMECLEANUP_OFFSET))(this, cmd);
		}
	};
}
