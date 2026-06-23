#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/DeferredShadingPass___c__DisplayClass27_0.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/DeferredShadingPerFrameConstants.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderTargetHandle.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ScriptableRenderPass.h"
#include "unitysdk/UnityEngine/Rendering/AttachmentDescriptor.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace UnityEngine::NAPRenderPipeline0 { class ProfilingSampler; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_NAPRENDERPIPELINE0_DEFERREDSHADINGPASS_ADDTEXTURETRANSITIONFORPOSTGENERATEHALFSPECULAR_OFFSET UNITYSDK_OFFSET(0x1D41B630)
#define UNITYENGINE_NAPRENDERPIPELINE0_DEFERREDSHADINGPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1D41B9C0)
#define UNITYENGINE_NAPRENDERPIPELINE0_DEFERREDSHADINGPASS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D425F90)
#define UNITYENGINE_NAPRENDERPIPELINE0_DEFERREDSHADINGPASS__EXECUTE_G__ADDTEXTURETRANSITIONFORGENERATEHALFSPECULAR_27_0_OFFSET UNITYSDK_OFFSET(0x1D423570)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int DeferredShadingPass_TypeDefinitionIndex = 5827;

	class DeferredShadingPass : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
	{
	public:
		static ::UnityEngine::NAPRenderPipeline0::DeferredShadingPerFrameConstants* StaticGet_FrameConstants()
		{
			return (::UnityEngine::NAPRenderPipeline0::DeferredShadingPerFrameConstants*)Il2CppClass::FromTypeDefinitionIndex(DeferredShadingPass_TypeDefinitionIndex)->GetStaticField(0x2A80);
		}
		static ::System::Boolean* StaticGet_s_UseLossyForMotionVector()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(DeferredShadingPass_TypeDefinitionIndex)->GetStaticField(0x2A8C);
		}
		static ::UnityEngine::Vector2Int* StaticGet_s_PreScreenSize()
		{
			return (::UnityEngine::Vector2Int*)Il2CppClass::FromTypeDefinitionIndex(DeferredShadingPass_TypeDefinitionIndex)->GetStaticField(0x2A90);
		}
		::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>* m_ColorBuffers; // 0xA8
		::UnityEngine::Rendering::RenderTargetIdentifier m_UsedColorBuffer; // 0xB0
		::UnityEngine::NAPRenderPipeline0::RenderTargetHandle m_ColorBuffer; // 0xD8
		::UnityEngine::NAPRenderPipeline0::RenderTargetHandle m_DepthBuffer; // 0xDC
		::UnityEngine::Color m_BackgroundColor; // 0xE0
		::UnityEngine::NAPRenderPipeline0::ProfilingSampler* m_ProfilingSampler; // 0xF0
		::System::Boolean m_JustSetRenderTarget; // 0xF8
		::System::Boolean m_DeferredOpt; // 0xF9
		::System::Boolean m_NeedClearColorBuffer; // 0xFA
		::System::Boolean m_EnableOpaquePostProcess; // 0xFB
		::System::Boolean m_MotionVectorOn; // 0xFC
		::System::Boolean m_SubPassDeferred; // 0xFD
		::UnityEngine::Rendering::AttachmentDescriptor m_ColorAttachDesc; // 0x100
		::UnityEngine::Rendering::AttachmentDescriptor m_OutColorAttachDesc; // 0x178
		::UnityEngine::Rendering::AttachmentDescriptor m_MotionVectorAttachDesc; // 0x1F0
		::UnityEngine::Rendering::AttachmentDescriptor m_DepthAttachDesc; // 0x268

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_DEFERREDSHADINGPASS__CCTOR_OFFSET))();
		}

		::System::Void AddTextureTransitionForPostGenerateHalfSpecular(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::NAPRenderPipeline0::RenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_DEFERREDSHADINGPASS_ADDTEXTURETRANSITIONFORPOSTGENERATEHALFSPECULAR_OFFSET))(this, cmd, renderingData);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_DEFERREDSHADINGPASS_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}

		static ::System::Void _Execute_g__AddTextureTransitionForGenerateHalfSpecular_27_0(::UnityEngine::NAPRenderPipeline0::DeferredShadingPass___c__DisplayClass27_0& a1)
		{
			return ((::System::Void(*)(::UnityEngine::NAPRenderPipeline0::DeferredShadingPass___c__DisplayClass27_0&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_DEFERREDSHADINGPASS__EXECUTE_G__ADDTEXTURETRANSITIONFORGENERATEHALFSPECULAR_27_0_OFFSET))(a1);
		}
	};
}
