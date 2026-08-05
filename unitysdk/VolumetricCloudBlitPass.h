#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderPassEvent.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ScriptableRenderPass.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine::NAPRenderPipeline0 { class ProfilingSampler; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering::Universal { class VolumetricCloudConfig; }

#define VOLUMETRICCLOUDBLITPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1DE190D0)
#define VOLUMETRICCLOUDBLITPASS_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x1DE194A0)
#define VOLUMETRICCLOUDBLITPASS_SETUP_OFFSET UNITYSDK_OFFSET(0x1DE18FD0)
#define VOLUMETRICCLOUDBLITPASS__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE18EC0)
#define VOLUMETRICCLOUDBLITPASS___BASE_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x1DE194F0)

inline static constexpr unsigned int VolumetricCloudBlitPass_TypeDefinitionIndex = 27780;

class VolumetricCloudBlitPass : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
{
public:
	::UnityEngine::Material* cloudSampleMat; // 0xA8
	::UnityEngine::NAPRenderPipeline0::ProfilingSampler* m_Sampler; // 0xB0
	::UnityEngine::Rendering::Universal::VolumetricCloudConfig* m_CloudConfig; // 0xB8
	::System::Boolean m_NeedVolumetricMistBlit; // 0xC0
	::System::Boolean m_NeedVolumetricCloudBlit; // 0xC1

	::System::Void _ctor(::UnityEngine::NAPRenderPipeline0::RenderPassEvent evt, ::System::String* profilerTag)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent, ::System::String*))((::PBYTE)hIl2Cpp + VOLUMETRICCLOUDBLITPASS__CTOR_OFFSET))(this, evt, profilerTag);
	}

	::System::Boolean Setup(::UnityEngine::Rendering::Universal::VolumetricCloudConfig* cloudConfig)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rendering::Universal::VolumetricCloudConfig*))((::PBYTE)hIl2Cpp + VOLUMETRICCLOUDBLITPASS_SETUP_OFFSET))(this, cloudConfig);
	}

	::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + VOLUMETRICCLOUDBLITPASS_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
	}

	::System::Void FrameCleanup(::UnityEngine::Rendering::CommandBuffer* cmd)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + VOLUMETRICCLOUDBLITPASS_FRAMECLEANUP_OFFSET))(this, cmd);
	}

	::System::Void __base_FrameCleanup(::UnityEngine::Rendering::CommandBuffer* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + VOLUMETRICCLOUDBLITPASS___BASE_FRAMECLEANUP_OFFSET))(this, P0);
	}
};
