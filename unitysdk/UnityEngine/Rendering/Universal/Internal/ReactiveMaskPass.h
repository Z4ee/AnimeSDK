#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderPassEvent.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ScriptableRenderPass.h"
#include "unitysdk/UnityEngine/Rendering/FilteringSettings.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"
#include "unitysdk/UnityEngine/Rendering/ShaderTagId.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::NAPRenderPipeline0 { class ProfilingSampler; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_REACTIVEMASKPASS_CONFIGURE_OFFSET UNITYSDK_OFFSET(0x1BC25530)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_REACTIVEMASKPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1BC258C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_REACTIVEMASKPASS_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x1BC25D90)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_REACTIVEMASKPASS_SETUP_OFFSET UNITYSDK_OFFSET(0x1BC254B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_REACTIVEMASKPASS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BC25EA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_REACTIVEMASKPASS__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC25290)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_REACTIVEMASKPASS___BASE_CONFIGURE_OFFSET UNITYSDK_OFFSET(0x1BC25EE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_REACTIVEMASKPASS___BASE_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x1BC25EF0)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int ReactiveMaskPass_TypeDefinitionIndex = 27304;

	class ReactiveMaskPass : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
	{
	public:
		static ::System::Int32* StaticGet__ReactiveValue()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ReactiveMaskPass_TypeDefinitionIndex)->GetStaticField(0x6630);
		}
		::System::String* m_ProfilerTag; // 0xA8
		::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* m_ShaderTagIdList; // 0xB0
		::UnityEngine::NAPRenderPipeline0::ProfilingSampler* m_ProfilingSampler; // 0xB8
		::UnityEngine::Rendering::FilteringSettings m_FilteringSettings; // 0xC0
		::UnityEngine::Rendering::RenderTargetIdentifier m_DepthRT; // 0xE0

		::System::Void _ctor(::System::String* profilerTag, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent>* renderPassEventConfig)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_REACTIVEMASKPASS__CTOR_OFFSET))(this, profilerTag, renderPassEventConfig);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_REACTIVEMASKPASS__CCTOR_OFFSET))();
		}

		::System::Void Setup(::UnityEngine::Rendering::RenderTargetIdentifier depthRT)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetIdentifier))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_REACTIVEMASKPASS_SETUP_OFFSET))(this, depthRT);
		}

		::System::Void Configure(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::NAPRenderPipeline0::RenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_REACTIVEMASKPASS_CONFIGURE_OFFSET))(this, cmd, renderingData);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_REACTIVEMASKPASS_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}

		::System::Void FrameCleanup(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_REACTIVEMASKPASS_FRAMECLEANUP_OFFSET))(this, cmd);
		}

		::System::Void __base_Configure(::UnityEngine::Rendering::CommandBuffer* P0, ::UnityEngine::NAPRenderPipeline0::RenderingData& P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::NAPRenderPipeline0::RenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_REACTIVEMASKPASS___BASE_CONFIGURE_OFFSET))(this, P0, P1);
		}

		::System::Void __base_FrameCleanup(::UnityEngine::Rendering::CommandBuffer* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_REACTIVEMASKPASS___BASE_FRAMECLEANUP_OFFSET))(this, P0);
		}
	};
}
