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
namespace UnityEngine { class Material; }
namespace UnityEngine { class Shader; }
namespace UnityEngine::NAPRenderPipeline0 { class ProfilingSampler; }

#define UNITYENGINE_RENDERING_UNIVERSAL_RTXAODEBUGBLITPASS_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B1A1670)
#define UNITYENGINE_RENDERING_UNIVERSAL_RTXAODEBUGBLITPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1B1A1790)
#define UNITYENGINE_RENDERING_UNIVERSAL_RTXAODEBUGBLITPASS_SETUP_OFFSET UNITYSDK_OFFSET(0x1B1A1620)
#define UNITYENGINE_RENDERING_UNIVERSAL_RTXAODEBUGBLITPASS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1A1310)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int RTXAODebugBlitPass_TypeDefinitionIndex = 26511;

	class RTXAODebugBlitPass : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
	{
	public:
		::UnityEngine::NAPRenderPipeline0::ProfilingSampler* m_profilingSampler; // 0xA8
		::UnityEngine::Material* m_debugBlitMaterial; // 0xB0
		::UnityEngine::NAPRenderPipeline0::RenderTargetHandle m_colorRTHandle; // 0xB8

		::System::Void _ctor(::System::String* profilerTag, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent>* renderPassEventConfig, ::UnityEngine::Shader* debugBlitShader)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent>*, ::UnityEngine::Shader*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RTXAODEBUGBLITPASS__CTOR_OFFSET))(this, profilerTag, renderPassEventConfig, debugBlitShader);
		}

		::System::Void Setup(::UnityEngine::NAPRenderPipeline0::RenderTargetHandle colorAttachment)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RenderTargetHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RTXAODEBUGBLITPASS_SETUP_OFFSET))(this, colorAttachment);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RTXAODEBUGBLITPASS_DISPOSE_OFFSET))(this);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RTXAODEBUGBLITPASS_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}
	};
}
