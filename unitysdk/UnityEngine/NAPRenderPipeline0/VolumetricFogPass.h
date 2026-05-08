#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderPassEvent.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ScriptableRenderPass.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/VolumetricFogQuality.h"
#include "unitysdk/UnityEngine/RenderTextureDescriptor.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine::NAPRenderPipeline0 { class FXFog_NativeSRP; }
namespace UnityEngine::NAPRenderPipeline0 { class ProfilingSampler; }
namespace UnityEngine::NAPRenderPipeline0 { class VolumetricFogPass_HistoryBuffer; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMETRICFOGPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1B0C4A60)
#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMETRICFOGPASS_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x1B0C5410)
#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMETRICFOGPASS_SETLOCALRENDERTARGET_OFFSET UNITYSDK_OFFSET(0x1B0C3E00)
#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMETRICFOGPASS_SETUP_OFFSET UNITYSDK_OFFSET(0x1B0C49F0)
#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMETRICFOGPASS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0C3CE0)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int VolumetricFogPass_TypeDefinitionIndex = 5836;

	class VolumetricFogPass : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
	{
	public:
		::UnityEngine::NAPRenderPipeline0::ProfilingSampler* m_Sampler; // 0xA8
		::UnityEngine::Vector4 m_TexelSize; // 0xB0
		::System::Single m_BlurRadius; // 0xC0
		::System::Int32 m_ResolutionDownScale; // 0xC4
		::UnityEngine::Vector2 m_TargetResolution; // 0xC8
		::UnityEngine::NAPRenderPipeline0::VolumetricFogPass_HistoryBuffer* m_History; // 0xD0
		::System::Single globalFogIntensity; // 0xD8

		::System::Void _ctor(::UnityEngine::NAPRenderPipeline0::RenderPassEvent evt)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMETRICFOGPASS__CTOR_OFFSET))(this, evt);
		}

		::System::Void SetLocalRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Camera* camera, ::UnityEngine::RenderTextureDescriptor cameraTextureDescriptor, ::UnityEngine::NAPRenderPipeline0::VolumetricFogQuality quality)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Camera*, ::UnityEngine::RenderTextureDescriptor, ::UnityEngine::NAPRenderPipeline0::VolumetricFogQuality))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMETRICFOGPASS_SETLOCALRENDERTARGET_OFFSET))(this, cmd, camera, cameraTextureDescriptor, quality);
		}

		::System::Void Setup(::UnityEngine::NAPRenderPipeline0::FXFog_NativeSRP* fxFog)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::FXFog_NativeSRP*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMETRICFOGPASS_SETUP_OFFSET))(this, fxFog);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMETRICFOGPASS_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}

		::System::Void FrameCleanup(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMETRICFOGPASS_FRAMECLEANUP_OFFSET))(this, cmd);
		}
	};
}
