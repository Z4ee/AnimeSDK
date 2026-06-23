#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderPassEvent.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderTargetHandle.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ScriptableRenderPass.h"
#include "unitysdk/UnityEngine/Rendering/FilteringSettings.h"
#include "unitysdk/UnityEngine/Rendering/RenderQueueRange.h"
#include "unitysdk/UnityEngine/Rendering/RenderStateBlock.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"
#include "unitysdk/UnityEngine/Rendering/StencilState.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine::NAPRenderPipeline0 { class ProfilingSampler; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering::Universal { class UniversalRenderPipelineAsset; }
namespace UnityEngine::Rendering::Universal::Internal { class WaterGenPass; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWOPAQUEAFTERDEFERREDSHADINGPASS_DRAWFUROBJECTS_OFFSET UNITYSDK_OFFSET(0x1B893B00)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWOPAQUEAFTERDEFERREDSHADINGPASS_DRAWINTERIOR_OFFSET UNITYSDK_OFFSET(0x1B893970)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWOPAQUEAFTERDEFERREDSHADINGPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1B892D50)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWOPAQUEAFTERDEFERREDSHADINGPASS_SETUP_OFFSET UNITYSDK_OFFSET(0x1B8928A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWOPAQUEAFTERDEFERREDSHADINGPASS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B892900)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int DrawOpaqueAfterDeferredShadingPass_TypeDefinitionIndex = 27088;

	class DrawOpaqueAfterDeferredShadingPass : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
	{
	public:
		::System::String* m_ProfilerTag; // 0xA8
		::UnityEngine::NAPRenderPipeline0::ProfilingSampler* m_ProfilingSampler; // 0xB0
		::UnityEngine::Rendering::Universal::Internal::WaterGenPass* m_WaterGenPass; // 0xB8
		::UnityEngine::Rendering::FilteringSettings m_OpaqueFilteringSettingsForBlackCanvas; // 0xC0
		::UnityEngine::Rendering::RenderStateBlock m_RenderStateBlock; // 0xDC
		::System::Int32 m_lastScreenWidth; // 0x148
		::UnityEngine::Rendering::FilteringSettings m_OpaqueFilteringSettingsForNoneBlackCanvas; // 0x14C
		::UnityEngine::Matrix4x4 m_DamageTextProjMatrix; // 0x168
		::UnityEngine::NAPRenderPipeline0::RenderTargetHandle m_ActiveDepthAttachment; // 0x1A8
		::UnityEngine::NAPRenderPipeline0::RenderTargetHandle m_CameraColorAttachment; // 0x1AC
		::UnityEngine::NAPRenderPipeline0::RenderTargetHandle m_ActiveColorAttachment; // 0x1B0
		::UnityEngine::Rendering::FilteringSettings m_FilteringSettingsForTop; // 0x1B4
		::UnityEngine::Rendering::FilteringSettings m_FilteringSettingsForWater; // 0x1D0
		::System::Int32 m_lastScreenHeight; // 0x1EC
		::UnityEngine::Rendering::FilteringSettings m_FilteringSettingsForAllBlackCanvas; // 0x1F0
		::UnityEngine::Rendering::FilteringSettings m_FilteringSettingsForAll; // 0x20C
		::System::Boolean m_isInitDamageTextProjMatrix; // 0x228
		::System::Boolean m_WaterTessOn; // 0x229
		::System::Boolean m_UIBlurRendered; // 0x22A

		::System::Void _ctor(::System::String* profilerTag, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent>* renderPassEventConfig, ::UnityEngine::Rendering::RenderQueueRange renderQueueRange, ::UnityEngine::LayerMask layerMask, ::UnityEngine::Rendering::StencilState stencilState, ::System::Int32 stencilReference, ::UnityEngine::Rendering::Universal::Internal::WaterGenPass* waterGenPass)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent>*, ::UnityEngine::Rendering::RenderQueueRange, ::UnityEngine::LayerMask, ::UnityEngine::Rendering::StencilState, ::System::Int32, ::UnityEngine::Rendering::Universal::Internal::WaterGenPass*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWOPAQUEAFTERDEFERREDSHADINGPASS__CTOR_OFFSET))(this, profilerTag, renderPassEventConfig, renderQueueRange, layerMask, stencilState, stencilReference, waterGenPass);
		}

		::System::Void Setup(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* globalSetting)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWOPAQUEAFTERDEFERREDSHADINGPASS_SETUP_OFFSET))(this, globalSetting);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWOPAQUEAFTERDEFERREDSHADINGPASS_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}

		::System::Void DrawInterior(::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData, ::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::ScriptableRenderContext& context, ::System::Boolean RTXPathTracerEnabled)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::ScriptableRenderContext&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWOPAQUEAFTERDEFERREDSHADINGPASS_DRAWINTERIOR_OFFSET))(this, renderingData, postCullRenderingData, cmd, context, RTXPathTracerEnabled);
		}

		::System::Void DrawFurObjects(::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::ScriptableRenderContext& context, ::System::Boolean RTXPathTracerEnabled)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::ScriptableRenderContext&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWOPAQUEAFTERDEFERREDSHADINGPASS_DRAWFUROBJECTS_OFFSET))(this, renderingData, cmd, context, RTXPathTracerEnabled);
		}
	};
}
