#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderPassEvent.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderTargetHandle.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ScriptableRenderPass.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"
#include "unitysdk/UnityEngine/Rendering/Universal/GraphicSettings_EDamageDecalQuality.h"

namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine::NAPRenderPipeline0 { class ProfilingSampler; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGEDECALLUTPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1C431E00)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGEDECALLUTPASS_SETUP_OFFSET UNITYSDK_OFFSET(0x1C42BAB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGEDECALLUTPASS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C41CA30)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int DamageDecalLUTPass_TypeDefinitionIndex = 26884;

	class DamageDecalLUTPass : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
	{
	public:
		::System::String* _DAMAGE_DECAL_QUALITY_HIGH; // 0xA8
		::System::String* m_ProfilerTag; // 0xB0
		::UnityEngine::NAPRenderPipeline0::ProfilingSampler* m_ProfilingSampler; // 0xB8
		::UnityEngine::Material* _decalLUTMaterial; // 0xC0
		::System::String* _DAMAGE_DECAL_QUALITY_MEDIUM; // 0xC8
		::System::Int32 _DecalProjectionNormal; // 0xD0
		::UnityEngine::NAPRenderPipeline0::RenderTargetHandle m_ActiveDepthAttachment; // 0xD4
		::UnityEngine::Rendering::Universal::GraphicSettings_EDamageDecalQuality m_quality; // 0xD8
		::System::Int32 _CellIndex; // 0xDC
		::System::Int32 _DecalMatrix; // 0xE0
		::System::Int32 cellSize; // 0xE4
		::UnityEngine::Rendering::RenderTargetIdentifier _dilationLUTIdentifier; // 0xE8
		::System::Int32 _CellSize; // 0x110
		::System::Int32 _DecalLUT; // 0x114
		::UnityEngine::NAPRenderPipeline0::RenderTargetHandle m_ActiveColorAttachment; // 0x118

		::System::Void _ctor(::UnityEngine::NAPRenderPipeline0::RenderPassEvent evt)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGEDECALLUTPASS__CTOR_OFFSET))(this, evt);
		}

		::System::Void Setup(::UnityEngine::NAPRenderPipeline0::RenderTargetHandle activeColorAttachment, ::UnityEngine::NAPRenderPipeline0::RenderTargetHandle activeDepthAttachment, ::UnityEngine::Rendering::Universal::GraphicSettings_EDamageDecalQuality quality)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RenderTargetHandle, ::UnityEngine::NAPRenderPipeline0::RenderTargetHandle, ::UnityEngine::Rendering::Universal::GraphicSettings_EDamageDecalQuality))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGEDECALLUTPASS_SETUP_OFFSET))(this, activeColorAttachment, activeDepthAttachment, quality);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGEDECALLUTPASS_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}
	};
}
