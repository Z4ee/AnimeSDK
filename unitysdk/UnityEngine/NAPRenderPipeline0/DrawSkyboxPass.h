#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/CameraData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/WeatherConfigDrawSkyParams.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_NAPRENDERPIPELINE0_DRAWSKYBOXPASS_DRAWSKYBOX_OFFSET UNITYSDK_OFFSET(0x1AAD6D10)
#define UNITYENGINE_NAPRENDERPIPELINE0_DRAWSKYBOXPASS_PREPARESKYPARAMS_OFFSET UNITYSDK_OFFSET(0x1AAD74B0)
#define UNITYENGINE_NAPRENDERPIPELINE0_DRAWSKYBOXPASS_PREPARESKYSHPARAMS_OFFSET UNITYSDK_OFFSET(0x1AAD7B50)
#define UNITYENGINE_NAPRENDERPIPELINE0_DRAWSKYBOXPASS__CTOR_OFFSET UNITYSDK_OFFSET(0x1AAD8150)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int DrawSkyboxPass_TypeDefinitionIndex = 5820;

	class DrawSkyboxPass : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_DRAWSKYBOXPASS__CTOR_OFFSET))(this);
		}

		static ::System::Void DrawSkyBox(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_DRAWSKYBOXPASS_DRAWSKYBOX_OFFSET))(context, renderingData);
		}

		static ::System::Void PrepareSkyParams(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::NAPRenderPipeline0::WeatherConfigDrawSkyParams& skyParam)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::NAPRenderPipeline0::WeatherConfigDrawSkyParams&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_DRAWSKYBOXPASS_PREPARESKYPARAMS_OFFSET))(cmd, skyParam);
		}

		static ::System::Void PrepareSkySHParams(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::NAPRenderPipeline0::CameraData& cameraData)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::NAPRenderPipeline0::CameraData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_DRAWSKYBOXPASS_PREPARESKYSHPARAMS_OFFSET))(cmd, cameraData);
		}
	};
}
