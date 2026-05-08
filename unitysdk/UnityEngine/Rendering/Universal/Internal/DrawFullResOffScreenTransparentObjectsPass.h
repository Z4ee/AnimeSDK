#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/CommandBufferWrapper.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderPassEvent.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ScriptableRenderPass.h"
#include "unitysdk/UnityEngine/Rendering/DrawingSettings.h"
#include "unitysdk/UnityEngine/Rendering/FilteringSettings.h"
#include "unitysdk/UnityEngine/Rendering/RenderQueueRange.h"
#include "unitysdk/UnityEngine/Rendering/RenderStateBlock.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"
#include "unitysdk/UnityEngine/Rendering/ShaderTagId.h"
#include "unitysdk/UnityEngine/Rendering/StencilState.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::NAPRenderPipeline0 { class ProfilingSampler; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering::Universal { class VREffects; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWFULLRESOFFSCREENTRANSPARENTOBJECTSPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1AD05670)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWFULLRESOFFSCREENTRANSPARENTOBJECTSPASS_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x1AD06B30)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWFULLRESOFFSCREENTRANSPARENTOBJECTSPASS_POSTPROCESSOFFSCREENPARTICLES_OFFSET UNITYSDK_OFFSET(0x1AD06AA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWFULLRESOFFSCREENTRANSPARENTOBJECTSPASS_PREPROCESSOFFSCREENPARTICLES_OFFSET UNITYSDK_OFFSET(0x1AD063B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWFULLRESOFFSCREENTRANSPARENTOBJECTSPASS_SETUP_OFFSET UNITYSDK_OFFSET(0x1AD05460)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWFULLRESOFFSCREENTRANSPARENTOBJECTSPASS__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD04E60)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWFULLRESOFFSCREENTRANSPARENTOBJECTSPASS___BASE_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x1AD06BE0)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int DrawFullResOffScreenTransparentObjectsPass_TypeDefinitionIndex = 30481;

	class DrawFullResOffScreenTransparentObjectsPass : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
	{
	public:
		static ::System::Int32* StaticGet_PassPropertyId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrawFullResOffScreenTransparentObjectsPass_TypeDefinitionIndex)->GetStaticField(0x71F0);
		}
		::UnityEngine::Rendering::Universal::VREffects* _vrEffects; // 0xA8
		::System::String* m_ProfilerTag; // 0xB0
		::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* m_TransparentShaderTagIdListForOffScreenParticle; // 0xB8
		::UnityEngine::NAPRenderPipeline0::ProfilingSampler* m_ProfilingSampler; // 0xC0
		::UnityEngine::Rendering::RenderTargetIdentifier m_ActiveDepthIdentifier; // 0xC8
		::System::Boolean m_DrawParticleDecalAndOnTransparentPass; // 0xF0
		::System::Boolean m_OutlineBeforeTransparent; // 0xF1
		::System::Boolean m_IsOffScreenParticlePass; // 0xF2
		::System::Boolean m_OutlineProcessPassActiveHear; // 0xF3
		::UnityEngine::Rendering::DrawingSettings m_DrawSetting; // 0xF4
		::UnityEngine::Rendering::RenderStateBlock m_RenderStateBlock; // 0x22C
		::UnityEngine::Rendering::RenderStateBlock m_RenderStateBlockForAlphaBlend; // 0x298
		::UnityEngine::Rendering::RenderTargetIdentifier m_ActiveColorIdentifier; // 0x308
		::UnityEngine::Rendering::FilteringSettings m_FilteringSettings; // 0x330
		::UnityEngine::Rendering::FilteringSettings m_FilteringSettingsForDecal; // 0x34C

		::System::Void _ctor(::System::String* profilerTag, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent>* renderPassEventConfig, ::UnityEngine::Rendering::RenderQueueRange renderQueueRange, ::UnityEngine::LayerMask layerMask, ::UnityEngine::Rendering::StencilState stencilState, ::System::Int32 stencilReference)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent>*, ::UnityEngine::Rendering::RenderQueueRange, ::UnityEngine::LayerMask, ::UnityEngine::Rendering::StencilState, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWFULLRESOFFSCREENTRANSPARENTOBJECTSPASS__CTOR_OFFSET))(this, profilerTag, renderPassEventConfig, renderQueueRange, layerMask, stencilState, stencilReference);
		}

		::System::Void Setup(::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::Rendering::RenderTargetIdentifier colorBufferIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier depthIdentifier, ::System::Boolean drawParticleDecalAndOnTransparentPass)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWFULLRESOFFSCREENTRANSPARENTOBJECTSPASS_SETUP_OFFSET))(this, renderingData, colorBufferIdentifier, depthIdentifier, drawParticleDecalAndOnTransparentPass);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWFULLRESOFFSCREENTRANSPARENTOBJECTSPASS_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}

		::System::Void FrameCleanup(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWFULLRESOFFSCREENTRANSPARENTOBJECTSPASS_FRAMECLEANUP_OFFSET))(this, cmd);
		}

		::System::Void PreprocessOffscreenParticles(::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper& cmd, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper&, ::UnityEngine::NAPRenderPipeline0::RenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWFULLRESOFFSCREENTRANSPARENTOBJECTSPASS_PREPROCESSOFFSCREENPARTICLES_OFFSET))(this, cmd, renderingData);
		}

		::System::Void PostProcessOffscreenParticles(::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper& cmd, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper&, ::UnityEngine::NAPRenderPipeline0::RenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWFULLRESOFFSCREENTRANSPARENTOBJECTSPASS_POSTPROCESSOFFSCREENPARTICLES_OFFSET))(this, cmd, renderingData);
		}

		::System::Void __base_FrameCleanup(::UnityEngine::Rendering::CommandBuffer* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWFULLRESOFFSCREENTRANSPARENTOBJECTSPASS___BASE_FRAMECLEANUP_OFFSET))(this, P0);
		}
	};
}
