#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderPassEvent.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ScriptableRenderPass.h"
#include "unitysdk/UnityEngine/Rendering/FilteringSettings.h"
#include "unitysdk/UnityEngine/Rendering/RenderStateBlock.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"
#include "unitysdk/UnityEngine/Rendering/ShaderTagId.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::NAPRenderPipeline0 { class ProfilingSampler; }

#define UNITYENGINE_NAPRENDERPIPELINE0_DRAWOVERLAYPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1EB5F2D0)
#define UNITYENGINE_NAPRENDERPIPELINE0_DRAWOVERLAYPASS__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB5EEC0)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int DrawOverlayPass_TypeDefinitionIndex = 5832;

	class DrawOverlayPass : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
	{
	public:
		::UnityEngine::NAPRenderPipeline0::ProfilingSampler* m_ProfilingSampler; // 0xA8
		::UnityEngine::Rendering::FilteringSettings m_FilteringSettings; // 0xB0
		::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* m_TransparentShaderTagIdList; // 0xD0
		::UnityEngine::Rendering::RenderStateBlock m_RenderStateBlock; // 0xD8

		::System::Void _ctor(::System::String* profilerTag, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent>* renderPassEventConfig)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent>*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_DRAWOVERLAYPASS__CTOR_OFFSET))(this, profilerTag, renderPassEventConfig);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_DRAWOVERLAYPASS_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}
	};
}
