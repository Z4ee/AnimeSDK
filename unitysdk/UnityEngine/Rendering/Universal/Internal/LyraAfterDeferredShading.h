#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderPassEvent.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderTargetHandle.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ScriptableRenderPass.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAAFTERDEFERREDSHADING_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1C5B8820)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAAFTERDEFERREDSHADING_SETUP_OFFSET UNITYSDK_OFFSET(0x1C5B87C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAAFTERDEFERREDSHADING__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5B8730)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int LyraAfterDeferredShading_TypeDefinitionIndex = 26987;

	class LyraAfterDeferredShading : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
	{
	public:
		::UnityEngine::NAPRenderPipeline0::RenderTargetHandle m_ColorBuffer; // 0xA8
		::UnityEngine::NAPRenderPipeline0::RenderTargetHandle m_DepthBuffer; // 0xAC

		::System::Void _ctor(::System::String* profilerTag, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent>* renderPassEventConfig)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAAFTERDEFERREDSHADING__CTOR_OFFSET))(this, profilerTag, renderPassEventConfig);
		}

		::System::Void Setup(::UnityEngine::NAPRenderPipeline0::RenderTargetHandle colorBuffer, ::UnityEngine::NAPRenderPipeline0::RenderTargetHandle depthBuffer)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RenderTargetHandle, ::UnityEngine::NAPRenderPipeline0::RenderTargetHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAAFTERDEFERREDSHADING_SETUP_OFFSET))(this, colorBuffer, depthBuffer);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAAFTERDEFERREDSHADING_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}
	};
}
