#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/CameraData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderPassEvent.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ScriptableRenderPass.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine::NAPRenderPipeline0 { class ProfilingSampler; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FRAMEESTIMATEINFOPASS_MANAGED_AFMESETFRAMEINFO_OFFSET UNITYSDK_OFFSET(0x1AD07690)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FRAMEESTIMATEINFOPASS_MANAGED_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1AD07770)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FRAMEESTIMATEINFOPASS_MANAGED_MFRCSETINPUTTEXTURES_OFFSET UNITYSDK_OFFSET(0x1AD07700)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FRAMEESTIMATEINFOPASS_MANAGED__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD07550)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int FrameEstimateInfoPass_Managed_TypeDefinitionIndex = 30501;

	class FrameEstimateInfoPass_Managed : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
	{
	public:
		::System::String* m_ProfilerTag; // 0xA8
		::UnityEngine::NAPRenderPipeline0::ProfilingSampler* m_ProfilingSampler; // 0xB0

		::System::Void _ctor(::System::String* profilerTag, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent>* renderPassEventsConfig)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FRAMEESTIMATEINFOPASS_MANAGED__CTOR_OFFSET))(this, profilerTag, renderPassEventsConfig);
		}

		static ::System::Void AfmeSetFrameInfo(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::NAPRenderPipeline0::CameraData cameraData)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::NAPRenderPipeline0::CameraData))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FRAMEESTIMATEINFOPASS_MANAGED_AFMESETFRAMEINFO_OFFSET))(context, cameraData);
		}

		static ::System::Void MfrcSetInputTextures(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::NAPRenderPipeline0::CameraData cameraData)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::NAPRenderPipeline0::CameraData))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FRAMEESTIMATEINFOPASS_MANAGED_MFRCSETINPUTTEXTURES_OFFSET))(context, cameraData);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FRAMEESTIMATEINFOPASS_MANAGED_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}
	};
}
